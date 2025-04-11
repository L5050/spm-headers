#pragma once

#include <common.h>
#include <evt_cmd.h>
#include <spm/evtmgr.h>
#include <spm/npcdrv.h>

CPP_WRAPPER(spm::evt_npc)

UNKNOWN_FUNCTION(_intplGetFloat);
UNKNOWN_FUNCTION(evtNpcNameToPtr);

spm::npcdrv::NPCEntry* evtNpcNameToPtr_NoAssert(spm::evtmgr::EvtEntry* evtEntry, char *name);

// evt_npc_get_position(const char * name, f32& x, f32& y, f32& z)
EVT_DECLARE_USER_FUNC(evt_npc_get_position, 4)

// evt_npc_set_position(const char * instanceName, f32 x, f32 y, f32 z)
EVT_DECLARE_USER_FUNC(evt_npc_set_position, 4)

UNKNOWN_FUNCTION(func_800fe338);
UNKNOWN_FUNCTION(func_800fe404);
UNKNOWN_FUNCTION(func_800fe4e8);
UNKNOWN_FUNCTION(evt_npc_get_rotation);
EVT_DECLARE_USER_FUNC(evt_npc_rotate, 4)
UNKNOWN_FUNCTION(func_800fe760);
UNKNOWN_FUNCTION(func_800fe82c);
EVT_DECLARE_USER_FUNC(func_800fe92c, 4)
UNKNOWN_FUNCTION(func_800fea70);
UNKNOWN_FUNCTION(func_800feb54);
UNKNOWN_FUNCTION(func_800fec04);
UNKNOWN_FUNCTION(func_800fecd0);
UNKNOWN_FUNCTION(func_800fed9c);
UNKNOWN_FUNCTION(func_800fee80);
EVT_UNKNOWN_USER_FUNC(func_800fef30)
UNKNOWN_FUNCTION(func_800feffc);
UNKNOWN_FUNCTION(func_800ff100);
UNKNOWN_FUNCTION(func_800ff1cc);
UNKNOWN_FUNCTION(func_800ff2a8);
UNKNOWN_FUNCTION(func_800ff3ec);
EVT_DECLARE_USER_FUNC(evt_npc_set_rgba, 5);
UNKNOWN_FUNCTION(func_800ff5a4);
UNKNOWN_FUNCTION(func_800ff6f4);
UNKNOWN_FUNCTION(func_800ff86c);
EVT_UNKNOWN_USER_FUNC(func_800ff8f8)
UNKNOWN_FUNCTION(func_800ff9a4);
UNKNOWN_FUNCTION(func_800ffab4);
EVT_DECLARE_USER_FUNC(evt_npc_walk_to, 8)

// evt_npc_jump_to(const char * name, f32 destX, f32 destY, f32 destZ, f32 height, s32 length)
EVT_DECLARE_USER_FUNC(evt_npc_jump_to, 6)

EVT_UNKNOWN_USER_FUNC(evt_npc_arc_to);
UNKNOWN_FUNCTION(func_80100df8);
UNKNOWN_FUNCTION(func_80101328);
UNKNOWN_FUNCTION(func_8010144c);
UNKNOWN_FUNCTION(func_8010159c);
UNKNOWN_FUNCTION(func_801017b8);
UNKNOWN_FUNCTION(func_80101e60);
UNKNOWN_FUNCTION(func_80101f48);
UNKNOWN_FUNCTION(func_80102424);
EVT_UNKNOWN_USER_FUNC(evt_npc_glide_to)

// evt_npc_restart_evt_id(const char * name)
EVT_DECLARE_USER_FUNC(evt_npc_restart_evt_id, 1)

EVT_UNKNOWN_USER_FUNC(evt_npc_get_hp)
UNKNOWN_FUNCTION(evt_npc_get_max_hp);
EVT_UNKNOWN_USER_FUNC(evt_npc_set_hp)

// evt_npc_delete(const char * name)
EVT_DECLARE_USER_FUNC(evt_npc_delete, 1)

//(s32 tribeId, int)
EVT_DECLARE_USER_FUNC(evt_npc_stats_set_up, 2)

// evt_npc_entry(const char * instanceName, const char * animPoseName, s32 instanceId)
EVT_DECLARE_USER_FUNC(evt_npc_entry, 3)


UNKNOWN_FUNCTION(func_80102fe4);
EVT_DECLARE_USER_FUNC(evt_npc_add_flip_part, 1)
EVT_DECLARE_USER_FUNC(evt_npc_set_anim, 3)
UNKNOWN_FUNCTION(func_801031a0);
UNKNOWN_FUNCTION(func_80103268);

// evt_npc_get_cur_anim(const char * name, s32 ret)
EVT_DECLARE_USER_FUNC(evt_npc_get_cur_anim, 2);

