/* ========================================
FileName: keymap.c
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: keymap for the wired corne keyboard
Build:
  cd $HOME
  git clone https://github.com/mctechnology17/qmk-config.git
  OR with SSH
  git clone git@github.com:mctechnology17/qmk-config.git
  cp -r mctechnology17 ~/qmk_firmware/keyboards/crkbd/keymaps
  qmk compile -kb crkbd -km mctechnology17
  ENJOY!
Find compiled software:
  Darwin:
    open ~/qmk_firmware/.build && open -a QMK\ Toolbox
  Linux:
    xdg-open ~/qmk_firmware/.build
  Windows:
    cd .\qmk_firmware\.build
    start .
Edit software:
  cd ~/qmk_firmware/keyboards/crkbd/keymaps/mctechnology17
  nvim .

                           ╔═╦═╦═╗
                    ╔════╗ ║║║║║╔╝
                    ║╔╗╔╗║ ║║║║║╚╗
                    ╚╝║║╚╝ ║╠═╩╩═╝
                      ║╠═╦═╣╚╦═╦╦═╦╗╔═╦═╦╦╗
                      ║║╩╣═╣║║║║║╬║╚╣╬║╬║║║
                      ╚╩═╩═╩╩╩╩═╩═╩═╩═╬╗╠╗║
                                      ╚═╩═╝

Copyright 2022 Marcos Ivan Chow Castro @mctechnology17
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// ### include {{{
#include QMK_KEYBOARD_H
#include "keymap_german_mac_iso_qmk.h"
#include "mctechnology17.h"
#include <stdio.h>
//}}}
// ### START LAYOUTS {{{
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_split_3x6_3(
        /* ### 0 MacOS {{{
             .------------------------------------------------.
           .-------------------------------------------------. |LT4 ESC |   Q |
           W   |   E   |   R   |   T   |                         |   Z   |   U
           |   I   |   O   |   P   | BACKSPC |
             |--------+-------+-------+-------+-------+-------|
           |-------+-------+-------+-------+-------+---------| |LT5 TAB |   A |
           S   |   D   |   F   |   G   |                         |   H   |   J
           |   K   |   L   |  UP   |   ENTER |
             |--------+-------+-------+-------+-------+-------|
           |-------+-------+-------+-------+-------+---------| |SHIFT   |   Y |
           X   |   C   |   V   |   B   |                         |   N   |   M
           |RSFT , |  LEFT |  DOWN |   RIGHT |
             '---------------------------------------------------------|
           |----------------------------------------------------------' |  CTRL
           |  CMD       |   ALT  |       | LT1 SPACE | LT2 CMD   | LT3 RALT |
                                      '--------------------------------'
           '----------------------------------'
        */
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        MEDIA_ESC, DE_Q, DE_W, DE_E, DE_R, DE_T, DE_Z, DE_U, DE_I, DE_O, DE_P,
        DE_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        MOUSE_TAB, DE_A, DE_S, DE_D, DE_F, DE_G, DE_H, DE_J, DE_K, DE_L, DE_UP,
        DE_ENT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_LSFT, DE_Y, DE_X, DE_C, DE_V, DE_B, DE_N, DE_M, LSHFT_COMMA, DE_LEFT,
        DE_DOWN, DE_RIGHT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_LALT, NUMBER_SPACE, SYMBOL_RGUI, FUNCTION_RALT
        //`--------------------------'  `--------------------------'

        ),
    // }}}
    /* ### 1 NUMBER LAYOUT {{{
          .-------------------------------------------------.
       .-------------------------------------------------. |   0     |   1   |
       2   |   3   |   -   |   +   |                         |   ß   |   Ü   |
       Ä   |   Ö   |       |BACKSPC  |
          |---------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |CAPS_LOCK|   4   |
       5   |   6   |   /   |   *   |                         |   #   |   ~   |
       ?   |   @   |       | ALT     |
          |---------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | SHIFT   |   7   |
       8   |   9   |   %   |   =   |                         |   .   |   ´   |
       `   |       |       | ALTGR   |
          '----------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL |
       CMD  |     SPACE      |       |        |  LSFT |      ALTGR    |
                                    '--------------------------------'
       '--------------------------------'
    */
    [_NUMBER] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        DE_0, DE_1, DE_2, DE_3, DE_MINS, DE_PLUS, DE_SS, DE_UDIA, DE_ADIA,
        DE_ODIA, XXXXXXX, DE_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_CAPS_LOCK, DE_4, DE_5, DE_6, DE_SLSH, DE_ASTR, DE_HASH, DE_TILD,
        DE_QUES, DE_AT, XXXXXXX, DE_LALT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_LSFT, DE_7, DE_8, DE_9, DE_PERC, DE_EQL, DE_DOT, DE_ACUT, DE_GRV,
        XXXXXXX, XXXXXXX, DE_RALT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_SPC, XXXXXXX, DE_LSFT, DE_RALT
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 2 SYMBOLS LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |   $    |   (   | )
       |   [   |   ]   |   ~   |                         | ´     |   `   | | |
       | BACKSPC |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |   %    |   {   | }
       |   ^   |PAGE_UP|   #   |                         |   &   |   |   | | |
       | ALT     |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |SHIFT   |    <  | >
       |  HOME |PAGE_DO|  END  |                         |   ~   |   '   | | |
       |  ALTGR  |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       | SPACE  |       |  ENTER | ALTGR |          CTRL |
                                   '--------------------------------'
       '--------------------------------'
    */
    [_SYMBOL] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        DE_DLR, DE_LPRN, DE_RPRN, DE_LBRC, DE_RBRC, DE_TILD, DE_ACUT, DE_GRV,
        XXXXXXX, XXXXXXX, XXXXXXX, DE_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_PERC, DE_LCBR, DE_RCBR, DE_CIRC, DE_PAGE_UP, DE_HASH, DE_AMPR,
        DE_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, DE_LALT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_LSFT, DE_LABK, DE_RABK, DE_HOME, DE_PAGE_DOWN, DE_END, DE_TILD,
        DE_QUOT, XXXXXXX, XXXXXXX, XXXXXXX, DE_RALT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_SPC, DE_ENT, DE_RALT, DE_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 3 FUNTIONS LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |    F1  |  F2   | F3
       |   F4  | SPELL |TRADUCT|                         |DE_F21 | DE_F22| | |
       |         |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |    F5  |  F6   | F7
       |    F8 |   \   |ALFRED |                         |C-A-DEL|QMKBEST|DE_F24
       |CLR_LIN|BRI_UP |         |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |    F9  |   F10 |
       F11 |   F12 |ALFRED |EMOJI  | |L_SHIFT|L_SHIFT|R_SHIFT|       | BRI_UP| |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       |   ALT  |       |  TAB   |   ´   |          CTRL |
                                   '--------------------------------'
       '--------------------------------'
    */
    [_FUNCTION] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        DE_F1, DE_F2, DE_F3, DE_F4, SPELL, TRADUCT, DE_F22, DE_F21, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_F5, DE_F6, DE_F7, DE_F8, DE_BSLS, SNIPPET, TASKM, QMKBEST, DE_F24,
        DE_F23, DE_BRI_UP, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_F9, DE_F10, DE_F11, DE_F12, CLIPBRD, EMOJI, DE_LSFT, DE_LSFT,
        DE_RSFT, XXXXXXX, DE_BRI_DN, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_LALT, DE_TAB, DE_ACUT, DE_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 4 MEDIA LAYOUT {{{
     * LCAG(kc) Hold Left Control, Alt and GUI and press kc
     * LSG(kc) Hold Left Shift and GUI and press kc
     * LAG(kc) 	Hold Left Alt and Left GUI and press kc
          .------------------------------------------------.
     .-------------------------------------------------. |
     |SC_FLOW|TXTSNIP|SC_SHOT|OP_TERM|       |                         |POS1
     |POS2   |LANG_1 |LANG_2 | STOP  |  DELETE |
          |--------+-------+-------+-------+-------+-------|
     |-------+-------+-------+-------+-------+---------| |        |SC_SPSF|SC_RE
     |       |       |       |                         |POS3   |POS4   |LANG_3 |
     |VOL_UP |PLAY/PAUS|
          |--------+-------+-------+-------+-------+-------|
     |-------+-------+-------+-------+-------+---------| |        |       | | |
     |       |                         |       |       |  MUTE |  PREV |VOL_DOW|
     NEXT   |
          '---------------------------------------------------------|
     |----------------------------------------------------------' |  CTRL    |
     CMD       |   ALT  |       |  SPACE | ALTGR |          CTRL |
                                   '--------------------------------'
     '--------------------------------'
    */
    [_MEDIA] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        XXXXXXX, SC_FLOW, TXTSNIP, SC_SHOT, OP_TERM, XXXXXXX, POS1, POS2,
        DE_LANG1, DE_LANG2, DE_STOP, DE_DEL,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, SC_SPSF, SC_RE, XXXXXXX, XXXXXXX, XXXXXXX, POS3, POS4,
        DE_LANG3, XXXXXXX, DE_VOL_UP, DE_PLAY,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        DE_MUTE, DE_PREV, DE_VOL_DN, DE_NEXT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_SPC, DE_ENT, DE_RALT, DE_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 5 MOUSE RGB BOOT LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |RAINBOW | LALT
       |RAINBOW|       |       |       |
       |RGBBRI-|RGBBRI+|WH_LEFT|WH_RIGH|WH_DOWN| WH_UP   |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | |CLICK_1|CLICK_2|
       |       |       |                         |RGBSAT-|RGBSAT+| |CLICK_1| UP
       |CLICK_2  |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | L_SHIFT|       | |
       |       | BOOT  |                         |RGBHUE-|RGBHUE+|       | LEFT
       | DOWN  | RIGHT   |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       | SPACE  |       |RGBANI- |RGBANI+|   RGBTOG      |
                                   '--------------------------------'
       '--------------------------------'
    */
    // ### MC: add _MOUSE LAYOUT_5

    [_MOUSE] = LAYOUT_split_3x6_3(
        // RGB_MODE_SWIRL, RGB_MODE_BREATHE, RGB_MODE_RAINBOW
        // RGB_MOD, RGB_RMOD,
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        RGB_MODE_RAINBOW, DE_LALT, RGB_MODE_RAINBOW, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_VAI, RGB_VAD, DE_MS_WH_LEFT, DE_MS_WH_RIGHT, DE_MS_WH_UP,
        DE_MS_WH_DOWN,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, DE_MS_BTN1, DE_MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAI,
        RGB_SAD, XXXXXXX, DE_MS_BTN3, DE_MS_UP, DE_MS_BTN4,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        DE_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, RGB_HUI, RGB_HUD,
        XXXXXXX, DE_MS_LEFT, DE_MS_DOWN, DE_MS_RIGHT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        DE_LCTL, DE_LGUI, DE_SPC, XXXXXXX, XXXXXXX, RGB_TOG
        //`--------------------------'  `--------------------------'
        )};
