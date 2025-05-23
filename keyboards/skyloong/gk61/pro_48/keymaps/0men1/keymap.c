// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│Alt│   │Spc│Mut│   │   |Spc|Alt│App│Ctl│   │Mo1|
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_all(
        QK_GESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,       KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,
         KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,        KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,
        KC_CAPS,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,     KC_SCLN,     KC_QUOT,              KC_ENT,
        KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,    KC_COMM,   KC_DOT,     KC_SLSH,               KC_RSFT,
        KC_LCTL,  KC_LALT,  KC_LGUI,             KC_SPC,   KC_SPC,     KC_MUTE,               KC_SPC,  MO(1),        KC_APP,     KC_RCTL,               MO(3)
    ),

    [1] = LAYOUT_all( //F-keys
         KC_GRV,  KC_BRMD,  KC_BRMU,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  RGB_MOD,  RGB_TOG,
         KC_TAB,  KC_F1,    KC_F2,    KC_F3,    KC_F4,   _______,     _______,  _______,  KC_MS_U,  KC_WH_L,  KC_WH_U,  KC_WH_R,  _______,  _______,
        _______,  KC_F5,    KC_F6,    KC_F7,    KC_F8,   _______,     _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,  _______,            _______,
        KC_LSFT,  KC_F6,    KC_F7,    KC_F8,    KC_F9,   _______,     KC_LEFT,  KC_DOWN,    KC_UP, KC_RIGHT,  _______,            _______,
        KC_LCTL,  KC_LALT,  KC_LGUI,          KC_BTN1,   KC_BTN1,      KC_MUTE,           KC_BTN2,  _______,  _______,  _______,            _______
    ),

    [2] = LAYOUT_all(
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,            _______,  _______,     _______,            _______,  _______,  _______,  _______,            _______
    ),

    [3] = LAYOUT_all(
        _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_SLEP,
        _______,  TO(0),    TO(1),    TO(2),    _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  KC_UP,              _______,
        _______,  _______,  _______,            _______,  _______,     _______,            _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT,            MO(3)
    )

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

