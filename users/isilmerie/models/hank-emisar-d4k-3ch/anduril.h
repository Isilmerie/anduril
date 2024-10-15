// ----- AUXILIARY LEDS -----


// turn off aux LEDs on ramping mode
#undef USE_AUX_RGB_LEDS_WHILE_ON
#undef USE_INDICATOR_LED_WHILE_RAMPING

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
#define RAMP_SMOOTH_CEIL 150
#undef DEFAULT_RAMP_SPEED
#define DEFAULT_RAMP_SPEED 1 // ramp speed: default, brightness range is too narrow to be slower

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
#define SIMPLE_UI_CEIL RAMP_SMOOTH_CEIL // not too bright
#undef SIMPLE_UI_STEPS
#define SIMPLE_UI_STEPS 5 // 5 steps





// ----- RAMP SETTINGS -----


// don't use manual memory
#undef DEFAULT_MANUAL_MEMORY_TIMER
#define DEFAULT_MANUAL_MEMORY_TIMER 0

// use turbo style 1 (2C goes to turbo) because ceiling and turbo are equal
#undef DEFAULT_2C_STYLE
#define DEFAULT_2C_STYLE 1





// ----- CHANNEL SETTINGS -----


// use white channel by default
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_ALL

// enable R, G, B, RGB, GB, RG, RB, HSV channels (0-7)
// don't enable autotint (8) and aux (9-15) channels
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111

// use blue channel to warn factory reset
// use white channel to signal factory reset
#undef FACTORY_RESET_WARN_CHANNEL
#define FACTORY_RESET_WARN_CHANNEL CM_LED4
#undef FACTORY_RESET_SUCCESS_CHANNEL
#define FACTORY_RESET_SUCCESS_CHANNEL CM_ALL

// use red channel to wait for a click in a config menu
// use green channel to signal an inputted click
#undef CONFIG_WAITING_CHANNEL
#define CONFIG_WAITING_CHANNEL CM_MAIN2
#undef CONFIG_BLINK_CHANNEL
#define CONFIG_BLINK_CHANNEL CM_LED3





// ----- BLINKY/UTILITY MODES -----


// use white aux channel by default for blinkies
#undef DEFAULT_BLINK_CHANNEL
#define DEFAULT_BLINK_CHANNEL CM_AUXWHT

// use red and blue channels for police strobe
#undef POLICE_COLOR_STROBE_CH1
#define POLICE_COLOR_STROBE_CH1 CM_MAIN2
#undef POLICE_COLOR_STROBE_CH2
#define POLICE_COLOR_STROBE_CH2 CM_LED4





// ----- MISC -----


// in ramp mode, 4C goes back to the previous channel instead of going to lockout mode
// from PR #50
#undef USE_PREVIOUS_CHANNEL
#define USE_PREVIOUS_CHANNEL
