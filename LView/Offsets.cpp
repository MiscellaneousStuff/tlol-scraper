#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT?
int Offsets::GameTime = 0x316FDE4; // 13.3?
int Offsets::ObjectManager = 0x18D9ACC; // 13.3?
int Offsets::LocalPlayer = 0x31767BC ; // 13.3?
int Offsets::UnderMouseObject = 0x24FB364; // 12.23
int Offsets::ViewProjMatrices = 0x319CF18; // 13.3?
int Offsets::Renderer = 0x31A28B8; // 13.3?

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x8; // 12.23
int Offsets::ObjTeam = 0x34; // 13.3?
int Offsets::ObjMissileName = 0x54; // 12.22
int Offsets::ObjNetworkID = 0xB4; // 13.3?
int Offsets::ObjPos = 0x1DC; // 13.3?
int Offsets::ObjMissileSpellCast = 0x250; // 12.22
int Offsets::ObjVisibility = 0x240; // 13.3?
int Offsets::ObjSpawnCount = 0x288; // 12.22
int Offsets::ObjSrcIndex = 0x294; // 12.22
int Offsets::ObjMana = 0x29C; // 13.3?
int Offsets::ObjMaxMana = 0x29C + 0x10; // 13.3?
int Offsets::ObjRecallState = 0xD90; // 12.22
int Offsets::ObjHealth = 0xE7C; // 13.3?
int Offsets::ObjMaxHealth = 0xE8C; // 13.3?
int Offsets::ObjAbilityHaste = 0x1690; // 12.22?
int Offsets::ObjLethality = 0x128C; // 12.12
int Offsets::ObjArmor = 0x1384; // 12.23
int Offsets::ObjBonusArmor = 0x1380; // 12.22
int Offsets::ObjMagicRes = 0x1384; // 12.22
int Offsets::ObjBonusMagicRes = 0x1388; // 12.22
int Offsets::ObjBaseAtk = 0x135C; // 13.3?
int Offsets::ObjBonusAtk = 0x12D4; // 13.3?
int Offsets::ObjMoveSpeed = 0x139C; // 12.23
int Offsets::ObjSpellBook = 0x29C8; // 13.3?
int Offsets::ObjTransformation = 0x3070; // 12.22
int Offsets::ObjName = 0x2DB4; // 13.3?
int Offsets::ObjLvl = 0x35A4; // 12.23
int Offsets::ObjExpiry = 0x298; // 12.23
int Offsets::ObjCrit = 0x1858; // 12.23
int Offsets::ObjCritMulti = 0x12B8; // 12.23
int Offsets::ObjAbilityPower = 0x1758; // 12.23
int Offsets::ObjAtkSpeedMulti = 0x1358; // 12.23
int Offsets::ObjAtkRange = 0x13A4; // 13.3?
int Offsets::ObjTargetable = 0xD04; // 13.3?
int Offsets::ObjInvulnerable = 0x3D4; // 13.3?
int Offsets::ObjIsMoving = 0x32E7; // 12.12
int Offsets::ObjDirection = 0x1BE0; // 12.22
int Offsets::ObjItemList = 0x35F0; // 12.23
int Offsets::ObjExperience = 0x359C; // 12.3?
int Offsets::ObjMagicPen = 0x118C; // 12.10
int Offsets::ObjMagicPenMulti = 0x118C + 0x8; // 12.10
int Offsets::ObjAdditionalApMulti = 0x1248; // 11.10
int Offsets::ObjManaRegen = 0x11E0; // 12.23
int Offsets::ObjHealthRegen = 0x1390; // 12.23
int Offsets::ObjCurrentGold = 0x1BBC; // 13.3?
int Offsets::ObjGoldTotal = 0x1BCC; // 13.3?

// UNKNOWN!
int Offsets::ItemListItem = 0xC; // 12.23
int Offsets::ItemInfo = 0x20; // 12.23
int Offsets::ItemInfoId = 0x68; // 12.23

int Offsets::RendererWidth = 0x8; // 13.3?
int Offsets::RendererHeight = 0xC; // 13.3?

// CORRECT
int Offsets::SpellSlotLevel = 0x1C; // 12.23
int Offsets::SpellSlotTime = 0x24; // 12.23
int Offsets::SpellSlotDamage = 0x54; // 12.23
int Offsets::SpellSlotSpellInfo = 0x120; // // 12.23
int Offsets::SpellInfoSpellData = 0x40; // 12.23
int Offsets::SpellDataSpellName = 0x6C; // 12.23
int Offsets::SpellDataMissileName = 0x6C; // 12.23

// CORRECT
int Offsets::ObjectMapCount = 0x2C; // 12.23
int Offsets::ObjectMapRoot = 0x28; // 12.23
int Offsets::ObjectMapNodeNetId = 0x10; // 12.23
int Offsets::ObjectMapNodeObject = 0x14; // 12.23

// UNKNOWN
int Offsets::MissileSpellInfo = 0x0260; // 12.23
int Offsets::MissileSrcIdx = 0x2C4; // 12.23
int Offsets::MissileDestIdx = 0x314; // 12.23
int Offsets::MissileStartPos = 0x2E0; // 12.23
int Offsets::MissileEndPos = 0x2EC; // 12.23

