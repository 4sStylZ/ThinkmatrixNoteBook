#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
                                                                                                          \
          GRV,     1,     2,     3,     4,     5,  BSPC,     6,     7,     8,     9,     0,  MINS,   EQL, \
          TAB,     Q,     W,     E,     R,     T,            Y,     U,     I,     O,     P,  LBRC,  RBRC, \
         LSFT,     A,     S,     D,     F,     G,   ENT,     H,     J,     K,     L,  SCLN,  QUOT,  RSFT, \
                   Z,     X,     C,     V,     B,            N,     M,  COMM,   DOT,  SLSH,  BSLS,        \
         LCTL,   F13,   F14,   F15,          SPC,          SPC,          F16,   F17,    UP,   F18,  RCTL, \
          FN0,  LALT,         LGUI,                                    RALT,  LEFT,  DOWN,  RGHT,   FN1  ),
    /* layer 1 */
    KEYMAP(
                                                                                                          \
         ESC,   F1,    F2,    F3,    F4,    F5,   DELETE, F6,    F7,    F8,    F9,    F10,   F11,   F12,  \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         CAPS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  MPLY,  TRNS,  TRNS,  TRNS,  KP_7,  KP_8,  KP_9,  CAPS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  KP_4,  KP_5,  KP_6,        \
         TRNS,  CUT ,  COPY, PASTE,         VOLD,         VOLU,         TRNS,  KP_1,  KP_2,  KP_3,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  KP_0,  FN14,  FN15,  TRNS  ),
    /* layer 2 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  INS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  MUTE,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         MPRV,         MNXT,         TRNS,  TRNS,  PGUP,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  HOME,PGDOWN,   END,  TRNS  ),
    /* layer 3 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         TRNS,         TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  TRNS,  TRNS,  TRNS,  TRNS  ),
    /* layer 4 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         TRNS,         TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  TRNS,  TRNS,  TRNS,  TRNS  ),
    /* layer 5 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         TRNS,         TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  TRNS,  TRNS,  TRNS,  TRNS  ),
    /* layer 6 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         TRNS,         TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  TRNS,  TRNS,  TRNS,  TRNS  ),
    /* layer 7 */
    KEYMAP(
                                                                                                          \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,        \
         TRNS,  TRNS,  TRNS,  TRNS,         TRNS,         TRNS,         TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
         TRNS,  TRNS,         TRNS,                                     TRNS,  TRNS,  TRNS,  TRNS,  TRNS  ),
};

enum macro_id {
    MACRO_0,
    MACRO_1,
    MACRO_2,
    MACRO_3,
    MACRO_4,
    MACRO_5,
    MACRO_6,
    MACRO_7,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    switch (id) {
        case MACRO_0:
            return (event.pressed ?
                    MACRO( T(KP_0), T(KP_0), END ) :
                    MACRO( END ));
        case MACRO_1:
            return (event.pressed ?
                    MACRO( T(KP_0), T(KP_0), T(KP_0), END ) :
                    MACRO( END ));
        case MACRO_2:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_3:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_4:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_5:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_6:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
        case MACRO_7:
            return (event.pressed ?
                    MACRO( END ) :
                    MACRO( END ));
    }
    return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TOGGLE(4),
    [11] = ACTION_LAYER_TOGGLE(5),
    [12] = ACTION_LAYER_TOGGLE(6),
    [13] = ACTION_LAYER_TOGGLE(7),
    [14] = ACTION_MACRO(MACRO_0),
    [15] = ACTION_MACRO(MACRO_1),
    [16] = ACTION_MACRO(MACRO_2),
    [17] = ACTION_MACRO(MACRO_3),
    [18] = ACTION_MACRO(MACRO_4),
    [19] = ACTION_MACRO(MACRO_5),
    [20] = ACTION_MACRO(MACRO_6),
    [21] = ACTION_MACRO(MACRO_7),
};
