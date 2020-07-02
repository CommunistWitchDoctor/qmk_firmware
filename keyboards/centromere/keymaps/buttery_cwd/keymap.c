#include QMK_KEYBOARD_H

#define H_TOP1 ((HASH_TYPE) 1 << 0)
#define H_TOP2 ((HASH_TYPE) 1 << 1)
#define H_TOP3 ((HASH_TYPE) 1 << 2)
#define H_TOP4 ((HASH_TYPE) 1 << 3)
#define H_TOP5 ((HASH_TYPE) 1 << 4)
#define H_TOP6 ((HASH_TYPE) 1 << 5)
#define H_TOP7 ((HASH_TYPE) 1 << 6)
#define H_TOP8 ((HASH_TYPE) 1 << 7)
#define H_TOP9 ((HASH_TYPE) 1 << 8)
#define H_TOP10 ((HASH_TYPE) 1 << 9)
#define H_TOP11 ((HASH_TYPE) 1 << 10)
#define H_TOP12 ((HASH_TYPE) 1 << 11)
#define H_MID1 ((HASH_TYPE) 1 << 12)
#define H_MID2 ((HASH_TYPE) 1 << 13)
#define H_MID3 ((HASH_TYPE) 1 << 14)
#define H_MID4 ((HASH_TYPE) 1 << 15)
#define H_MID5 ((HASH_TYPE) 1 << 16)
#define H_MID6 ((HASH_TYPE) 1 << 17)
#define H_MID7 ((HASH_TYPE) 1 << 18)
#define H_MID8 ((HASH_TYPE) 1 << 19)
#define H_MID9 ((HASH_TYPE) 1 << 20)
#define H_MID10 ((HASH_TYPE) 1 << 21)
#define H_MID11 ((HASH_TYPE) 1 << 22)
#define H_MID12 ((HASH_TYPE) 1 << 23)
#define H_BOT1 ((HASH_TYPE) 1 << 24)
#define H_BOT2 ((HASH_TYPE) 1 << 25)
#define H_BOT3 ((HASH_TYPE) 1 << 26)
#define H_BOT4 ((HASH_TYPE) 1 << 27)
#define H_BOT5 ((HASH_TYPE) 1 << 28)
#define H_BOT6 ((HASH_TYPE) 1 << 29)
#define H_BOT7 ((HASH_TYPE) 1 << 30)
#define H_BOT8 ((HASH_TYPE) 1 << 31)
#define H_BOT9 ((HASH_TYPE) 1 << 32)
#define H_BOT10 ((HASH_TYPE) 1 << 33)
#define H_BOT11 ((HASH_TYPE) 1 << 34)
#define H_BOT12 ((HASH_TYPE) 1 << 35)
#define H_THU1 ((HASH_TYPE) 1 << 36)
#define H_THU2 ((HASH_TYPE) 1 << 37)
#define H_THU3 ((HASH_TYPE) 1 << 38)
#define H_THU4 ((HASH_TYPE) 1 << 39)
#define H_THU5 ((HASH_TYPE) 1 << 40)
#define H_THU6 ((HASH_TYPE) 1 << 41)

enum internal_keycodes {
    TOP1 = SAFE_RANGE,
    TOP2, TOP3, TOP4, TOP5, TOP6, TOP7, TOP8, TOP9, TOP10, TOP11, TOP12, MID1, MID2, MID3, MID4, MID5, MID6, MID7, MID8, MID9, MID10, MID11, MID12, BOT1, BOT2, BOT3, BOT4, BOT5, BOT6, BOT7, BOT8, BOT9, BOT10, BOT11, BOT12, THU1, THU2, THU3, THU4, THU5, THU6,
    FIRST_INTERNAL_KEYCODE = TOP1,
    LAST_INTERNAL_KEYCODE = THU6
};

enum pseudolayers {
    ALWAYS_ON, COLEMAK, SYM, NUM, FNC, NAV
};

#define CHORD_TIMEOUT 100
#define DANCE_TIMEOUT 200
#define LEADER_TIMEOUT 750
#define TAP_TIMEOUT 50
#define LONG_PRESS_MULTIPLIER 3
#define DYNAMIC_MACRO_MAX_LENGTH 20
#define COMMAND_MAX_LENGTH 5
#define STRING_MAX_LENGTH 16
#define LEADER_MAX_LENGTH 5
#define HASH_TYPE uint64_t
#define NUMBER_OF_KEYS 42
#define DEFAULT_PSEUDOLAYER COLEMAK

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(TOP1, TOP2, TOP3, TOP4, TOP5, TOP6, TOP7, TOP8, TOP9, TOP10, TOP11, TOP12, MID1, MID2, MID3, MID4, MID5, MID6, MID7, MID8, MID9, MID10, MID11, MID12, BOT1, BOT2, BOT3, BOT4, BOT5, BOT6, BOT7, BOT8, BOT9, BOT10, BOT11, BOT12, THU1, THU2, THU3, THU4, THU5, THU6),
    [1] = LAYOUT(_______, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, _______, _______, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, _______, _______, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, _______, LT(2, KC_ESC), KC_SPC, KC_LSFT, KC_RCTL, KC_ESC, TO(0)),
    [2] = LAYOUT(_______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______, KC_ESC, KC_TAB, _______, KC_TAB, KC_ESC, _______, _______, _______, _______, _______, _______, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______, MO(2), KC_ENT, KC_BSPC, KC_ENT, KC_ESC, TO(0)),
};
size_t keymapsCount = 3;