UNKNOWN_FUNCTION(evt_npc_search_anim_defs);

// evt_npc_wait_anim_end(const char * npcName, s32 partId)
EVT_DECLARE_USER_FUNC(evt_npc_wait_anim_end, 2)

UNKNOWN_FUNCTION(func_80103574);

// evt_npc_flag8_onoff(const char * instanceName, bool on, u32 mask)
EVT_DECLARE_USER_FUNC(evt_npc_flag8_onoff, 3)

UNKNOWN_FUNCTION(evt_npc_flagC_onoff);
EVT_UNKNOWN_USER_FUNC(evt_npc_flag46C_onoff);
UNKNOWN_FUNCTION(evt_npc_flag10_onoff);
UNKNOWN_FUNCTION(evt_npc_part_flag_onoff);

// evt_npc_animflag_onoff(const char * instanceName, bool on, u32 mask)
EVT_DECLARE_USER_FUNC(evt_npc_animflag_onoff, 3)

UNKNOWN_FUNCTION(func_80103a44);
UNKNOWN_FUNCTION(func_80103b40);
UNKNOWN_FUNCTION(func_80103c24);
UNKNOWN_FUNCTION(func_80103d20);

// evt_npc_set_unitwork(const char * name, s32 idx, s32 ret)
EVT_DECLARE_USER_FUNC(evt_npc_get_unitwork, 3);


// evt_npc_set_unitwork(const char * name, s32 idx, s32 val)
EVT_DECLARE_USER_FUNC(evt_npc_set_unitwork, 3)

UNKNOWN_FUNCTION(evt_npc_get_partswork);
UNKNOWN_FUNCTION(evt_npc_set_partswork);
UNKNOWN_FUNCTION(func_80104174);
UNKNOWN_FUNCTION(func_80104230);
UNKNOWN_FUNCTION(func_80104304);
UNKNOWN_FUNCTION(func_801043c0);
UNKNOWN_FUNCTION(func_80104494);
UNKNOWN_FUNCTION(func_80104508);
UNKNOWN_FUNCTION(func_8010457c);
UNKNOWN_FUNCTION(func_801045ac);
UNKNOWN_FUNCTION(func_801045dc);
UNKNOWN_FUNCTION(func_80104638);

// evt_npc_set_move_mode(const char * name, NPCMoveMode moveMode )
EVT_DECLARE_USER_FUNC(evt_npc_set_move_mode, 2)

UNKNOWN_FUNCTION(func_801046f4);
UNKNOWN_FUNCTION(func_80104750);
UNKNOWN_FUNCTION(func_801047ac);
UNKNOWN_FUNCTION(func_8010480c);
UNKNOWN_FUNCTION(func_8010486c);
UNKNOWN_FUNCTION(func_801048cc);
UNKNOWN_FUNCTION(func_8010495c);
EVT_UNKNOWN_USER_FUNC(func_801049ec)
EVT_UNKNOWN_USER_FUNC(func_80104a3c);
UNKNOWN_FUNCTION(func_80104a94);
UNKNOWN_FUNCTION(func_80104af0);
UNKNOWN_FUNCTION(func_80104b4c);
UNKNOWN_FUNCTION(func_80104ba8);
UNKNOWN_FUNCTION(func_80104c10);

// evt_npc_set_property(const char * instanceName, s32 propertyId, s32 value)
EVT_DECLARE_USER_FUNC(evt_npc_set_property, 3)

UNKNOWN_FUNCTION(modifyPartProperty);

// evt_npc_get_property(const char * instanceName, s32 propertyId, EvtVar ret)
EVT_DECLARE_USER_FUNC(evt_npc_get_property, 3)

/*
    partId -1 updates all parts
*/
// evt_npc_set_property(const char * instanceName, s32 partId, s32 propertyId, s32 value)
EVT_DECLARE_USER_FUNC(evt_npc_modify_part, 4)

UNKNOWN_FUNCTION(func_80105248);
UNKNOWN_FUNCTION(func_801053b4);
UNKNOWN_FUNCTION(func_80105548);
EVT_UNKNOWN_USER_FUNC(evt_npc_wait_flip_finished)
EVT_UNKNOWN_USER_FUNC(evt_npc_finish_flip_instant)
UNKNOWN_FUNCTION(evt_npc_check_3d);
EVT_UNKNOWN_USER_FUNC(evt_npc_flip_to)
EVT_UNKNOWN_USER_FUNC(evt_npc_flip)
UNKNOWN_FUNCTION(func_801057cc);
UNKNOWN_FUNCTION(func_80105828);
UNKNOWN_FUNCTION(func_801058c8);

// evt_npc_get_axis_movement_unit(const char * name, f32& ret)
EVT_DECLARE_USER_FUNC(evt_npc_get_axis_movement_unit, 2)

