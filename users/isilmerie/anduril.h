// ----- SIMPLE/ADVANCED UI -----


// use Advanced UI by default
#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 0

// allow switching ramp styles in Simple UI
#undef USE_SIMPLE_UI_RAMPING_TOGGLE
#define USE_SIMPLE_UI_RAMPING_TOGGLE





// ----- AUXILIARY LEDS -----

// enable quick aux switch (from PR #5)
#undef USE_QUICK_AUX_SWITCH
#define USE_QUICK_AUX_SWITCH





// ----- RAMP SETTINGS -----

// use smooth ramping style
#undef RAMP_STYLE
#define RAMP_STYLE 0 // 0 = smooth, 1 = stepped

// 10 minute manual memory timer
#undef DEFAULT_MANUAL_MEMORY_TIMER
#define DEFAULT_MANUAL_MEMORY_TIMER 10

// stay at floor when ramping up from off 
#undef DEFAULT_DONT_RAMP_AFTER_MOON
#define DEFAULT_DONT_RAMP_AFTER_MOON 1

// disable turbo in Simple UI
#undef DEFAULT_2C_STYLE_SIMPLE
#define DEFAULT_2C_STYLE_SIMPLE 0

// use smooth steps
#undef DEFAULT_SMOOTH_STEPS_STYLE
#define DEFAULT_SMOOTH_STEPS_STYLE 1






// ----- BLINKY/UTILITY MODES -----

// nothing yet




// ----- STROBE/MOOD MODES -----


// nothing yet





// ----- MISC -----


// autolock: 10 mins
#undef USE_AUTOLOCK
#define USE_AUTOLOCK
#undef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 10
