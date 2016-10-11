#include "action_util.h"
#include "action_layer.h"

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~Fn1 |           | ~Fn3 |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RShift |
     * |--------+------+------+------+------+------|  Fn0 |           | ~Fn4 |------+------+------+------+------+--------|
     * | LCtrl  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RCtrl  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~Fn1 | ~Fn2 | Caps | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~Fn4 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +Fn2 | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */

    // BASE LAYERS

    KEYMAP(  // layer 0: customized dvorak with symbol row switched
        // left hand
        ESC, FN12,FN12,FN12,FN12,FN12,F17,
        TAB, QUOT,COMM,DOT, P,   Y,   FN2,
        LSFT,A,   O,   E,   U,   I,
        LCTL,SCLN,Q,   J,   K,   X,   DEL,
        FN3, FN1, LCTL,LALT,LGUI,
                                      FN5, F15,
                                           F16,
                                 BSPC,LSFT,LGUI,
        // right hand
             F18, FN12,FN12,FN12,FN12,FN12,MPLY,
             FN3, F,   G,   C,   R,   L,   MNXT,
                  D,   H,   T,   N,   S,   RSFT,
             DEL, B,   M,   W,   V,   Z,   RCTL,
                       SPC, RALT,APP, FN8, FN2,
        F13, MPLY,
        F14,
        ENT, FN1, SPC
    ),

    KEYMAP(  // layer 1: transparent because this gets triggered more than I'd like
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2: customized dvorak
        // left hand
        ESC, 1,   2,   3,   4,   5,   BSLS,
        TAB, QUOT,COMM,DOT, P,   Y,   FN2,
        LSFT,A,   O,   E,   U,   I,
        LCTL,SCLN,Q,   J,   K,   X,   DEL,
        FN3, FN1, LCTL,LALT,LGUI,
                                      FN5, HOME,
                                           END,
                                 BSPC,LSFT,LGUI,
        // right hand
             MINS,6,   7,   8,   9,   0,   EQL,
             FN3, F,   G,   C,   R,   L,   SLSH,
                  D,   H,   T,   N,   S,   RSFT,
             DEL, B,   M,   W,   V,   Z,   RCTL,
                       LEFT,DOWN,UP,  RGHT,FN2,
        PGUP,MPLY,
        PGDN,
        ENT, FN1, SPC
    ),

    KEYMAP(  // layer 3 : qwerty
        // left hand
        TRNS,1,   2,   3,   4,   5,   TRNS,
        TRNS,Q,   W,   E,   R,   T,   TRNS,
        TRNS,A,   S,   D,   F,   G,
        TRNS,Z,   X,   C,   V,   B,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,6,   7,   8,   9,   0,   MINS,
             TRNS,Y,   U,   I,   O,   P,   RBRC,
                  H,   J,   K,   L,   SCLN,RSFT,
             TRNS,N,   M,   COMM,DOT, SLSH,RSFT,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // PLOVER (SPECIAL CASE)

    #define LAYER_PLOVER 4
    KEYMAP(  // layer 4: Steno for Plover
        // left hand
        FN5, NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  1,   2,   3,   4,   5,   NO,  
        TRNS,Q,   W,   E,   R,   T,  
        NO,  A,   S,   D,   F,   G,   NO,
        NO,  NO,  NO,  NO,  NO,  
                                      FN5, NO,  
                                           NO,  
                                 C,   V,   NO,  
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             NO,  6,   7,   8,   9,   0,   TRNS,
                  Y,   U,   I,   O,   P,   LBRC,
             NO,  H,   J,   K,   L,   SCLN,QUOT,
                       TRNS,TRNS,NO,  NO,  NO,  
        TRNS,TRNS,  
        TRNS,  
        NO,  N,   M   
    ),

    KEYMAP(  // layer 5: reserved
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // MODIFIERS THAT MIGHT BE STICKY

    #define LAYER_NUMPAD 6
    KEYMAP(  // layer 6: mouse + numpad
        // left hand
        FN0, NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,NO,  WH_U,MS_U,WH_D,BTN2,TRNS,
        TRNS,NO,  MS_L,MS_D,MS_R,BTN1,
        TRNS,FN8, NO,  NO,  NO,  BTN3,TRNS,
        TRNS,FN13,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,EQL, PSLS,PAST,PMNS,TRNS,
             TRNS,BSPC,P7,  P8,  P9,  PMNS,BSPC,
                  BSPC,P4,  P5,  P6,  PMNS,PENT,
             BSPC,BSPC,P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,PDOT,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        ENT, TRNS,TRNS
    ),

    KEYMAP(  // layer 7: F-keys + cursor
        // left hand
        FN0, F1,  F2,  F3,  F4,  F5,  F6,
        BTLD,NO,  PGUP,UP,  PGDN,NO,  TRNS,
        TRNS,HOME,LEFT,DOWN,RGHT,END, 
        TRNS,NO,  NO,  END, HOME,NO,  TRNS,
        TRNS,TRNS,TRNS,FN10,FN11,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,NO,  PGUP,UP,  PGDN, NO, BTLD,
                  HOME,LEFT,DOWN,RGHT,END, TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS, TRNS,RSFT,RCTL
    ),

    #define LAYER_BLUESHIFT 8
    KEYMAP(  // layer 8: "BlueShift"
        // left hand
        FN0, F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,FN12,FN12,FN12,PSCR,BSLS,TRNS,  // the FN12 entries are for tilde and inverted brace/bracket keys
        TRNS,APP, TAB, EQL, TRNS,INS, 
        TRNS,TRNS,FN8, TRNS,CAPS,TRNS,TRNS,  // quit (alt+f4)
        FN13,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, TRNS,
             TRNS,PGUP,HOME,UP,  END, SLSH,TRNS,
                  PGDN,LEFT,DOWN,RGHT,MINS,TRNS,
             TRNS,TRNS,NO,  UP,  NO,  TRNS,TRNS,
                       LEFT,DOWN,RGHT,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 9: reserved
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 10: reserved
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // MODIFIERS THAT WON'T BE STICKY

    KEYMAP(  // layer 11: Special function-driven commands (any-key)
        // left hand
        FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
        FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
        LSFT,FN8, FN8, FN8, FN8, FN8, 
        FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
        FN8, FN8, FN8, FN8, FN8, 
                                      FN8, FN8, 
                                           FN8, 
                                 FN8, FN10,FN8, 
        // right hand
             FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
             FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
                  FN8, FN8, FN8, FN8, FN8, RSFT,
             FN8, FN8, FN8, FN8, FN8, FN8, FN8, 
                       FN8, FN8, FN8, FN8, FN8, 
        FN8, FN8, 
        FN8, 
        FN8, FN8, FN8
    ),

    #define LAYER_FKEYS 12
    KEYMAP(  // layer 12: F-keys only
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,F13, F14, F15, F16, NO,  TRNS,
        TRNS,F17, F18, F19, F20, NO,  
        TRNS,F21, F22, F23, F24, NO,  TRNS,
        FN13,FN13,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  F10, F11, F12, NO,  TRNS,
             TRNS,NO,  F7,  F8,  F9,  NO,  TRNS,
                  NO,  F4,  F5,  F6,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  NO,  TRNS,
                       RGUI,RALT,RCTL,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    // TEMPLATES

/*
    KEYMAP(  // layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    ANY_KEY,
    PLOVER_SWITCH,
    SHIFT_SWITCH,
    FKEY_SWITCH,
    UNUSED,
};

enum macro_id {
    MACRO_PASSWORD1,
    MACRO_PASSWORD2,
    MACRO_PASSWORD3,
};

/*
 * Fn action definition (limited to 32)
 */
static const action_t PROGMEM fn_actions[] = {
    ACTION_LAYER_SET(0, ON_PRESS),                  // FN0 - reset layer to just 0
    ACTION_LAYER_TAP_TOGGLE(LAYER_BLUESHIFT),       // FN1 - switch to BlueShift
    ACTION_LAYER_TAP_KEY(7, KC_F21),                // FN2 - movement layer, also desktop switcher
    ACTION_LAYER_TAP_TOGGLE(LAYER_NUMPAD),          // FN3 - numpad
    ACTION_FUNCTION(UNUSED),                        // ** FN4 - unused
    ACTION_FUNCTION(PLOVER_SWITCH),                 // FN5 - toggle Plover
    ACTION_FUNCTION(UNUSED),                        // ** FN6 - unused
    ACTION_FUNCTION(UNUSED),                        // ** FN7 - unused
    ACTION_FUNCTION(ANY_KEY),                       // FN8 - AnyKey functional layer
    ACTION_FUNCTION(UNUSED),                        // ** FN9 - unused
    ACTION_MACRO(MACRO_PASSWORD1),                  // FN10 - password1
    ACTION_MACRO(MACRO_PASSWORD2),                  // FN11 - password2
    ACTION_FUNCTION(SHIFT_SWITCH),                  // FN12 - symbolized number row
    ACTION_FUNCTION(FKEY_SWITCH),                   // FN13 - Two-button Fkey layer requires special logic to get rid of it appropriately
};

void simon_hotkey(keyrecord_t *record, action_t action)
{
    keyevent_t event = record->event;

    switch (action.kind.id) {
        /* Key and Mods */
        case ACT_LMODS:
        case ACT_RMODS:
            {
                uint8_t mods = (action.kind.id == ACT_LMODS) ?  action.key.mods :
                                                                action.key.mods<<4;
                if (event.pressed) {
                    if (mods) {
                        add_weak_mods(mods);
                        send_keyboard_report();
                    }
                    register_code(action.key.code);
                } else {
                    unregister_code(action.key.code);
                    if (mods) {
                        del_weak_mods(mods);
                        send_keyboard_report();
                    }
                }
            }
            break;
        default:
            print("not supported.\n");
            break;
    }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");
    if (id == PLOVER_SWITCH) {
        action_t action = ACTION_KEY((layer_state & 1<<LAYER_PLOVER) ? KC_F23 : KC_F24);
        if (!event.pressed) {
            uint8_t savedmods = get_mods();
            uint8_t shiftpressed = (savedmods & (MOD_LSFT | MOD_RSFT));
            if (shiftpressed) {
                layer_off(LAYER_PLOVER); // shift+plover is a signal to AHK to restart Plover, so don't toggle the plover layer
            } else {
                layer_invert(LAYER_PLOVER);
            }
            //clear_mods();
        }
        if (action.code != (action_t)ACTION_NO.code) {
            simon_hotkey(record, action);
        }
    }
    else if (id == ANY_KEY) {
        uint8_t col = event.key.col;
        uint8_t row = event.key.row;

        action_t action = ACTION_NO;

        if (col == 3 && row == 1) { // :
            action = (action_t)ACTION_MODS_KEY(MOD_LSFT, KC_SCLN);
        }
        else if (col == 3 && row == 2) { // Q
            action = (action_t)ACTION_MODS_KEY(MOD_LALT, KC_F4);
        }
        else if (col == 3 && row == 10) { // W
            action = (action_t)ACTION_MODS_KEY(MOD_LALT, KC_F4);
        }
        else if (col == 4 && row == 12) { // Alt+tab
            action = (action_t)ACTION_MODS_KEY(MOD_LALT, KC_TAB);
        }
        if (action.code != (action_t)ACTION_NO.code) {
            simon_hotkey(record, action);
        }
        else if (!event.pressed) {
            print("col = "); pdec(col); print("\n");
            print("row = "); pdec(row); print("\n");
        }
    }
    else if (id == SHIFT_SWITCH) {
        uint8_t col = event.key.col;
        uint8_t row = event.key.row;
        uint8_t savedmods = get_mods();
        uint8_t shiftpressed = (savedmods & (MOD_LSFT | MOD_RSFT));
        uint8_t othermodspressed = (savedmods & (MOD_LGUI | MOD_RGUI | MOD_LCTL | MOD_RCTL | MOD_LALT | MOD_RALT ));

        action_t action = ACTION_NO;
        uint8_t keycode = KC_NO;

        if (col == 0) { // Number row
            switch (row) {
                case 1:
                    keycode = KC_1;
                    break;
                case 2:
                    keycode = KC_2;
                    break;
                case 3:
                    keycode = KC_3;
                    break;
                case 4:
                    keycode = KC_4;
                    break;
                case 5:
                    keycode = KC_5;
                    break;
                case 8:
                    keycode = KC_6;
                    break;
                case 9:
                    keycode = KC_7;
                    break;
                case 10:
                    keycode = KC_8;
                    break;
                case 11:
                    keycode = KC_9;
                    break;
                case 12:
                    keycode = KC_0;
                    break;
                default:
                    break;
            }
        }
        if (col == 1) { // next row
            switch (row) {
                case 1:
                    keycode = KC_GRV;
                    break;
                case 2:
                    keycode = KC_LBRC;
                    break;
                case 3:
                    keycode = KC_RBRC;
                    break;
                default:
                    break;
            }
        }
        if (keycode != KC_NO) {
            action = (action_t)ACTION_MODS_KEY(MOD_LSFT, keycode);
        }
        if (action.code != (action_t)ACTION_NO.code) {
            if (othermodspressed) {
                action.key.mods = 0;
            }
            else if (shiftpressed) {
                action.key.mods = 0;
                del_mods(MOD_LSFT | MOD_RSFT);
            }
            simon_hotkey(record, action);
            if (shiftpressed) {
                set_mods(savedmods);
            }
        }
    }
    else if (id == FKEY_SWITCH) {
        uint8_t row = event.key.row;
        if (event.pressed) {
            layer_on(LAYER_FKEYS);
        }
        else {
            if (
                    ((row == 0) && (layer_state & 1<<LAYER_NUMPAD)) // left button and from numpad; out-of-order release
                 || ((row == 1) && (layer_state & 1<<LAYER_BLUESHIFT)) // right button and from BlueShift; out-of-order release
               ) { 
                layer_invert(LAYER_NUMPAD);
                layer_invert(LAYER_BLUESHIFT);
            }
            layer_off(LAYER_FKEYS);
        }
    }
}

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    if (event.pressed) {
        switch (id) {
#include "keymap_simon_passwords.h"
        }
    }
    return MACRO_NONE;
}

