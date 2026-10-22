#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x4(
        KC_1,    KC_2,    KC_3,    KC_4,
        KC_5,    KC_6,    KC_7,    KC_8,
        KC_9,    KC_10,   KC_11,   KC_12
    )
};
