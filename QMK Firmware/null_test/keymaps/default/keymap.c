// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// This macro maps your DIRECT_PINS straight to the layout matrix.
// It matches the order: SW1, SW2, SW3, SW4, and SW5 (Encoder Press).
#define LAYOUT( \
    K00, K01, K02, K03, K04 \
) { \
    { K00, K01, K02, K03, K04 } \
}

// Define your keymaps here
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_MUTE
    )
};

// This function controls what happens when you turn the encoder knob
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Your first (and only) encoder
        if (clockwise) {
            tap_code(KC_VOLU); // Turn clockwise to Turn Volume Up
        } else {
            tap_code(KC_VOLD); // Turn counter-clockwise to Turn Volume Down
        }
    }
    return false;
}
#endif