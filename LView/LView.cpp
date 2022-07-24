#define BOOST_DEBUG_PYTHON
#define USE_IMPORT_EXPORT
#define USE_WINDOWS_DLL_SEMANTICS
#define STB_IMAGE_IMPLEMENTATION

#include "PyStructs.h"

#include <iostream>
#include "windows.h"
#include "Utils.h"
#include "Structs.h"
#include "LeagueMemoryReader.h"
#include "Offsets.h"
#include "AntiCrack.h"
#include "MapObject.h"
#include "GameData.h"

#include <chrono>
#include <map>
#include <list>
#include <conio.h>

// NOTE: This is required due to high coupling between script UI and script execution
// imgui script execution decoupling
#include "ConfigSet.h"
#include "ScriptManager.h"
#include "PyGame.h"

// Extra
#include <fstream>
#include <boost/json.hpp>

using namespace std::chrono;
using namespace boost::json;

void MainLoop(LeagueMemoryReader& reader);

std::string outpath;
float endtime;
int replay_mult;
std::string replay_cmd;

int main(int argc, char *argv[])
{
	outpath		= std::string(argv[1]);
	endtime		= std::stof(argv[2]);
	replay_mult = std::stoi(argv[3]);
	replay_cmd  = std::string(argv[4]);

	printf(
		"	:::    :::     ::: ::::::::::: :::::::::: :::       ::: \n"
		"	:+:    :+:     :+:     :+:     :+:        :+:       :+: \n"
		"	+:+    +:+     +:+     +:+     +:+        +:+       +:+ \n"
		"	+#+    +#+     +:+     +#+     +#++:++#   +#+  +:+  +#+ \n"
		"	+#+     +#+   +#+      +#+     +#+        +#+ +#+#+ +#+ \n"
		"	#+#      #+#+#+#       #+#     #+#         #+#+# #+#+#  \n"
		"	########## ###     ########### ##########   ###   ###   \n\n"
	);

	LeagueMemoryReader reader = LeagueMemoryReader();

	try {
		printf("[+] Initializing PyModule\n");
		PyImport_AppendInittab("lview", &PyInit_lview);
		Py_Initialize();

		printf("[+] Loading static map data\n\n");
		MapObject::Get(MapType::SUMMONERS_RIFT)->Load("data/height_map_sru.bin");
		MapObject::Get(MapType::HOWLING_ABYSS)->Load("data/height_map_ha.bin");

		printf("[+] Loading unit data\n");
		std::string dataPath("data");
		GameData::Load(dataPath);

		//MainLoop(overlay, reader);
		MainLoop(reader);

		Py_Finalize();
	}
	catch (std::runtime_error exception) {
		std::cout << exception.what() << std::endl;
	}

	printf("Press any key to exit...");
	getch();
}

boost::json::object e_pos(Vector3 pos) {
	boost::json::object obj = boost::json::object({
		{"x", pos.x},
		{"y", pos.y},
		{"z", pos.z}
	});
	return obj;
}

boost::json::object e_obj(std::shared_ptr<GameObject> o)
{
	boost::json::object obj = boost::json::object({
		// Base
		{"net_id", o->networkId},
		{"obj_id", o->objectIndex},
		{"name", o->name},
		{"health", o->health},
		{"max_health", o->maxHealth},
		{"team", o->team},
		{"armour", o->armour},
		{"mr", o->magicResist},
		{"movement_speed", o->movementSpeed},
		{"is_alive", o->isAlive},
		{"position", e_pos(o->position)},

		// Additional
		{"is_moving", o->isMoving},
		{"targetable", o->targetable},
		{"invulnerable", o->invulnerable},
		{"recallState", o->recallState},
	});

	return obj;
}

boost::json::object e_missile(std::shared_ptr<GameObject> o) {
	boost::json::object obj = e_obj(o);
	obj["src_id"] = o->srcIndex;
	obj["dest_id"] = o->destIndex;
	obj["start_pos"] = e_pos(o->startPos);
	obj["end_pos"] = e_pos(o->endPos);
	return obj;
}

boost::json::object e_spell(float gameTime, Spell s) {
	boost::json::object obj = boost::json::object({
		{"name", s.name},
		{"slot", (int) s.slot},
		{"summoner_spell_type", (int) s.summonerSpellType},
		{"level", s.level},
		{"cd", s.GetRemainingCooldown(gameTime)}
	});
	return obj;
}

boost::json::object e_champ(float gameTime, std::shared_ptr<GameObject> o) {
	boost::json::object obj = e_obj(o);
	obj["Q"] = e_spell(gameTime, o->Q);
	obj["W"] = e_spell(gameTime, o->W);
	obj["E"] = e_spell(gameTime, o->E);
	obj["R"] = e_spell(gameTime, o->R);
	obj["D"] = e_spell(gameTime, o->D);
	obj["F"] = e_spell(gameTime, o->F);

	obj["crit"] = o->crit;
	obj["crit_multi"] = o->critMulti;
	obj["level"] = o->level;
	obj["mana"] = o->mana;
	obj["max_mana"] = o->maxMana;
	obj["ability_haste"] = o->abilityHaste;
	obj["ap"] = o->abilityPower;
	obj["lethality"] = o->lethality;
	obj["experience"] = o->experience;
	obj["mana_regen"] = o->manaRegen;
	obj["health_regen"] = o->healthRegen;
	obj["attack_range"] = o->attackRange;

	obj["current_gold"] = o->currentGold;
	obj["total_gold"] = o->totalGold;

	/*
	std::vector<boost::json::object> items;
	for (auto &item : o->itemSlots) {
		int itemId = item.GetId();
		items.push_back(itemId);
	}
	obj["items"] = { {"item_ids", items} };
	*/

	return obj;
}