uint8_t keycodes_buffer_array[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

uint8_t command_buffer[] = {
    0, 0, 0, 0, 0
};

uint16_t leader_buffer[] = {
    0, 0, 0, 0, 0
};

uint8_t dynamic_macro_buffer[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

enum chord_states {
    IDLE,
    READY,
    ACTIVATED,
    DEACTIVATED,
    PRESS_FROM_ACTIVE,
    FINISHED_FROM_ACTIVE,
    IDLE_IN_DANCE,
    READY_IN_DANCE,
    FINISHED,
    LOCKED,
    READY_LOCKED,
    RESTART,
    IN_ONE_SHOT
};

struct Chord {
    HASH_TYPE keycodes_hash;
    uint8_t pseudolayer;
    uint8_t* state;
    uint8_t* counter;
    uint16_t value1;
    uint8_t value2;
    void (*function) (const struct Chord*);
};

uint8_t current_pseudolayer = DEFAULT_PSEUDOLAYER;
bool lock_next = false;
uint16_t chord_timer = 0;
uint16_t dance_timer = 0;
bool autoshift_mode = true;
uint8_t keycode_index = 0;
uint8_t command_mode = 0;
uint8_t command_ind = 0;
bool in_leader_mode = false;
uint8_t leader_ind = 0;
uint16_t leader_timer = 0;
uint8_t dynamic_macro_mode = false;
uint8_t dynamic_macro_ind = 0;
bool a_key_went_through = false;
struct Chord* last_chord = NULL;

bool handle_US_ANSI_shifted_keys(int16_t keycode, bool in) {
    bool is_US_ANSI_shifted = true;
    
    int16_t regular_keycode = KC_NO;
    switch (keycode) {
        case KC_TILDE:
            regular_keycode = KC_GRAVE;
            break;
        case KC_EXCLAIM:
            regular_keycode = KC_1;
            break;
        case KC_AT:
            regular_keycode = KC_2;
            break;
        case KC_HASH:
            regular_keycode = KC_3;
            break;
        case KC_DOLLAR:
            regular_keycode = KC_4;
            break;
        case KC_PERCENT:
            regular_keycode = KC_5;
            break;
        case KC_CIRCUMFLEX:
            regular_keycode = KC_6;
            break;
        case KC_AMPERSAND:
            regular_keycode = KC_7;
            break;
        case KC_ASTERISK:
            regular_keycode = KC_8;
            break;
        case KC_LEFT_PAREN:
            regular_keycode = KC_9;
            break;
        case KC_RIGHT_PAREN:
            regular_keycode = KC_0;
            break;
        case KC_UNDERSCORE:
            regular_keycode = KC_MINUS;
            break;
        case KC_PLUS:
            regular_keycode = KC_EQUAL;
            break;
        case KC_LEFT_CURLY_BRACE:
            regular_keycode = KC_LBRACKET;
            break;
        case KC_RIGHT_CURLY_BRACE:
            regular_keycode = KC_RBRACKET;
            break;
        case KC_PIPE:
            regular_keycode = KC_BSLASH;
            break;
        case KC_COLON:
            regular_keycode = KC_SCOLON;
            break;
        case KC_DOUBLE_QUOTE:
            regular_keycode = KC_QUOTE;
            break;
        case KC_LEFT_ANGLE_BRACKET:
            regular_keycode = KC_COMMA;
            break;
        case KC_RIGHT_ANGLE_BRACKET:
            regular_keycode = KC_DOT;
            break;
        case KC_QUESTION:
            regular_keycode = KC_SLASH;
            break;
        default:
            is_US_ANSI_shifted = false;
    }
    if (is_US_ANSI_shifted) {
        if (in) {
            register_code(KC_LSFT);
            register_code(regular_keycode);
        } else {
            unregister_code(regular_keycode);
            unregister_code(KC_LSFT);
        }
    }
    return is_US_ANSI_shifted;
}

void key_in(int16_t keycode) {
    if (command_mode == 1 && command_ind < COMMAND_MAX_LENGTH) {
        command_buffer[command_ind] = keycode;
        command_ind++;
        a_key_went_through = true;
    } else if (in_leader_mode && leader_ind < LEADER_MAX_LENGTH) {
        leader_buffer[leader_ind] = keycode;
        leader_ind++;
        a_key_went_through = true;
    } else if (dynamic_macro_mode && dynamic_macro_ind < DYNAMIC_MACRO_MAX_LENGTH) {
        dynamic_macro_buffer[dynamic_macro_ind] = keycode;
        dynamic_macro_ind++;
        a_key_went_through = true;
    } else {
        if (!handle_US_ANSI_shifted_keys(keycode, true)) {
            register_code(keycode);
        }
        send_keyboard_report();
        a_key_went_through = true;
    }
}

void key_out(int16_t keycode) {
    if (command_mode == 0) {
        if (!handle_US_ANSI_shifted_keys(keycode, false)) {
            if (command_mode == 0 && in_leader_mode == false && dynamic_macro_mode == false) {
                unregister_code(keycode);
            }
        }
        send_keyboard_report();
    }
}

void tap_key(int16_t keycode) {
    key_in(keycode);
    wait_ms(TAP_TIMEOUT);
    key_out(keycode);
}
const char * const strings[] PROGMEM = {

};
void single_dance(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(self->value1);
            break;
        case DEACTIVATED:
            key_out(self->value1);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(self->value1);
            break;
        default:
            break;
    }
}

void key_layer_dance(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            current_pseudolayer = self->value2;
            a_key_went_through = false;
            break;
        case DEACTIVATED:
        case RESTART:
            if (!a_key_went_through) {
                tap_key(self->value1);
            }
            current_pseudolayer = self->pseudolayer;
            *self->state = IDLE; // does not have effect if the state was RESTART
            break;
        default:
            break;
    }
}

void key_mod_dance(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(self->value2);
            a_key_went_through = false;
            break;
        case DEACTIVATED:
        case RESTART:
            key_out(self->value2);
            if (!a_key_went_through) {
                tap_key(self->value1);
            }
            *self->state = IDLE; // does not have effect if the state was RESTART
            break;
        default:
            break;
    }
}

void key_key_dance(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            break;
        case DEACTIVATED:
            tap_key(self->value1);
            *self->state = IDLE;
            break;
        case FINISHED:
        case PRESS_FROM_ACTIVE:
            key_in(self->value2);
            break;
        case RESTART:
            key_out(self->value2);
            break;
        default:
            break;
    }
}

void autoshift_dance_impl(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            *self->counter = 0;
            break;
        case DEACTIVATED:
        case RESTART:
            tap_key(self->value1);
            *self->state = IDLE;
            break;
        case FINISHED_FROM_ACTIVE:
            if (*self->counter == (LONG_PRESS_MULTIPLIER - 2)) {
                key_in(KC_LSFT);
                tap_key(self->value1);
                key_out(KC_LSFT);
                *self->state = IDLE;
                // the skip to IDLE is usually just a lag optimization,
                // in this case it has a logic function, on a short
                // press (still longer than a tap) the key does not get shifted
            } else {
                *self->counter += 1;
                *self->state = PRESS_FROM_ACTIVE;
                dance_timer = timer_read();
            }
            break;
        default:
            break;
    }
}

void autoshift_dance(const struct Chord* self) {
    if (autoshift_mode) {
        autoshift_dance_impl(self);
    } else {
        single_dance(self);
    }
}

void autoshift_toggle(const struct Chord* self){
    if (*self->state == ACTIVATED) {
        autoshift_mode = !autoshift_mode;
        *self->state = IDLE;
    }
}

void temp_pseudolayer(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            current_pseudolayer = self->value1;
            break;
        case DEACTIVATED:
            current_pseudolayer = self->pseudolayer;
            *self->state = IDLE;
            break;
        case RESTART:
            current_pseudolayer = self->pseudolayer;
            break;
        default:
            break;
    }
}

void temp_pseudolayer_alt(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            current_pseudolayer = self->value1;
            break;
        case DEACTIVATED:
            current_pseudolayer = self->value2;
            *self->state = IDLE;
            break;
        case RESTART:
            current_pseudolayer = self->value2;
            break;
        default:
            break;
    }
}

void perm_pseudolayer(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        current_pseudolayer = self->value1;
        *self->state = IDLE;
    }
}

void switch_layer(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        layer_move(self->value1);
        *self->state = IDLE;
    }
}

void lock(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        lock_next = true;
        *self->state = IDLE;
    }
}

void one_shot_key(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            break;
        case DEACTIVATED:
            key_in(self->value1);
            *self->state = IN_ONE_SHOT;
            break;
        case FINISHED:
        case PRESS_FROM_ACTIVE:
            key_in(self->value1);
            a_key_went_through = false;
            break;
        case RESTART:
            if (a_key_went_through) {
                key_out(self->value1);
            } else {
                *self->state = IN_ONE_SHOT;
            }
        default:
            break;
    }
}

void one_shot_layer(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            break;
        case DEACTIVATED:
            current_pseudolayer = self->value1;
            *self->state = IN_ONE_SHOT;
            break;
        case FINISHED:
        case PRESS_FROM_ACTIVE:
            current_pseudolayer = self->value1;
            a_key_went_through = false;
            break;
        case RESTART:
            if (a_key_went_through) {
                current_pseudolayer = self->pseudolayer;
            } else {
                *self->state = IN_ONE_SHOT;
            }
        default:
            break;
    }
}

void command(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        command_mode++;
        *self->state = IDLE;
    }
}

