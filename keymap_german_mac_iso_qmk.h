/* ========================================
FileName: keymap_german_mac_iso_qmk.h
Date: 15:17 23.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: define keymap for the wired corne keyboard
Use: in your keymap file, include this file
     #include "keymap_german_mac_iso_qmk.h"
===========================================
Inspired by Stephen Bösebeck
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

#pragma once

#include "keymap.h"

// CONTROL CMD/WINDOWS SHIFT ALT/META/OPTION
#define DE_LCTL KC_LCTL // left control
#define DE_RCTL KC_RCTL // right control
#define DE_LGUI KC_LGUI // left cmd
#define DE_RGUI KC_RGUI
#define DE_LALT KC_LALT
#define DE_RALT KC_RALT
#define DE_LSFT KC_LSFT
#define DE_RSFT KC_RSFT

// ARROWS
#define DE_UP KC_UP
#define DE_LEFT KC_LEFT
#define DE_DOWN KC_DOWN
#define DE_RIGHT KC_RIGHT

// SPACE CAPS TAB ENTER BACKSPACE ESCAPE DELETE
#define DE_SPC KC_SPC             // Space
#define DE_CAPS_LOCK KC_CAPS_LOCK // Caps Lock
#define DE_BSPC KC_BSPC           // Backspace
#define DE_ENT KC_ENT             // Enter
#define DE_TAB KC_TAB             // Tab
#define DE_DEL KC_DEL             // Delete
#define DE_ESC KC_ESC             // Delete

// PAGE UP PAGE DOWN HOME END
#define DE_PAGE_UP KC_PAGE_UP
#define DE_PAGE_DOWN KC_PAGE_DOWN
#define DE_HOME KC_HOME
#define DE_END KC_END

// FUNCTION KEYS
#define DE_F1 KC_F1
#define DE_F2 KC_F2
#define DE_F3 KC_F3
#define DE_F4 KC_F4
#define DE_F5 KC_F5
#define DE_F6 KC_F6
#define DE_F7 KC_F7
#define DE_F8 KC_F8
#define DE_F9 KC_F9
#define DE_F10 KC_F10
#define DE_F11 KC_F11
#define DE_F12 KC_F12
#define DE_F13 KC_F13
#define DE_F14 KC_F14
#define DE_F15 KC_F15
#define DE_F16 KC_F16
#define DE_F17 KC_F17
#define DE_F18 KC_F18
#define DE_F19 KC_F19
#define DE_F20 KC_F20
#define DE_F21 KC_F21
#define DE_F22 KC_F22
#define DE_F23 KC_F23
#define DE_F24 KC_F24

// SOUND / VOLUME
#define DE_VOL_UP KC_AUDIO_VOL_UP
#define DE_VOL_DN KC_AUDIO_VOL_DOWN
#define DE_MUTE KC_AUDIO_MUTE
#define DE_NEXT KC_MEDIA_NEXT_TRACK
#define DE_PREV KC_MEDIA_PREV_TRACK
#define DE_STOP KC_MEDIA_STOP
#define DE_PLAY KC_MEDIA_PLAY_PAUSE
// #define DE_SHUFFLE KC_C_SHUFFLE TODO

// DISPLAY BRIGHTNESS
#define DE_BRI_UP KC_BRIGHTNESS_UP
#define DE_BRI_DN KC_BRIGHTNESS_DOWN

// LANGUAGE
#define DE_LANG1 KC_LANGUAGE_1
#define DE_LANG2 KC_LANGUAGE_2
#define DE_LANG3 KC_LANGUAGE_3
#define DE_LANG4 KC_LANGUAGE_4
#define DE_LANG5 KC_LANGUAGE_5
#define DE_LANG6 KC_LANGUAGE_6
#define DE_LANG7 KC_LANGUAGE_7
#define DE_LANG8 KC_LANGUAGE_8
#define DE_LANG9 KC_LANGUAGE_9

// MOUSEKEYS
#define DE_MS_WH_LEFT KC_MS_WH_LEFT
#define DE_MS_WH_RIGHT KC_MS_WH_RIGHT
#define DE_MS_WH_UP KC_MS_WH_UP
#define DE_MS_WH_DOWN KC_MS_WH_DOWN
#define DE_MS_BTN1 KC_MS_BTN1
#define DE_MS_BTN2 KC_MS_BTN2
#define DE_MS_BTN3 KC_MS_BTN3
#define DE_MS_BTN4 KC_MS_BTN4
#define DE_MS_BTN5 KC_MS_BTN5
#define DE_MS_ACCEL0 KC_MS_ACCEL0
#define DE_MS_ACCEL1 KC_MS_ACCEL1
#define DE_MS_ACCEL2 KC_MS_ACCEL2
#define DE_MS_UP KC_MS_UP
#define DE_MS_DOWN KC_MS_DOWN
#define DE_MS_LEFT KC_MS_LEFT
#define DE_MS_RIGHT KC_MS_RIGHT

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_CIRC KC_NUBS  // ^ (dead)
#define DE_1    KC_1    // 1
#define DE_2    KC_2    // 2
#define DE_3    KC_3    // 3
#define DE_4    KC_4    // 4
#define DE_5    KC_5    // 5
#define DE_6    KC_6    // 6
#define DE_7    KC_7    // 7
#define DE_8    KC_8    // 8
#define DE_9    KC_9    // 9
#define DE_0    KC_0    // 0
#define DE_SS   KC_MINS // ß
#define DE_ACUT KC_EQL  // ´ (dead)
// Row 2
#define DE_Q    KC_Q    // Q
#define DE_W    KC_W    // W
#define DE_E    KC_E    // E
#define DE_R    KC_R    // R
#define DE_T    KC_T    // T
#define DE_Z    KC_Y    // Z
#define DE_U    KC_U    // U
#define DE_I    KC_I    // I
#define DE_O    KC_O    // O
#define DE_P    KC_P    // P
#define DE_UDIA KC_LBRC // Ü
#define DE_PLUS KC_RBRC // +
// Row 3
#define DE_A    KC_A    // A
#define DE_S    KC_S    // S
#define DE_D    KC_D    // D
#define DE_F    KC_F    // F
#define DE_G    KC_G    // G
#define DE_H    KC_H    // H
#define DE_J    KC_J    // J
#define DE_K    KC_K    // K
#define DE_L    KC_L    // L
#define DE_ODIA KC_SCLN // Ö
#define DE_ADIA KC_QUOT // Ä
#define DE_HASH KC_NUHS // #
// Row 4
#define DE_LABK KC_GRV // <
#define DE_Y    KC_Z    // Y
#define DE_X    KC_X    // X
#define DE_C    KC_C    // C
#define DE_V    KC_V    // V
#define DE_B    KC_B    // B
#define DE_N    KC_N    // N
#define DE_M    KC_M    // M
#define DE_COMM KC_COMM // ,
#define DE_DOT  KC_DOT  // .
#define DE_MINS KC_SLSH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DEG  S(DE_CIRC) // °
#define DE_EXLM S(DE_1)    // !
#define DE_DQUO S(DE_2)    // "
#define DE_SECT S(DE_3)    // §
#define DE_DLR  S(DE_4)    // $
#define DE_PERC S(DE_5)    // %
#define DE_AMPR S(DE_6)    // &
#define DE_SLSH S(DE_7)    // /
#define DE_LPRN S(DE_8)    // (
#define DE_RPRN S(DE_9)    // )
#define DE_EQL  S(DE_0)    // =
#define DE_QUES S(DE_SS)   // ?
#define DE_GRV  S(DE_ACUT) // ` (dead)
// Row 2
#define DE_ASTR S(DE_PLUS) // *
// Row 3
#define DE_QUOT S(DE_HASH) // '
// Row 4
#define DE_RABK S(DE_LABK) // >
#define DE_SCLN S(DE_COMM) // ;
#define DE_COLN S(DE_DOT)  // :
#define DE_UNDS S(DE_MINS) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DLQU A(DE_CIRC) // „
#define DE_IEXL A(DE_1)    // ¡
#define DE_LDQU A(DE_2)    // “
#define DE_PILC A(DE_3)    // ¶
#define DE_CENT A(DE_4)    // ¢
#define DE_LBRC A(DE_5)    // [
#define DE_RBRC A(DE_6)    // ]
#define DE_PIPE A(DE_7)    // |
#define DE_LCBR A(DE_8)    // {
#define DE_RCBR A(DE_9)    // }
#define DE_NEQL A(DE_0)    // ≠
#define DE_IQUE A(DE_SS)   // ¿
// Row 2
#define DE_LDAQ A(DE_Q)    // «
#define DE_NARS A(DE_W)    // ∑
#define DE_EURO A(DE_E)    // €
#define DE_REGD A(DE_R)    // ®
#define DE_DAGG A(DE_T)    // †
#define DE_OMEG A(DE_Z)    // Ω
#define DE_DIAE A(DE_U)    // ¨ (dead)
#define DE_FRSL A(DE_I)    // ⁄
#define DE_OSTR A(DE_O)    // Ø
#define DE_PI   A(DE_P)    // π
#define DE_BULT A(DE_UDIA) // •
#define DE_PLMN A(DE_PLUS) // ±
// Row 3
#define DE_ARNG A(DE_A)    // Å
#define DE_SLQU A(DE_S)    // ‚
#define DE_PDIF A(DE_D)    // ∂
#define DE_FHK  A(DE_F)    // ƒ
#define DE_COPY A(DE_G)    // ©
#define DE_FORD A(DE_H)    // ª
#define DE_MORD A(DE_J)    // º
#define DE_INCR A(DE_K)    // ∆
#define DE_AT   A(DE_L)    // @
#define DE_OE   A(DE_ODIA) // Œ
#define DE_AE   A(DE_ADIA) // Æ
#define DE_LSQU A(DE_HASH) // ‘
// Row 4
#define DE_LTEQ A(DE_LABK) // ≤
#define DE_YEN  A(DE_Y)    // ¥
#define DE_AEQL A(DE_X)    // ≈
#define DE_CCCE A(DE_C)    // Ç
#define DE_SQRT A(DE_V)    // √
#define DE_INTG A(DE_B)    // ∫
#define DE_TILD A(DE_N)    // ~ (dead)
#define DE_MICR A(DE_M)    // µ
#define DE_INFN A(DE_COMM) // ∞
#define DE_ELLP A(DE_DOT)  // …
#define DE_NDSH A(DE_MINS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_NOT  S(A(DE_1))    // ¬
#define DE_RDQU S(A(DE_2))    // ”
#define DE_PND  S(A(DE_4))    // £
#define DE_FI   S(A(DE_5))    // ﬁ
#define DE_BSLS S(A(DE_7))    // (backslash)
#define DE_STIL S(A(DE_8))    // ˜
#define DE_MDDT S(A(DE_9))    // ·
#define DE_MACR S(A(DE_0))    // ¯
#define DE_DOTA S(A(DE_SS))   // ˙
#define DE_RNGA S(A(DE_ACUT)) // ˚
// Row 2
#define DE_RDAQ S(A(DE_Q))    // »
#define DE_PERM S(A(DE_E))    // ‰
#define DE_CEDL S(A(DE_R))    // ¸
#define DE_DACU S(A(DE_T))    // ˝
#define DE_CARN S(A(DE_Z))    // ˇ
#define DE_AACU S(A(DE_U))    // Á
#define DE_UCIR S(A(DE_I))    // Û
#define DE_NARP S(A(DE_P))    // ∏
#define DE_APPL S(A(DE_PLUS)) //  (Apple logo)
// Row 3
#define DE_IACU S(A(DE_S))    // Í
#define DE_TM   S(A(DE_D))    // ™
#define DE_IDIA S(A(DE_F))    // Ï
#define DE_IGRV S(A(DE_G))    // Ì
#define DE_OACU S(A(DE_H))    // Ó
#define DE_DLSI S(A(DE_J))    // ı
#define DE_FL   S(A(DE_L))    // ﬂ
// Row 4
#define DE_GTEQ S(A(DE_LABK)) // ≥
#define DE_DDAG S(A(DE_Y))    // ‡
#define DE_UGRV S(A(DE_X))    // Ù
#define DE_LOZN S(A(DE_V))    // ◊
#define DE_LSAQ S(A(DE_B))    // ‹
#define DE_RSAQ S(A(DE_N))    // ›
#define DE_BREV S(A(DE_M))    // ˘
#define DE_OGON S(A(DE_COMM)) // ˛
#define DE_DIV  S(A(DE_DOT))  // ÷
#define DE_MDSH S(A(DE_MINS)) // —

// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