EVT_DECLARE_USER_FUNC(evt_npc_set_axis_movement_unit, 2)
UNKNOWN_FUNCTION(func_80105a30);
UNKNOWN_FUNCTION(func_80105b00);
EVT_UNKNOWN_USER_FUNC(func_80105b94)
UNKNOWN_FUNCTION(func_80105bdc);
UNKNOWN_FUNCTION(func_8010611c);
UNKNOWN_FUNCTION(func_801061c8);
UNKNOWN_FUNCTION(func_80106260);
UNKNOWN_FUNCTION(func_801062b0);
UNKNOWN_FUNCTION(func_80106300);
UNKNOWN_FUNCTION(evt_read_setup_file);

// evt_npc_entry_from_template(s32 instanceIdOverride, s32 templateId, s32 x, s32 y,
//                             s32 z, &s32 instanceId, &char * instanceName)
EVT_DECLARE_USER_FUNC(evt_npc_entry_from_template, 7)

UNKNOWN_FUNCTION(func_80106904);
UNKNOWN_FUNCTION(someEvtNpcTemplateSpawn2);
UNKNOWN_FUNCTION(evt_npc_spawn_sammer_guy);
UNKNOWN_FUNCTION(func_80106f78);
UNKNOWN_FUNCTION(func_80106ffc);
UNKNOWN_FUNCTION(func_80107044);
UNKNOWN_FUNCTION(func_801070a4);
UNKNOWN_FUNCTION(func_8010712c);
UNKNOWN_FUNCTION(func_80107190);
UNKNOWN_FUNCTION(func_801071f4);
EVT_UNKNOWN_USER_FUNC(func_801072a4);
UNKNOWN_FUNCTION(func_801072f8);
UNKNOWN_FUNCTION(evt_npc_get_coin_drop_count);
UNKNOWN_FUNCTION(evt_npc_get_drop_item_type);

EVT_DECLARE_USER_FUNC(evt_npc_id_to_name, 2)

UNKNOWN_FUNCTION(func_801075b8);
UNKNOWN_FUNCTION(func_80107600);
UNKNOWN_FUNCTION(func_80107648);
UNKNOWN_FUNCTION(evt_npc_get_timer_start);
UNKNOWN_FUNCTION(func_8010781c);
UNKNOWN_FUNCTION(func_80107910);
UNKNOWN_FUNCTION(func_801079f0);
UNKNOWN_FUNCTION(func_80107a5c);
UNKNOWN_FUNCTION(func_80107ac8);
UNKNOWN_FUNCTION(func_80107b34);
UNKNOWN_FUNCTION(func_80107b80);


// evt_npc_set_camid(const char * name, s32 camId)
EVT_DECLARE_USER_FUNC(evt_npc_set_camid, 2)

EVT_DECLARE_USER_FUNC(func_80107c38, 2)
EVT_DECLARE_USER_FUNC(func_80107cfc, 0)
EVT_DECLARE_USER_FUNC(func_80107d20, 0)
UNKNOWN_FUNCTION(func_80107d44);
UNKNOWN_FUNCTION(func_80107d90);
UNKNOWN_FUNCTION(func_80107ddc);
UNKNOWN_FUNCTION(func_80107e40);
UNKNOWN_FUNCTION(func_80107ec0);
UNKNOWN_FUNCTION(func_80107f78);
UNKNOWN_FUNCTION(func_80108054);
EVT_DECLARE_USER_FUNC(func_80108194, 2)
UNKNOWN_FUNCTION(func_80108224);
UNKNOWN_FUNCTION(func_801082f0);
UNKNOWN_FUNCTION(func_801083d8);
UNKNOWN_FUNCTION(func_80108440);
UNKNOWN_FUNCTION(func_801084fc);
UNKNOWN_FUNCTION(func_801085e4);
EVT_UNKNOWN_USER_FUNC(evt_npc_get_active_count)
UNKNOWN_FUNCTION(func_8010874c);
UNKNOWN_FUNCTION(func_801087d8);
UNKNOWN_FUNCTION(func_80108930);
UNKNOWN_FUNCTION(func_801089d0);
EVT_DECLARE_USER_FUNC(evt_npc_wait_axis_movement_unit_end, 1)
UNKNOWN_FUNCTION(func_80108a2c);
UNKNOWN_FUNCTION(func_80108ac0);
UNKNOWN_FUNCTION(func_80108b8c);
UNKNOWN_FUNCTION(func_80108bd4);
UNKNOWN_FUNCTION(func_80108cc0);

// evt_npc_set_part_attack_power(const char * name, npcPartIndex, attackPower)
EVT_DECLARE_USER_FUNC(evt_npc_set_part_attack_power, 3);

