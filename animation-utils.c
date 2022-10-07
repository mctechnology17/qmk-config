/* ========================================
FileName: animation-utils.c
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: Utilities for QMK oled animations crab, demon y music-bar
===========================================
Utilities for QMK oled animations
Copyright (c) Marek Piechut
MIT License
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
// NOTE: temporary fix
// #pragma once

// NOTE: temporary fix
#include "quantum.h"
#include "print.h"
#include "oled_driver.h"
#include <stdio.h>
#include "animation-utils.h"

// NOTE: temporary fix
//-------- CONFIGURATION START --------

// #ifndef ANIM_RENDER_WPM
// #    define ANIM_RENDER_WPM true
// #endif
// #ifndef FAST_TYPE_WPM
// #    define FAST_TYPE_WPM 45 // Switch to fast animation when over words per minute
// #endif
// #ifndef ANIM_INVERT
// #    define ANIM_INVERT false // Invert animation color and background
// #endif
// #ifndef ANIM_BG
// #    define ANIM_BG 0x00
// #endif
// #ifndef ANIM_FRAME_TIME
// #    define ANIM_FRAME_TIME 250
// #endif
// //-------- CONFIGURATION END--------
//
// #define ANIM_WPM_WIDTH 22
// #define OLED_ROWS OLED_DISPLAY_HEIGHT / 4

// NOTE: static delete
void oled_render_wpm(void) {
    static char wpm_str[4];

    sprintf(wpm_str, "%03d", get_current_wpm());
    oled_set_cursor(0, 1);
    oled_write_P(PSTR("WPM"), false);
    oled_set_cursor(0, 2);
    oled_write(wpm_str, false);
}

// NOTE: static delete
void oled_render_anim_frame(const char **fast_frames, const char **slow_frames, uint8_t frames_len) {
    static uint32_t anim_timer    = 0;
    static uint8_t  current_frame = 0;

    // NOTE: 3### unused variable
    // #if (defined(DEMON_ENABLE) || defined(CRAB_ENABLE))
    static int16_t frame_offset = ANIM_RENDER_WPM ? ANIM_WPM_WIDTH : 0;
// #endif
// NOTE: unused variable
#ifdef ANIM_BOUNCE
    static int8_t step = 8;
#endif
#ifdef DEMON_ENABLE
    static int8_t step = 8;
#endif
    const uint8_t speed = get_current_wpm();

    if (timer_elapsed32(anim_timer) > ANIM_FRAME_TIME && speed > 0) {
        oled_set_cursor(0, 0);
        anim_timer = timer_read32();

        // NOTE 1### if demon or crab animation for the ANIM_FRAME_WIDTH
        // #if (defined(DEMON_ENABLE) || defined(CRAB_ENABLE))
        const bool   is_fast            = speed > FAST_TYPE_WPM;
        const char  *frame              = is_fast ? fast_frames[current_frame] : slow_frames[current_frame];
        const int8_t bg                 = ANIM_BG;
        uint8_t      frame_start_offset = ANIM_RENDER_WPM ? ANIM_WPM_WIDTH : 0;
        // #endif
        current_frame = (current_frame + 1) % frames_len;

        // NOTE 2### if demon or crab animation for the ANIM_FRAME_WIDTH
        // #if (defined(DEMON_ENABLE) || defined(CRAB_ENABLE))
        for (int offset = 0; offset <= OLED_MATRIX_SIZE; offset++) {
            uint16_t col = offset % OLED_DISPLAY_WIDTH;

            if (col < frame_start_offset) {
                continue;
            } else if (col < frame_offset || col > frame_offset + ANIM_FRAME_WIDTH) {
                oled_write_raw_byte((ANIM_INVERT ? ~bg : bg), offset);
            } else if (col <= OLED_DISPLAY_WIDTH) {
                uint8_t row               = offset / OLED_DISPLAY_WIDTH;
                int     frame_data_offset = ANIM_FRAME_WIDTH * row + col - frame_offset;
                uint8_t col_data          = pgm_read_byte(frame + frame_data_offset);
                oled_write_raw_byte(ANIM_INVERT ? ~col_data : col_data, offset);
            }
            // #endif
        }

#ifdef ANIM_SCROLL
        if (is_fast) {
#    ifdef ANIM_BOUNCE
            if (frame_offset + ANIM_FRAME_WIDTH > OLED_DISPLAY_WIDTH || frame_offset < frame_start_offset) {
                step = -step;
            }
#    endif

            frame_offset += step;

            if (frame_offset >= OLED_DISPLAY_WIDTH) {
                frame_offset = frame_start_offset - ANIM_FRAME_WIDTH + step;
            }
        } else if (frame_offset > (OLED_DISPLAY_WIDTH - ANIM_FRAME_WIDTH) || frame_offset < frame_start_offset) {
            frame_offset = frame_start_offset;
        }
    }
#endif

    if (ANIM_RENDER_WPM) {
        oled_render_wpm();
    }
}
