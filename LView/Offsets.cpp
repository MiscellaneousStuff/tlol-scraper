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