UNKNOWN_FUNCTION(func_80108ebc);
UNKNOWN_FUNCTION(func_80108f50);
UNKNOWN_FUNCTION(func_80108fe4);
UNKNOWN_FUNCTION(func_80109078);
UNKNOWN_FUNCTION(func_801090f4);
UNKNOWN_FUNCTION(func_801091e0);
UNKNOWN_FUNCTION(func_80109250);
UNKNOWN_FUNCTION(func_801092c0);
UNKNOWN_FUNCTION(func_80109370);

UNKNOWN_FUNCTION(func_80109434);
UNKNOWN_FUNCTION(func_801094b4);
UNKNOWN_FUNCTION(func_80109548);
UNKNOWN_FUNCTION(func_801095b8);
UNKNOWN_FUNCTION(func_80109628);
UNKNOWN_FUNCTION(func_80109698);
UNKNOWN_FUNCTION(func_801097b0);
UNKNOWN_FUNCTION(func_8010982c);
UNKNOWN_FUNCTION(marioLuigiNpcDispCb);
UNKNOWN_FUNCTION(func_80109980);
UNKNOWN_FUNCTION(func_80109a00);
UNKNOWN_FUNCTION(func_80109b10);
UNKNOWN_FUNCTION(func_80109c20);
UNKNOWN_FUNCTION(func_80109ca0);
UNKNOWN_FUNCTION(func_80109d20);
UNKNOWN_FUNCTION(evt_npc_set_disp_callback);
UNKNOWN_FUNCTION(func_80109e18);
UNKNOWN_FUNCTION(func_80109e94);
UNKNOWN_FUNCTION(func_80109f18);
UNKNOWN_FUNCTION(func_8010a008);
UNKNOWN_FUNCTION(func_8010a060);
UNKNOWN_FUNCTION(func_8010a0e8);
UNKNOWN_FUNCTION(func_8010a148);
UNKNOWN_FUNCTION(func_8010a1c4);
UNKNOWN_FUNCTION(func_8010a1e8);
UNKNOWN_FUNCTION(func_8010a298);
UNKNOWN_FUNCTION(evt_npc_try_catch_card);
UNKNOWN_FUNCTION(func_8010a37c);

// evt_npc_wait_for(const char * name, s32 timeInMiliseconds)
EVT_DECLARE_USER_FUNC(evt_npc_wait_for, 2)

UNKNOWN_FUNCTION(func_8010a4ec);
UNKNOWN_FUNCTION(func_8010a5ec);
UNKNOWN_FUNCTION(func_8010a788);
UNKNOWN_FUNCTION(func_8010a808);

// evt_npc_teleport_effect(bool appearDisappear, const char * instanceName)
EVT_DECLARE_USER_FUNC(evt_npc_teleport_effect, 2)

UNKNOWN_FUNCTION(func_8010aadc);
UNKNOWN_FUNCTION(func_8010ab58);
UNKNOWN_FUNCTION(func_8010abd4);
UNKNOWN_FUNCTION(func_8010ac50);
UNKNOWN_FUNCTION(func_8010b550);
UNKNOWN_FUNCTION(func_8010bc44);
UNKNOWN_FUNCTION(func_8010bcf0);
UNKNOWN_FUNCTION(evt_npc_agb_async);

// evt_npc_tribe_agb_async(s32 tribeId)
EVT_DECLARE_USER_FUNC(evt_npc_tribe_agb_async, 1)

UNKNOWN_FUNCTION(func_8010bf5c);
UNKNOWN_FUNCTION(func_8010bfa8);
UNKNOWN_FUNCTION(evt_npc_handle_hit_xp);
UNKNOWN_FUNCTION(func_8010c088);
UNKNOWN_FUNCTION(func_8010c110);
UNKNOWN_FUNCTION(func_8010c16c);
UNKNOWN_FUNCTION(func_8010c1e8);
UNKNOWN_FUNCTION(func_8010c264);
UNKNOWN_FUNCTION(func_8010c2e0);
UNKNOWN_FUNCTION(func_8010c35c);
UNKNOWN_FUNCTION(func_8010c3e8);
UNKNOWN_FUNCTION(func_8010c440);
EVT_UNKNOWN_USER_FUNC(evt_npc_dimen_determine_move_pos);

EVT_UNKNOWN_USER_FUNC(func_802154fc)
EVT_UNKNOWN_USER_FUNC(func_80215514)
EVT_UNKNOWN_USER_FUNC(func_80215540)
EVT_UNKNOWN_USER_FUNC(func_80215f44)

EVT_DECLARE_USER_FUNC(bomb_damage_mario, 0)

EVT_UNKNOWN_USER_FUNC(func_80224804)
EVT_UNKNOWN_USER_FUNC(func_80224874)
EVT_UNKNOWN_USER_FUNC(func_80225380)

// evt_npc_sammer_display_count(s32 count)
EVT_DECLARE_USER_FUNC(evt_npc_sammer_display_count, 1)

CPP_WRAPPER_END()
