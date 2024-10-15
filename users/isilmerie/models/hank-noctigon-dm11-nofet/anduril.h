// ----- AUXILIARY LEDS -----


// aux LEDs on off: voltage (9) high (2)
#undef RGB_LED_OFF_DEFAULT
#define RGB_LED_OFF_DEFAULT 0x29

// aux LEDs on lockout: voltage (9) low (1)
#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_LOCKOUT_DEFAULT 0x19

// turn off post-off voltage reading
#undef DEFAULT_POST_OFF_VOLTAGE_SECONDS
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0





// ----- RAMP LEVELS -----


// Smooth Ramp settings
#undef RAMP_SMOOTH_FLOOR
#define RAMP_SMOOTH_FLOOR 1
#undef RAMP_SMOOTH_CEIL
#define RAMP_SMOOTH_CEIL 150 // fully regulated through ramp
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
#define SIMPLE_UI_FLOOR 10
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL 90
#undef SIMPLE_UI_STEPS
#define SIMPLE_UI_STEPS 5 // 5 steps, spaced 20 levels apart





// ----- RAMP SETTINGS -----


// set manual memory to step 2 of Stepped Ramp
#undef DEFAULT_MANUAL_MEMORY
#define DEFAULT_MANUAL_MEMORY 20

// use turbo style 1 (2C goes to turbo) because ceiling and turbo are equal
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 1





// ----- CHANNEL SETTINGS -----


// use main emitter/s by default
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_MAIN

// enable only main channel
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000000000001





// ----- BLINKY/UTILITY MODES -----


// use white aux channel by default for blinkies
#undef DEFAULT_BLINK_CHANNEL
#define DEFAULT_BLINK_CHANNEL CM_AUXWHT
