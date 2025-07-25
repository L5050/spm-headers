/*
    mobjdrv handles 'map objects' such as question blocks and save blocks
*/

#pragma once

#include <common.h>
#include <spm/itemdrv.h>
#include <spm/mapdrv.h>
#include <wii/mtx.h>

CPP_WRAPPER(spm::hitdrv)

struct _HitObj;

CPP_WRAPPER_END()

CPP_WRAPPER(spm::mobjdrv)

USING(spm::evtmgr::EvtEntry)
USING(spm::evtmgr::EvtScriptCode)
USING(spm::hitdrv::_HitObj)
USING(spm::itemdrv::ItemEntry)
USING(spm::mapdrv::MapFileJoint)
USING(wii::mtx::Vec3)

struct _MobjEntry;
typedef s32 (MobjUpdateFunc)(struct _MobjEntry * entry);

typedef struct
{
/* 0x0 */ s32 itemId;
/* 0x4 */ s32 chance;
} MobjDropItem;
SIZE_ASSERT(MobjDropItem, 0x8)

typedef struct
{
/* 0x00 */ struct _HitObj * hitObj; 
/* 0x04 */ char name[16];
/* 0x14 */ u8 unknown_0x14[0x1c - 0x14];
    /*
        MapFileJoint ends in a VLA, so it can't be used directly here
    */
/* 0x1C */ u8 joint[sizeof(MapFileJoint)];
/* 0x84 */ u8 unknown_0x84[0x88 - 0x84];
} MobjJoint;
SIZE_ASSERT(MobjJoint, 0x88)

typedef struct _MobjEntry
{
    /*
        0x10000000 is grabbable with Thoreau
        0x1 is active
        Others unknown
    */
/* 0x000 */ u32 flag0;
/* 0x004 */ u32 flag4;
/* 0x008 */ char instanceName[16];
/* 0x018 */ Vec3 pos;
/* 0x024 */ Vec3 scale;
/* 0x030 */ Vec3 rotation;
/* 0x03C */ u8 unknown_0x3c[0x48 - 0x3c];
/* 0x048 */ s32 animPoseId;
/* 0x04C */ u8 unknown_0x4c[0x5c - 0x4c];
/* 0x05C */ MobjJoint joints[3];
/* 0x1F4 */ Vec3 unkScale;
/* 0x200 */ Vec3 translation;
/* 0x20C */ u8 unknown_0x20c[0x210 - 0x20c];
/* 0x210 */ union
            {
                MobjDropItem * items;
                s32 item;
            };
/* 0x214 */ u8 unknown_0x214[0x218 - 0x214];
/* 0x218 */ ItemEntry * itemEntry;
/* 0x21C */ u8 unknown_0x21c[0x230 - 0x21c];
/* 0x230 */ void * userWork;
/* 0x234 */ u8 unknown_0x234[0x23c - 0x234];
/* 0x23C */ s32 evtId; // id of the EvtEntry from mobjRunEvent
/* 0x240 */ MobjUpdateFunc * updateFunction; // runs every frame in mobjMain
/* 0x244 */ EvtScriptCode * interactScript; // ran when the player interacts with the object
/* 0x248 */ EvtScriptCode * afterInteractScript; // usage varies by MOBJ
/* 0x24C */ s32 state; // values vary by MOBJ
/* 0x250 */ s32 unknown_0x250;
/* 0x254 */ s32 collectedVar;
/* 0x258 */ u8 unknown_0x258[0x2a8 - 0x258];
} MobjEntry;
SIZE_ASSERT(MobjEntry, 0x2a8)

typedef struct // paired with a MobjEntry at the same index, unknown purpose
{
/* 0x00 */ Vec3 unknown_0x0;
/* 0x0C */ Vec3 unknown_0xc;
} MobjOtherEntry;
SIZE_ASSERT(MobjOtherEntry, 0x18)