bool identical(uint16_t* buffer1, uint16_t* buffer2) {
    bool same = true;
    for (int i = 0; i < LEADER_MAX_LENGTH; i++) {
        same = same && (buffer1[i] == buffer2[i]);
    }
    return same;
}

void leader(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        in_leader_mode = true;
        *self->state = IDLE;
    }
}

void dynamic_macro_record(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        for (int i = 0; i < DYNAMIC_MACRO_MAX_LENGTH; i++) {
            dynamic_macro_buffer[i] = 0;
        }
        dynamic_macro_mode = true;
        *self->state = IDLE;
    }
}

void dynamic_macro_next(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        if (dynamic_macro_mode && dynamic_macro_ind < DYNAMIC_MACRO_MAX_LENGTH) {
            dynamic_macro_buffer[dynamic_macro_ind] = 0;
            dynamic_macro_ind++;
        }
        *self->state = IDLE;
    }
}

void dynamic_macro_end(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        if (dynamic_macro_mode) {
            dynamic_macro_mode = false;
        }
        *self->state = IDLE;
    }
}

void dynamic_macro_play(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        int ind_start = 0;
        while (ind_start < DYNAMIC_MACRO_MAX_LENGTH) {
            for (int i = ind_start; i < DYNAMIC_MACRO_MAX_LENGTH; i++) {
                if (dynamic_macro_buffer[i] == 0) {
                    break;
                }
                register_code(dynamic_macro_buffer[i]);
            }
            send_keyboard_report();
            wait_ms(TAP_TIMEOUT);
            for (int i = ind_start; i < DYNAMIC_MACRO_MAX_LENGTH; i++) {
                if (dynamic_macro_buffer[i] == 0) {
                    ind_start = i + 1;
                    break;
                }
                unregister_code(dynamic_macro_buffer[i]);
            }
            send_keyboard_report();
        }
        *self->state = IDLE;
    }
}

void string_in(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        char buffer[STRING_MAX_LENGTH];
        strcpy_P(buffer, (char*)pgm_read_word(&(strings[self->value1])));
        send_string(buffer);
    }
}

void clear(const struct Chord* self);

void reset_keyboard_kb(void){
#ifdef WATCHDOG_ENABLE
    MCUSR = 0;
    wdt_disable();
    wdt_reset();
#endif
    reset_keyboard();
}

void reset(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        reset_keyboard_kb();
    }
}

