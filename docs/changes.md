# Changes

This fork incorporates the following upstream pull requests:

- [#5: Implements quick aux switching](https://github.com/ToyKeeper/anduril/pull/5)
    - Merged without checking for attiny85, which causes build issues
- [#8: Only blink at ramp ceiling when going up](https://github.com/ToyKeeper/anduril/pull/8)
- [#33: Implement channel_uses_aux() (Fixes issue #29)](https://github.com/ToyKeeper/anduril/pull/33)
    - Merged without prohibiting aux channels in candle mode and bike flasher
- [#36: Added missing channel mode to d4k-3ch, clarified modes in comments](https://github.com/ToyKeeper/anduril/pull/36)
- [#38: Add a third turbo style, similar to 2 but allowing 2C to ceiling then immediately again to turbo](https://github.com/ToyKeeper/anduril/pull/38)
- [#50: New feature: Select previous channel mode with 4C, optionally instead of 4C ramp -> lock](https://github.com/ToyKeeper/anduril/pull/50)
    - Changed so that when USE_PREVIOUS_CHANNEL is defined, 4C in ramping mode goes back one channel by default
- [#57: Per-user config implementation, reworked and extended](https://github.com/ToyKeeper/anduril/pull/57)
- [#63: Bugfix: channel_mode for strobe->off, start on ramp](https://github.com/ToyKeeper/anduril/pull/63)
- [#66: Add default handlers for thermal regulation](https://github.com/ToyKeeper/anduril/pull/66)
- [#70: Bugfix (#69): tint_ramp_direction does not get reset when channel mode arg is changed by manual memory](https://github.com/ToyKeeper/anduril/pull/70)
- [#73: Avoid overflow of ticks_since_adjust.](https://github.com/ToyKeeper/anduril/pull/73)
- [#76: arch: attiny1634: Use built-in temperature calibration data](https://github.com/ToyKeeper/anduril/pull/76)
- [#89: Refactor and extend aux patterns](https://github.com/ToyKeeper/anduril/pull/89)
- [#92: Protect voltage readout against modification from ISR](https://github.com/ToyKeeper/anduril/pull/92)
- [#97: Fix strobe mode (#94).](https://github.com/ToyKeeper/anduril/pull/97)
- [#100: Create a d3aa firmware variant with jumpstart, and fix a bug where channel mode config could be accessed from off if globals config was not enabled](https://github.com/ToyKeeper/anduril/pull/100)
- [#109: Fix issue #107 blocking channel-mode events past 3H on d4k-3ch.](https://github.com/ToyKeeper/anduril/pull/109)
- [#110: bugfix: remove dependency on voltage correction for post-off voltage](https://github.com/ToyKeeper/anduril/pull/110)
- [#112: Fix handling of DEFAULT_BIKING_LEVEL and MAX_BIKING_LEVEL.](https://github.com/ToyKeeper/anduril/pull/112)
- [#114: Improved three-channel interface and 3-channel strobes](https://github.com/ToyKeeper/anduril/pull/114)
    - Strobes only; HSV interface is great but I prefer having 2-channel tintramps


As well as [stcarlso's ultra low mode](https://github.com/stcarlso/anduril/tree/ultra-low-mode)


Personal settings are contained [here](../users)
- Model-specific changes:
    - *0623 (sofirn-lt1s-pro)*: eliminate audible pwm by increasing pwm frequency
        - Note: this requires running the red emitter chip at *twice the max spec'd frequency*, use at your own risk
