#pragma once

#include QMK_KEYBOARD_H
#include "tapdance.h"

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;

enum layers {
    _MAIN = 0,
    _GAMING,
    _SYMBOLS,
    _ACCENTS,
    _NUMBERS,
    _NAV,
    _OPTIONS
};

#define ACCENTS  MO(_ACCENTS)

// Miscellaneous keyboard shortcuts in direct access
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)
#define CIN A(S(KC_END))

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G LT(_ACCENTS, KC_G)

// Right-hand home row mods
#define HOME_SCLN LGUI_T(KC_SCLN)
#define HOME_L LALT_T(KC_L)
#define HOME_K RCTL_T(KC_K)
#define HOME_J RSFT_T(KC_J)
#define HOME_H LT(_ACCENTS, KC_H)