uint8_t state_0 = IDLE;
const struct Chord chord_0 PROGMEM = {H_TOP2 + H_TOP11 + H_MID2 + H_MID11 + H_BOT2 + H_BOT11, ALWAYS_ON, &state_0, NULL, 0, 0, clear};
uint8_t state_1 = IDLE;
const struct Chord chord_1 PROGMEM = {H_BOT6 + H_BOT7 + H_THU3 + H_THU4, ALWAYS_ON, &state_1, NULL, 0, 0, command};
uint8_t state_2 = IDLE;
const struct Chord chord_2 PROGMEM = {H_TOP6 + H_TOP7 + H_MID6 + H_MID7 + H_BOT6 + H_BOT7, ALWAYS_ON, &state_2, NULL, 0, 0, reset};
uint8_t state_3 = IDLE;
const struct Chord chord_3 PROGMEM = {H_TOP4 + H_MID3 + H_MID4 + H_MID5, ALWAYS_ON, &state_3, NULL, 1, 0, switch_layer};
uint8_t state_4 = IDLE;
const struct Chord chord_4 PROGMEM = {H_TOP2, COLEMAK, &state_4, NULL, KC_Q, 0, single_dance};
uint8_t state_5 = IDLE;
const struct Chord chord_5 PROGMEM = {H_TOP3, COLEMAK, &state_5, NULL, KC_W, 0, single_dance};
uint8_t state_6 = IDLE;
const struct Chord chord_6 PROGMEM = {H_TOP4, COLEMAK, &state_6, NULL, KC_F, 0, single_dance};
uint8_t state_7 = IDLE;
const struct Chord chord_7 PROGMEM = {H_TOP5, COLEMAK, &state_7, NULL, KC_P, 0, single_dance};
uint8_t state_8 = IDLE;
const struct Chord chord_8 PROGMEM = {H_TOP6, COLEMAK, &state_8, NULL, KC_G, 0, single_dance};
uint8_t state_9 = IDLE;
const struct Chord chord_9 PROGMEM = {H_TOP7, COLEMAK, &state_9, NULL, KC_J, 0, single_dance};
uint8_t state_10 = IDLE;
const struct Chord chord_10 PROGMEM = {H_TOP8, COLEMAK, &state_10, NULL, KC_L, 0, single_dance};
uint8_t state_11 = IDLE;
const struct Chord chord_11 PROGMEM = {H_TOP9, COLEMAK, &state_11, NULL, KC_U, 0, single_dance};
uint8_t state_12 = IDLE;
const struct Chord chord_12 PROGMEM = {H_TOP10, COLEMAK, &state_12, NULL, KC_Y, 0, single_dance};
uint8_t state_13 = IDLE;
const struct Chord chord_13 PROGMEM = {H_TOP11, COLEMAK, &state_13, NULL, KC_SCOLON, 0, single_dance};
uint8_t state_14 = IDLE;
const struct Chord chord_14 PROGMEM = {H_TOP2 + H_MID2, COLEMAK, &state_14, NULL, KC_1, 0, single_dance};
uint8_t state_15 = IDLE;
const struct Chord chord_15 PROGMEM = {H_TOP3 + H_MID3, COLEMAK, &state_15, NULL, KC_2, 0, single_dance};
uint8_t state_16 = IDLE;
const struct Chord chord_16 PROGMEM = {H_TOP4 + H_MID4, COLEMAK, &state_16, NULL, KC_3, 0, single_dance};
uint8_t state_17 = IDLE;
const struct Chord chord_17 PROGMEM = {H_TOP5 + H_MID5, COLEMAK, &state_17, NULL, KC_4, 0, single_dance};
uint8_t state_18 = IDLE;
const struct Chord chord_18 PROGMEM = {H_TOP6 + H_MID6, COLEMAK, &state_18, NULL, KC_5, 0, single_dance};
uint8_t state_19 = IDLE;
const struct Chord chord_19 PROGMEM = {H_TOP7 + H_MID7, COLEMAK, &state_19, NULL, KC_6, 0, single_dance};
uint8_t state_20 = IDLE;
const struct Chord chord_20 PROGMEM = {H_TOP8 + H_MID8, COLEMAK, &state_20, NULL, KC_7, 0, single_dance};
uint8_t state_21 = IDLE;
const struct Chord chord_21 PROGMEM = {H_TOP9 + H_MID9, COLEMAK, &state_21, NULL, KC_8, 0, single_dance};
uint8_t state_22 = IDLE;
const struct Chord chord_22 PROGMEM = {H_TOP10 + H_MID10, COLEMAK, &state_22, NULL, KC_9, 0, single_dance};
uint8_t state_23 = IDLE;
const struct Chord chord_23 PROGMEM = {H_TOP11 + H_MID11, COLEMAK, &state_23, NULL, KC_0, 0, single_dance};
uint8_t state_24 = IDLE;
const struct Chord chord_24 PROGMEM = {H_MID2, COLEMAK, &state_24, NULL, KC_A, 0, single_dance};
uint8_t state_25 = IDLE;
const struct Chord chord_25 PROGMEM = {H_MID3, COLEMAK, &state_25, NULL, KC_R, 0, single_dance};
uint8_t state_26 = IDLE;
const struct Chord chord_26 PROGMEM = {H_MID4, COLEMAK, &state_26, NULL, KC_S, 0, single_dance};
uint8_t state_27 = IDLE;
const struct Chord chord_27 PROGMEM = {H_MID5, COLEMAK, &state_27, NULL, KC_T, 0, single_dance};
uint8_t state_28 = IDLE;
const struct Chord chord_28 PROGMEM = {H_MID6, COLEMAK, &state_28, NULL, KC_D, 0, single_dance};
uint8_t state_29 = IDLE;
const struct Chord chord_29 PROGMEM = {H_MID7, COLEMAK, &state_29, NULL, KC_H, 0, single_dance};
uint8_t state_30 = IDLE;
const struct Chord chord_30 PROGMEM = {H_MID8, COLEMAK, &state_30, NULL, KC_N, 0, single_dance};
uint8_t state_31 = IDLE;
const struct Chord chord_31 PROGMEM = {H_MID9, COLEMAK, &state_31, NULL, KC_E, 0, single_dance};
uint8_t state_32 = IDLE;
const struct Chord chord_32 PROGMEM = {H_MID10, COLEMAK, &state_32, NULL, KC_I, 0, single_dance};
uint8_t state_33 = IDLE;
const struct Chord chord_33 PROGMEM = {H_MID11, COLEMAK, &state_33, NULL, KC_O, 0, single_dance};
uint8_t state_34 = IDLE;
const struct Chord chord_34 PROGMEM = {H_BOT2, COLEMAK, &state_34, NULL, KC_Z, 0, single_dance};
uint8_t state_35 = IDLE;
const struct Chord chord_35 PROGMEM = {H_BOT3, COLEMAK, &state_35, NULL, KC_X, 0, single_dance};
uint8_t state_36 = IDLE;
const struct Chord chord_36 PROGMEM = {H_BOT4, COLEMAK, &state_36, NULL, KC_C, 0, single_dance};
uint8_t state_37 = IDLE;
const struct Chord chord_37 PROGMEM = {H_BOT5, COLEMAK, &state_37, NULL, KC_V, 0, single_dance};
uint8_t state_38 = IDLE;
const struct Chord chord_38 PROGMEM = {H_BOT6, COLEMAK, &state_38, NULL, KC_B, 0, single_dance};
uint8_t state_39 = IDLE;
const struct Chord chord_39 PROGMEM = {H_BOT7, COLEMAK, &state_39, NULL, KC_K, 0, single_dance};
uint8_t state_40 = IDLE;
const struct Chord chord_40 PROGMEM = {H_BOT8, COLEMAK, &state_40, NULL, KC_M, 0, single_dance};
uint8_t state_41 = IDLE;
const struct Chord chord_41 PROGMEM = {H_BOT9, COLEMAK, &state_41, NULL, KC_COMMA, 0, single_dance};
uint8_t state_42 = IDLE;
const struct Chord chord_42 PROGMEM = {H_BOT10, COLEMAK, &state_42, NULL, KC_DOT, 0, single_dance};
uint8_t state_43 = IDLE;
const struct Chord chord_43 PROGMEM = {H_BOT11, COLEMAK, &state_43, NULL, KC_SLASH, 0, single_dance};
uint8_t state_44 = IDLE;
const struct Chord chord_44 PROGMEM = {H_BOT12, COLEMAK, &state_44, NULL, KC_QUOTE, 0, single_dance};
uint8_t state_45 = IDLE;
const struct Chord chord_45 PROGMEM = {H_TOP5 + H_TOP6, COLEMAK, &state_45, NULL, KC_TAB, 0, single_dance};
uint8_t state_46 = IDLE;
const struct Chord chord_46 PROGMEM = {H_TOP7 + H_TOP8, COLEMAK, &state_46, NULL, KC_CAPS, 0, single_dance};
uint8_t state_47 = IDLE;
const struct Chord chord_47 PROGMEM = {H_MID5 + H_MID6, COLEMAK, &state_47, NULL, KC_ESC, 0, single_dance};
uint8_t state_48 = IDLE;
const struct Chord chord_48 PROGMEM = {H_MID7 + H_MID8, COLEMAK, &state_48, NULL, KC_INS, 0, single_dance};
void function_49(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_LCTL);
            key_in(KC_LALT);
            break;
        case DEACTIVATED:
            key_out(KC_LCTL);
            key_out(KC_LALT);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_LCTL);
            key_out(KC_LALT);
            break;
        default:
            break;
    };
}
uint8_t state_49 = IDLE;
uint8_t counter_49 = 0;
const struct Chord chord_49 PROGMEM = {H_BOT3 + H_BOT4 + H_BOT5 + H_BOT6, COLEMAK, &state_49, &counter_49, 0, 0, function_49};
void function_50(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_LCTL);
            key_in(KC_LGUI);
            break;
        case DEACTIVATED:
            key_out(KC_LCTL);
            key_out(KC_LGUI);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_LCTL);
            key_out(KC_LGUI);
            break;
        default:
            break;
    };
}
uint8_t state_50 = IDLE;
uint8_t counter_50 = 0;
const struct Chord chord_50 PROGMEM = {H_BOT4 + H_BOT5 + H_BOT6, COLEMAK, &state_50, &counter_50, 0, 0, function_50};
uint8_t state_51 = IDLE;
const struct Chord chord_51 PROGMEM = {H_BOT3 + H_BOT4, COLEMAK, &state_51, NULL, KC_LALT, 0, single_dance};
uint8_t state_52 = IDLE;
const struct Chord chord_52 PROGMEM = {H_BOT4 + H_BOT5, COLEMAK, &state_52, NULL, KC_LGUI, 0, single_dance};
uint8_t state_53 = IDLE;
const struct Chord chord_53 PROGMEM = {H_BOT5 + H_BOT6, COLEMAK, &state_53, NULL, KC_LCTL, 0, single_dance};
uint8_t state_54 = IDLE;
const struct Chord chord_54 PROGMEM = {H_BOT7 + H_BOT8, COLEMAK, &state_54, NULL, KC_RCTL, 0, single_dance};
uint8_t state_55 = IDLE;
const struct Chord chord_55 PROGMEM = {H_BOT8 + H_BOT9, COLEMAK, &state_55, NULL, KC_RGUI, 0, single_dance};
uint8_t state_56 = IDLE;
const struct Chord chord_56 PROGMEM = {H_BOT9 + H_BOT10, COLEMAK, &state_56, NULL, KC_RALT, 0, single_dance};
void function_57(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_RCTL);
            key_in(KC_RGUI);
            break;
        case DEACTIVATED:
            key_out(KC_RCTL);
            key_out(KC_RGUI);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_RCTL);
            key_out(KC_RGUI);
            break;
        default:
            break;
    };
}
uint8_t state_57 = IDLE;
uint8_t counter_57 = 0;
const struct Chord chord_57 PROGMEM = {H_BOT7 + H_BOT8 + H_BOT9, COLEMAK, &state_57, &counter_57, 0, 0, function_57};
void function_58(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_RCTL);
            key_in(KC_RALT);
            break;
        case DEACTIVATED:
            key_out(KC_RCTL);
            key_out(KC_RALT);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_RCTL);
            key_out(KC_RALT);
            break;
        default:
            break;
    };
}
uint8_t state_58 = IDLE;
uint8_t counter_58 = 0;
const struct Chord chord_58 PROGMEM = {H_BOT7 + H_BOT8 + H_BOT9 + H_BOT10, COLEMAK, &state_58, &counter_58, 0, 0, function_58};
uint8_t state_59 = IDLE;
const struct Chord chord_59 PROGMEM = {H_THU1, COLEMAK, &state_59, NULL, KC_BSPC, 0, single_dance};
uint8_t state_60 = IDLE;
const struct Chord chord_60 PROGMEM = {H_THU1 + H_THU2, COLEMAK, &state_60, NULL, KC_LCTL, 0, single_dance};
uint8_t state_61 = IDLE;
const struct Chord chord_61 PROGMEM = {H_THU2, COLEMAK, &state_61, NULL, KC_SPC, 0, single_dance};
uint8_t state_62 = IDLE;
const struct Chord chord_62 PROGMEM = {H_THU2 + H_THU3, COLEMAK, &state_62, NULL, NAV, 0, temp_pseudolayer};
uint8_t state_63 = IDLE;
const struct Chord chord_63 PROGMEM = {H_THU3, COLEMAK, &state_63, NULL, KC_ENTER, KC_LSFT, key_mod_dance};
uint8_t state_64 = IDLE;
const struct Chord chord_64 PROGMEM = {H_THU4, COLEMAK, &state_64, NULL, KC_DEL, KC_RSFT, key_mod_dance};
uint8_t state_65 = IDLE;
const struct Chord chord_65 PROGMEM = {H_THU4 + H_THU5, COLEMAK, &state_65, NULL, KC_TAB, 0, single_dance};
uint8_t state_66 = IDLE;
uint8_t counter_66 = 0;
const struct Chord chord_66 PROGMEM = {H_THU5, COLEMAK, &state_66, &counter_66, KC_BSPC, SYM, key_layer_dance};
uint8_t state_67 = IDLE;
uint8_t counter_67 = 0;
const struct Chord chord_67 PROGMEM = {H_THU2 + H_THU5, COLEMAK, &state_67, &counter_67, KC_ESC, FNC, key_layer_dance};
uint8_t state_68 = IDLE;
uint8_t counter_68 = 0;
const struct Chord chord_68 PROGMEM = {H_THU6, COLEMAK, &state_68, &counter_68, KC_SPC, NUM, key_layer_dance};
void function_69(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            *self->counter = *self->counter + 1;
            break;
        case PRESS_FROM_ACTIVE:
            switch (*self->counter) {
                case 1:
                    key_in( KC_MPLY);
                    break;
                case 2:
                    key_in( KC_MNXT);
                    break;
                case 3:
                    key_in( KC_MPRV);
                    break;
                default:
                    break;
            }
            *self->state = FINISHED_FROM_ACTIVE;
            break;
        case FINISHED:
            switch (*self->counter) {
                case 1:
                    tap_key( KC_MPLY);
                    break;
                case 2:
                    tap_key( KC_MNXT);
                    break;
                case 3:
                    tap_key( KC_MPRV);
                    break;
                default:
                    break;
            }
            *self->counter = 0;
            *self->state = IDLE;
            break;
        case RESTART:
            switch (*self->counter) {
                case 1:
                    key_out( KC_MPLY);
                    break;
                case 2:
                    key_out( KC_MNXT);
                    break;
                case 3:
                    key_out( KC_MPRV);
                    break;
                default:
                    break;
            }
            *self->counter = 0;
            break;
        default:
            break;
    }
}
uint8_t state_69 = IDLE;
uint8_t counter_69 = 0;
const struct Chord chord_69 PROGMEM = {H_THU1 + H_THU2 + H_THU3 + H_THU4 + H_THU5 + H_THU6, COLEMAK, &state_69, &counter_69, 0, 0, function_69};
uint8_t state_70 = IDLE;
const struct Chord chord_70 PROGMEM = {H_TOP2, SYM, &state_70, NULL, KC_GRV, 0, single_dance};
uint8_t state_71 = IDLE;
const struct Chord chord_71 PROGMEM = {H_TOP3, SYM, &state_71, NULL, KC_LBRC, 0, single_dance};
uint8_t state_72 = IDLE;
const struct Chord chord_72 PROGMEM = {H_TOP4, SYM, &state_72, NULL, KC_LCBR, 0, single_dance};
uint8_t state_73 = IDLE;
const struct Chord chord_73 PROGMEM = {H_TOP5, SYM, &state_73, NULL, KC_LPRN, 0, single_dance};
uint8_t state_74 = IDLE;
const struct Chord chord_74 PROGMEM = {H_TOP6, SYM, &state_74, NULL, KC_LABK, 0, single_dance};
uint8_t state_75 = IDLE;
const struct Chord chord_75 PROGMEM = {H_TOP7, SYM, &state_75, NULL, KC_RABK, 0, single_dance};
uint8_t state_76 = IDLE;
const struct Chord chord_76 PROGMEM = {H_TOP8, SYM, &state_76, NULL, KC_RPRN, 0, single_dance};
uint8_t state_77 = IDLE;
const struct Chord chord_77 PROGMEM = {H_TOP9, SYM, &state_77, NULL, KC_RCBR, 0, single_dance};
uint8_t state_78 = IDLE;
const struct Chord chord_78 PROGMEM = {H_TOP10, SYM, &state_78, NULL, KC_RBRC, 0, single_dance};
uint8_t state_79 = IDLE;
const struct Chord chord_79 PROGMEM = {H_TOP11, SYM, &state_79, NULL, KC_QUES, 0, single_dance};
uint8_t state_80 = IDLE;
const struct Chord chord_80 PROGMEM = {H_MID2, SYM, &state_80, NULL, KC_TILDE, 0, single_dance};
uint8_t state_81 = IDLE;
const struct Chord chord_81 PROGMEM = {H_MID3, SYM, &state_81, NULL, KC_MINS, 0, single_dance};
uint8_t state_82 = IDLE;
const struct Chord chord_82 PROGMEM = {H_MID4, SYM, &state_82, NULL, KC_QUOT, 0, single_dance};
uint8_t state_83 = IDLE;
const struct Chord chord_83 PROGMEM = {H_MID5, SYM, &state_83, NULL, KC_COLN, 0, single_dance};
uint8_t state_84 = IDLE;
const struct Chord chord_84 PROGMEM = {H_MID6, SYM, &state_84, NULL, KC_UNDS, 0, single_dance};
uint8_t state_85 = IDLE;
const struct Chord chord_85 PROGMEM = {H_MID7, SYM, &state_85, NULL, KC_BSLS, 0, single_dance};
uint8_t state_86 = IDLE;
const struct Chord chord_86 PROGMEM = {H_MID8, SYM, &state_86, NULL, KC_EQL, 0, single_dance};
uint8_t state_87 = IDLE;
const struct Chord chord_87 PROGMEM = {H_MID9, SYM, &state_87, NULL, KC_DQUO, 0, single_dance};
uint8_t state_88 = IDLE;
const struct Chord chord_88 PROGMEM = {H_MID10, SYM, &state_88, NULL, KC_PLUS, 0, single_dance};
uint8_t state_89 = IDLE;
const struct Chord chord_89 PROGMEM = {H_MID11, SYM, &state_89, NULL, KC_BSLS, 0, single_dance};
uint8_t state_90 = IDLE;
const struct Chord chord_90 PROGMEM = {H_BOT2, SYM, &state_90, NULL, KC_EXLM, 0, single_dance};
uint8_t state_91 = IDLE;
const struct Chord chord_91 PROGMEM = {H_BOT3, SYM, &state_91, NULL, KC_AT, 0, single_dance};
uint8_t state_92 = IDLE;
const struct Chord chord_92 PROGMEM = {H_BOT4, SYM, &state_92, NULL, KC_HASH, 0, single_dance};
uint8_t state_93 = IDLE;
const struct Chord chord_93 PROGMEM = {H_BOT5, SYM, &state_93, NULL, KC_DLR, 0, single_dance};
uint8_t state_94 = IDLE;
const struct Chord chord_94 PROGMEM = {H_BOT6, SYM, &state_94, NULL, KC_PERC, 0, single_dance};
uint8_t state_95 = IDLE;
const struct Chord chord_95 PROGMEM = {H_BOT7, SYM, &state_95, NULL, KC_CIRC, 0, single_dance};
uint8_t state_96 = IDLE;
const struct Chord chord_96 PROGMEM = {H_BOT8, SYM, &state_96, NULL, KC_AMPR, 0, single_dance};
uint8_t state_97 = IDLE;
const struct Chord chord_97 PROGMEM = {H_BOT9, SYM, &state_97, NULL, KC_ASTR, 0, single_dance};
uint8_t state_98 = IDLE;
const struct Chord chord_98 PROGMEM = {H_BOT10, SYM, &state_98, NULL, KC_PIPE, 0, single_dance};
uint8_t state_99 = IDLE;
const struct Chord chord_99 PROGMEM = {H_BOT11, SYM, &state_99, NULL, KC_QUES, 0, single_dance};
uint8_t state_100 = IDLE;
const struct Chord chord_100 PROGMEM = {H_TOP2, NUM, &state_100, NULL, KC_1, 0, single_dance};
uint8_t state_101 = IDLE;
const struct Chord chord_101 PROGMEM = {H_TOP3, NUM, &state_101, NULL, KC_2, 0, single_dance};
uint8_t state_102 = IDLE;
const struct Chord chord_102 PROGMEM = {H_TOP4, NUM, &state_102, NULL, KC_3, 0, single_dance};
uint8_t state_103 = IDLE;
const struct Chord chord_103 PROGMEM = {H_TOP5, NUM, &state_103, NULL, KC_4, 0, single_dance};
uint8_t state_104 = IDLE;
const struct Chord chord_104 PROGMEM = {H_TOP6, NUM, &state_104, NULL, KC_5, 0, single_dance};
uint8_t state_105 = IDLE;
const struct Chord chord_105 PROGMEM = {H_TOP7, NUM, &state_105, NULL, KC_6, 0, single_dance};
uint8_t state_106 = IDLE;
const struct Chord chord_106 PROGMEM = {H_TOP8, NUM, &state_106, NULL, KC_7, 0, single_dance};
uint8_t state_107 = IDLE;
const struct Chord chord_107 PROGMEM = {H_TOP9, NUM, &state_107, NULL, KC_8, 0, single_dance};
uint8_t state_108 = IDLE;
const struct Chord chord_108 PROGMEM = {H_TOP10, NUM, &state_108, NULL, KC_9, 0, single_dance};
uint8_t state_109 = IDLE;
const struct Chord chord_109 PROGMEM = {H_TOP11, NUM, &state_109, NULL, KC_0, 0, single_dance};
uint8_t state_110 = IDLE;
const struct Chord chord_110 PROGMEM = {H_MID8, NUM, &state_110, NULL, KC_4, 0, single_dance};
uint8_t state_111 = IDLE;
const struct Chord chord_111 PROGMEM = {H_MID9, NUM, &state_111, NULL, KC_5, 0, single_dance};
uint8_t state_112 = IDLE;
const struct Chord chord_112 PROGMEM = {H_MID10, NUM, &state_112, NULL, KC_6, 0, single_dance};
uint8_t state_113 = IDLE;
const struct Chord chord_113 PROGMEM = {H_BOT7, NUM, &state_113, NULL, KC_0, 0, single_dance};
uint8_t state_114 = IDLE;
const struct Chord chord_114 PROGMEM = {H_BOT8, NUM, &state_114, NULL, KC_1, 0, single_dance};
uint8_t state_115 = IDLE;
const struct Chord chord_115 PROGMEM = {H_BOT9, NUM, &state_115, NULL, KC_2, 0, single_dance};
uint8_t state_116 = IDLE;
const struct Chord chord_116 PROGMEM = {H_BOT10, NUM, &state_116, NULL, KC_3, 0, single_dance};
uint8_t state_117 = IDLE;
const struct Chord chord_117 PROGMEM = {H_TOP2, FNC, &state_117, NULL, KC_F1, 0, single_dance};
uint8_t state_118 = IDLE;
const struct Chord chord_118 PROGMEM = {H_TOP3, FNC, &state_118, NULL, KC_F2, 0, single_dance};
uint8_t state_119 = IDLE;
const struct Chord chord_119 PROGMEM = {H_TOP4, FNC, &state_119, NULL, KC_F3, 0, single_dance};
uint8_t state_120 = IDLE;
const struct Chord chord_120 PROGMEM = {H_TOP5, FNC, &state_120, NULL, KC_F4, 0, single_dance};
uint8_t state_121 = IDLE;
const struct Chord chord_121 PROGMEM = {H_TOP6, FNC, &state_121, NULL, KC_F5, 0, single_dance};
uint8_t state_122 = IDLE;
const struct Chord chord_122 PROGMEM = {H_TOP7, FNC, &state_122, NULL, KC_F6, 0, single_dance};
uint8_t state_123 = IDLE;
const struct Chord chord_123 PROGMEM = {H_TOP8, FNC, &state_123, NULL, KC_F7, 0, single_dance};
uint8_t state_124 = IDLE;
const struct Chord chord_124 PROGMEM = {H_TOP9, FNC, &state_124, NULL, KC_F8, 0, single_dance};
uint8_t state_125 = IDLE;
const struct Chord chord_125 PROGMEM = {H_TOP10, FNC, &state_125, NULL, KC_F9, 0, single_dance};
uint8_t state_126 = IDLE;
const struct Chord chord_126 PROGMEM = {H_TOP11, FNC, &state_126, NULL, KC_F10, 0, single_dance};
uint8_t state_127 = IDLE;
const struct Chord chord_127 PROGMEM = {H_MID6, FNC, &state_127, NULL, KC_F11, 0, single_dance};
uint8_t state_128 = IDLE;
const struct Chord chord_128 PROGMEM = {H_MID7, FNC, &state_128, NULL, KC_F12, 0, single_dance};
void function_129(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_LCTL);
            key_in(KC_LALT);
            break;
        case DEACTIVATED:
            key_out(KC_LCTL);
            key_out(KC_LALT);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_LCTL);
            key_out(KC_LALT);
            break;
        default:
            break;
    };
}
uint8_t state_129 = IDLE;
uint8_t counter_129 = 0;
const struct Chord chord_129 PROGMEM = {H_BOT2, FNC, &state_129, &counter_129, 0, 0, function_129};
void function_130(const struct Chord* self) {
    switch (*self->state) {
        case ACTIVATED:
            key_in(KC_RCTL);
            key_in(KC_RALT);
            break;
        case DEACTIVATED:
            key_out(KC_RCTL);
            key_out(KC_RALT);
            *self->state = IDLE;
            break;
        case RESTART:
            key_out(KC_RCTL);
            key_out(KC_RALT);
            break;
        default:
            break;
    };
}
uint8_t state_130 = IDLE;
uint8_t counter_130 = 0;
const struct Chord chord_130 PROGMEM = {H_BOT11, FNC, &state_130, &counter_130, 0, 0, function_130};
uint8_t state_131 = IDLE;
const struct Chord chord_131 PROGMEM = {H_TOP3, NAV, &state_131, NULL, KC_HOME, 0, single_dance};
uint8_t state_132 = IDLE;
const struct Chord chord_132 PROGMEM = {H_TOP4, NAV, &state_132, NULL, KC_UP, 0, single_dance};
uint8_t state_133 = IDLE;
const struct Chord chord_133 PROGMEM = {H_TOP5, NAV, &state_133, NULL, KC_PGUP, 0, single_dance};
uint8_t state_134 = IDLE;
const struct Chord chord_134 PROGMEM = {H_MID3, NAV, &state_134, NULL, KC_LEFT, 0, single_dance};
uint8_t state_135 = IDLE;
const struct Chord chord_135 PROGMEM = {H_MID4, NAV, &state_135, NULL, KC_DOWN, 0, single_dance};
uint8_t state_136 = IDLE;
const struct Chord chord_136 PROGMEM = {H_MID5, NAV, &state_136, NULL, KC_RIGHT, 0, single_dance};
uint8_t state_137 = IDLE;
const struct Chord chord_137 PROGMEM = {H_BOT3, NAV, &state_137, NULL, KC_END, 0, single_dance};
uint8_t state_138 = IDLE;
const struct Chord chord_138 PROGMEM = {H_BOT4, NAV, &state_138, NULL, KC_PGDN, 0, single_dance};
uint8_t state_139 = IDLE;
const struct Chord chord_139 PROGMEM = {H_BOT5, NAV, &state_139, NULL, KC_PGDN, 0, single_dance};

