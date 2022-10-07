/* ========================================
FileName: mctechnology17.h
Date: 15:17 23.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: define keymap for the wired corne keyboard
Use: in your keymap file, include this file
     #include "mctechnology17.h"
===========================================
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
#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
#    include "oled_setup.h"
#endif

enum layers { _DEFAULT, _NUMBER, _SYMBOL, _FUNCTION, _MEDIA, _MOUSE };
enum custom_keycodes { QMKBEST = SAFE_RANGE };

#define NUMBER_SPACE LT(_NUMBER, DE_SPC)
#define SYMBOL_RGUI LT(_SYMBOL, DE_RGUI)
#define FUNCTION_RALT LT(_FUNCTION, DE_RALT)
#define MEDIA_ESC LT(_MEDIA, DE_ESC)
#define MOUSE_TAB LT(_MOUSE, DE_TAB)
// default_layer
#define LSHFT_COMMA LSFT_T(DE_COMM)
// function_layer
#define SPELL LCTL(LGUI(DE_D))
#define TRADUCT LSA(DE_T)
#define SNIPPET LAG(DE_G)
#define CLIPBRD LAG(DE_V)
#define EMOJI LCTL(LGUI(DE_SPC))
#define TASKM LCA(DE_DEL) // C-A-DEL
// media_layer
#define SC_FLOW LSG(DE_1)     // <S-D-1> ScrenFlow app for MacOS
#define TXTSNIP LSG(DE_2)     // <S-D-2> TextSniper app for MacOS
#define SC_SHOT LSG(DE_3)     // <S-D-3> ScrenShot for all system see &kp PRINTSCREEN for MacOS
#define SC_SPSF LSG(DE_4)     // <S-D-4> Save picture of screen as a file for MacOS
#define SC_RE LSG(DE_5)       // <S-D-5> Screenshot and recording options for MacOS
#define OP_TERM LCAG(DE_MINS) // open terminal iTerm2 in current directory for MacOS
#define POS1 LAG(DE_1)        // positions of current app with carabiner integration for MacOS
#define POS2 LAG(DE_2)        // positions of current app with carabiner integration for MacOS
#define POS3 LAG(DE_3)        // positions of current app with carabiner integration for MacOS
#define POS4 LAG(DE_4)        // positions of current app with carabiner integration for MacOS
/* ### Keymap definition {{{
LCTL(kc)	C(kc)	Hold Left Control and press kc
LSFT(kc)	S(kc)	Hold Left Shift and press kc
LALT(kc)	A(kc), LOPT(kc)	Hold Left Alt and press kc
LGUI(kc)	G(kc), LCMD(kc), LWIN(kc)	Hold Left GUI and press kc
RCTL(kc)		Hold Right Control and press kc
RSFT(kc)		Hold Right Shift and press kc
RALT(kc)	ROPT(kc), ALGR(kc)	Hold Right Alt (AltGr) and press kc
RGUI(kc)	RCMD(kc), LWIN(kc)	Hold Right GUI and press kc
LSG(kc)	SGUI(kc), SCMD(kc), SWIN(kc)	Hold Left Shift and Left GUI and press kc
LAG(kc)		Hold Left Alt and Left GUI and press kc
RSG(kc)		Hold Right Shift and Right GUI and press kc
RAG(kc)		Hold Right Alt and Right GUI and press kc
LCA(kc)		Hold Left Control and Alt and press kc
LSA(kc)		Hold Left Shift and Left Alt and press kc
RSA(kc)	SAGR(kc)	Hold Right Shift and Right Alt (AltGr) and press kc
RCS(kc)		Hold Right Control and Right Shift and press kc
LCAG(kc)		Hold Left Control, Alt and GUI and press kc
MEH(kc)		Hold Left Control, Shift and Alt and press kc
HYPR(kc)		Hold Left Control, Shift, Alt and GUI and press kc
KC_MEH		Left Control, Shift and Alt
KC_HYPR		Left Control, Shift, Alt and GUI
}}}*/
// vim: set sw=2 ts=2 sts=2 et ft=cpp fdm=marker:
