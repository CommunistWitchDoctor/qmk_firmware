#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum centromere_layers
{
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

// Defines for layer movement
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

// Defines for task manager
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

// ...
enum combos {
  QA_1,
  WR_2,
  FS_3,
  PT_4,
  GD_5,
  JH_6,
  LN_7,
  UE_8,
  YI_9,
  CLNO_0,
  TD_E,
  AR_E
};

const uint16_t PROGMEM qa_combo[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM fs_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM pt_combo[] = {KC_P, KC_T, COMBO_END};
const uint16_t PROGMEM gd_combo[] = {KC_G, KC_D, COMBO_END};
const uint16_t PROGMEM jh_combo[] = {KC_J, KC_H, COMBO_END};
const uint16_t PROGMEM ln_combo[] = {KC_L, KC_N, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM yi_combo[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM clno_combo[] = {KC_SCLN, KC_O, COMBO_END};
const uint16_t PROGMEM td_combo[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM ar_combo[] = {KC_A, KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QA_1] = COMBO(qa_combo, KC_1),
  [WR_2] = COMBO(wr_combo, KC_2),
  [FS_3] = COMBO(fs_combo, KC_3),
  [PT_4] = COMBO(pt_combo, KC_4),
  [GD_5] = COMBO(gd_combo, KC_5),
  [JH_6] = COMBO(jh_combo, KC_6),
  [LN_7] = COMBO(ln_combo, KC_7),
  [UE_8] = COMBO(ue_combo, KC_8),
  [YI_9] = COMBO(yi_combo, KC_9),
  [CLNO_0] = COMBO(clno_combo, KC_0),
  [TD_E] = COMBO(td_combo, KC_ESC),
  [AR_E] = COMBO(ar_combo, KC_ESC),
};
// ...

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   F  |   P  |   G  |           |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   D  |           |   H  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |           |   K  |   M  |   ,  |   .  |   /  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  | Ctrl | Sp/Rs|      |    |      | Bk/Lw| Shift|
 *                  `-------------|Sft/Et|    |Sft/Dl|------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_QWERTY] = LAYOUT(
  KC_NO,   KC_Q,    KC_W,         KC_F,         KC_P,         KC_G,         KC_J,         KC_L,         KC_U,            KC_Y,    KC_SCLN,    KC_NO,
  KC_NO,   KC_A,    KC_R,         KC_S,         KC_T,         KC_D,         KC_H,         KC_N,         KC_E,            KC_I,    KC_O,       KC_NO,
  KC_NO,   KC_Z,    KC_X, LALT_T(KC_C), LGUI_T(KC_V), LCTL_T(KC_B),         RCTL_T(KC_K), RGUI_T(KC_M), RALT_T(KC_COMM), KC_DOT,  KC_SLSH,    KC_NO,
                        KC_LCTL, LT(_RAISE,KC_SPC), LSFT_T(KC_ENT),         RSFT_T(KC_DEL), LT(_LOWER,KC_BSPC), OSM(MOD_LSFT)
),

/* Raise
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   `  |      |  Up  |      |      |           |      |      |      |      |      |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  Tab | Left | Down | Right| Ins  |           |      |   -  |   =  |   [  |   ]  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |      |      |      |      |      |           |      |      |      |   \  |   '  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  |      | LOWER|      |    |      | RAISE|      |
 *                  `-------------|      |    |      |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_RAISE] = LAYOUT(
  KC_NO,   KC_GRV,  _______,  _______, _______, _______,      _______, _______, _______, _______, _______,	KC_NO,
  KC_NO,   KC_TAB,  KC_LEFT,  KC_DOWN, KC_RGHT,  KC_INS,      _______, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC,	KC_NO,
  KC_NO,   _______, _______,  _______, _______, _______,      _______, _______, _______, KC_BSLS, KC_QUOT,	KC_NO,
                              _______, _______, _______,      _______, _______, _______
),

/* Lower
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   !  |   @  |   #  |   $  |   %  |           |   ^  |   &  |   *  |   (  |   )  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  Esc |      |      |      |      |           |      |   _  |   +  |   {  |   }  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  Caps|   ~  |      |      |      |           |      |      |      |   |  |   "  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  |      | LOWER|      |    |      | RAISE|  Del |
 *                  `-------------|      |    | Enter|------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_LOWER] = LAYOUT(
  KC_NO,   KC_GRV,   KC_LBRC, KC_LCBR, KC_LPRN, KC_LABK,      KC_RABK, KC_RPRN, KC_RCBR, KC_RBRC, KC_QUES, KC_NO,
  KC_NO,   KC_TILDE, KC_MINS, KC_QUOT, KC_COLN, KC_UNDS,      KC_BSLS, KC_EQL,  KC_DQUO, KC_PLUS, KC_BSLS, KC_NO,
  KC_NO,   KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_QUES, KC_NO,
                    _______, _______, _______,      _______,  _______, _______
),

/* Adjust (Lower + Raise)
 *
 * ,----------------------------------.           ,----------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |           |   F6 |  F7  |  F8  |  F9  |  F10 |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  F11 |  F12 |      |      |  F11 |           |  F12 |      |      |Taskmg|caltde|
 * |------+------+------+------+------|           |------+------+------+------+------|
 * | Reset|      |      |      |      |           |      |      |      |      |      |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  |      | LOWER|      |    |      | RAISE|      |
 *                  `-------------|      |    |      |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_ADJUST] =  LAYOUT(
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_NO,
  KC_NO,   _______,  _______,  _______, _______, KC_F11,       KC_F12, _______, _______, TSKMGR, CALTDEL,   KC_NO,
  KC_NO,   RESET,   _______, _______, _______, _______,      _______, _______, _______, _______,  _______, KC_NO,
                    _______, _______, _______,      _______,  _______, _______
)
};


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