const struct Chord* const list_of_chords[] PROGMEM = {
    &chord_0, &chord_1, &chord_2, &chord_3, &chord_4, &chord_5, &chord_6, &chord_7, &chord_8, &chord_9, &chord_10, &chord_11, &chord_12, &chord_13, &chord_14, &chord_15, &chord_16, &chord_17, &chord_18, &chord_19, &chord_20, &chord_21, &chord_22, &chord_23, &chord_24, &chord_25, &chord_26, &chord_27, &chord_28, &chord_29, &chord_30, &chord_31, &chord_32, &chord_33, &chord_34, &chord_35, &chord_36, &chord_37, &chord_38, &chord_39, &chord_40, &chord_41, &chord_42, &chord_43, &chord_44, &chord_45, &chord_46, &chord_47, &chord_48, &chord_49, &chord_50, &chord_51, &chord_52, &chord_53, &chord_54, &chord_55, &chord_56, &chord_57, &chord_58, &chord_59, &chord_60, &chord_61, &chord_62, &chord_63, &chord_64, &chord_65, &chord_66, &chord_67, &chord_68, &chord_69, &chord_70, &chord_71, &chord_72, &chord_73, &chord_74, &chord_75, &chord_76, &chord_77, &chord_78, &chord_79, &chord_80, &chord_81, &chord_82, &chord_83, &chord_84, &chord_85, &chord_86, &chord_87, &chord_88, &chord_89, &chord_90, &chord_91, &chord_92, &chord_93, &chord_94, &chord_95, &chord_96, &chord_97, &chord_98, &chord_99, &chord_100, &chord_101, &chord_102, &chord_103, &chord_104, &chord_105, &chord_106, &chord_107, &chord_108, &chord_109, &chord_110, &chord_111, &chord_112, &chord_113, &chord_114, &chord_115, &chord_116, &chord_117, &chord_118, &chord_119, &chord_120, &chord_121, &chord_122, &chord_123, &chord_124, &chord_125, &chord_126, &chord_127, &chord_128, &chord_129, &chord_130, &chord_131, &chord_132, &chord_133, &chord_134, &chord_135, &chord_136, &chord_137, &chord_138, &chord_139
};

