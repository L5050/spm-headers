#pragma once

#include <common.h>
#include <evt_cmd.h>

CPP_WRAPPER(spm::evt_fairy)

UNKNOWN_FUNCTION(evt_fairy_get_num)
UNKNOWN_FUNCTION(func_800e7324)
UNKNOWN_FUNCTION(func_800e7380)
UNKNOWN_FUNCTION(func_800e73b0)
UNKNOWN_FUNCTION(func_800e73e0)

EVT_DECLARE_USER_FUNC(evt_fairy_all_enter_run_mode1, 0)

UNKNOWN_FUNCTION(func_800e7428)

EVT_DECLARE_USER_FUNC(evt_fairy_all_enter_run_mode2, 0)

UNKNOWN_FUNCTION(func_800e747c)

// evt_fairy_set_pos(s32 id, f32 x, f32 y, f32 z)
EVT_DECLARE_USER_FUNC(evt_fairy_set_pos, 4)

UNKNOWN_FUNCTION(evt_fairy_set_pos_all)

// evt_fairy_get_pos(s32 id, f32 x, f32 y, f32 z)
EVT_DECLARE_USER_FUNC(evt_fairy_get_pos, 4)

UNKNOWN_FUNCTION(func_800e76d4)
UNKNOWN_FUNCTION(func_800e7784)
UNKNOWN_FUNCTION(func_800e77d0)
UNKNOWN_FUNCTION(func_800e7868)
UNKNOWN_FUNCTION(func_800e7900)
UNKNOWN_FUNCTION(func_800e7aec)
UNKNOWN_FUNCTION(func_800e7b78)
UNKNOWN_FUNCTION(func_800e7bdc)

// evt_fairy_fly_to(s32 id, f32 x, f32 y, f32 z, s32 time)
EVT_DECLARE_USER_FUNC(evt_fairy_fly_to, 5)

UNKNOWN_FUNCTION(func_800e7f3c)
UNKNOWN_FUNCTION(func_800e80ec)

// evt_fairy_flag_onoff(bool onoff, u32 flags)
EVT_DECLARE_USER_FUNC(evt_fairy_flag_onoff, 2)

UNKNOWN_FUNCTION(evt_fairy_flag_onoff_all)
UNKNOWN_FUNCTION(func_800e82dc)
UNKNOWN_FUNCTION(func_800e8350)
UNKNOWN_FUNCTION(func_800e840c)
UNKNOWN_FUNCTION(func_800e8468)

// evt_fairy_reset()
EVT_DECLARE_USER_FUNC(evt_fairy_reset, 0)

EVT_UNKNOWN_USER_FUNC(func_800e8518)

// evt_fairy_set_anim(s32 id, char *animName)
EVT_DECLARE_USER_FUNC(evt_fairy_set_anim, 2)

// evt_fairy_wait_anim_end(s32 id)
EVT_DECLARE_USER_FUNC(evt_fairy_wait_anim_end, 1)

UNKNOWN_FUNCTION(func_800e87ac)
EVT_UNKNOWN_USER_FUNC(func_800e8824)

CPP_WRAPPER_END()
