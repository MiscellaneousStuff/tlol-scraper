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

/*
#include "Offsets.h"

Offsets::Offsets() {};

// ?
int Offsets::GameTime = 0x31023CC; // 12.6
int Offsets::ObjectManager = 0x24B9BB0; // 12.6
int Offsets::LocalPlayer = 0x310B314; // 12.6
int Offsets::UnderMouseObject = 0x30FED10; // 12.6
int Offsets::ViewProjMatrices = 0x3135818; // 12.6
int Offsets::Renderer = 0x3138718; // 12.6

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x20; // 12.6
int Offsets::ObjTeam = 0x4C; // 12.6
int Offsets::ObjMissileName = 0x6C; // 12.5
int Offsets::ObjNetworkID = 0xCC; // 12.6
int Offsets::ObjPos = 0x1F4; // 12.6
int Offsets::ObjMissileSpellCast = 0x250; // 12.5
int Offsets::ObjVisibility = 0x28C; // 12.6
int Offsets::ObjSpawnCount = 0x2A0; // 12.6
int Offsets::ObjSrcIndex = 0x02AC; // 12.6?
int Offsets::ObjMana = 0x2B4; // 12.6?
int Offsets::ObjMaxMana = 0x2B4 + 0x10; // 12.6?
int Offsets::ObjRecallState = 0xD78; // 12.6?
int Offsets::ObjHealth = 0xDB4; // 12.6
int Offsets::ObjMaxHealth = 0xDB4 + 0x10; // 12.6
int Offsets::ObjAbilityHaste = 0x110C; // 12.6?
int Offsets::ObjLethality = 0x10F4; // 12.6?
int Offsets::ObjArmor = 0x12E4; // 12.6
int Offsets::ObjBonusArmor = 0x12E4 + 0x04; // 12.6
int Offsets::ObjMagicRes = 0x12EC; // 12.6
int Offsets::ObjBonusMagicRes = 0x12EC + 0x04; // 12.6
int Offsets::ObjBaseAtk = 0x12BC; // 12.6
int Offsets::ObjBonusAtk = 0x1234; // 12.6
int Offsets::ObjMoveSpeed = 0x12FC; // 12.6
int Offsets::ObjSpellBook = 0x27F8; // 12.6
int Offsets::ObjTransformation = 0x3040; // Wrong
int Offsets::ObjName = 0x2BE4; // 12.6
int Offsets::ObjLvl = 0x3394; // 12.6
int Offsets::ObjExpiry = 0x298; // ?
int Offsets::ObjCrit = 0x12E0; // 12.5?
int Offsets::ObjCritMulti = 0x12D0; // 12.5?
int Offsets::ObjAbilityPower = 0x1244; // 12.5?
int Offsets::ObjAtkSpeedMulti = 0x12B8; // 12.5?
int Offsets::ObjAtkRange = 0x1304; // 12.6
int Offsets::ObjTargetable = 0xD1C; // 12.5?
int Offsets::ObjInvulnerable = 0x3EC; // 12.5?
int Offsets::ObjIsMoving = 0x3638; // 12.5?
int Offsets::ObjDirection = 0x1BD8; // 12.6?
int Offsets::ObjItemList = 0x3478; // 12.5?
int Offsets::ObjExperience = 0x3394; // 12.6
int Offsets::ObjMagicPen = 0x11DC; // Unknown
int Offsets::ObjMagicPenMulti = 0x11E4; // Unknown
int Offsets::ObjAdditionalApMulti = 0x1248; // 11.20
int Offsets::ObjManaRegen = 0x1150; // 12.2?
int Offsets::ObjHealthRegen = 0x12F8; // 12.4
int Offsets::ObjCurrentGold = 0x1B98; // 12.6
int Offsets::ObjGoldTotal = 0x1BA8; // 12.6

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

// CORRECT
int Offsets::SpellSlotLevel = 0x20; // 12.6
int Offsets::SpellSlotTime = 0x28; // 12.6
int Offsets::SpellSlotDamage = 0xA0; // 12.6
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.6
int Offsets::SpellInfoSpellData = 0x44; // 12.6
int Offsets::SpellDataSpellName = 0x78; // 12.6 // 0x6C; // 12.5
int Offsets::SpellDataMissileName = 0x78; // 12.6 // 0x6C; // 12.6

// CORRECT
int Offsets::ObjectMapCount = 0x2C; // 12.6
int Offsets::ObjectMapRoot = 0x28; // 12.6
int Offsets::ObjectMapNodeNetId = 0x10; // 12.6
int Offsets::ObjectMapNodeObject = 0x14; // 12.6

// ?
int Offsets::MissileSpellInfo = 0x278; // 12.6?
int Offsets::MissileSrcIdx = 0x2DC; // 12.6?
int Offsets::MissileDestIdx = 0x334; // 12.6?
int Offsets::MissileStartPos = 0x2F4; // 12.6?
int Offsets::MissileEndPos = 0x300; // 12.6?

// Minimap
int Offsets::MinimapObject = 0x310240C; // 12.6
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT!
int Offsets::GameTime = 0x310DF84; // 12.5
int Offsets::ObjectManager = 0x1879830; // 12.5
int Offsets::LocalPlayer = 0x31168D4; // 12.5
int Offsets::UnderMouseObject = 0x310A9D8; // 12.5
int Offsets::ViewProjMatrices = 0x3140F40; // 12.5
int Offsets::Renderer = 0x3143DE0; // 12.5

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x20; // 12.5
int Offsets::ObjTeam = 0x4C; // 12.5
int Offsets::ObjMissileName = 0x6C; // 12.5
int Offsets::ObjNetworkID = 0xCC; // 12.5
int Offsets::ObjPos = 0x1F4; // 12.5
int Offsets::ObjMissileSpellCast = 0x250; // 12.5
int Offsets::ObjVisibility = 0x28C; // 12.5
int Offsets::ObjSpawnCount = 0x2A0; // 12.5
int Offsets::ObjSrcIndex = 0x02AC; // 12.5
int Offsets::ObjMana = 0x2B4; // 12.5
int Offsets::ObjMaxMana = 0x2B4 + 0x10; // 12.5
int Offsets::ObjRecallState = 0xD78; // 12.5
int Offsets::ObjHealth = 0xDB4; // 12.5
int Offsets::ObjMaxHealth = 0xDB4 + 0x10; // 12.5
int Offsets::ObjAbilityHaste = 0x110C; // 12.5
int Offsets::ObjLethality = 0x10F4; // 12.5
int Offsets::ObjArmor = 0x12E4; // 12.5
int Offsets::ObjBonusArmor = 0x12E4 + 0x04; // 12.5
int Offsets::ObjMagicRes = 0x12EC; // 12.5
int Offsets::ObjBonusMagicRes = 0x12EC + 0x04; // 12.5
int Offsets::ObjBaseAtk = 0x12BC; // 12.5
int Offsets::ObjBonusAtk = 0x1234; // 12.5
int Offsets::ObjMoveSpeed = 0x12FC; // 12.5
int Offsets::ObjSpellBook = 0x27F8; // 12.5
int Offsets::ObjTransformation = 0x3040; // Wrong
int Offsets::ObjName = 0x2BE4; // 12.5
int Offsets::ObjLvl = 0x3394; // 12.5
int Offsets::ObjExpiry = 0x298; // Unknown
int Offsets::ObjCrit = 0x12E0; // 12.5?
int Offsets::ObjCritMulti = 0x12D0; // 12.5?
int Offsets::ObjAbilityPower = 0x1244; // 12.5?
int Offsets::ObjAtkSpeedMulti = 0x12B8; // 12.5?
int Offsets::ObjAtkRange = 0x1304; // 12.5
int Offsets::ObjTargetable = 0xD1C; // 12.5?
int Offsets::ObjInvulnerable = 0x3EC; // 12.5?
int Offsets::ObjIsMoving = 0x3638; // 12.5?
int Offsets::ObjDirection = 0x1BD8; // 12.5?
int Offsets::ObjItemList = 0x3478; // 12.5?
int Offsets::ObjExperience = 0x3394; // 12.5
int Offsets::ObjMagicPen = 0x11DC; // Unknown
int Offsets::ObjMagicPenMulti = 0x11E4; // Unknown
int Offsets::ObjAdditionalApMulti = 0x1248; // 11.20
int Offsets::ObjManaRegen = 0x1150; // 12.2?
int Offsets::ObjHealthRegen = 0x12F8; // 12.4
int Offsets::ObjCurrentGold = 0x1B98; // 12.5
int Offsets::ObjGoldTotal = 0x1BA8; // 12.5

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

// MOSTLY CORRECT!
int Offsets::SpellSlotLevel = 0x20; // 12.5
int Offsets::SpellSlotTime = 0x28; // 12.5
int Offsets::SpellSlotDamage = 0xA0; // 12.5
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.5
int Offsets::SpellInfoSpellData = 0x44; // 12.5
int Offsets::SpellDataSpellName = 0x6C; // 12.5
int Offsets::SpellDataMissileName = 0x6C; // 12.5

// CORRECT
int Offsets::ObjectMapCount = 0x2C; // 12.5
int Offsets::ObjectMapRoot = 0x28; // 12.5
int Offsets::ObjectMapNodeNetId = 0x10; // 12.5
int Offsets::ObjectMapNodeObject = 0x14; // 12.5

// CORRECT!
int Offsets::MissileSpellInfo = 0x278; // 12.5
int Offsets::MissileSrcIdx = 0x2DC; // 12.5
int Offsets::MissileDestIdx = 0x334; // 12.5
int Offsets::MissileStartPos = 0x2F4; // 12.5
int Offsets::MissileEndPos = 0x300; // 12.5

// Minimap
int Offsets::MinimapObject = 0x310F288; // 12.5
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
// v12.4
#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT!
int Offsets::GameTime = 0x30F07C4; // 12.4
int Offsets::ObjectManager = 0x185C0C8; // 12.4
int Offsets::LocalPlayer = 0x30F9734; // 12.4
int Offsets::UnderMouseObject = 0x30EB740; // 12.4
int Offsets::ViewProjMatrices = 0x3122BD0; // 12.4
int Offsets::Renderer = 0x3125A70; // 12.4

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x20; // 12.4
int Offsets::ObjTeam = 0x4C; // 12.4
int Offsets::ObjMissileName = 0x6C; // 12.4
int Offsets::ObjNetworkID = 0xCC; // 12.4
int Offsets::ObjPos = 0x1F4; // 12.4
int Offsets::ObjMissileSpellCast = 0x250; // 12.3
int Offsets::ObjVisibility = 0x00; // 12.4? // 0x28C; // 12.3
int Offsets::ObjSpawnCount = 0x2A0; // 12.4
int Offsets::ObjSrcIndex = 0x02AC; // 12.4
int Offsets::ObjMana = 0x2B4; // 12.4
int Offsets::ObjMaxMana = 0x2B4 + 0x10; // 12.4
int Offsets::ObjRecallState = 0xD78; // 12.4
int Offsets::ObjHealth = 0xDB4; // 12.4
int Offsets::ObjMaxHealth = 0xDB4 + 0x10; // 12.4
int Offsets::ObjAbilityHaste = 0x110C; // 12.4
int Offsets::ObjLethality = 0x10F4; // 12.4
int Offsets::ObjArmor = 0x12E4; // 12.4
int Offsets::ObjBonusArmor = 0x12E4 + 0x04; // 12.4
int Offsets::ObjMagicRes = 0x12EC; // 12.4
int Offsets::ObjBonusMagicRes = 0x12EC + 0x04; // 12.4
int Offsets::ObjBaseAtk = 0x12BC; // 12.4
int Offsets::ObjBonusAtk = 0x1234; // 12.4
int Offsets::ObjMoveSpeed = 0x12FC; // 12.4
int Offsets::ObjSpellBook = 0x27F8; // 12.4
int Offsets::ObjTransformation = 0x3040; // Wrong
int Offsets::ObjName = 0x2BE4; // 12.4
int Offsets::ObjLvl = 0x33A4; // 12.4
int Offsets::ObjExpiry = 0x298; // Unknown
int Offsets::ObjCrit = 0x12E0; // 12.4
int Offsets::ObjCritMulti = 0x12D0; // Unknown
int Offsets::ObjAbilityPower = 0x1244; // 12.4
int Offsets::ObjAtkSpeedMulti = 0x12B8; // Unknown
int Offsets::ObjAtkRange = 0x1304; // 12.3
int Offsets::ObjTargetable = 0xD1C; // 12.3
int Offsets::ObjInvulnerable = 0x3EC; // 12.3
int Offsets::ObjIsMoving = 0x3638; // Unknown
int Offsets::ObjDirection = 0x1BD8; // 12.4
int Offsets::ObjItemList = 0x3478; //  0x3478; // 12.2? // 0x33D0; // 12.2?
int Offsets::ObjExperience = 0x3394; // 12.4
int Offsets::ObjMagicPen = 0x11DC; // Unknown
int Offsets::ObjMagicPenMulti = 0x11E4; // Unknown
int Offsets::ObjAdditionalApMulti = 0x1248; // 11.20
int Offsets::ObjManaRegen = 0x1150; // 12.2?
int Offsets::ObjHealthRegen = 0x12F8; // 12.4
int Offsets::ObjCurrentGold = 0x1B98; // 12.4
int Offsets::ObjGoldTotal = 0x1BA8; // 12.4

// MOSTLY CORRECT!
int Offsets::SpellSlotLevel = 0x20; // 12.2
int Offsets::SpellSlotTime = 0x28; // 12.2
int Offsets::SpellSlotCharges = 0x58; // 12.2
int Offsets::SpellSlotTimeCharge = 0x78; // 12.2
int Offsets::SpellSlotDamage = 0xA0; // 12.2
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.2
int Offsets::SpellInfoSpellData = 0x44; // 12.2
int Offsets::SpellDataSpellName = 0x6C; // 12.2
int Offsets::SpellDataMissileName = 0x6C; // 12.2
int Offsets::SpellSlotSmiteTimer = 0x64; // 12.2
int Offsets::SpellSlotSmiteCharges = 0x5c; // 12.2

// CORRECT!
int Offsets::MissileSpellInfo = 0x278; // 12.2
int Offsets::MissileSrcIdx = 0x2DC; // 12.2
int Offsets::MissileDestIdx = 0x334; // 12.2
int Offsets::MissileStartPos = 0x2F4; // 12.2
int Offsets::MissileEndPos = 0x300; // 12.2

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

// AI Manager
int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;

// Renderer
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

int Offsets::ObjectMapCount = 0x2C; // 12.3?
int Offsets::ObjectMapRoot = 0x28; // 12.3
int Offsets::ObjectMapNodeNetId = 0x10; // 12.3
int Offsets::ObjectMapNodeObject = 0x14; // 12.3

// Minimap
int Offsets::MinimapObject = 0x30F1D94; // WRONG
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
// v12.3
#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT!
int Offsets::GameTime = 0x30E585C; // 12.3
int Offsets::ObjectManager = 0x1851168; // 12.3
int Offsets::LocalPlayer = 0x30EE58C; // 12.3
int Offsets::UnderMouseObject = 0x30EBBC4; // 12.2
int Offsets::ViewProjMatrices = 0x3122690; // 12.3?
int Offsets::Renderer = 0x311A238; // 12.3?

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x20; // 12.3?
int Offsets::ObjTeam = 0x4C; // 12.3
int Offsets::ObjMissileName = 0x6C; // 12.3?
int Offsets::ObjNetworkID = 0xCC; // 12.3
int Offsets::ObjPos = 0x1F4; // 12.3
int Offsets::ObjMissileSpellCast = 0x250; // 12.3
int Offsets::ObjVisibility = 0x28C; // 12.3
int Offsets::ObjSpawnCount = 0x2A0; // 12.3
int Offsets::ObjSrcIndex = 0x02AC; // 12.3?
int Offsets::ObjMana = 0x2B4; // 12.3
int Offsets::ObjMaxMana = 0x2B4 + 0x10; // 12.3
int Offsets::ObjRecallState = 0xDA8; // 12.3
int Offsets::ObjHealth = 0xDB4; // 12.3
int Offsets::ObjMaxHealth = 0xDB4 + 0x10; // 12.3
int Offsets::ObjAbilityHaste = 0x16D8; // 12.3?
int Offsets::ObjLethality = 0x11F8; // 12.3?
int Offsets::ObjArmor = 0x12E4; // 12.3
int Offsets::ObjBonusArmor = 0x12E4 + 0x04; // 12.3
int Offsets::ObjMagicRes = 0x12EC; // 12.3
int Offsets::ObjBonusMagicRes = 0x12EC + 0x04; // 12.3
int Offsets::ObjBaseAtk = 0x12BC; // 12.3
int Offsets::ObjBonusAtk = 0x1234; // 12.3
int Offsets::ObjMoveSpeed = 0x12FC; // 12.3?
int Offsets::ObjSpellBook = 0x27F8; // 12.2 // 0x2C6C || 0x27e4 // 12.3?
int Offsets::ObjTransformation = 0x3040; // Wrong
int Offsets::ObjName = 0x2BE4; // 12.3?
int Offsets::ObjLvl = 0x339C; // 12.3?
int Offsets::ObjExpiry = 0x298; // Unknown
int Offsets::ObjCrit = 0x12E0; // 12.3?
int Offsets::ObjCritMulti = 0x12D0; // Unknown
int Offsets::ObjAbilityPower = 0x1788; // 12.3
int Offsets::ObjAtkSpeedMulti = 0x12B8; // Unknown
int Offsets::ObjAtkRange = 0x1304; // 12.3
int Offsets::ObjTargetable = 0xD1C; // 12.3
int Offsets::ObjInvulnerable = 0x3EC; // 12.3
int Offsets::ObjIsMoving = 0x3638; // Unknown
int Offsets::ObjDirection = 0x1B88; // Unknown
int Offsets::ObjItemList = 0x3478; //  0x3478; // 12.2? // 0x33D0; // 12.2?
int Offsets::ObjExperience = 0x338C; // 12.3
int Offsets::ObjMagicPen = 0x11DC; // Unknown
int Offsets::ObjMagicPenMulti = 0x11E4; // Unknown
int Offsets::ObjAdditionalApMulti = 0x1248; //11.20
int Offsets::ObjManaRegen = 0x1150; // 12.2?
int Offsets::ObjHealthRegen = 0x12F8; // 12.3?
int Offsets::ObjCurrentGold = 0x1B98; // 12.3
int Offsets::ObjGoldTotal = 0x1BA8; // 12.3

// MOSTLY CORRECT!
int Offsets::SpellSlotLevel = 0x20; // 12.2
int Offsets::SpellSlotTime = 0x28; // 12.2
int Offsets::SpellSlotCharges = 0x58; // 12.2
int Offsets::SpellSlotTimeCharge = 0x78; // 12.2
int Offsets::SpellSlotDamage = 0xA0; // 12.2
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.2
int Offsets::SpellInfoSpellData = 0x44; // 12.2
int Offsets::SpellDataSpellName = 0x6C; // 12.2
int Offsets::SpellDataMissileName = 0x6C; // 12.2
int Offsets::SpellSlotSmiteTimer = 0x64; // 12.2
int Offsets::SpellSlotSmiteCharges = 0x5c; // 12.2

// CORRECT!
int Offsets::MissileSpellInfo = 0x278; // 12.2
int Offsets::MissileSrcIdx = 0x2DC; // 12.2
int Offsets::MissileDestIdx = 0x334; // 12.2
int Offsets::MissileStartPos = 0x2F4; // 12.2
int Offsets::MissileEndPos = 0x300; // 12.2

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

// AI Manager
int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;

// Renderer
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

int Offsets::ObjectMapCount = 0x2C; // 12.3?
int Offsets::ObjectMapRoot = 0x28; // 12.3
int Offsets::ObjectMapNodeNetId = 0x10; // 12.3
int Offsets::ObjectMapNodeObject = 0x14; // 12.3

// Minimap
int Offsets::MinimapObject = 0x30F1D94; // WRONG
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
// v12.2
#include "Offsets.h"

Offsets::Offsets() {};

// CORRECT!
int Offsets::GameTime = 0x30F08CC; // 12.2
int Offsets::ObjectManager = 0x185C544; // 12.2
int Offsets::LocalPlayer = 0x30F990C; // 12.2
int Offsets::UnderMouseObject = 0x30EBBC4; // 12.2
// int Offsets::ZoomClass = 0x30F080C; // 12.2
// int Offsets::Chat = 0x30F999C; // 12.2
int Offsets::ViewProjMatrices = 0x3122690; // 12.2
int Offsets::Renderer = 0x30F94D0; // 12.2 // 0x3125530; // 12.2?

// MOSTLY CORRECT!
int Offsets::ObjIndex = 0x20; // 12.2
int Offsets::ObjTeam = 0x4C; // 12.2
int Offsets::ObjMissileName = 0x6C; // 12.2?
int Offsets::ObjNetworkID = 0xCC; // 12.2
int Offsets::ObjPos = 0x1F4; // 0xF0; // 12.2?
int Offsets::ObjMissileSpellCast = 0x250; // 12.2
int Offsets::ObjVisibility = 0x28C; // 12.2
int Offsets::ObjSpawnCount = 0x2A0; // 12.2
int Offsets::ObjSrcIndex = 0x02AC;
int Offsets::ObjMana = 0x2B4; // 12.2
int Offsets::ObjMaxMana = 0x2B4 + 0x10; // 12.2
int Offsets::ObjRecallState = 0xDA8;
int Offsets::ObjHealth = 0xDB4; // 12.2
int Offsets::ObjMaxHealth = 0xDB4 + 0x10; // 12.2
int Offsets::ObjAbilityHaste = 0x16D8; // 12.2
int Offsets::ObjLethality = 0x11F8;
int Offsets::ObjArmor = 0x12E4; // 12.2
int Offsets::ObjBonusArmor = 0x12E4 + 0x04; // 12.2
int Offsets::ObjMagicRes = 0x12EC; // 12.2
int Offsets::ObjBonusMagicRes = 0x12EC + 0x04; // 12.2
int Offsets::ObjBaseAtk = 0x12BC; // 12.2
int Offsets::ObjBonusAtk = 0x1234; // 12.2
int Offsets::ObjMoveSpeed = 0x12FC; // 12.2
int Offsets::ObjSpellBook = 0x27F8; // 12.2
int Offsets::ObjTransformation = 0x3040; // Wrong
int Offsets::ObjName = 0x2BE4; // 12.2
int Offsets::ObjLvl = 0x339C; // 12.2
int Offsets::ObjExpiry = 0x298; // Unknown
int Offsets::ObjCrit = 0x12E0; // 12.2
int Offsets::ObjCritMulti = 0x12D0; // Unknown
int Offsets::ObjAbilityPower = 0x1788; // 12.2
int Offsets::ObjAtkSpeedMulti = 0x12B8; // Unknown
int Offsets::ObjAtkRange = 0x1304; // 12.2
int Offsets::ObjTargetable = 0xD1C; // 12.2
int Offsets::ObjInvulnerable = 0x3EC; // 12.2
int Offsets::ObjIsMoving = 0x3638; // Unknown
int Offsets::ObjDirection = 0x1B88; // Unknown
int Offsets::ObjItemList = 0x3478; //  0x3478; // 12.2? // 0x33D0; // 12.2?
int Offsets::ObjExperience = 0x338C; // 12.2
int Offsets::ObjMagicPen = 0x11DC; // Unknown
int Offsets::ObjMagicPenMulti = 0x11E4; // Unknown
int Offsets::ObjAdditionalApMulti = 0x1248; //11.20
int Offsets::ObjManaRegen = 0x1150; // 12.2
int Offsets::ObjHealthRegen = 0x12F8; // 12.2
int Offsets::ObjCurrentGold = 0x1B98; // 12.2
int Offsets::ObjGoldTotal = 0x1BA8; // 12.2

// MOSTLY CORRECT!
int Offsets::SpellSlotLevel = 0x20; // 12.2
int Offsets::SpellSlotTime = 0x28; // 12.2
int Offsets::SpellSlotCharges = 0x58; // 12.2
int Offsets::SpellSlotTimeCharge = 0x78; // 12.2
int Offsets::SpellSlotDamage = 0xA0; // 12.2
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.2
int Offsets::SpellInfoSpellData = 0x44; // 12.2
int Offsets::SpellDataSpellName = 0x6C; // 12.2
int Offsets::SpellDataMissileName = 0x6C; // 12.2
int Offsets::SpellSlotSmiteTimer = 0x64; // 12.2
int Offsets::SpellSlotSmiteCharges = 0x5c; // 12.2

// CORRECT!
int Offsets::MissileSpellInfo = 0x278; // 12.2
int Offsets::MissileSrcIdx = 0x2DC; // 12.2
int Offsets::MissileDestIdx = 0x334; // 12.2
int Offsets::MissileStartPos = 0x2F4; // 12.2
int Offsets::MissileEndPos = 0x300; // 12.2

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

// AI Manager
int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;

// Renderer
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

int Offsets::ObjectMapCount = 0x2C; // 12.2
int Offsets::ObjectMapRoot = 0x28; // 12.2
int Offsets::ObjectMapNodeNetId = 0x10; // 12.2
int Offsets::ObjectMapNodeObject = 0x14; // 12.2

// Minimap
int Offsets::MinimapObject = 0x30F1D94; // 12.2
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
// v11.23 (Mixture of 11.21 and 11.23 perhaps?)
#include "Offsets.h"

Offsets::Offsets() {};

int Offsets::GameTime = 0x3101384; //updated
int Offsets::ObjectManager = 0x186CD20; //updated
int Offsets::LocalPlayer = 0x310990C; //updated
int Offsets::UnderMouseObject = 0x182B0E8; //updated
//int Offsets::ZoomClass = 0x30F02BC; // updated 
//int Offsets::Chat = 0x3109EF0; //updated
int Offsets::ViewProjMatrices = 0x31322A8; //updatede
int Offsets::Renderer = 0x03135148; //updated

int Offsets::ObjIndex = 0x20;
int Offsets::ObjTeam = 0x4C;
int Offsets::ObjMissileName = 0x6C;
int Offsets::ObjNetworkID = 0xCC;
int Offsets::ObjPos = 0x1F4; //11.21
int Offsets::ObjMissileSpellCast = 0x250;
int Offsets::ObjVisibility = 0x28C;
int Offsets::ObjSpawnCount = 0x2A0;
int Offsets::ObjSrcIndex = 0x02AC;
int Offsets::ObjMana = 0x2B4; //currect
int Offsets::ObjMaxMana = 0x2C4; //currect
int Offsets::ObjRecallState = 0xD90; //currect
int Offsets::ObjHealth = 0xDB4; //11.21
int Offsets::ObjMaxHealth = 0xDC4; //11.21
int Offsets::ObjAbilityHaste = 0x110C; //11.21
int Offsets::ObjLethality = 0x11F8; //11.21
int Offsets::ObjArmor = 0x12E4; //11.21
int Offsets::ObjBonusArmor = 0x12E8; //11.21
int Offsets::ObjMagicRes = 0x12EC; //11.21
int Offsets::ObjBonusMagicRes = 0x12F0; //11.21
int Offsets::ObjBaseAtk = 0x12BC; //11.21
int Offsets::ObjBonusAtk = 0x1234; //11.21
int Offsets::ObjMoveSpeed = 0x12FC; //11.21
int Offsets::ObjSpellBook = 0x27f8;//11.21 
int Offsets::ObjTransformation = 0x3040;
int Offsets::ObjName = 0x2BE4;//11.21
int Offsets::ObjLvl = 0x339C;//11.21
int Offsets::ObjExpiry = 0x298;
int Offsets::ObjCrit = 0x12E0; //11.21
int Offsets::ObjCritMulti = 0x12D0;//11.21
int Offsets::ObjAbilityPower = 0x1788; //11.21
int Offsets::ObjAtkSpeedMulti = 0x12B8; //11.20
int Offsets::ObjAtkRange = 0x1304; //currect
int Offsets::ObjTargetable = 0xD1C;//11.21s
int Offsets::ObjInvulnerable = 0x3EC;//11.21
int Offsets::ObjIsMoving = 0x3638;
int Offsets::ObjDirection = 0x1B88;
int Offsets::ObjItemList = 0x33C8; //11.20
int Offsets::ObjExperience = 0x338C; //11.21
int Offsets::ObjMagicPen = 0x11DC; //11.21
int Offsets::ObjMagicPenMulti = 0x11E4; //11.21
int Offsets::ObjAdditionalApMulti = 0x1248; //11.20
int Offsets::ObjManaRegen = 0x1150; //11.21
int Offsets::ObjHealthRegen = 0x12F8; //11.21


// int Offsets::MaxZoom = 0x20; //always the same


// int Offsets::ChatIsOpen = 0x73C; //updated

// int Offsets::SpellBookActiveSpellCast = 0x20;
// int Offsets::SpellBookSpellSlots = 0x478;


int Offsets::ObjBuffManager = 0x21B8;//0x21BC; 
int Offsets::BuffManagerEntriesArray = 0x10;
int Offsets::BuffEntryBuff = 0x8;
int Offsets::BuffType = 0x4;
int Offsets::BuffEntryBuffStartTime = 0xC;
int Offsets::BuffEntryBuffEndTime = 0x10;
int Offsets::BuffEntryBuffCount = 0x74;
int Offsets::BuffEntryBuffCountAlt = 0x24;
int Offsets::BuffEntryBuffCountAlt2 = 0x20;
int Offsets::BuffName = 0x8;
int Offsets::BuffEntryBuffNodeStart = 0x20;
int Offsets::BuffEntryBuffNodeCurrent = 0x24;


//always the same
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

//always the same
int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;


//never change
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

//spellslots never change
int Offsets::SpellSlotLevel = 0x20;
int Offsets::SpellSlotTime = 0x28;
int Offsets::SpellSlotCharges = 0x58;//0x5C;
int Offsets::SpellSlotTimeCharge = 0x78;// 0x15;
int Offsets::SpellSlotDamage = 0xA0;
int Offsets::SpellSlotSpellInfo = 0x144;
int Offsets::SpellInfoSpellData = 0x44;
int Offsets::SpellDataSpellName = 0x6C;
int Offsets::SpellDataMissileName = 0x6C;
int Offsets::SpellSlotSmiteTimer = 0x64;
int Offsets::SpellSlotSmiteCharges = 0x5c; //0x58;


//these never change
int Offsets::ObjectMapCount = 0x2C;
int Offsets::ObjectMapRoot = 0x28;
int Offsets::ObjectMapNodeNetId = 0x10;
int Offsets::ObjectMapNodeObject = 0x14;



//these never change
int Offsets::SpellCastSpellInfo = 0x8;
int Offsets::SpellCastStartTime = 0x544;
int Offsets::SpellCastStartTimeAlt = 0x534;
int Offsets::SpellCastCastTime = 0x4C0;
int Offsets::SpellCastStart = 0x80;
int Offsets::SpellCastEnd = 0x8C;
int Offsets::SpellCastSrcIdx = 0x68;
int Offsets::SpellCastDestIdx = 0xC0;


//updated 11.21
int Offsets::MissileSpellInfo = 0x278;
int Offsets::MissileSrcIdx = 0x2DC;
int Offsets::MissileDestIdx = 0x310;
int Offsets::MissileStartPos = 0x2F4;//0x2F4;
int Offsets::MissileEndPos = 0x300;

int Offsets::MinimapObject = 0x30F88B8;
int Offsets::MinimapObjectHud = 0x10c;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;


// not in use, no need of updating 
int Offsets::AiManagerStartPath = 0x1e4;
int Offsets::AiManagerEndPath = 0x1e8;
int Offsets::AiManagerTargetPosition = 0x10;
int Offsets::AiManagerIsMoving = 0x1c0;
int Offsets::AiManagerIsDashing = 0x3c0;
int Offsets::AiManagerCurrentSegment = 0x1c4;
int Offsets::AiManagerDashSpeed = 0x1f8;
*/