const uint16_t** const leader_triggers PROGMEM = NULL;
void (*leader_functions[]) (void) = {};

#define NUMBER_OF_CHORDS 140
#define NUMBER_OF_LEADER_COMBOS 0

bool are_hashed_keycodes_in_sound(HASH_TYPE keycodes_hash, HASH_TYPE sound) {
    return (keycodes_hash & sound) == keycodes_hash;
}

uint8_t keycode_to_index(uint16_t keycode) {
    return keycode - FIRST_INTERNAL_KEYCODE;
}

void sound_keycode_array(uint16_t keycode) {
    uint8_t index = keycode_to_index(keycode);
    keycode_index++;
    keycodes_buffer_array[index] = keycode_index;
}

void silence_keycode_hash_array(HASH_TYPE keycode_hash) {
    for (int i = 0; i < NUMBER_OF_KEYS; i++) {
        bool index_in_hash = ((HASH_TYPE) 1 << i) & keycode_hash;
        if (index_in_hash) {
            uint8_t current_val = keycodes_buffer_array[i];
            keycodes_buffer_array[i] = 0;
            for (int j = 0; j < NUMBER_OF_KEYS; j++) {
                if (keycodes_buffer_array[j] > current_val) {
                    keycodes_buffer_array[j]--;
                }
            }
            keycode_index--;
        }
    }
}

