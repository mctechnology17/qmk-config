/* ========================================
FileName: config.h
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: delcarar macros y carga fuentes

SIENTETE LIBRE DE MODIFICAR EL CODIGO A TU GUSTO O DE OCUPAR LO QUE NECESITES
NO OLVIDES REFERENCIAR A LOS AUTORES DE LOS CODIGOS QUE OCUPES
========================================= */
#pragma once
// #define COMBO_COUNT 2
// ### define master o slave{{{
#define MASTER_LEFT
// #define EE_HANDS
// #define MASTER_RIGHT
// }}}
// ### WPM config {{{
#define SPLIT_WPM_ENABLE
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING
//}}}
// ### OLED config {{{
// #define OLED_BRIGHTNESS 120
// #define OLED_DISABLE_TIMEOUT
// #define SPLIT_OLED_ENABLE
//}}}
// ### activar solo si BONGOCAT_KEYBOARD = yes DOG = true {{{
#ifdef RGBLIGHT_ENABLE // si la linea RGBLIGHT_ENABLE = yes esta en rules.mk
#    undef RGBLED_NUM
#    define RGBLED_NUM 12 // 54 (default) numero de LEDs en el teclado
#    undef RGBLED_SPLIT
#    define RGBLED_SPLIT \
        { 6, 6 } // 27, 27 (default) numero de LEDs en cada mitad del teclado
// #    define RGBLIGHT_EFFECT_BREATHING
// #    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_LIMIT_VAL 110
#    define RGBLIGHT_HUE_STEP 5
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif
// activar solo si BONGOCAT_KEYBOARD = yes DOG = true }}}
// ### OLED_FONT_H {{{
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
// }}}
// ### size optimisations {{{
// size optimisations
// #define NO_DEBUG
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
// }}}
// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