/*
// v11.21
#include "Offsets.h"

int Offsets::GameTime = 0x30F0384; //updated
int Offsets::ObjectManager = 0x185C01C; //updated
int Offsets::LocalPlayer = 0x30F88DC; //updated
int Offsets::UnderMouseObject = 0x30D3CB8; //not updated
//int Offsets::ZoomClass = 0x30F02BC; // updated 
//int Offsets::Chat = 0x30E14A0; //not updated
int Offsets::ViewProjMatrices = 0x311EFC8; //updatede
int Offsets::Renderer = 0x3121DA8; //updated



int Offsets::ObjIndex = 0x20;
int Offsets::ObjTeam = 0x4C;
int Offsets::ObjMissileName = 0x6C;
int Offsets::ObjNetworkID = 0xCC;
int Offsets::ObjPos = 0x1F4; //11.21
int Offsets::ObjMissileSpellCast = 0x250;
int Offsets::ObjVisibility = 0x28C;
int Offsets::ObjSpawnCount = 0x2A0;
int Offsets::ObjSrcIndex = 0x02AC;
int Offsets::ObjMana = 0x2B4; //currect
int Offsets::ObjMaxMana = 0x2C4; //currect
int Offsets::ObjRecallState = 0xD90; //currect
int Offsets::ObjHealth = 0xDB4; //11.21
int Offsets::ObjMaxHealth = 0xDC4; //11.21
int Offsets::ObjAbilityHaste = 0x110C; //11.21
int Offsets::ObjLethality = 0x11F8; //11.21
int Offsets::ObjArmor = 0x12E4; //11.21
int Offsets::ObjBonusArmor = 0x12E8; //11.21
int Offsets::ObjMagicRes = 0x12EC; //11.21
int Offsets::ObjBonusMagicRes = 0x12F0; //11.21
int Offsets::ObjBaseAtk = 0x12BC; //11.21
int Offsets::ObjBonusAtk = 0x1234; //11.21
int Offsets::ObjMoveSpeed = 0x12FC; //11.21
int Offsets::ObjSpellBook = 0x27f8;//11.21 
int Offsets::ObjTransformation = 0x3040;
int Offsets::ObjName = 0x2BE4; //11.21
int Offsets::ObjLvl = 0x339C; //11.21
int Offsets::ObjExpiry = 0x298;
int Offsets::ObjCrit = 0x12E0; //11.21
int Offsets::ObjCritMulti = 0x12D0; //11.21
int Offsets::ObjAbilityPower = 0x1244; //11.21
int Offsets::ObjAtkSpeedMulti = 0x128C; //11.20
int Offsets::ObjAtkRange = 0x1304; //currect
int Offsets::ObjTargetable = 0xD1C; //11.21s
int Offsets::ObjInvulnerable = 0x3EC; //11.21

int Offsets::ObjIsMoving = 0x3638;
int Offsets::ObjIsDashing = 0x3638 + (0x398 - 0x198);

int Offsets::ObjDirection = 0x1B88;
int Offsets::ObjItemList = 0x3700; //11.20
int Offsets::ObjExperience = 0x338C; //11.21
int Offsets::ObjMagicPen = 0x11DC; //11.21
int Offsets::ObjMagicPenMulti = 0x11E4; //11.21
int Offsets::ObjAdditionalApMulti = 0x1248; //11.20
int Offsets::ObjManaRegen = 0x1150; //11.21
int Offsets::ObjHealthRegen = 0x12F8; //11.21


//int Offsets::MaxZoom = 0x20; //always the same


//int Offsets::ChatIsOpen = 0x06A4; //not updated

//int Offsets::SpellBookActiveSpellCast = 0x20;
//int Offsets::SpellBookSpellSlots = 0x478;

//
int Offsets::ObjBuffManager = 0x21B8;//0x21BC; 
int Offsets::BuffManagerEntriesArray = 0x10;
int Offsets::BuffEntryBuff = 0x8;
int Offsets::BuffType = 0x4;
int Offsets::BuffEntryBuffStartTime = 0xC;
int Offsets::BuffEntryBuffEndTime = 0x10;
int Offsets::BuffEntryBuffCount = 0x74;
int Offsets::BuffEntryBuffCountAlt = 0x24;
int Offsets::BuffEntryBuffCountAlt2 = 0x20;
int Offsets::BuffName = 0x8;
int Offsets::BuffEntryBuffNodeStart = 0x20;
int Offsets::BuffEntryBuffNodeCurrent = 0x24;
//

//always the same
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

//always the same
//int Offsets::CurrentDashSpeed = 0x1D0;
//int Offsets::IsDashing = 0x398;
//int Offsets::DashPos = 0x1FC;
//int Offsets::IsMoving = 0x198;
//int Offsets::NavBegin = 0x1BC;
//int Offsets::NavEnd = 0x1C0;


//never change
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

//spellslots never change
int Offsets::SpellSlotLevel = 0x20;
int Offsets::SpellSlotTime = 0x28;
int Offsets::SpellSlotCharges = 0x58; // Additional
int Offsets::SpellSlotTimeCharge = 0x78; // Additional
int Offsets::SpellSlotDamage = 0xA0;
int Offsets::SpellSlotSpellInfo = 0x144;
int Offsets::SpellInfoSpellData = 0x44;
int Offsets::SpellDataSpellName = 0x6C;
int Offsets::SpellDataMissileName = 0x6C;
int Offsets::SpellSlotSmiteTimer = 0x64; // Additional
int Offsets::SpellSlotSmiteCharges = 0x5c; // Additional


//these never change
int Offsets::ObjectMapCount = 0x2C;
int Offsets::ObjectMapRoot = 0x28;
int Offsets::ObjectMapNodeNetId = 0x10;
int Offsets::ObjectMapNodeObject = 0x14;


//these never change
//int Offsets::SpellCastSpellInfo = 0x8;
//int Offsets::SpellCastStartTime = 0x544;
//int Offsets::SpellCastStartTimeAlt = 0x534;
//int Offsets::SpellCastCastTime = 0x4C0;
//int Offsets::SpellCastStart = 0x80;
//int Offsets::SpellCastEnd = 0x8C;
//int Offsets::SpellCastSrcIdx = 0x68;
//int Offsets::SpellCastDestIdx = 0xC0;


//updated 11.21
int Offsets::MissileSpellInfo = 0x278;
int Offsets::MissileSrcIdx = 0x2DC;
int Offsets::MissileDestIdx = 0x310;
int Offsets::MissileStartPos = 0x2F4;
int Offsets::MissileEndPos = 0x300;

int Offsets::MinimapObject = 0x30E13B0;
int Offsets::MinimapObjectHud = 0x10c;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;
*/

