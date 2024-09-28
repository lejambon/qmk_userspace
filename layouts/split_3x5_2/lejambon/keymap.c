#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define SH_D   MT(MOD_LSFT, KC_D)
#define SH_A   MT(MOD_RSFT, KC_A)
#define L1_T   LT(1, KC_T)
#define L2_SPC LT(2, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_J,    KC_G,    KC_M,    KC_P,    KC_V,        KC_SCLN, KC_DOT,  KC_SLSH, KC_QUOT, KC_DQUO,
        KC_R,    KC_S,    KC_N,    SH_D,    KC_B,        KC_COMM, SH_A,    KC_E,    KC_I,    KC_H,
        KC_X,    KC_F,    KC_L,    KC_C,    KC_W,        KC_MINS, KC_U,    KC_O,    KC_Y,    KC_K,
                                   KC_BSPC, L1_T,        L2_SPC,  KC_ENT
    ),
    [1] = LAYOUT_split_3x5_2(
        KC_Z,    KC_Q,    XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX,     XXXXXXX, KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, _______,     MO(3),   XXXXXXX
    ),
    [2] = LAYOUT_split_3x5_2(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, MO(3),       _______, XXXXXXX
    ),
    [3] = LAYOUT_split_3x5_2(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, _______,     _______, XXXXXXX
    ),
};
