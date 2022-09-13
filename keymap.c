/* ========================================
FileName: keymap.c
Date: 15:40 05.September.2022
Author: Marcos Chow Castro
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: keymaps keymap_german_mac_iso, macros, animaciones y funciones
       si no compila es por el tamano del archivo, revisa el archivo
       rules.mk y cambia el valor de la variable a no, todo esta documentado,
       que se puede eliminar o comentar, para optimizar el tamano del archivo
       ejemplo de que se puede poner en no para optimizar el tamano del archivo:
       MOUSEKEY_ENABLE = no       # Mouse keys(+1348)
       RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight(+2842)
Compilacion:
    cp -r mctechnology17 ~/qmk_firmware/keyboards/crkbd/keymaps
    qmk compile -kb crkbd -km mctechnology17
Edit:
    cd ~/qmk_firmware/keyboards/crkbd/keymaps/mctechnology17
    nvim .

SIENTETE LIBRE DE MODIFICAR EL CODIGO A TU GUSTO O DE OCUPAR LO QUE NECESITES
NO OLVIDES REFERENCIAR A LOS AUTORES DE LOS CODIGOS QUE OCUPES
========================================= */
// ### include {{{
#include QMK_KEYBOARD_H
#include "keymap_german_mac_iso.h"
#include <stdio.h>
//}}}
/* ### OSX Layout distribution {{{
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
}}}*/
/* ### Keymap definition {{{
LCTL(kc)	C(kc)	Hold Left Control and press kc
LSFT(kc)	S(kc)	Hold Left Shift and press kc
LALT(kc)	A(kc), LOPT(kc)	Hold Left Alt and press kc
LGUI(kc)	G(kc), LCMD(kc), LWIN(kc)	Hold Left GUI and press kc
RCTL(kc)		Hold Right Control and press kc
RSFT(kc)		Hold Right Shift and press kc
RALT(kc)	ROPT(kc), ALGR(kc)	Hold Right Alt (AltGr) and press kc
RGUI(kc)	RCMD(kc), LWIN(kc)	Hold Right GUI and press kc
LSG(kc)	SGUI(kc), SCMD(kc), SWIN(kc)	Hold Left Shift and Left GUI and press
kc LAG(kc)		Hold Left Alt and Left GUI and press kc RSG(kc)
Hold Right Shift and Right GUI and press kc
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
// ### custom_keycodes {{{
enum custom_keycodes { QMKBEST = SAFE_RANGE };
// }}}
// ### START LAYOUTS {{{
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
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
        LT(4, KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O,
        KC_P, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        LT(5, KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,
        KC_UP, KC_ENT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, LSFT_T(KC_COMM),
        KC_LEFT, KC_DOWN, KC_RIGHT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_LALT, LT(1, KC_SPC), LT(2, KC_RGUI), LT(3, KC_RALT)
        //`--------------------------'  `--------------------------'

        ),
    // }}}
    /* ### 1 NUMBER LAYOUT {{{
          .-------------------------------------------------.
       .-------------------------------------------------. |   0     |   1   |
       2   |   3   |   -   |   +   |                         |   ß   |   Ü   |
       Ä   |   Ö   |       |         |
          |---------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |CAPS_LOCK|   4   |
       5   |   6   |   /   |   *   |                         |   #   |   ~   |
       ?   |       |       |         |
          |---------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | SHIFT   |   7   |
       8   |   9   |   %   |   =   |                         |   .   |   ´   |
       `   |       |       |         |
          '----------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL |
       CMD  |     SPACE      |       |        |  LSFT |      ALTGR    |
                                    '--------------------------------'
       '--------------------------------'
    */
    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_0, KC_1, KC_2, KC_3, DE_MINS, DE_PLUS, DE_SS, DE_UDIA, DE_ADIA,
        DE_ODIA, XXXXXXX, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_CAPS_LOCK, KC_4, KC_5, KC_6, S(DE_7), S(DE_PLUS), DE_HASH,
        A(DE_PLUS), S(DE_SS), XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_7, KC_8, KC_9, S(DE_5), S(DE_0), KC_DOT, DE_ACUT,
        S(DE_ACUT), DE_ACUT, S(DE_ACUT), XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_SPC, XXXXXXX, KC_LSFT, KC_RALT
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 2 SYMBOLS LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |   $    |   (   | )
       |   [   |   ]   |   ~   |                         | ´     |   `   | | |
       |         |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |   %    |   {   | }
       |   ^   |PAGE_UP|   #   |                         |   &   |   |   | |  @
       |       |         |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |SHIFT   |    <  | >
       |  HOME |PAGE_DO|  END  |                         |   ~   |   '   | | |
       |         |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       | SPACE  |       |  ENTER | ALTGR |          CTRL |
                                   '--------------------------------'
       '--------------------------------'
    */
    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        S(DE_4), S(DE_8), S(DE_9), A(DE_8), A(DE_9), A(DE_PLUS), DE_ACUT,
        S(DE_ACUT), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        S(DE_0), A(DE_7), A(DE_0), DE_LABK, KC_PAGE_UP, DE_HASH, S(DE_6),
        A(DE_CIRC), XXXXXXX, A(DE_Q), XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, DE_CIRC, S(DE_CIRC), KC_HOME, KC_PAGE_DOWN, KC_END, A(DE_PLUS),
        S(DE_HASH), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_SPC, KC_ENT, KC_RALT, KC_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 3 FUNTIONS LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |    F1  |  F2   | F3
       |   F4  |  F5   |TRADUCT|                         |   F7  |    F8 |    F9
       |   F10 |   F11 |   F12   |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |  ALT   | TAB   |
       SPELL |EMOJI  |   \   |ALFRED |                         |C-A-DEL|PASS   |
       |       |BRI_UP |         |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |  ALT   | TAB
       |CANCEL |       |ALFRED |   F6  | |L_SHIFT|L_SHIFT|R_SHIFT|       |
       BRI_UP|         |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       |   ALT  |       |  TAB   |   ´   |          CTRL |
                                   '--------------------------------'
       '--------------------------------'
    */
    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, LSA(KC_T), KC_F7, KC_F8, KC_F9,
        KC_F10, KC_F11, KC_F12,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LALT, KC_TAB, LCTL(LGUI(KC_D)), LCTL(LGUI(KC_SPC)), A(DE_SS),
        LAG(KC_G), LCA(KC_DEL), QMKBEST, XXXXXXX, XXXXXXX, KC_BRIGHTNESS_UP,
        XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LALT, DE_ACUT, KC_CANCEL, XXXXXXX, LAG(KC_V), KC_F6, KC_LSFT,
        KC_LSFT, KC_RSFT, XXXXXXX, KC_BRIGHTNESS_DOWN, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, DE_ACUT, KC_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 4 MEDIA LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. |
       |<S-D-1>|<S-D-2>|<S-D-3>|       |       |                         |LANG_1
       |LANG_2 |LANG_3 |       | STOP  |  DELETE |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | |<S-D-4>|<S-D-5>|
       |       |       |                         |       |       |       |
       |VOL_UP |PLAY/PAUS|
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| |        |       | |
       |       |       |                         |       |       |  MUTE |  PREV
       |VOL_DOW|  NEXT   |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       |   ALT  |       |  SPACE | ALTGR |          CTRL |
                                   '--------------------------------'
       '--------------------------------'
    */
    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        XXXXXXX, LSG(KC_1), LSG(KC_2), LSG(KC_3), XXXXXXX, XXXXXXX,
        KC_LANGUAGE_1, KC_LANGUAGE_2, KC_LANGUAGE_3, XXXXXXX, KC_MEDIA_STOP,
        KC_DEL,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, LSG(KC_4), LSG(KC_5), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_AUDIO_VOL_UP, KC_MEDIA_PLAY_PAUSE,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_AUDIO_MUTE, KC_MEDIA_PREV_TRACK, KC_AUDIO_VOL_DOWN,
        KC_MEDIA_NEXT_TRACK,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_SPC, KC_ENT, KC_RALT, KC_RCTL
        //`--------------------------'  `--------------------------'
        ),
    // }}}
    /* ### 5 MOUSE RGB BOOT LAYOUT {{{
          .------------------------------------------------.
       .-------------------------------------------------. | SWIRL
       |BREATHE|RAINBOW|TWINKLE|SNAKE  | KNIGHT|                         |  VAD
       | VAI   |WH_LEFT|WH_RIGH|WH_DOWN| WH_UP   |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | |CLICK_1|CLICK_2|
       XMAS  |GRADIEN|RGBTEST|         TODO            |  SAD  | SAI   |
       |CLICK_1| UP    |CLICK_2  |
          |--------+-------+-------+-------+-------+-------|
       |-------+-------+-------+-------+-------+---------| | L_SHIFT| PLAIN
       |GRADIEN|RGBTEST|       | BOOT  |                         |  HUD  | HUI
       |       | LEFT  | DOWN  | RIGHT   |
          '---------------------------------------------------------|
       |----------------------------------------------------------' |  CTRL    |
       CMD       | SPACE  |       |  RMOD | MOD    |    TOG        |
                                   '--------------------------------'
       '--------------------------------'
    */
    // ### MC: add _MOUSE LAYOUT_5

    [5] = LAYOUT_split_3x6_3(
        // RGB_MODE_SWIRL, RGB_MODE_BREATHE, RGB_MODE_RAINBOW
        // RGB_MOD, RGB_RMOD,
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, RGB_MODE_RAINBOW, XXXXXXX, XXXXXXX, XXXXXXX, RGB_VAI,
        RGB_VAD, KC_MS_WH_LEFT, KC_MS_WH_RIGHT, KC_MS_WH_UP, KC_MS_WH_DOWN,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_MS_BTN1, KC_MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAI,
        RGB_SAD, XXXXXXX, KC_MS_BTN3, KC_MS_UP, KC_MS_BTN4,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, RGB_HUI, RGB_HUD,
        XXXXXXX, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_LGUI, KC_SPC, XXXXXXX, XXXXXXX, RGB_TOG
        //`--------------------------'  `--------------------------'
        )};