/*
// not in use, no need of updating 
int Offsets::AiManagerStartPath = 0x1e4;
int Offsets::AiManagerEndPath = 0x1e8;
int Offsets::AiManagerTargetPosition = 0x10;
int Offsets::AiManagerIsMoving = 0x1c0;
int Offsets::AiManagerIsDashing = 0x3c0;
int Offsets::AiManagerCurrentSegment = 0x1c4;
int Offsets::AiManagerDashSpeed = 0x1f8;
*/

/*

#include "Offsets.h"

Offsets::Offsets() {};

int Offsets::GameTime = 0x31047C4;
int Offsets::ObjectManager = 0x187015C;
int Offsets::LocalPlayer = 0x310D250;
int Offsets::UnderMouseObject = 0x30D3CB8; //outdated
int Offsets::ZoomClass = 0x31046FC;
int Offsets::Chat = 0x311471C;
int Offsets::ViewProjMatrices = 0x3134D58;
int Offsets::Renderer = 0x3137BF8;

int Offsets::ObjIndex = 0x20;
int Offsets::ObjTeam = 0x4C;
int Offsets::ObjMissileName = 0x6C;
int Offsets::ObjNetworkID = 0xCC;
int Offsets::ObjPos = 0x1F4;
int Offsets::ObjMissileSpellCast = 0x250;
int Offsets::ObjVisibility = 0x28C;
int Offsets::ObjSpawnCount = 0x2A0;
int Offsets::ObjSrcIndex = 0x02AC;
int Offsets::ObjMana = 0x2B4;
int Offsets::ObjMaxMana = 0x2C4;
int Offsets::ObjRecallState = 0xD90;
int Offsets::ObjHealth = 0xDB4;
int Offsets::ObjMaxHealth = 0xDC4;
int Offsets::ObjAbilityHaste = 0x110C;
int Offsets::ObjLethality = 0x11F8;
int Offsets::ObjArmor = 0x12E4;
int Offsets::ObjBonusArmor = 0x12E8;
int Offsets::ObjMagicRes = 0x12EC;
int Offsets::ObjBonusMagicRes = 0x12F0;
int Offsets::ObjBaseAtk = 0x12BC;
int Offsets::ObjBonusAtk = 0x1234;
int Offsets::ObjMoveSpeed = 0x12FC;
int Offsets::ObjSpellBook = 0x27e4;
int Offsets::ObjTransformation = 0x3040;
int Offsets::ObjName = 0x2BE4;
int Offsets::ObjLvl = 0x33c4;
int Offsets::ObjExpiry = 0x298;
int Offsets::ObjCrit = 0x12E0;
int Offsets::ObjCritMulti = 0x12D0;
int Offsets::ObjAbilityPower = 0x1244;
int Offsets::ObjAtkSpeedMulti = 0x128C;
int Offsets::ObjAtkRange = 0x1304;
int Offsets::ObjTargetable = 0xD1C;
int Offsets::ObjInvulnerable = 0x3EC;
int Offsets::ObjIsMoving = 0x3638;
int Offsets::ObjDirection = 0x1B88;
int Offsets::ObjItemList = 0x33C8;
int Offsets::ObjExpierience = 0x338C;
int Offsets::ObjMagicPen = 0x11DC;
int Offsets::ObjMagicPenMulti = 0x11E4;
int Offsets::ObjAdditionalApMulti = 0x1248;
int Offsets::ObjManaRegen = 0x1150;
int Offsets::ObjHealthRegen = 0x12F8;


int Offsets::MaxZoom = 0x20; //always the same
int Offsets::ChatIsOpen = 0x06A4; //not updated

int Offsets::SpellBookActiveSpellCast = 0x20;
int Offsets::SpellBookSpellSlots = 0x478;

int Offsets::ObjBuffManager = 0x21C8;
int Offsets::BuffManagerEntriesArray = 0x10;
int Offsets::BuffEntryBuff = 0x8;
int Offsets::BuffType = 0x4;
int Offsets::BuffEntryBuffStartTime = 0xC;
int Offsets::BuffEntryBuffEndTime = 0x10;
int Offsets::BuffEntryBuffCount = 0x74;
int Offsets::BuffEntryBuffCountAlt = 0x24;
int Offsets::BuffEntryBuffCountAlt2 = 0x20;
int Offsets::BuffName = 0x8;
int Offsets::BuffEntryBuffNodeStart = 0x20;
int Offsets::BuffEntryBuffNodeCurrent = 0x24;

//always the same
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

//always the same
int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;


//never change
int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

//spellslots never change
int Offsets::SpellSlotLevel = 0x20;
int Offsets::SpellSlotTime = 0x28;
int Offsets::SpellSlotCharges = 0x58;
int Offsets::SpellSlotTimeCharge = 0x78;
int Offsets::SpellSlotDamage = 0xA0;
int Offsets::SpellSlotSpellInfo = 0x144;
int Offsets::SpellInfoSpellData = 0x44;
int Offsets::SpellDataSpellName = 0x6C;
int Offsets::SpellDataMissileName = 0x6C;
int Offsets::SpellSlotSmiteTimer = 0x64;
int Offsets::SpellSlotSmiteCharges = 0x5c; //0x58;


//these never change
int Offsets::ObjectMapCount = 0x2C;
int Offsets::ObjectMapRoot = 0x28;
int Offsets::ObjectMapNodeNetId = 0x10;
int Offsets::ObjectMapNodeObject = 0x14;


//these never change
int Offsets::SpellCastSpellInfo = 0x8;
int Offsets::SpellCastStartTime = 0x544;
int Offsets::SpellCastStartTimeAlt = 0x534;
int Offsets::SpellCastCastTime = 0x4C4;
int Offsets::SpellCastStart = 0x84;
int Offsets::SpellCastEnd = 0x90;
int Offsets::SpellCastSrcIdx = 0x68;
int Offsets::SpellCastDestIdx = 0xC0;


//updated 11.21
int Offsets::MissileSpellInfo = 0x278;
int Offsets::MissileSrcIdx = 0x2DC;
int Offsets::MissileDestIdx = 0x310;
int Offsets::MissileStartPos = 0x2F4;
int Offsets::MissileEndPos = 0x300;

int Offsets::MinimapObject = 0x30E13B0;
int Offsets::MinimapObjectHud = 0x10c;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;


// not in use, no need of updating
int Offsets::AiManagerStartPath = 0x1e4;
int Offsets::AiManagerEndPath = 0x1e8;
int Offsets::AiManagerTargetPosition = 0x10;
int Offsets::AiManagerIsMoving = 0x1c0;
int Offsets::AiManagerIsDashing = 0x3c0;
int Offsets::AiManagerCurrentSegment = 0x1c4;
int Offsets::AiManagerDashSpeed = 0x1f8;
*/