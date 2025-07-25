/*
    Revolution SDK WPAD library
*/

#pragma once

#include <common.h>

CPP_WRAPPER(wii::wpad)

#define WPAD_BTN_NONE 0x0
#define WPAD_BTN_LEFT 0x1
#define WPAD_BTN_RIGHT 0x2
#define WPAD_BTN_DOWN 0x4
#define WPAD_BTN_UP 0x8
#define WPAD_BTN_PLUS 0x10
#define WPAD_BTN_2 0x100
#define WPAD_BTN_1 0x200
#define WPAD_BTN_B 0x400
#define WPAD_BTN_A 0x800
#define WPAD_BTN_MINUS 0x1000
#define WPAD_BTN_Z 0x2000
#define WPAD_BTN_C 0x4000
#define WPAD_BTN_HOME 0x8000
#define WPAD_BTN_REPEAT 0x80000000

typedef void * (WPADAlloc)(u32 size);
typedef bool (WPADFree)(void * ptr);

UNKNOWN_FUNCTION(noAlloc)
UNKNOWN_FUNCTION(noFree)
// OnShutdown
UNKNOWN_FUNCTION(WPADiSendData)
UNKNOWN_FUNCTION(WPADiRadioSensitivity)
UNKNOWN_FUNCTION(IsControllerDataChanged)
UNKNOWN_FUNCTION(CheckButtonCombination)
UNKNOWN_FUNCTION(WPADiCheckContInputs)
UNKNOWN_FUNCTION(WPADiManageHandler)
UNKNOWN_FUNCTION(WPADiManageHandler0)
UNKNOWN_FUNCTION(__ClearControlBlock)
UNKNOWN_FUNCTION(WPADiInitSub)
UNKNOWN_FUNCTION(WPADInit)
UNKNOWN_FUNCTION(WPADStartSimpleSync)
UNKNOWN_FUNCTION(WPADStopSimpleSync)
UNKNOWN_FUNCTION(WPADSetSyncDeviceCallback)
void WPADRegisterAllocator(WPADAlloc * alloc, WPADFree * free);
UNKNOWN_FUNCTION(WPADGetStatus)
UNKNOWN_FUNCTION(WPADGetRadioSensitivity)
UNKNOWN_FUNCTION(WPADGetSensorBarPosition)
UNKNOWN_FUNCTION(setupCallback)
UNKNOWN_FUNCTION(abortConnCallback)
UNKNOWN_FUNCTION(firmwareCheckCallback)
UNKNOWN_FUNCTION(WPADiRetrieveChannel)
UNKNOWN_FUNCTION(WPADiConnCallback)
UNKNOWN_FUNCTION(WPADiRecvCallback)
UNKNOWN_FUNCTION(WPADGetAccGravityUnit)
UNKNOWN_FUNCTION(CloseCallback)
UNKNOWN_FUNCTION(WPADDisconnect)
void WPADSetAutoSleepTime(u8 minutes);
UNKNOWN_FUNCTION(WPADProbe)
UNKNOWN_FUNCTION(WPADSetSamplingCallback)
UNKNOWN_FUNCTION(WPADSetConnectCallback)
UNKNOWN_FUNCTION(WPADSetExtensionCallback)
UNKNOWN_FUNCTION(WPADGetDataFormat)
UNKNOWN_FUNCTION(WPADSetDataFormat)
UNKNOWN_FUNCTION(__infoCallback)
UNKNOWN_FUNCTION(WPADGetInfoAsync)
void WPADControlMotor(s32 controller, u32 onOff);
UNKNOWN_FUNCTION(WPADEnableMotor)
bool WPADIsMotorEnabled();
UNKNOWN_FUNCTION(WPADControlLed)
UNKNOWN_FUNCTION(WPADSaveConfig)
UNKNOWN_FUNCTION(WPADRead)
UNKNOWN_FUNCTION(WPADSetAutoSamplingBuf)
UNKNOWN_FUNCTION(WPADiExcludeButton)
UNKNOWN_FUNCTION(WPADiCopyOut)
UNKNOWN_FUNCTION(WPADIsSpeakerEnabled)
UNKNOWN_FUNCTION(WPADControlSpeaker)
UNKNOWN_FUNCTION(WPADGetSpeakerVolume)
UNKNOWN_FUNCTION(WPADSetSpeakerVolume)
UNKNOWN_FUNCTION(IsBusyStream)
UNKNOWN_FUNCTION(WPADCanSendStreamData)
UNKNOWN_FUNCTION(WPADSendStreamData)
UNKNOWN_FUNCTION(WPADGetDpdSensitivity)
bool WPADIsDpdEnabled(s32 controller);
UNKNOWN_FUNCTION(__dpdCb)
UNKNOWN_FUNCTION(WPADControlDpd)
UNKNOWN_FUNCTION(__SendData)
UNKNOWN_FUNCTION(WPADiSendSetReportType)
UNKNOWN_FUNCTION(WPADiSendWriteDataCmd)
UNKNOWN_FUNCTION(WPADiSendWriteData)
UNKNOWN_FUNCTION(WPADiSendReadData)
UNKNOWN_FUNCTION(WPADiClearQueue)
UNKNOWN_FUNCTION(abortInitExtension)
UNKNOWN_FUNCTION(getDevConfig)
UNKNOWN_FUNCTION(getExtConfig)
UNKNOWN_FUNCTION(getExtType)
UNKNOWN_FUNCTION(getGameInfo)
UNKNOWN_FUNCTION(WPADiHIDParser)
UNKNOWN_FUNCTION(__a1_20_status_report)
UNKNOWN_FUNCTION(__a1_21_user_data)
UNKNOWN_FUNCTION(__a1_22_ack)
UNKNOWN_FUNCTION(__parse_dpd_data)
UNKNOWN_FUNCTION(__a1_30_data_type)
UNKNOWN_FUNCTION(__a1_31_data_type)
UNKNOWN_FUNCTION(__a1_32_data_type)
UNKNOWN_FUNCTION(__a1_33_data_type)
UNKNOWN_FUNCTION(__a1_34_data_type)
UNKNOWN_FUNCTION(__a1_35_data_type)
UNKNOWN_FUNCTION(__a1_36_data_type)
UNKNOWN_FUNCTION(__a1_37_data_type)
UNKNOWN_FUNCTION(__a1_3d_data_type)
UNKNOWN_FUNCTION(__a1_3e_data_type)
UNKNOWN_FUNCTION(__a1_3f_data_type)
UNKNOWN_FUNCTION(__a1_unused_report)
UNKNOWN_FUNCTION(WPADiCreateKey)
UNKNOWN_FUNCTION(WPADiCreateKeyFor3rd)
UNKNOWN_FUNCTION(WPADiDecode)
UNKNOWN_FUNCTION(DEBUGPrint)


CPP_WRAPPER_END()