// }}}
// END LAYOUTS }}}
// ### OLED_ENABLE {{{
#ifdef OLED_ENABLE
// ### ON/OFF define DOG BONGOCAT DEMON RENDER_LAYER etc. + variables {{{
// aqui activas o desactivas las funciones de los oleds, si no te compila,
// desactiva las que no uses o las que menos importancia tengan para ti
// la opcion mejor optimizada que he podido lograr es la que esta por defecto
// #    define BONGOCAT_KEYBOARD_LUNADOG
// #    define CHOW true // para testear la pantalla master
#define DOG          // master
#define RENDER_LAYER // render_layer (+372)
// #    define BONGOCAT_KEYBOARD // animacion slave
#define BONGOCAT // animacion slave
// #    define CRAB // animacion slave
// #    define DEMON // animacion slave
// #    define MUSIC_BAR // animacion slave
uint8_t mod_state;       // get_mods()
uint8_t current_wpm = 0; // current_wpm parte como 0
//}}}
// ### ifdef BONGOCAT_KEYBOARD_LUNADOG {{{
#ifdef BONGOCAT_KEYBOARD_LUNADOG
#include "bongocat_keyboard_lunadog.c"
#endif
// }}}
// ### ifdef DOG {{{
#ifdef DOG
led_t led_usb_state;
#define ANIM_SIZE_DOG 96 // numero de pixeles en cada frame del perro
#define ANIM_FRAME_DURATION_DOG                                                \
  200 // para bongocat y el perro cuanto tiempo mostrar cada frame
