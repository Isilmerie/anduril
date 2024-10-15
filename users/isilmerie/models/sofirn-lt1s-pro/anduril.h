// ----- INDICATOR LED -----

// indicator LED on off: high (2)
// indicator LED on lockout: low (1)
#undef INDICATOR_LED_DEFAULT_MODE
#define INDICATOR_LED_DEFAULT_MODE ((1<<2) + 2)





// ----- RAMP LEVELS -----


// Smooth Ramp settings
#undef RAMP_SMOOTH_FLOOR
#define RAMP_SMOOTH_FLOOR 1
#undef RAMP_SMOOTH_CEIL
#define RAMP_SMOOTH_CEIL 150 // lt1s pro doesn't get very hot on turbo
#undef DEFAULT_RAMP_SPEED
#define DEFAULT_RAMP_SPEED 2 // ramp speed: half

// Stepped Ramp settings
#undef RAMP_DISCRETE_FLOOR
#define RAMP_DISCRETE_FLOOR RAMP_SMOOTH_FLOOR
#undef RAMP_DISCRETE_CEIL
#define RAMP_DISCRETE_CEIL RAMP_SMOOTH_CEIL
#undef RAMP_DISCRETE_STEPS
#define RAMP_DISCRETE_STEPS 9 // 9 steps

// Simple UI Ramp Stepped Ramp settings
#undef SIMPLE_UI_FLOOR
#define SIMPLE_UI_FLOOR RAMP_SMOOTH_FLOOR
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL RAMP_SMOOTH_CEIL // low heat generation
#undef SIMPLE_UI_STEPS
#define SIMPLE_UI_STEPS 5 // 5 steps





// ----- RAMP SETTINGS -----


// 4 hour manual memory timer
#undef DEFAULT_MANUAL_MEMORY_TIMER
#define DEFAULT_MANUAL_MEMORY_TIMER 240

// set manual memory to step 2 of Stepped Ramp
#undef DEFAULT_MANUAL_MEMORY
#define DEFAULT_MANUAL_MEMORY 20

// use turbo style 1 (2C goes to turbo) because ceiling and turbo are equal
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 1





// ----- CHANNEL SETTINGS -----


// use white channel by default
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_WHITE

// enable only white (0), red (3), and white+red channel (4)
// don't enable warm-cool (1) and red-warm-cool (2) autotint
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b00011001

// use white channel to warn factory reset
// use red channel to signal factory reset
#undef FACTORY_RESET_WARN_CHANNEL
#define FACTORY_RESET_WARN_CHANNEL CM_WHITE
#undef FACTORY_RESET_SUCCESS_CHANNEL
#define FACTORY_RESET_SUCCESS_CHANNEL CM_RED

// use white channel to wait for a click in a config menu
// use red channel to signal an inputted click
#undef CONFIG_WAITING_CHANNEL
#define CONFIG_WAITING_CHANNEL CM_WHITE
#undef CONFIG_BLINK_CHANNEL
#define CONFIG_BLINK_CHANNEL CM_RED





// ----- BLINKY/UTILITY MODES -----


// use red channel by default for blinkies
#undef DEFAULT_BLINK_CHANNEL
#define DEFAULT_BLINK_CHANNEL CM_RED





// ----- MISC -----


// autolock: 30 mins
#undef USE_AUTOLOCK
#define USE_AUTOLOCK
#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 30

// in ramp mode, 4C goes back to the previous channel instead of going to lockout mode
// from PR #50
#undef USE_PREVIOUS_CHANNEL
#define USE_PREVIOUS_CHANNEL

// Use 256 clock cycle to eliminate audible PWM (note: this puts the frequency at twice the max spec of the red channel chip)
// https://budgetlightforum.com/t/group-buy-lt1s-pro-with-anduril2-nichia-519a-660nm-red-leds/71123/520
// level_calc.py 4.001 1 150 7135 1 0.2 600 --pwm dyn:78:16383:255:3.333
#undef PWM1_LEVELS
#define PWM1_LEVELS 1,2,2,3,5,6,7,9,10,11,13,14,15,16,16,19,20,21,22,23,24,25,26,27,28,29,30,30,31,31,32,32,33,33,33,33,33,33,32,32,31,31,30,30,30,29,28,28,27,27,26,25,25,24,23,23,22,22,21,21,21,21,21,20,21,21,21,21,22,22,23,24,24,25,27,28,29,30,32,33,34,35,37,38,39,41,42,44,45,47,49,50,52,54,56,58,59,61,63,66,68,70,72,74,77,79,82,84,87,89,92,95,98,100,103,106,110,113,116,119,123,126,129,133,137,140,144,148,152,156,160,164,169,173,177,182,187,191,196,201,206,211,216,221,227,232,238,243,249,255
#undef PWM_TOPS
#define PWM_TOPS 16382,8173,7835,9623,13594,12799,12042,11328,10656,10026,10395,9740,9137,8582,8071,8086,7606,7164,6756,6380,6032,5710,5410,5132,4873,4631,4404,4048,3861,3561,3406,3153,3021,2806,2610,2431,2267,2117,1979,1852,1680,1576,1431,1345,1266,1151,1047,988,898,849,772,702,665,605,549,521,472,449,407,388,369,352,336,304,306,292,279,267,268,257,258,258,247,247,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