// Minimap
int Offsets::MinimapObject = 0x3143C88; // 12.23
int Offsets::MinimapObjectHud = 0x160; // 13.3?
int Offsets::MinimapHudPos = 0x3C; // 13.3?
int Offsets::MinimapHudSize = 0x44; // 13.3?

/*
#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT?
int Offsets::GameTime = 0x30DA23C; // 12.11
int Offsets::ObjectManager = 0x2491B40; // 12.11
int Offsets::LocalPlayer = 0x30E11FC; // 12.11
int Offsets::UnderMouseObject = 0x2491D34; // 12.11
int Offsets::ViewProjMatrices = 0x310E5F0; // 12.11
int Offsets::Renderer = 0x311147C; // 12.11

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x8; // 12.11
int Offsets::ObjTeam = 0x34; // 12.11
int Offsets::ObjMissileName = 0x54; // 12.11?
int Offsets::ObjNetworkID = 0xB4; // 12.11
int Offsets::ObjPos = 0x1DC; // 12.11?
int Offsets::ObjMissileSpellCast = 0x250; // 12.11
int Offsets::ObjVisibility = 0x274; // 12.11
int Offsets::ObjSpawnCount = 0x288; // 12.11
int Offsets::ObjSrcIndex = 0x294; // 12.11
int Offsets::ObjMana = 0x29C; // 12.11
int Offsets::ObjMaxMana = 0x29C + 0x10; // 12.11
int Offsets::ObjRecallState = 0xD90; // 12.11
int Offsets::ObjHealth = 0xD9C; // 12.11
int Offsets::ObjMaxHealth = 0xD9C + 0x10; // 12.11
int Offsets::ObjAbilityHaste = 0x10BC; // 12.10
int Offsets::ObjLethality = 0x11A8; // 12.11
int Offsets::ObjArmor = ObjCrit + 0x4; // 12.11
int Offsets::ObjBonusArmor = ObjArmor + 0x04; // 12.11
int Offsets::ObjMagicRes = 0x129C; // 12.11
int Offsets::ObjBonusMagicRes = 0x129C + 0x04; // 12.11
int Offsets::ObjBaseAtk = 0x126C; // 12.11
int Offsets::ObjBonusAtk = 0x11E4; // 12.11
int Offsets::ObjMoveSpeed = 0x12AC; // 12.11
int Offsets::ObjSpellBook = 0x26d8; // 12.10
int Offsets::ObjTransformation = 0x3040; // 12.11
int Offsets::ObjName = 0x2AC4; // 12.11
int Offsets::ObjLvl = 0x32AC; // 12.11?
int Offsets::ObjExpiry = 0x298; // 12.10
int Offsets::ObjCrit = 0x12C8; // 12.11
int Offsets::ObjCritMulti = 0x12B8; // 12.11
int Offsets::ObjAbilityPower = 0x1750; // 12.11
int Offsets::ObjAtkSpeedMulti = 0x1268; // 12.11
int Offsets::ObjAtkRange = 0x12B4; // 12.11
int Offsets::ObjTargetable = 0xD04; // 12.11
int Offsets::ObjInvulnerable = 0x3D4; // 12.11
int Offsets::ObjIsMoving = 0x32E7; // 12.11
int Offsets::ObjDirection = 0x1AD0; // 12.10
int Offsets::ObjItemList = 0x33E8; // 12.11
int Offsets::ObjExperience = 0x329C; // 12.11
int Offsets::ObjMagicPen = 0x118C; // 12.10
int Offsets::ObjMagicPenMulti = 0x118C + 0x8; // 12.10
int Offsets::ObjAdditionalApMulti = 0x1248; // 11.10
int Offsets::ObjManaRegen = 0x1150; // 12.11
int Offsets::ObjHealthRegen = 0x12F8; // 12.11
int Offsets::ObjCurrentGold = 0x1A78; // 12.11
int Offsets::ObjGoldTotal = 0x1A88; // 12.11

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

// CORRECT
int Offsets::SpellSlotLevel = 0x1C; // 12.11?
int Offsets::SpellSlotTime = 0x24; // 12.11?
int Offsets::SpellSlotDamage = 0x94; // 12.11?
int Offsets::SpellSlotSpellInfo = 0x120; // // 12.11?
int Offsets::SpellInfoSpellData = 0x40; // 12.11?
int Offsets::SpellDataSpellName = 0x6C; // 12.11?
int Offsets::SpellDataMissileName = 0x6C; // 12.11?

// CORRECT
int Offsets::ObjectMapCount = 0x2C; // 12.11
int Offsets::ObjectMapRoot = 0x28; // 12.11
int Offsets::ObjectMapNodeNetId = 0x10; // 12.11
int Offsets::ObjectMapNodeObject = 0x14; // 12.11

// UNKNOWN
int Offsets::MissileSpellInfo = 0x0260; // 12.10
int Offsets::MissileSrcIdx = 0x2DC; // 12.11?
int Offsets::MissileDestIdx = 0x330; // 12.11?
int Offsets::MissileStartPos = 0x02DC; // 12.10
int Offsets::MissileEndPos = 0x02E8; // 12.10

// Minimap
int Offsets::MinimapObject = 0x30DA27C; // 12.11
int Offsets::MinimapObjectHud = 0x120; // 12.11
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/