typedef struct
{
/* 0x00 */ s32 entryCountMax; // 0x100
/* 0x04 */ MobjEntry * entries; // array of entryCountMax length
/* 0x08 */ u8 unknown_0x8[0x10 - 0x8];
/* 0x10 */ MobjOtherEntry * otherEntries; // array of entryCountMax length
/* 0x14 */ bool unkFlag;
/* 0x15 */ u8 unknown_0x15[0x18 - 0x15];
} MobjWork;
SIZE_ASSERT(MobjWork, 0x18)

UNKNOWN_FUNCTION(func_800297c0)
UNKNOWN_FUNCTION(func_80029c34)
UNKNOWN_FUNCTION(func_80029e50)
UNKNOWN_FUNCTION(func_8002a03c)
UNKNOWN_FUNCTION(func_8002a0bc)
UNKNOWN_FUNCTION(func_8002a150)
UNKNOWN_FUNCTION(func_8002a1d4)
UNKNOWN_FUNCTION(func_8002a258)
UNKNOWN_FUNCTION(func_8002a31c)

/*
    Allocates entries and otherEntries, sets entryCountMax and initialises other unknown data
*/
void mobjInit();

/*
    Clears entries and re-initialises other unknown data
*/
void mobjReset();

/*
    Initialises collision data for a MOBJ
*/
void mobjHitEntry(MobjEntry * entry, s32 type);

/*
    Creates a MOBJ, returns its id
*/
s32 mobjEntry(const char * instanceName, const char * animPoseName);

/*
    Deletes a MOBJ
*/
void mobjDelete(const char * instanceName);

/*
    Sets a MOBJ's position
*/
void mobjSetPosition(const char * instanceName, f32 x, f32 y, f32 z);

/*
    Updates all MOBJs
*/
void mobjMain();

/*
    Gets a MobjEntry by instance name
    NoAssert will return a null pointer if not found, regular will kill the game
*/
MobjEntry * mobjNameToPtr(const char * instanceName);
MobjEntry * mobjNameToPtrNoAssert(const char * instanceName);

/*
    Runs a script as a MOBJ
*/
EvtEntry * mobjRunEvent(MobjEntry * entry, EvtScriptCode * script);

/*
    Calculate a collision-related matrix for a MOBJ
*/
void mobjCalcMtx(MobjEntry * entry);
void mobjCalcMtx2(MobjEntry * entry);

UNKNOWN_FUNCTION(func_8002cf0c)
UNKNOWN_FUNCTION(func_8002cfcc)
UNKNOWN_FUNCTION(func_8002d2c0)
UNKNOWN_FUNCTION(mobjHitOn)
void mobjHitOff(const char * name);
UNKNOWN_FUNCTION(func_8002d720)
UNKNOWN_FUNCTION(func_8002d7d8)
UNKNOWN_FUNCTION(func_8002d890)
UNKNOWN_FUNCTION(func_8002d89c)
UNKNOWN_FUNCTION(func_8002d8a8)
UNKNOWN_FUNCTION(func_8002d914)
UNKNOWN_FUNCTION(func_8002d9bc)
UNKNOWN_FUNCTION(func_8002de94)
UNKNOWN_FUNCTION(func_8002dfc4)
UNKNOWN_FUNCTION(func_8002e278)
UNKNOWN_FUNCTION(func_8002e4c8)
UNKNOWN_FUNCTION(func_8002e940)
UNKNOWN_FUNCTION(mobjDropFromCatch)
UNKNOWN_FUNCTION(func_8002e968)
UNKNOWN_FUNCTION(func_8002e980)
UNKNOWN_FUNCTION(func_8002e9bc)
UNKNOWN_FUNCTION(func_8002ea0c)
UNKNOWN_FUNCTION(func_8002ea54)
UNKNOWN_FUNCTION(func_8002eb0c)
const char * mobjGetModelName(MobjEntry * mobj);
UNKNOWN_FUNCTION(func_8002eb60)
void func_8002ed80();
void func_8002ed90();
 
CPP_WRAPPER_END()
