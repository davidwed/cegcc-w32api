#ifndef _EDEVDEFS_H
#define _EDEVDEFS_H
#if __GNUC__ >= 3
#pragma GCC system_header
#endif

#define ED_TOP 0x00000001
#define ED_MIDDLE 0x00000002
#define ED_BOTTOM 0x00000004
#define ED_LEFT 0x00000100
#define ED_CENTER 0x00000200
#define ED_RIGHT 0x00000400
#define ED_DEVCAP_CAN_RECORD 0x00001001
#define ED_DEVCAP_CAN_RECORD_STROBE 0x00001002
#define ED_DEVCAP_HAS_AUDIO 0x00001003
#define ED_DEVCAP_HAS_VIDEO  0x00001004
#define ED_DEVCAP_USES_FILES 0x00001005
#define ED_DEVCAP_CAN_SAVE 0x00001006
#define ED_DEVCAP_DEVICE_TYPE 0x00001007
#define ED_DEVTYPE_VCR 0x00001008
#define ED_DEVTYPE_LASERDISK 0x00001009
#define ED_DEVTYPE_ATR 0x0000100A
#define ED_DEVTYPE_DDR 0x0000100B
#define ED_DEVTYPE_ROUTER 0x0000100C
#define ED_DEVTYPE_KEYER 0x0000100D
#define ED_DEVTYPE_MIXER_VIDEO 0x000010OE
#define ED_DEVTYPE_DVE 0x000010OF
#define ED_DEVTYPE_WIPEGEN 0x00001010
#define ED_DEVTYPE_MIXER_AUDIO 0x00001011
#define ED_DEVTYPE_CG 0x00001012
#define ED_DEVTYPE_TBC 0x00001013
#define ED_DEVTYPE_TCG 0x00001014
#define ED_DEVTYPE_GPI 0x00001015
#define ED_DEVTYPE_JOYSTICK 0x00001016
#define ED_DEVTYPE_KEYBOARD 0x00001017
#define ED_DEVCAP_EXTERNAL_DEVICE_ID 0x00001018
#define ED_DEVCAP_TIMECODE_READ 0x00001019
#define ED_DEVCAP_TIMECODE_WRITE 0x0000101A
#define ED_DEVCAP_CTLTRK_READ 0x0000101B
#define ED_DEVCAP_INDEX_READ 0x0000101C
#define ED_DEVCAP_PREROLL 0x0000101D
#define ED_DEVCAP_POSTROLL 0x0000101E
#define ED_DEVCAP_SYNC_ACCURACY 0x0000101F
#define ED_SYNCACC_PRECISE 0x00001020
#define ED_SYNCACC_FRAME 0x00001021
#define ED_SYNCACC_ROUGH 0x00001022
#define ED_DEVCAP_NORMAL_RATE 0x00001023
#define ED_RATE_24 0x00001024
#define ED_RATE_25 0x00001025
#define ED_RATE_2997 0x00001026
#define ED_RATE_30 0x00001027
#define ED_DEVCAP_CAN_PREVIEW 0x00001028
#define ED_DEVCAP_CAN_MONITOR_SOURCES 0x00001029
#define ED_DEVCAP_CAN_TEST 0x0000102A
#define ED_DEVCAP_VIDEO_INPUTS 0x0000102B
#define ED_DEVCAP_AUDIO_INPUTS 0x0000102C
#define ED_DEVCAP_NEEDS_CALIBRATING 0x0000102D
#define ED_DEVCAP_SEEK_TYPE 0x0000102E
#define ED_SEEK_PERFECT 0x0000102F
#define ED_SEEK_FAST 0x00001030
#define ED_SEEK_SLOW 0x00001031
#define ED_POWER_ON 0x00001032
#define ED_POWER_OFF 0x00001033
#define ED_POWER_STANDBY 0x00001034
#define ED_ACTIVE 0x00001035
#define ED_INACTIVE 0x00001036
#define ED_ALL 0x00001037
#define ED_TEST 0x00001038
#define ED_TRANSCAP_CAN_EJECT 0x00001064
#define ED_TRANSCAP_CAN_BUMP_PLAY 0x00001065
#define ED_TRANSCAP_CAN_PLAY_BACKWARDS 0x00001066
#define ED_TRANSCAP_CAN_SET_EE 0x00001067
#define ED_TRANSCAP_CAN_SET_PB 0x00001068
#define ED_TRANSCAP_CAN_DELAY_VIDEO_IN 0x00001069
#define ED_TRANSCAP_CAN_DELAY_VIDEO_OUT 0x0000106A
#define ED_TRANSCAP_CAN_DELAY_AUDIO_IN 0x0000106B
#define ED_TRANSCAP_CAN_DELAY_AUDIO_OUT 0x0000106C
#define ED_TRANSCAP_FWD_VARIABLE_MAX 0x0000106D
#define ED_TRANSCAP_REV_VARIABLE_MAX 0x0000106E
#define ED_TRANSCAP_NUM_AUDIO_TRACKS 0x0000106F
#define ED_TRANSCAP_LTC_TRACK 0x00001070
#define ED_TRANSCAP_NEEDS_TBC 0x00001071
#define ED_TRANSCAP_NEEDS_CUEING 0x00001072
#define ED_TRANSCAP_CAN_INSERT 0x00001073
#define ED_TRANSCAP_CAN_ASSEMBLE 0x00001074
#define ED_TRANSCAP_FIELD_STEP 0x00001075
#define ED_TRANSCAP_CLOCK_INC_RATE 0x00001076
#define ED_TRANSCAP_CAN_DETECT_LENGTH 0x00001077
#define ED_TRANSCAP_CAN_FREEZE 0x00001078
#define ED_TRANSCAP_HAS_TUNER 0x00001079
#define ED_TRANSCAP_HAS_TIMER 0x0000107A
#define ED_TRANSCAP_HAS_CLOCK 0x0000107B
#define ED_MEDIA_SPIN_UP 0x00001082
#define ED_MEDIA_SPIN_DOWN 0x00001083
#define ED_MEDIA_UNLOAD 0x00001084
#define ED_MODE_PLAY 0x000010C8
#define ED_MODE_STOP 0x000010C9
#define ED_MODE_FREEZE 0x000010CA
#define ED_MODE_THAW 0x000010CB
#define ED_MODE_FF 0x000010CC
#define ED_MODE_REW 0x000010CD
#define ED_MODE_RECORD 0x000010CE
#define ED_MODE_RECORD_STROBE 0x000010CF
#define ED_MODE_STEP 0x000010D0
#define ED_MODE_STEP_FWD 0x000010D0
#define ED_MODE_SHUTTLE 0x000010D1
#define ED_MODE_EDIT_CUE 0x000010D2
#define ED_MODE_VAR_SPEED 0x000010D3
#define ED_MODE_PERFORM 0x000010D4
#define ED_MODE_LINK_ON 0x00001118
#define ED_MODE_LINK_OFF 0x00001119
#define ED_TCG_TIMECODE_TYPE 0x00001190
#define ED_TCG_SMPTE_LTC 0x00001191
#define ED_TCG_SMPTE_VITC 0x00001192
#define ED_TCG_MIDI_QF 0x00001193
#define ED_TCG_MIDI_FULL 0x00001194
#define ED_TCG_FRAMERATE 0x00001195
#define ED_FORMAT_SMPTE_30 0x00001196
#define ED_FORMAT_SMPTE_30DROP 0x00001197
#define ED_FORMAT_SMPTE_25 0x00001198
#define ED_FORMAT_SMPTE_24 0x00001199
#define ED_TCG_SYNC_SOURCE 0x0000119A
#define ED_TCG_VIDEO 0x0000119B
#define ED_TCG_READER 0x0000119C
#define ED_TCG_FREE 0x0000119D
#define ED_TCG_REFERENCE_SOURCE 0x0000119E
#define ED_TCR_SOURCE 0x000011A0
#define ED_TCR_LTC 0x000011A1
#define ED_TCR_VITC 0x000011A2
#define ED_TCR_CT 0x000011A3
#define ED_TCR_FTC 0x000011A4
#define ED_TCR_LAST_VALUE 0x000011A5
#define ED_TCD_SOURCE 0x000011A6
#define ED_TCR 0x000011A7
#define ED_TCG 0x000011A8
#define ED_TCD_SIZE 0x000011A9
#define ED_SMALL 0x000011AA
#define ED_MED 0x000011AB
#define ED_LARGE 0x000011AC
#define ED_TCD_POSITION 0x000011AD
#define ED_TCD_INTENSITY 0x000011B4
#define ED_HIGH 0x000011B5
#define ED_LOW 0x000011B6
#define ED_TCD_TRANSPARENCY 0x000011B7
#define ED_TCD_INVERT 0x000011B8
#define ED_MODE 0x000011F4
#define ED_ERROR 0x000011F5
#define ED_LOCAL 0x000011F6
#define ED_RECORD_INHIBIT 0x000011F7
#define ED_SERVO_LOCK 0x000011F8
#define ED_MEDIA_PRESENT 0x000011F9
#define ED_MEDIA_LENGTH 0x000011FA
#define ED_MEDIA_SIZE 0x000011FB
#define ED_MEDIA_TRACK_COUNT 0x000011FC
#define ED_MEDIA_TRACK_LENGTH 0x000011FD
#define ED_MEDIA_SIDE 0x000011FE
#define ED_MEDIA_TYPE 0x000011FF
#define ED_MEDIA_VHS 0x00001200
#define ED_MEDIA_SVHS 0x00001201
#define ED_MEDIA_HI8 0x00001202
#define ED_MEDIA_UMATIC 0x00001203
#define ED_MEDIA_DVC 0x00001204
#define ED_MEDIA_1_INCH 0x00001205
#define ED_MEDIA_D1 0x00001206
#define ED_MEDIA_D2 0x00001207
#define ED_MEDIA_D3 0x00001208
#define ED_MEDIA_D5 0x00001209
#define ED_MEDIA_DBETA 0x0000120A
#define ED_MEDIA_BETA 0x0000120B
#define ED_MEDIA_8MM 0x0000120C
#define ED_MEDIA_DDR 0x0000120D
#define ED_MEDIA_OTHER 0x0000120E
#define ED_MEDIA_CLV 0x0000120F
#define ED_MEDIA_CAV 0x00001210
#define ED_MEDIA_POSITION 0x00001211
#define ED_LINK_MODE 0x00001212
#define ED_TRANSBASIC_TIME_FORMAT 0x0000121C
#define ED_FORMAT_MILLISECONDS 0x0000121D
#define ED_FORMAT_FRAMES 0x0000121E
#define ED_FORMAT_REFERENCE_TIME 0x0000121F
#define ED_FORMAT_HMSF 0x00001223
#define ED_FORMAT_TMSF 0x00001224
#define ED_TRANSBASIC_TIME_REFERENCE 0x00001225
#define ED_TIMEREF_TIMECODE 0x00001226
#define ED_TIMEREF_CONTROL_TRACK 0x00001227
#define ED_TIMEREF_INDEX 0x00001228
#define ED_TRANSBASIC_SUPERIMPOSE 0x00001229
#define ED_TRANSBASIC_END_STOP_ACTION 0x0000122A
#define ED_TRANSBASIC_RECORD_FORMAT 0x0000122B
#define ED_RECORD_FORMAT_SP 0x0000122C
#define ED_RECORD_FORMAT_LP 0x0000122D
#define ED_RECORD_FORMAT_EP 0x0000122E
#define ED_TRANSBASIC_STEP_COUNT 0x0000122F
#define ED_TRANSBASIC_STEP_UNIT 0x00001230
#define ED_STEP_FIELD 0x00001231
#define ED_STEP_FRAME 0x00001232
#define ED_STEP_3_2 0x00001233
#define ED_TRANSBASIC_PREROLL 0x00001234
#define ED_TRANSBASIC_RECPREROLL 0x00001235
#define ED_TRANSBASIC_POSTROLL 0x00001236
#define ED_TRANSBASIC_EDIT_DELAY 0x00001237
#define ED_TRANSBASIC_PLAYTC_DELAY 0x00001238
#define ED_TRANSBASIC_RECTC_DELAY 0x00001239
#define ED_TRANSBASIC_EDIT_FIELD 0x0000123A
#define ED_TRANSBASIC_FRAME_SERVO 0x0000123B
#define ED_TRANSBASIC_CF_SERVO 0x0000123C
#define ED_TRANSBASIC_SERVO_REF 0x0000123D
#define ED_REF_EXTERNAL 0x0000123E
#define ED_REF_INPUT 0x0000123F
#define ED_REF_INTERNAL 0x00001240
#define ED_REF_AUTO 0x00001241
#define ED_TRANSBASIC_WARN_GL 0x00001242
#define ED_TRANSBASIC_SET_TRACKING 0x00001243
#define ED_TRACKING_PLUS 0x00001244
#define ED_TRACKING_MINUS 0x00001245
#define ED_TRACKING_RESET 0x00001246
#define ED_TRANSBASIC_SET_FREEZE_TIMEOUT 0x00001247
#define ED_TRANSBASIC_VOLUME_NAME 0x00001248
#define ED_TRANSBASIC_BALLISTIC_1 0x00001249
#define ED_TRANSBASIC_BALLISTIC_2 0x0000124A
#define ED_TRANSBASIC_BALLISTIC_3 0x0000124B
#define ED_TRANSBASIC_BALLISTIC_4 0x0000124C
#define ED_TRANSBASIC_BALLISTIC_5 0x0000124D
#define ED_TRANSBASIC_BALLISTIC_6 0x0000124E
#define ED_TRANSBASIC_BALLISTIC_7 0x0000124F
#define ED_TRANSBASIC_BALLISTIC_8 0x00001250
#define ED_TRANSBASIC_BALLISTIC_9 0x00001251
#define ED_TRANSBASIC_BALLISTIC_10 0x00001252
#define ED_TRANSBASIC_BALLISTIC_11 0x00001253
#define ED_TRANSBASIC_BALLISTIC_12 0x00001254
#define ED_TRANSBASIC_BALLISTIC_13 0x00001255
#define ED_TRANSBASIC_BALLISTIC_14 0x00001256
#define ED_TRANSBASIC_BALLISTIC_15 0x00001257
#define ED_TRANSBASIC_BALLISTIC_16 0x00001258
#define ED_TRANSBASIC_BALLISTIC_17 0x00001259
#define ED_TRANSBASIC_BALLISTIC_18 0x0000125A
#define ED_TRANSBASIC_BALLISTIC_19 0x0000125B
#define ED_TRANSBASIC_BALLISTIC_20 0x0000125C
#define ED_TRANSBASIC_SETCLOCK 0x0000125D
#define ED_TRANSBASIC_SET_COUNTER_FORMAT 0x0000125E
#define ED_TRANSBASIC_SET_COUNTER_VALUE 0x0000125F
#define ED_TRANSBASIC_SETTUNER_CH_UP 0x00001260
#define ED_TRANSBASIC_SETTUNER_CH_DN 0x00001261
#define ED_TRANSBASIC_SETTUNER_SK_UP 0x00001262
#define ED_TRANSBASIC_SETTUNER_SK_DN 0x00001263
#define ED_TRANSBASIC_SETTUNER_CH 0x00001264
#define ED_TRANSBASIC_SETTUNER_NUM 0x00001265
#define ED_TRANSBASIC_SETTIMER_EVENT 0x00001266
#define ED_TRANSBASIC_SETTIMER_STARTDAY 0x00001267
#define ED_TRANSBASIC_SETTIMER_STARTTIME 0x00001268
#define ED_TRANSBASIC_SETTIMER_STOPDAY 0x00001269
#define ED_TRANSBASIC_SETTIMER_STOPTIME 0x0000126A
#define ED_TRANSVIDEO_SET_OUTPUT 0x00001276
#define ED_E2E 0x00001277
#define ED_PLAYBACK 0x00001278
#define ED_OFF 0x00001279
#define ED_TRANSVIDEO_SET_SOURCE 0x0000127A
#define ED_TRANSAUDIO_ENABLE_OUTPUT 0x00001280
#define ED_TRANSAUDIO_ENABLE_RECORD 0x00001282
#define ED_TRANSAUDIO_ENABLE_SELSYNC 0x00001283
#define ED_TRANSAUDIO_SET_SOURCE 0x00001284
#define ED_TRANSAUDIO_SET_MONITOR 0x00001285
#define ED_INVALID 0x0000128C
#define ED_EXECUTING 0x0000128D
#define ED_REGISTER 0x0000128E
#define ED_DELETE 0x0000128F
#define ED_EDIT_HEVENT 0x00001290
#define ED_EDIT_TEST 0x00001291
#define ED_EDIT_IMMEDIATE 0x00001292
#define ED_EDIT_MODE 0x00001293
#define ED_EDIT_MODE_ASSEMBLE 0x00001294
#define ED_EDIT_MODE_INSERT 0x00001295
#define ED_EDIT_MODE_CRASH_RECORD 0x00001296
#define ED_EDIT_MODE_BOOKMARK_TIME 0x00001297
#define ED_EDIT_MODE_BOOKMARK_CHAPTER 0x00001298
#define ED_EDIT_MASTER 0x0000129A
#define ED_EDIT_TRACK 0x0000129B
#define ED_EDIT_SRC_INPOINT 0x0000129C
#define ED_EDIT_SRC_OUTPOINT 0x0000129D
#define ED_EDIT_REC_INPOINT 0x0000129E
#define ED_EDIT_REC_OUTPOINT 0x0000129F
#define ED_EDIT_REHEARSE_MODE 0x000012A0
#define ED_EDIT_BVB 0x000012A1
#define ED_EDIT_VBV 0x000012A2
#define ED_EDIT_VVV 0x000012A3
#define ED_EDIT_PERFORM 0x000012A4
#define ED_EDIT_ABORT 0x000012A5
#define ED_EDIT_TIMEOUT 0x000012A6
#define ED_EDIT_SEEK 0x000012A7
#define ED_EDIT_SEEK_EDIT_IN 0x000012A9
#define ED_EDIT_SEEK_EDIT_OUT 0x000012AA
#define ED_EDIT_SEEK_PREROLL 0x000012AB
#define ED_EDIT_SEEK_PREROLL_CT 0x000012AC
#define ED_EDIT_SEEK_BOOKMARK 0x000012AD
#define ED_EDIT_OFFSET 0x000012AE
#define ED_ERR_DEVICE_NOT_READY 0x000012BC
#define ED_TRANSCAP_FWD_VARIABLE_MIN 0x00001320
#define ED_TRANSCAP_REV_VARIABLE_MIN 0x00001321
#define ED_TRANSCAP_FWD_SHUTTLE_MAX 0x00001322
#define ED_TRANSCAP_FWD_SHUTTLE_MIN 0x00001323
#define ED_TRANSCAP_REV_SHUTTLE_MAX 0x00001324
#define ED_TRANSCAP_REV_SHUTTLE_MIN 0x00001325
#define ED_TRANSCAP_MULTIPLE_EDITS 0x00001326
#define ED_TRANSCAP_IS_MASTER 0x00001327
#define ED_MODE_RECORD_FREEZE 0x00001328
#define ED_MODE_STEP_REV 0x00001329
#define ED_MODE_NOTIFY_ENABLE 0x0000132A
#define ED_MODE_NOTIFY_DISABLE 0x0000132B
#define ED_MODE_SHOT_SEARCH 0x0000132C
#define ED_MEDIA_SX 0x0000132D
#define ED_TRANSCAP_HAS_DT 0x0000132E
#define ED_EDIT_PREREAD 0x0000132F
#define ED_AUDIO_1 0x00000001
#define ED_AUDIO_2 0x00000002
#define ED_AUDIO_3 0x00000004
#define ED_AUDIO_4 0x00000008
#define ED_AUDIO_5 0x00000010
#define ED_AUDIO_6 0x00000020
#define ED_AUDIO_7 0x00000040
#define ED_AUDIO_8 0x00000080
#define ED_AUDIO_9 0x00000100
#define ED_AUDIO_10 0x00000200
#define ED_AUDIO_11 0x00000400
#define ED_AUDIO_12 0x00000800
#define ED_AUDIO_13 0x00001000
#define ED_AUDIO_14 0x00002000
#define ED_AUDIO_15 0x00004000
#define ED_AUDIO_16 0x00008000
#define ED_AUDIO_17 0x00010000
#define ED_AUDIO_18 0x00020000
#define ED_AUDIO_19 0x00040000
#define ED_AUDIO_20 0x00080000
#define ED_AUDIO_21 0x00100000
#define ED_AUDIO_22 0x00200000
#define ED_AUDIO_23 0x00400000
#define ED_AUDIO_24 0x00800000
#define ED_AUDIO_ALL 0x10000000
#define ED_VIDEO 0x02000000
#define DEV_PORT_SIM 0x00000001
#define DEV_PORT_COM1 0x00000002
#define DEV_PORT_COM2 0x00000003
#define DEV_PORT_COM3 0x00000004
#define DEV_PORT_COM4 0x00000005
#define DEV_PORT_DIAQ 0x00000006
#define DEV_PORT_ARTI 0x00000007
#define DEV_PORT_1394 0x00000008
#define DEV_PORT_USB 0x00000009
#define DEV_PORT_MIN DEV_PORT_SIM

#endif