uint32_t anim_dog_timer;
uint32_t anim_dog_sleep;

uint8_t current_dog_frame = 0; // current dog frame
// // uint8_t current_hue;
// uint8_t current_val;
// uint8_t mode_value;
// uint8_t hue_value;
// uint8_t sat_value;
// uint8_t val_value;

bool showedJump = true;
bool isJumping = false;

// char hue_str[4];
// char sat_str[4];
// char val_str[4];
// char mode_str[4];
#endif
//}}}
// ### ifdef BONGOCAT_KEYBOARD {{{
#ifdef BONGOCAT_KEYBOARD
#define WPM                                                                    \
  15 // si current_wpm >= WPM entonces el gato empieza a tocar el keyboard
#define ANIM_FRAME_DURATION 200 // cuanto tiempo mostrar cada frame
#define ANIM_SIZE_CAT 320       // numero de pixeles en cada frame del gato

uint32_t anim_cat_timer;
uint32_t anim_cat_sleep;

uint8_t current_cat_frame = 0; // current cat frame
// char wpm_str[4]; activar si el perro esta desactivado
char wpm_str[4];
#endif
// }}} BONGOCAT
// ### ifdef BONGOCAT {{{
#ifdef BONGOCAT
#include "bongocat.c"
#endif
// }}} BONGOCAT
// ### ifdef CRAB {{{
#ifdef CRAB
#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM                                                          \
  10 // 45 (default) Switch to fast animation when over words per minute