bool are_hashed_keycodes_in_array(HASH_TYPE keycode_hash) {
    for (int i = 0; i < NUMBER_OF_KEYS; i++) {
        bool index_in_hash = ((HASH_TYPE) 1 << i) & keycode_hash;
        bool index_in_array = (bool) keycodes_buffer_array[i];
        if (index_in_hash && !index_in_array) {
            return false;
        }
    }
    return true;
}

void kill_one_shots(void) {
    struct Chord chord_storage;
    struct Chord* chord_ptr;
    struct Chord* chord;

    for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
        chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
        memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
        chord = &chord_storage;

        if (*chord->state == IN_ONE_SHOT) {
            *chord->state = RESTART;
            chord->function(chord);
            if (*chord->state == RESTART) {
                *chord->state = IDLE;
            }
        }
    }
}

void process_finished_dances(void) {
    struct Chord chord_storage;
    struct Chord* chord_ptr;
    struct Chord* chord;

    for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
        chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
        memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
        chord = &chord_storage;

        if (*chord->state == ACTIVATED) {
            *chord->state = PRESS_FROM_ACTIVE;
            chord->function(chord);
            if (a_key_went_through) {
                kill_one_shots();
            }
            dance_timer = timer_read();
        } else if (*chord->state == IDLE_IN_DANCE) {
            *chord->state = FINISHED;
            chord->function(chord);
            if (*chord->state == FINISHED) {
                *chord->state = RESTART;
                if (*chord->state == RESTART) {
                    *chord->state = IDLE;
                }
            }
        } else if (*chord->state == PRESS_FROM_ACTIVE) {
            *chord->state = FINISHED_FROM_ACTIVE;
            chord->function(chord);
            if (a_key_went_through) {
                kill_one_shots();
            }
            dance_timer = timer_read();
        }
    }
}

uint8_t keycodes_buffer_array_min(uint8_t* first_keycode_index) {
    for (int i = 0; i < NUMBER_OF_KEYS; i++) {
        if (keycodes_buffer_array[i] == 1) {
            if (first_keycode_index != NULL) {
                *first_keycode_index = (uint8_t) i;
            }
            return 1;
        }
    }
    return 0;
}

