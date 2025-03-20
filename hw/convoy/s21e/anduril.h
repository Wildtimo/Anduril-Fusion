// Mateminco MT35 Mini / Astrolux  FT03 (modded for convoy s21e 8/6amp fet)
// Copyright (C) 2022-2023 (original author TBD), Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "convoy/s21e/hwdef.h"

// the button lights up
#define USE_INDICATOR_LED
// the button is visible while main LEDs are on
#define USE_INDICATOR_LED_WHILE_RAMPING

#define INDICATOR_LED_DEFAULT_MODE ((3<<2) + 1)

#define RAMP_SIZE 150


// level_calc.py log 2 150 7135 1 1 120 FET 1 10 2000 (PWM1 was done by hand later)
#define PWM1_LEVELS 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,46,48,50,52,55,57,60,62,65,67,70,73,76,79,82,85,88,91,95,98,102,105,109,113,116,120,124,128,133,137,141,146,150,155,159,164,169,174,179,185,190,195,201,206,212,218,224,230,236,242,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,10,11,12,14,15,17,19,21,23,25,27,29,31,34,37,39,42,45,49,52,56,59,63,67,72,76,81,86,92,98,103,110,116,123,131,138,146,155,164,173,183,194,205,216,229,241,255



#define DEFAULT_LEVEL       95
#define MAX_1x7135          52
#define HALFSPEED_LEVEL     20
#define QUARTERSPEED_LEVEL  10

#define RAMP_SMOOTH_FLOOR    1
#define RAMP_SMOOTH_CEIL     130
// 15 45 75 [95] 125
#define RAMP_DISCRETE_FLOOR  15
#define RAMP_DISCRETE_CEIL   125
#define RAMP_DISCRETE_STEPS  5


#define SIMPLE_UI_FLOOR  20
#define SIMPLE_UI_CEIL   100
#define SIMPLE_UI_STEPS  3

// this light should be fine running a bit hotter than most
#undef DEFAULT_THERM_CEIL
#define DEFAULT_THERM_CEIL 50

// stop panicking at ~40% power
#define THERM_FASTER_LEVEL 120
#define MIN_THERM_STEPDOWN 95 // ~600 lumens
#define THERM_RESPONSE_MAGNITUDE 16  // smaller adjustments, big body.  default = 64

#define DEFAULT_2C_STYLE 1  // enable 2 click turbo (Anduril 1 style)

#define USE_VERSION_CHECK
// don't blink while ramping
#ifdef BLINK_AT_RAMP_FLOOR
#undef BLINK_AT_RAMP_FLOOR
#endif
#ifdef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_MIDDLE
#endif
#ifdef BLINK_AT_RAMP_CEIL
#undef BLINK_AT_RAMP_CEIL
#endif


#define USE_SIMPLE_UI_RAMPING_TOGGLE

//reboot bug if blink on button so don't enable changing it from main
//#define DEFAULT_BLINK_CHANNEL  CM_MAIN

//does not look good on this driver and takes alot of space
//#define USE_SMOOTH_STEPS

#define USE_EXTRA_BATTCHECK_DIGIT

#define USE_SOFT_FACTORY_RESET

// too big, turn off extra features
#undef USE_TACTICAL_MODE
//#undef USE_MOMENTARY_MODE
#undef USE_SOS_MODE
#undef USE_BEACON_MODE
//#undef USE_VERSION_CHECK



//blinkies
//#undef USE_BIKE_FLASHER_MODE
//#undef USE_PARTY_STROBE_MODE
//#undef USE_TACTICAL_STROBE_MODE
//#undef USE_LIGHTNING_MODE
//#undef USE_CANDLE_MODE
