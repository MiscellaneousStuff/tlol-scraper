#pragma once
#include "ConfigSet.h"

/// Defines offsets for reading structs from league of legends memory
class Offsets {
	
public:
	Offsets();

	static int GameTime;

	static int ObjIndex;
	static int ObjTeam;
	static int ObjMissileName; // Additional
	static int ObjNetworkID;
	static int ObjPos;
	static int ObjMissileSpellCast; // Additional
	static int ObjVisibility;
	static int ObjSpawnCount;
	static int ObjHealth;
	static int ObjMaxHealth;
	static int ObjAbilityHaste; // Additional
	static int ObjLethality; // Additional
	static int ObjMana;
	static int ObjMaxMana; // Additional
	static int ObjRecallState; // Additional
	static int ObjArmor;
	static int ObjBonusArmor; // Additional
	static int ObjMagicRes;
	static int ObjBonusMagicRes; // Additional
	static int ObjBaseAtk;
	static int ObjBonusAtk;
	static int ObjMoveSpeed;
	static int ObjSpellBook;
	static int ObjTransformation; // Additional
	static int ObjName;
	static int ObjLvl;
	static int ObjExpiry;
	static int ObjCrit;
	static int ObjCritMulti;
	static int ObjAbilityPower;
	static int ObjAtkSpeedMulti;
	static int ObjAtkRange; // Additional
	static int ObjTargetable; // Additional
	static int ObjInvulnerable; // Additional
	static int ObjIsMoving; // Additional
	static int ObjIsDashing; // Additional
	static int ObjDirection; // Additional
	static int ObjItemList;
	static int ObjExperience; // Additional
	static int ObjMagicPen; // Additional
	static int ObjMagicPenMulti; // Additional
	static int ObjAdditionalApMulti; // Additional // 11.20
	static int ObjManaRegen; // Additional
	static int ObjHealthRegen; // Additional
	static int ObjCurrentGold;
	static int ObjGoldTotal;
	static int ObjSrcIndex;

	static int ItemListItem;
	static int ItemInfo;
	static int ItemInfoId;

	static int CurrentDashSpeed; // Additional
	static int IsDashing; // Additional
	static int DashPos; // Additional
	static int IsMoving; // Additional
	static int NavBegin; // Additional
	static int NavEnd; // Additional

	static int ViewProjMatrices;
	static int Renderer;
	static int RendererWidth;
	static int RendererHeight;

	static int SpellSlotLevel;
	static int SpellSlotTime;
	static int SpellSlotCharges; // Additional
	static int SpellSlotTimeCharge; // Additional
	static int SpellSlotDamage;
	static int SpellSlotSpellInfo;
	static int SpellInfoSpellData;
	static int SpellDataSpellName;
	static int SpellDataMissileName;
	static int SpellSlotSmiteTimer; // Additional
	static int SpellSlotSmiteCharges; // Additional

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