// }}}
// END LAYOUTS }}}
#ifdef COMBO_ENABLE // {{{
enum combo_events {
  EM_EMAIL,
  BSPC_LSFT_CLEAR,
  EM_EMAIL_ES,
  EM_EMAIL_DE,
  COMBO_LENGTH
};
uint16_t COMBO_LEN =
    COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM email_combo[] = {DE_F24, COMBO_END};
const uint16_t PROGMEM clear_line_combo[] = {DE_F23, COMBO_END};
const uint16_t PROGMEM email_combo_es[] = {DE_F22, COMBO_END};
const uint16_t PROGMEM email_combo_de[] = {DE_F21, COMBO_END};

combo_t key_combos[] = {
    [EM_EMAIL] = COMBO_ACTION(email_combo),
    [BSPC_LSFT_CLEAR] = COMBO_ACTION(clear_line_combo),
    [EM_EMAIL_ES] = COMBO_ACTION(email_combo_es),
    [EM_EMAIL_DE] = COMBO_ACTION(email_combo_de),
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch (combo_index) {
  case EM_EMAIL:
    if (pressed) {
      SEND_STRING("suscribe to my channel");
    }
    break;
  case BSPC_LSFT_CLEAR:
    if (pressed) {
      tap_code16(KC_END);
      tap_code16(S(KC_HOME));
      tap_code16(KC_BSPC);
    }
    break;
  case EM_EMAIL_ES:
    if (pressed) {
      SEND_STRING("mctechnology17");
    }
    break;
  case EM_EMAIL_DE:
    if (pressed) {
      SEND_STRING("like and subscribe");
    }
    break;
  }
}
#endif
// END COMBO_ENABLE }}}

// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
