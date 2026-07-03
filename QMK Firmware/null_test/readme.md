# null_test

![null_test](https://imgur.com/a/vtVtqLP)

*This keyboard is a 4key keyboard that is used as a macropad. The keys are in the shape of WASD*

* Keyboard Maintainer: [Matias](https://github.com/Marshyboy1)
* Hardware Supported: *This macropad uses and supports the seeed studio xiao RP2040, MX-Style switches, EC11 Rotary encoders and a  0.91 inch OLED display*
* Hardware Availability: *Just search up the names of the supported hardware. You'll find them directly and what costs fit your budget best based on shipping costs*

Make example for this keyboard (after setting up your build environment):

    make null_test:default

Flashing example for this keyboard:

    make null_test:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
