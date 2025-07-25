#pragma once

#include <common.h>
#include <evt_cmd.h>
#include <spm/evtmgr.h>

CPP_WRAPPER(spm::evt_msg)

USING(spm::evtmgr::EvtEntry)

void evt_msg_init();

s32 _evt_msg_print(EvtEntry *entry, int firstCall, u32 flags, const char * msg, void * mainFunc, char * speaker);

// evt_msg_print(u32 flags, const char * msg, s32 mainFunc, const char * speaker)
EVT_DECLARE_USER_FUNC(evt_msg_print, 4)

// evt_msg_print_insert(u32 flags, const char * msg, s32 mainFunc, const char * speaker, insertion)
EVT_DECLARE_USER_FUNC(evt_msg_print_insert, -1)

// evt_msg_print_add(u32 flags, const char * message)
EVT_DECLARE_USER_FUNC(evt_msg_print_add, 2)

EVT_DECLARE_USER_FUNC(evt_msg_print_add_insert, -1)

// evt_msg_continue()
EVT_DECLARE_USER_FUNC(evt_msg_continue, 0)

UNKNOWN_FUNCTION(evt_msg_repeat)
UNKNOWN_FUNCTION(evt_msg_close)
EVT_DECLARE_USER_FUNC(evt_msg_select, 2)

EVT_DECLARE_USER_FUNC(evt_msg_toge, 4)

UNKNOWN_FUNCTION(evt_msg_togelr)
UNKNOWN_FUNCTION(evt_msg_pri)
UNKNOWN_FUNCTION(evtMsgFmtStr)

EVT_DECLARE_USER_FUNC(evt_msg_fmt_str, -1)

UNKNOWN_FUNCTION(evtMsgFmtInt)
UNKNOWN_FUNCTION(evt_msg_fmt_int)
UNKNOWN_FUNCTION(func_800fdc6c)

CPP_WRAPPER_END()