boost::json::object extraction(MemSnapshot& ms)
{	
	// Champ
	std::vector<boost::json::object> champs;
	for (std::shared_ptr<GameObject> o : ms.champions)
		champs.push_back(e_champ(ms.gameTime, o));
	std::cout << "Champ Count: " << ms.champions.size() << "\n";

	// Minions
	std::vector<boost::json::object> minions;
	for (std::shared_ptr<GameObject> o : ms.minions)
		minions.push_back(e_obj(o));
	std::cout << "Minions Count: " << ms.minions.size() << "\n";

	// Turrets
	std::vector<boost::json::object> turrets;
	for (std::shared_ptr<GameObject> o : ms.turrets)
		turrets.push_back(e_obj(o));
	std::cout << "Turrets Count: " << ms.turrets.size() << "\n";

	// Jungle
	std::vector<boost::json::object> jungle;
	for (std::shared_ptr<GameObject> o : ms.jungle)
		jungle.push_back(e_obj(o));
	std::cout << "Jungle Count: " << ms.jungle.size() << "\n";

	// Missiles
	std::vector<boost::json::object> missiles;
	for (std::shared_ptr<GameObject> o : ms.missiles)
		missiles.push_back(e_missile(o));
	std::cout << "Missiles Count: " << ms.missiles.size() << "\n";

	// Others
	std::vector<boost::json::object> others;
	for (std::shared_ptr<GameObject> o : ms.others)
		others.push_back(e_obj(o));
	std::cout << "Others Count: " << ms.others.size() << "\n";

	// Observation
	boost::json::object obj = boost::json::object({
		{"time", ms.gameTime},
		{"champs", champs},
		{"minions", minions},
		{"turrets", turrets},
		{"jungle", jungle},
		{"missiles", missiles},
		{"others", others},
	});

	// Return obs
	return obj;
}

void MainLoop(LeagueMemoryReader& reader)
{
	MemSnapshot memSnapshot;
	bool rehook = true;
	bool firstIter = true;
	ScriptManager scriptManager;
	ConfigSet& configs = *(ConfigSet::Get());

	// Init JSON file
	std::ofstream replay_file;
	replay_file.open(outpath);
	replay_file << "[\n";
	bool first_record = true;
	bool record_set = false; // Set seek and replay speed

	// Init LView
	printf("[i] Waiting for league process...\n");
	while (true) {

		bool isLeagueWindowActive = reader.IsLeagueWindowActive();

		try {

			// Try to find the league process and get its information necessary for reading
			if (rehook) {
				reader.HookToProcess();
				rehook = false;
				firstIter = true;
				memSnapshot = MemSnapshot();
				printf("[i] Found league process. The UI will appear when the game stars.\n");
			}
			else {

				if (!reader.IsHookedToProcess()) {
					rehook = true;
					printf("[i] League process is dead.\n");
					printf("[i] Waiting for league process...\n");
				}
				reader.MakeSnapshot(memSnapshot);

				// If the game started
				if (memSnapshot.gameTime > 2.f) {

					// Tell the UI that a new game has started
					if (firstIter) {
						//std::string PLACEHOLDER_VALUE = std::string("ELLO_COUSIN");
						//scriptManager.LoadAll(configs.GetStr("scriptsFolder", "."), memSnapshot.player->name); // Set this to invalid name to force load scripts// memSnapshot.player->name);
						firstIter = false;
						// std::string cmd = std::string("\"python C:\\Users\\win8t\\OneDrive\\Desktop\\projects\\tlol\\set_replay.py " + std::to_string(replay_mult) + "\"");
						std::string cmd = std::string("\"" + replay_cmd + " " + std::to_string(replay_mult) + "\"");
						std::cout << cmd << "\n";
						system(cmd.c_str());
					}

					// if (memSnapshot.champions.size() > 0) {
					/*
					PyGame state = PyGame::ConstructFromMemSnapshot(memSnapshot);
					for (auto& script : scriptManager.activeScripts) {
						if (script->enabled && script->loadError.empty() && script->execError.empty()) {
							script->ExecUpdate(state);
						}
						else if (!script->loadError.empty()) {
							std::cout << "Script Error: " << script->loadError;
						}
					}
					*/

					float game_time = memSnapshot.gameTime;

					if ((int) game_time < (int) endtime) {
						std::cout << game_time << "\n";
						if (!first_record) {
							replay_file << ",\n" << extraction(memSnapshot);
						}
						else {
							replay_file << extraction(memSnapshot);
							first_record = false;
						}
					} else {
						// Save file
						replay_file << "]";
						std::cout << "Exiting scraper...\n";
						replay_file.close();

						// Exit
						exit(0);
					}
				}
			}
		}
		catch (WinApiException exception) {
			// This should trigger only when we don't find the league process.
			rehook = true;
		}
		catch (std::runtime_error exception) {
			printf("[!] Unexpected error occured: \n [!] %s \n", exception.what());
			break;
		}
	}
}