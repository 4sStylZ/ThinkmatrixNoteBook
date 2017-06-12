#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];

#define KEYMAP( \
                                                                                        \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, \
    K200, K201, K202, K203, K204, K205,       K207, K208, K209, K210, K211, K212, K213, \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, \
          K401, K402, K403, K404, K405,       K407, K408, K409, K410, K411, K412,       \
    K500, K501, K502, K503,       K505,       K507,       K509, K510, K511, K512, K513, \
    K600, K601,       K603,                               K609, K610, K611, K612, K613  \
) { \
    { KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     }, \
    { KC_##K100, KC_##K101, KC_##K102, KC_##K103, KC_##K104, KC_##K105, KC_##K106, KC_##K107, KC_##K108, KC_##K109, KC_##K110, KC_##K111, KC_##K112, KC_##K113, }, \
    { KC_##K200, KC_##K201, KC_##K202, KC_##K203, KC_##K204, KC_##K205, KC_NO,     KC_##K207, KC_##K208, KC_##K209, KC_##K210, KC_##K211, KC_##K212, KC_##K213, }, \
    { KC_##K300, KC_##K301, KC_##K302, KC_##K303, KC_##K304, KC_##K305, KC_NO,     KC_##K307, KC_##K308, KC_##K309, KC_##K310, KC_##K311, KC_##K312, KC_##K313, }, \
    { KC_NO,     KC_##K401, KC_##K402, KC_##K403, KC_##K404, KC_##K405, KC_##K306, KC_##K407, KC_##K408, KC_##K409, KC_##K410, KC_##K411, KC_##K412, KC_NO,     }, \
    { KC_##K500, KC_##K501, KC_##K502, KC_##K503, KC_NO,     KC_##K505, KC_NO,     KC_##K507, KC_NO,     KC_##K509, KC_##K510, KC_##K511, KC_##K512, KC_##K513, }, \
    { KC_##K600, KC_##K601, KC_NO,     KC_##K603, KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_##K609, KC_##K610, KC_##K611, KC_##K612, KC_##K613, }, \
}

#endif