#include "crab.c"
#endif
// CRAB }}}
// ### ifdef DEMON {{{
#ifdef DEMON
#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM                                                          \
  10 // 45 (default) Switch to fast animation when over words per minute
#include "demon.c"
#endif
// CRAB }}}
// ### ifdef MUSIC_BAR {{{
#ifdef MUSIC_BAR
#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM                                                          \
  10 // 45 (default) Switch to fast animation when over words per minute
#include "music-bars.c"
#endif
// CRAB }}}
// ### ifdef DOG {{{
#ifdef DOG
// ### matrix dog {{{
static void render_dog(int DOG_X,
                       int DOG_Y) { // esta funcion contiene los frames y logica
                                    // de la animacion del perro

  static const char PROGMEM sit[2][ANIM_SIZE_DOG] = {
      // frames de sit
      {
          // 'sit1' 32x22px
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04,
          0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08,
          0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06,
          0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20,
          0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      },

      {// 'sit2' 32x22px
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9,
       0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
       0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20,
       0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

  static const char PROGMEM walk[2][ANIM_SIZE_DOG] = {
      // frames de walk
      {
          // 'walk1' 32x22px
          0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90,
          0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90,
          0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00,
          0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f,
          0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      },

      {
          // 'walk2' 32x22px
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20,
          0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20,
          0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01,
          0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
          0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05,
          0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      }};

  static const char PROGMEM run[2][ANIM_SIZE_DOG] = {
      // frames de run
      {
          // 'run1' 32x22px
          0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80,
          0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04,
          0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00,
          0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03,
          0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32,
          0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
      },

      {
          // 'run2' 32x22px
          0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10,
          0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01,
          0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10,
          0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      }};

  static const char PROGMEM bark[2][ANIM_SIZE_DOG] = {
      // frames de bark
      {
          // 'bark1' 32x22px
          0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18,
          0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48,
          0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28,
          0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
          0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      },

      {
          // 'bark2' 32x22px
          0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90,
          0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0,
          0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28,
          0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
          0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      }};

  static const char PROGMEM sneak[2][ANIM_SIZE_DOG] = {
      // frames de sneak
      {
          // 'sneak1' 32x22px
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40,
          0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80,
          0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02,
          0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09,
          0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11,
          0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04,
          0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
      },

      {
          // 'sneak2' 32x22px
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40,
          0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03,
          0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04,
          0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09,
          0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06,
          0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
      }};

  // matrix }}}
  // ### logic animation dog {{{
  void animate_dog(void) { // logica de la animacion del perro

    if (isJumping || !showedJump) { // si isJumping = true o showedJump = false

      oled_set_cursor(DOG_X, DOG_Y + 2);
      oled_write("     ", false);

      oled_set_cursor(DOG_X, DOG_Y - 1);

      showedJump = true;

    } else { // si isJumping = true y showedJump = true

      oled_set_cursor(DOG_X, DOG_Y - 1);
      oled_write("     ", false);

      oled_set_cursor(DOG_X, DOG_Y);
    }

    // cada accion del perro (sit, walk, run, bark y sneak) tiene 2 frames
    current_dog_frame = (current_dog_frame + 1) %
                        2; // con esta formula current_dog_frame toma los
                           // valores 1 y 0 los cuales se van turnando

    if (led_usb_state.caps_lock) { // si esta activado Caps Lock
      oled_write_raw_P(bark[abs(1 - current_dog_frame)],
                       ANIM_SIZE_DOG); // perro ladra

    } else if ((keyboard_report->mods & MOD_BIT(KC_LSFT)) ||
               (keyboard_report->mods &
                MOD_BIT(KC_RSFT))) { // KC_LSFT o KC_RSFT presionado
      oled_write_raw_P(sneak[abs(1 - current_dog_frame)],
                       ANIM_SIZE_DOG); // perro en sneaking

    } else if ((keyboard_report->mods & MOD_BIT(KC_LCTL)) ||
               (keyboard_report->mods &
                MOD_BIT(KC_RCTL))) { // KC_LCTL o KC_RCTL presionado
      oled_write_raw_P(walk[abs(1 - current_dog_frame)],
                       ANIM_SIZE_DOG); // perro camina

    } else if (keyboard_report->mods & MOD_BIT(KC_LGUI)) { // KC_LGUI presionado
      oled_write_raw_P(run[abs(1 - current_dog_frame)],
                       ANIM_SIZE_DOG); // perro corre

    } else { // si no se cumple ninguna de las condiciones anteriores
      oled_write_raw_P(sit[abs(1 - current_dog_frame)],
                       ANIM_SIZE_DOG); // perro se sienta
    }
  }

  if (timer_elapsed32(anim_dog_timer) > ANIM_FRAME_DURATION_DOG) {
    anim_dog_timer = timer_read32();
    animate_dog();

    if (current_wpm != 0) {
      anim_dog_sleep = timer_read32();
    }
  }
}
// logic animation }}}
#endif
// }}}
// ### ifdef BONGOCAT_KEYBOARD {{{
#ifdef BONGOCAT_KEYBOARD
// ### matrix cat {{{
static void render_cat(void) { // esta funcion contiene los frames y logica de
                               // la animacion del gato

  static const char PROGMEM idle[1][ANIM_SIZE_CAT] = {
      // frames de idle
      {
          0x00, 0xc0, 0x3e, 0x01, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0x03, 0x00,
          0x03, 0x0c, 0x30, 0xc0, 0x00, 0xe1, 0x1e, 0x00, 0xc0, 0xbc, 0x83,
          0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
          0x03, 0x00, 0x00, 0x00, 0x80, 0x78, 0x87, 0x00, 0x03, 0x0c, 0x30,
          0xc0, 0x00, 0xe0, 0x1f, 0x01, 0xc0, 0x3c, 0x03, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x30, 0x31, 0x05, 0x41, 0x12, 0x04, 0x00, 0x00,
          0x00, 0x00, 0xf8, 0x87, 0x00, 0x01, 0x06, 0x18, 0x60, 0x80, 0xc0,
          0x3f, 0x03, 0x80, 0x78, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
          0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x03, 0x05, 0x00, 0x00, 0xf0,
          0xcf, 0x00, 0x01, 0x06, 0x18, 0x60, 0x80, 0x80, 0x79, 0x07, 0x80,
          0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38,
          0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1e, 0x01, 0x00,
          0x03, 0x0c, 0x30, 0xc0, 0x00, 0xf9, 0x07, 0x80, 0x78, 0x07, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x2c, 0x32, 0x22, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x0c, 0x30, 0xc0,
          0x00, 0x00, 0xf0, 0x0f, 0x80, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x60, 0x80, 0x00, 0x00, 0xe1,
          0x1e, 0x01, 0xf0, 0x8f, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0e,
          0x0e, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x09, 0x0e, 0x0e, 0x01, 0xf0,
          0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x19, 0x19, 0x41,
          0x0a, 0x22, 0x84, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x80, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x02, 0x02,
          0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09,
          0x70, 0x80, 0x00, 0x00, 0xf0, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10,
          0x08, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01,
          0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x02,
          0x01,
      }};

  static const char PROGMEM tap[2][ANIM_SIZE_CAT] = {
      // frames de tap
      {
          0x00, 0xc0, 0x3e, 0x01, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff,
          0xff, 0x7c, 0x70, 0x40, 0x40, 0x61, 0x5e, 0x80, 0xc0, 0xbc, 0x03,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
          0x03, 0x00, 0x00, 0x00, 0x80, 0x78, 0x87, 0x00, 0x03, 0x0f, 0x3f,
          0xf8, 0xf0, 0xf0, 0x20, 0x40, 0x80, 0x80, 0x00, 0x00, 0x01, 0x01,
          0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0xf8, 0x87, 0x00, 0x01, 0x06, 0x18, 0x60, 0x80, 0xc0,
          0x3f, 0x03, 0x80, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x00, 0x00, 0xf0,
          0xcf, 0x00, 0x01, 0x06, 0x18, 0x60, 0x80, 0x80, 0x79, 0x07, 0x80,
          0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38,
          0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1e, 0x01, 0x00,
          0x03, 0x0c, 0x30, 0xc0, 0x00, 0xf9, 0x07, 0x80, 0x78, 0x07, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x2c, 0x32, 0x22, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x0c, 0x30, 0xc0,
          0x00, 0x00, 0xf0, 0x0f, 0x80, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x60, 0x80, 0x00, 0x00, 0xe1,
          0x1e, 0x01, 0xf0, 0x8f, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0e,
          0x0e, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x09, 0x0e, 0x0e, 0x01, 0xf0,
          0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x19, 0x19, 0x41,
          0x0a, 0x22, 0x84, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x80, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x02, 0x02,
          0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01,
          0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09,
          0x70, 0x80, 0x00, 0x00, 0xf0, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10,
          0x08, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01,
          0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x02,
          0x01,
      },
      {0x00, 0xc0, 0x3e, 0x01, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0x03, 0x00, 0x03,
       0x0c, 0x30, 0xc0, 0x00, 0xe1, 0x1e, 0x00, 0xc0, 0xbc, 0x83, 0x80, 0x80,
       0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x00,
       0x00, 0x80, 0x78, 0x87, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0xe0, 0x1f,
       0x01, 0xc0, 0x3c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x31,
       0x05, 0x41, 0x12, 0x04, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x87, 0x00, 0x01,
       0x06, 0x18, 0x60, 0x80, 0xc0, 0x3f, 0x03, 0x80, 0x78, 0x07, 0x02, 0x02,
       0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x03, 0x05,
       0x00, 0x00, 0xf0, 0xcf, 0x00, 0x01, 0x06, 0x18, 0x60, 0x80, 0x80, 0x79,
       0x07, 0x80, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38,
       0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfe, 0xff, 0xff,
       0xff, 0xfc, 0xf0, 0xc0, 0x00, 0xf9, 0x07, 0x80, 0x78, 0x07, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0xc0, 0x2c, 0x32, 0x22, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x0f, 0x3f, 0xff, 0x03, 0x01, 0x03,
       0x07, 0x18, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x18, 0x60, 0x80, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3c,
       0x00, 0x00, 0x00, 0x00, 0x0e, 0x0e, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x09, 0x0e,
       0x0e, 0x01, 0xf3, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x80, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x70, 0x80,
       0x00, 0x00, 0xf0, 0x1f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x08,
       0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02,
       0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x02, 0x01},
  };
  // }}}
  // ### logic animation cat {{{
  void animate_cat(void) { // logica de la animacion del gato

    if (current_wpm < WPM) { // si current_wpm menor a WPM
      oled_write_raw_P(
          idle[0],
          ANIM_SIZE_CAT); // gato en idle (solo hay un frame en esta accion)
    }

    if (current_wpm >= WPM) { // si current_wpm mayor o igual a WPM
      current_cat_frame = (current_cat_frame + 1) %
                          2; // para alternar entre los 2 frames de tap
      oled_write_raw_P(tap[abs((2 - 1) - current_cat_frame)],
                       ANIM_SIZE_CAT); // gato haciendo tap
    }
  }

  if (timer_elapsed32(anim_cat_timer) >
      ANIM_FRAME_DURATION) { // timer_elapsed32(anim_ghost_timer) tiempo
                             // transcurrido en ms desde la ultima vez que se
                             // actualizo anim_ghost_timer

    anim_cat_timer = timer_read32(); // se actualiza anim_ghost_timer
    animate_cat();                   // se ejecuta animate_ghost()

    if (current_wpm != 0) {
      anim_cat_sleep = timer_read32(); // se actualiza anim_ghost_sleep
    }
  }
}
// logic animation cat }}}
// ### render_wpm contador de palabras {{{
static void render_wpm(void) {
  oled_write(" WPM\n", false);
  wpm_str[3] = '\0';
  wpm_str[2] = '0' + current_wpm % 10;
  wpm_str[1] = '0' + (current_wpm /= 10) % 10;
  wpm_str[0] = '0' + current_wpm / 10;
  oled_write(" ", false);
  oled_write(wpm_str, false); // printear valor de WPM
}
// }}}
#endif
// }}}
// ### ifdef RENDER_LAYER imprime la capa actual {{{
#ifdef RENDER_LAYER
// esta funcion muestra las capas en el OLED y resalta la capa presente
static void render_layer(void) {
  if (IS_LAYER_ON(1)) {
    oled_write_P(PSTR("NUMP\n"), layer_state_is(1) && !layer_state_is(2) &&
                                     !layer_state_is(3) && !layer_state_is(4));
  } else {
    oled_write_P(PSTR("MACOS"), layer_state_is(0));
  }

  oled_write_P(PSTR("SYMB\n"), layer_state_is(2) && !layer_state_is(4));
  oled_write_P(PSTR("FUNC\n"), layer_state_is(3) && !layer_state_is(4));
  if (IS_LAYER_ON(5)) {
    oled_write_P(PSTR("MOUSE"), layer_state_is(5) && !layer_state_is(2) &&
                                    !layer_state_is(3) && !layer_state_is(4));
  } else {
    oled_write_P(PSTR("MEDIA"), layer_state_is(4));
  }
}
#endif
//}}}
//  ### rotacion de pantallas {{{
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master()) {
    return OLED_ROTATION_270;
  } else {
#ifdef BONGOCAT_KEYBOARD
    return OLED_ROTATION_270;
#else
    return OLED_ROTATION_180; // flips the display 180 degrees if offhand
#endif
  }
  return rotation;
  // rotacion de 270 en ambas pantallas OLED (master y slave)
  // de manera que el punto inicial este en un cierto extremo
  // y se siga cierta orientacion
}
//}}}
// ### imprime las teclas presionadas en pantalla {{{
char keylog_str[24] = {};
const char code_to_name[60] = {
    ' ', ' ',  ' ', ' ', 'a',  'b', 'c', 'd', 'e', 'f', 'g', 'h',
    'i', 'j',  'k', 'l', 'm',  'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v',  'w', 'x', 'y',  'z', '1', '2', '3', '4', '5', '6',
    '7', '8',  '9', '0', 'R',  'E', 'B', 'T', '_', '-', '=', '[',
    ']', '\\', '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};
void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
  if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
      (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
    keycode = keycode & 0xFF;
  }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  // snprintf(keylog_str, sizeof(keylog_str), "%dx%d\nk%2d\n  %c",
  // record->event.key.row, record->event.key.col, keycode, name);
  snprintf(keylog_str, sizeof(keylog_str), "\n KEY\n\n  %c", name);
  // snprintf(keylog_str, sizeof(keylog_str), "KEY %c", name);
}
void oled_render_keylog(void) { oled_write(keylog_str, false); }
// }}}
// ### oled_task_user indica que poner en cada OLED {{{
// el OLED es de 128x32 pixeles
// cada page es de 8 pixeles a lo largo del lado con 128 px
// por lo que hay 16 pages a lo largo de los 128 px
bool oled_task_user(
    void) { // funcion en la cual se indica que poner en cada OLED
  current_wpm = get_current_wpm();
#ifdef DOG // {{{
// if ((timer_elapsed32(anim_dog_sleep) > 60000) &&
// (timer_elapsed32(anim_cat_sleep) > 60000) && (current_wpm == 0)) {
#ifdef BONGOCAT_KEYBOARD // {{{
  if ((timer_elapsed32(anim_dog_sleep) > 60000) &&
      (timer_elapsed32(anim_cat_sleep) > 60000) && (current_wpm == 0)) {
    if (is_oled_on()) {
      oled_off();
    }
    timer_init();
    return false;
  }

  // #        else
  // if ((timer_elapsed32(anim_dog_sleep) > 60000) && (current_wpm == 0)) {
  // if (is_oled_on()) {
  // oled_off();
  // }
  // timer_init();
  // return false;
  // }
#endif // }}}
  if (current_wpm != 0 && !is_oled_on()) {
    oled_on();
  }

  led_usb_state = host_keyboard_led_state();

#endif                           // }}}
  if (is_keyboard_master()) {    // OLED del master
#ifdef BONGOCAT_KEYBOARD_LUNADOG // {{{
    render_dog(0, 1);            // lo del perro
#endif                           // }}}
#ifdef DOG                       // {{{
    render_dog(0, 1);            // lo del perro
#else
    oled_set_cursor(0, 0);
    oled_write("chow", false);
#endif              // }}}
#ifdef RENDER_LAYER // {{{
    oled_set_cursor(0, 5);
    render_layer(); // lo de las capas
#endif              // }}}
    // oled_render_keylog {{{
    oled_set_cursor(0, 10);
    oled_render_keylog();
    // oled_set_cursor(0, 14);
    // oled_write("corne", false);
    // }}}
  } else {  // OLED del slave
#ifdef CRAB // {{{
    oled_render_anim();
#endif       // }}}
#ifdef DEMON // {{{
    oled_render_anim();
#endif           // }}}
#ifdef MUSIC_BAR // {{{
    oled_render_anim();
#endif          // }}}
#ifdef BONGOCAT // {{{
    render_anim_bongocat();
    oled_set_cursor(0, 0);
    oled_write_P(PSTR("WPM"), false);
    oled_write(get_u8_str(get_current_wpm(), ' '), false);
#endif                           // }}}
#ifdef BONGOCAT_KEYBOARD_LUNADOG // {{{
    render_cat();                // lo del gato
    oled_set_cursor(0, 11);
    render_wpm(); // lo del WPM
    oled_set_cursor(0, 14);
    oled_write("chow", false);
#endif                   // }}}
#ifdef BONGOCAT_KEYBOARD // TODO bongocat-keyboard.c compila pero no es animado
                         // {{{
    render_cat();        // lo del gato
    oled_set_cursor(0, 11);
    render_wpm(); // lo del WPM
    oled_set_cursor(0, 14);
    oled_write("chow", false);
#endif      // }}}
#ifdef CHOW // {{{
    oled_set_cursor(0, 14);
    oled_write("chow", false);
#endif // }}}
  }
  return false;
}
// }}}
// ### process_record_user {{{
// process_record_user() se ejecuta cada vez que se presiona una tecla
// se usa para imprimir en el OLED cada tecla que se presiona
// y para las SEND_STRING("") que se para enviar una respuesta predeterminada
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  mod_state = get_mods();

  switch (keycode) {
  case QMKBEST:
    if (record->event.pressed) {
      // when keycode QMKBEST is pressed
      SEND_STRING("Escribe algo");
    } else {
      // when keycode QMKBEST is released
    }
    break;
  }
  return true;
}
// }}}
#endif // OLED_DRIVER_ENABLE
// OLED_ENABLE }}}
// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