void remove_subchords(void) {
    struct Chord chord_storage;
    struct Chord* chord_ptr;
    struct Chord* chord;

    for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
        chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
        memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
        chord = &chord_storage;

        if (!(*chord->state == READY || *chord->state == READY_IN_DANCE || *chord->state == READY_LOCKED)) {
            continue;
        }

        struct Chord chord_storage_2;
        struct Chord* chord_ptr_2;
        struct Chord* chord_2;
        for (int j = 0; j < NUMBER_OF_CHORDS; j++) {
            if (i == j) {continue;}

            chord_ptr_2 = (struct Chord*) pgm_read_word (&list_of_chords[j]);
            memcpy_P(&chord_storage_2, chord_ptr_2, sizeof(struct Chord));
            chord_2 = &chord_storage_2;

            if (are_hashed_keycodes_in_sound(chord_2->keycodes_hash, chord->keycodes_hash)) {
                if (*chord_2->state == READY) {
                    *chord_2->state = IDLE;
                }
                if (*chord_2->state == READY_IN_DANCE) {
                    *chord_2->state = IDLE_IN_DANCE;
                }
                if (*chord_2->state == READY_LOCKED) {
                    *chord_2->state = LOCKED;
                }
            }
        }
    }
}

void process_ready_chords(void) {
    uint8_t first_keycode_index = 0;
    while (keycodes_buffer_array_min(&first_keycode_index)) {
        // find ready chords
        struct Chord chord_storage;
        struct Chord* chord_ptr;
        struct Chord* chord;

        for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
            chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
            memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
            chord = &chord_storage;

            // if the chord does not contain the first keycode
            bool contains_first_keycode = ((HASH_TYPE) 1 << first_keycode_index) & chord->keycodes_hash;
            if (!contains_first_keycode) {
                continue;
            }

            if (!are_hashed_keycodes_in_array(chord->keycodes_hash)){
                continue;
            }

            if (*chord->state == LOCKED) {
                *chord->state = READY_LOCKED;
                continue;
            }

            if (!(chord->pseudolayer == current_pseudolayer || chord->pseudolayer == ALWAYS_ON)) {
                continue;
            }

            if (*chord->state == IDLE) {
                *chord->state = READY;
                continue;
            }

            if (*chord->state == IDLE_IN_DANCE) {
                *chord->state = READY_IN_DANCE;
            }
        }

        // remove subchords
        remove_subchords();

        // execute logic
        // this should be only one chord
        for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
            chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
            memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
            chord = &chord_storage;

            if (*chord->state == READY_LOCKED) {
                *chord->state = RESTART;
                chord->function(chord);
                if (*chord->state == RESTART) {
                    *chord->state = IDLE;
                }
                break;
            }

            if (*chord->state == READY || *chord->state == READY_IN_DANCE) {
                if (last_chord && last_chord != chord) {
                    process_finished_dances();
                }

                bool lock_next_prev_state = lock_next;

                *chord->state = ACTIVATED;
                chord->function(chord);
                dance_timer = timer_read();

                if (lock_next && lock_next == lock_next_prev_state) {
                    lock_next = false;
                    *chord->state = PRESS_FROM_ACTIVE;
                    chord->function(chord);
                    if (*chord->state == PRESS_FROM_ACTIVE) {
                        *chord->state = LOCKED;
                    }
                    if (a_key_went_through) {
                        kill_one_shots();
                    }
                }
                break;
            }
        }

        // silence notes
        silence_keycode_hash_array(chord->keycodes_hash);
    }
}

void deactivate_active_chords(uint16_t keycode) {
    HASH_TYPE hash = (HASH_TYPE)1 << (keycode - SAFE_RANGE);
    bool broken;
    struct Chord chord_storage;
    struct Chord* chord_ptr;
    struct Chord* chord;

    for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
        chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
        memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
        chord = &chord_storage;

        broken = are_hashed_keycodes_in_sound(hash, chord->keycodes_hash);
        if (!broken) {
            continue;
        }

        switch (*chord->state) {
            case ACTIVATED:
                *chord->state = DEACTIVATED;
                chord->function(chord);

                if (*chord->state == DEACTIVATED) {
                    dance_timer = timer_read();
                    *chord->state = IDLE_IN_DANCE;
                }
                if (*chord->state != IN_ONE_SHOT) {
                    kill_one_shots();
                }
                break;
            case PRESS_FROM_ACTIVE:
            case FINISHED_FROM_ACTIVE:
                *chord->state = RESTART;
                chord->function(chord);
                if (*chord->state == RESTART) {
                    *chord->state = IDLE;
                }
                kill_one_shots();
                break;
            default:
                break;
        }
    }

}

void process_command(void) {
    command_mode = 0;
    for (int i = 0; i < COMMAND_MAX_LENGTH; i++) {
        if (command_buffer[i]) {
            register_code(command_buffer[i]);
        }
        send_keyboard_report();
    }
    wait_ms(TAP_TIMEOUT);
    for (int i = 0; i < COMMAND_MAX_LENGTH; i++) {
        if (command_buffer[i]) {
            unregister_code(command_buffer[i]);
        }
        send_keyboard_report();
    }
    for (int i = 0; i < COMMAND_MAX_LENGTH; i++) {
        command_buffer[i] = 0;
    }
    command_ind = 0;
}

void process_leader(void) {
    in_leader_mode = false;
    for (int i = 0; i < NUMBER_OF_LEADER_COMBOS; i++) {
        uint16_t trigger[LEADER_MAX_LENGTH];
        memcpy_P(trigger, leader_triggers[i], LEADER_MAX_LENGTH * sizeof(uint16_t));

        if (identical(leader_buffer, trigger)) {
            (*leader_functions[i])();
            break;
        }
    }
    for (int i = 0; i < LEADER_MAX_LENGTH; i++) {
        leader_buffer[i] = 0;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode < FIRST_INTERNAL_KEYCODE || keycode > LAST_INTERNAL_KEYCODE) {
        return true;
    }

    if (record->event.pressed) {
        sound_keycode_array(keycode);
    } else {
        process_ready_chords();
        deactivate_active_chords(keycode);
    }
    chord_timer = timer_read();
    leader_timer = timer_read();

    return false;
}

void matrix_scan_user(void) {
    bool chord_timer_expired = timer_elapsed(chord_timer) > CHORD_TIMEOUT;
    if (chord_timer_expired && keycodes_buffer_array_min(NULL)) {
        process_ready_chords();
    }

    bool dance_timer_expired = timer_elapsed(dance_timer) > DANCE_TIMEOUT;
    if (dance_timer_expired) { // would love to have && in_dance but not sure how
        process_finished_dances();
    }

    bool in_command_mode = command_mode == 2;
    if (in_command_mode) {
        process_command();
    }

    bool leader_timer_expired = timer_elapsed(leader_timer) > LEADER_TIMEOUT;
    if (leader_timer_expired && in_leader_mode) {
        process_leader();
    }

}

void clear(const struct Chord* self) {
    if (*self->state == ACTIVATED) {
        // kill all chords
        struct Chord chord_storage;
        struct Chord* chord_ptr;
        struct Chord* chord;

        for (int i = 0; i < NUMBER_OF_CHORDS; i++) {
            chord_ptr = (struct Chord*) pgm_read_word (&list_of_chords[i]);
            memcpy_P(&chord_storage, chord_ptr, sizeof(struct Chord));
            chord = &chord_storage;

            *chord->state = IDLE;

            if (chord->counter) {
                *chord->counter = 0;
            }
        }

        // clear keyboard
        clear_keyboard();
        send_keyboard_report();

        // switch to default pseudolayer
        current_pseudolayer = DEFAULT_PSEUDOLAYER;

        // clear all keyboard states
        lock_next = false;
        autoshift_mode = true;
        command_mode = 0;
        in_leader_mode = false;
        leader_ind = 0;
        dynamic_macro_mode = false;
        a_key_went_through = false;

        for (int i = 0; i < DYNAMIC_MACRO_MAX_LENGTH; i++) {
            dynamic_macro_buffer[i] = 0;
        }
    }
}
