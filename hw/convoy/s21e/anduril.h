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


// level_calc.py fifth 2 150 7135 1 1 120 FET 1 10 2000 (PWM1 was edited by hand later)
#define PWM1_LEVELS 1,2,3,4,5,6,7,8,9,10,11,13,14,16,18,21,23,26,28,31,35,38,41,45,49,53,58,63,67,73,78,84,90,96,102,109,116,124,131,139,147,156,165,174,184,194,204,215,226,237,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,20,21,22,24,25,27,28,30,31,33,35,36,38,40,42,43,45,47,49,51,53,55,57,59,62,64,66,68,71,73,75,78,80,83,86,88,91,94,96,99,102,105,108,111,114,117,120,124,127,130,134,137,140,144,148,151,155,159,162,166,170,174,178,182,186,190,195,199,203,208,212,217,221,226,231,235,240,245,250,255



#define DEFAULT_LEVEL       52
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
