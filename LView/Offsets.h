#pragma once
#include "ConfigSet.h"

/// Defines offsets for reading structs from league of legends memory
class Offsets {
	
public:
	Offsets();

	static int GameTime;

	static int ObjIndex;
	static int ObjTeam;
	static int ObjNetworkID;
	static int ObjPos;
	static int ObjVisibility;
	static int ObjSpawnCount;
	static int ObjHealth;
	static int ObjMaxHealth;
	static int ObjMana;
	static int ObjArmor;
	static int ObjMagicRes;
	static int ObjBaseAtk;
	static int ObjBonusAtk;
	static int ObjMoveSpeed;
	static int ObjSpellBook;
	static int ObjName;
	static int ObjLvl;
	static int ObjExpiry;
	static int ObjCrit;
	static int ObjCritMulti;
	static int ObjAbilityPower;
	static int ObjAtkSpeedMulti;
	static int ObjItemList;
	static int ObjSrcIndex;

	static int ObjMissileName;
	static int ObjMissileSpellCast;
	static int ObjMaxMana;
	static int ObjRecallState;
	static int ObjAbilityHaste;
	static int ObjLethality;
	static int ObjBonusArmor;
	static int ObjBonusMagicRes;
	static int ObjTransformation;
	static int ObjAtkRange;
	static int ObjExperience;
	static int ObjMagicPen;
	static int ObjMagicPenMulti;
	static int ObjAdditionalApMulti;
	static int ObjManaRegen;
	static int ObjHealthRegen;
	static int ObjCurrentGold;
	static int ObjGoldTotal;
	static int ObjTargetable;
	static int ObjInvulnerable;
	static int ObjIsMoving;
	static int ObjDirection;

	static int ItemListItem;
	static int ItemInfo;
	static int ItemInfoId;

	static int ViewProjMatrices;
	static int Renderer;
	static int RendererWidth;
	static int RendererHeight;

	static int SpellSlotLevel;
	static int SpellSlotTime;
	static int SpellSlotDamage;
	static int SpellSlotSpellInfo;
	static int SpellInfoSpellData;
	static int SpellDataSpellName;
	static int SpellDataMissileName;

	static int ObjectManager;
	static int LocalPlayer;
	static int UnderMouseObject;

	static int ObjectMapCount;
	static int ObjectMapRoot;
	static int ObjectMapNodeNetId;
	static int ObjectMapNodeObject;

	static int MissileSpellInfo;
	static int MissileSrcIdx;
	static int MissileDestIdx;
	static int MissileStartPos;
	static int MissileEndPos;

	static int MinimapObject;
	static int MinimapObjectHud;
	static int MinimapHudPos;
	static int MinimapHudSize;
};