#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define QWER 1 // qwerty
#define NAVI 2 // navigation
#define NUMP 3 // numpad

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   -    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   F  |   P  |   G  |  L3  |           |  [   |   J  |   L  |   U  |   Y  |   ;  |   ]    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Esc    |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
 * |--------+------+------+------+------+------| Left |           |Right |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | Grv  |   \  | LALT | LGUI | LCTL |                                       | RCTL | RGUI | RALT |  App |  L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |  Up  | Home |       | PgUp | Down |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | End  |       | PgDn |        |      |
 *                                 | Space|Enter |------|       |------|  Del   | Bspc |
 *                                 |      |      |  L2  |       |  L2  |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_MINS,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_LEFT,
        KC_TAB,          KC_Q,         KC_W,   KC_F,   KC_P,   KC_G,   MO(NUMP),
        KC_ESC,          KC_A,         KC_R,   KC_S,   KC_T,   KC_D,
        KC_LSFT,         KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_LEFT,
        KC_GRV,          KC_BSLS,      KC_LALT,KC_LGUI,KC_LCTL,
                                                       KC_UP,  KC_HOME,
                                                               KC_END,
                                                  KC_SPC,KC_ENT,MO(NAVI),
        // right hand
             KC_RGHT,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_EQL,
             KC_LBRC,     KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,          KC_RBRC,
                          KC_H,   KC_N,   KC_E,   KC_I,   KC_O,             KC_QUOT,
             KC_RIGHT,    KC_K,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,
                                  KC_RCTL,KC_RGUI,KC_RALT,KC_APP,           TO(QWER),
             KC_PGUP,       KC_DOWN,
             KC_PGDN,
             MO(NAVI),KC_DELT, KC_BSPC
    ),
    /* Keymap 1: QWERTY layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   ]    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |  L0  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[QWER] = LAYOUT_ergodox(  // layer 1 : qwerty
        // left hand
        KC_TRNS,        KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_TRNS,
        KC_TRNS,        KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_TRNS,
        KC_TRNS,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_TRNS,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_TRNS,
        KC_TRNS,        KC_TRNS,      KC_TRNS,KC_TRNS,KC_TRNS,
                                                    KC_TRNS,  KC_TRNS,
                                                              KC_TRNS,
                                                 KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_6,   KC_7,  KC_8,   KC_9,   KC_0,             KC_MINS,
             KC_TRNS,     KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,             KC_RBRC,
                          KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,          KC_QUOT,
             KC_TRNS     ,KC_N,   KC_M,  KC_COMM,KC_DOT, CTL_T(KC_SLSH),   KC_TRNS,
                                  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,           TO(0),
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap 2: Nav Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Caps  |      | Home |  Up  | PgUp |      |  L3  |           |  L3  | Down | Right |  Up |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Insert |      | Left | Down | Right|      |------|           |------| Left | Left | Down | Right|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |  End |      | PgDn |      |      |           |      |  Up  |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |  L0  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | VolD | VolU |       | Prev | Next |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Mute |       | Play |      |      |
 *                                 | Bspc |  Del |------|       |------|Enter |Space |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[NAVI] = LAYOUT_ergodox(
       // left hand
       KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F11,
       KC_CAPS,KC_TRNS,KC_HOME,KC_UP,  KC_PGUP,KC_TRNS,TG(NUMP),
       KC_INS ,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_END ,KC_LBRC,KC_PGDN,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_VOLD,KC_VOLU,
                                               KC_MUTE,
                               KC_BSPC,KC_DELT,KC_TRNS,
       // right hand
       KC_F12,  KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
       TG(NUMP),   KC_DOWN, KC_RGHT,KC_UP,   KC_9,    KC_TRNS, KC_TRNS,
                KC_LEFT, KC_LEFT,KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_UP,   KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  TO(0),
       KC_MPRV, KC_MNXT,
       KC_MPLY,
       KC_TRNS, KC_ENT, KC_SPC
),
/* Keymap 3: Numpad
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  Reset |      |      | PSCR | SLCK |      |      |           |      |      | Nlck |   /  |   *  |   -  |  Reset |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |   7  |   8  |   9  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  |  Ent |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |   0  |   0  |   .  |  Ent |   L0 |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Numpad
[NUMP] = LAYOUT_ergodox(
       RESET,   KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS, KC_TRNS, KC_NLCK ,KC_PSLS,  KC_PAST,  KC_PMNS, RESET,
       KC_TRNS, KC_TRNS, KC_P7,   KC_P8,    KC_P9,    KC_PPLS, KC_TRNS,
                KC_TRNS, KC_P4,   KC_P5,    KC_P6,    KC_PPLS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_P1,   KC_P2,    KC_P3,    KC_PENT, KC_TRNS,
                         KC_P0,   KC_P0,   KC_PDOT,    KC_PENT,  TO(0),
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
