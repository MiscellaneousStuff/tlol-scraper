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

// UNKNOWN!
int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

int Offsets::RendererWidth = 0xC;
int Offsets::RendererHeight = 0x10;

// MOSTLY CORRECT!
int Offsets::SpellSlotLevel = 0x20; // 12.2
int Offsets::SpellSlotTime = 0x28; // 12.2
int Offsets::SpellSlotDamage = 0xA0; // 12.2
int Offsets::SpellSlotSpellInfo = 0x13C; // // 12.2
int Offsets::SpellInfoSpellData = 0x44; // 12.2
int Offsets::SpellDataSpellName = 0x6C; // 12.2
int Offsets::SpellDataMissileName = 0x6C; // 12.2

// CORRECT
int Offsets::ObjectMapCount = 0x2C; // 12.4
int Offsets::ObjectMapRoot = 0x28; // 12.4
int Offsets::ObjectMapNodeNetId = 0x10; // 12.4
int Offsets::ObjectMapNodeObject = 0x14; // 12.4

// CORRECT!
int Offsets::MissileSpellInfo = 0x278; // 12.4
int Offsets::MissileSrcIdx = 0x2DC; // 12.4
int Offsets::MissileDestIdx = 0x334; // 12.4
int Offsets::MissileStartPos = 0x2F4; // 12.4
int Offsets::MissileEndPos = 0x300; // 12.4

// Minimap
int Offsets::MinimapObject = 0x30F1D94; // WRONG
int Offsets::MinimapObjectHud = 0x110;
int Offsets::MinimapHudPos = 0x44;
int Offsets::MinimapHudSize = 0x4C;