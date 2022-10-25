/* Copyright 2022 Greg Mathews
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _QWERTY,
  _RAISE,
  _LOWER,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* OWERTY
 * |---------------------------------------------------------------------.             .--------------------------------------------------------------|
 * |KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_KB_VOLUME_UP,               KC_NO,   KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,   KC_BSPC |
 * |--------+--------+--------+--------+--------+--------+----------------|            |--------+--------+--------+--------+--------+--------+--------|
 * |KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_MPLY,                       KC_NO,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT |
 * |--------+--------+--------+--------+--------+--------+----------------|            |--------+--------+--------+--------+--------+--------+--------|
 * |KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_SPC,                       KC_SPC,   KC_N,    KC_M, KC_COMM,  KC_DOT,  KC_UP,   KC_ENTER|
 * |--------+--------+--------+--------+--------+--------+--------------------|        |--------+--------+--------+--------+--------+--------+--------|
 *  KC_NO,    KC_EQUAL,   LOWER,  KC_LCTL, KC_RALT,   KC_LCMD,  KC_KB_VOLUME_DOWN|     | KC_NO,   KC_RCMD,  RAISE,  KC_SLASH, KC_LEFT, KC_DOWN, KC_RIGHT
 *                                       |------------------------------------|        |--------------------------|
 */
[_QWERTY] = LAYOUT_void_ergo_65(
    KC_ESC,     KC_Q,     KC_W,       KC_E,       KC_R,     KC_T,     KC_KB_VOLUME_UP,            KC_NO,      KC_Y,       KC_U,         KC_I,       KC_O,     KC_P,     KC_BSPC,
    KC_TAB,     KC_A,     KC_S,       KC_D,       KC_F,     KC_G,     KC_MPLY,                    KC_NO,      KC_H,       KC_J,         KC_K,       KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,    KC_Z,     KC_X,       KC_C,       KC_V,     KC_B,     KC_SPC,                     KC_SPC,     KC_N,       KC_M,         KC_COMM,    KC_DOT,   KC_UP,    KC_ENTER,
    KC_MINUS,   KC_EQUAL, MO(_LOWER), KC_LCTL,    KC_RALT,  KC_LCMD,  KC_KB_VOLUME_DOWN,          KC_NO,      KC_RCMD,    MO(_RAISE),   KC_SLASH,      KC_LEFT,  KC_DOWN,  KC_RIGHT
),

[_LOWER] = LAYOUT_void_ergo_65(
    KC_ESC,     KC_EXLM,  KC_AT,       KC_HASH,    KC_DLR,   KC_PERC,  KC_TRNS,                   KC_TRNS,    KC_CIRC,    KC_AMPR,     KC_ASTR,    KC_LPRN,  KC_RPRN,  KC_BSPC,
    KC_TRNS,    KC_LEFT,  KC_DOWN,     KC_UP,      KC_RIGHT, KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_LEFT,    KC_DOWN,     KC_UP,      KC_RIGHT, KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  MO(_LOWER),  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    MO(_RAISE),  KC_ENT,       KC_RALT,  KC_TRNS,  KC_TRNS
),

[_RAISE] = LAYOUT_void_ergo_65(
    KC_ESC,     KC_1,     KC_2,     KC_3,       KC_4,     KC_5,     KC_TRNS,                      KC_TRNS,  KC_6,       KC_7,       KC_8,       KC_9,     KC_0,     KC_BSPC,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_MINS,    KC_EQL,     KC_LCBR,    KC_RCBR,  KC_PIPE,  KC_GRV,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_UNDS,    KC_PLUS,    KC_LBRC,    KC_RBRC,  KC_BSLS,  KC_TILD,
    KC_TRNS,    KC_TRNS,  MO(_LOWER),  KC_TRNS,  KC_SPC,   KC_TRNS,  KC_TRNS,                     KC_TRNS,  KC_TRNS,    MO(_RAISE), KC_ENT,     KC_RALT,  KC_TRNS,  KC_TRNS
),
[_ADJUST] = LAYOUT_void_ergo_65(
    KC_TRNS,     KC_TRNS,  KC_TRNS,       KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  MO(_LOWER),  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,                   KC_TRNS,    KC_TRNS,    MO(_RAISE),  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS
),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

/*
 * ROTARY ENCODER
 */

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 0, 6));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 3, 6));
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 4, 0));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 7, 0));
        }
    }
    return true;
}

void matrix_init_user(void) {

}
