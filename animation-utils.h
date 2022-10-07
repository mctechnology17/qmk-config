/* ========================================
FileName: animation-utils.h
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
#pragma once
#include "quantum.h"

#ifdef CRAB_ENABLE
#    include "crab.h"
#endif

#ifdef DEMON_ENABLE
#    include "demon.h"
#endif

#ifdef MUSIC_BARS_ENABLE
#    include "music-bars.h"
#endif
//-------- CONFIGURATION START --------

#ifndef ANIM_RENDER_WPM
#    define ANIM_RENDER_WPM true
#endif
#ifndef FAST_TYPE_WPM
#    define FAST_TYPE_WPM 45 // Switch to fast animation when over words per minute
#endif
#ifndef ANIM_INVERT
#    define ANIM_INVERT false // Invert animation color and background
#endif
#ifndef ANIM_BG
#    define ANIM_BG 0x00
#endif
#ifndef ANIM_FRAME_TIME
#    define ANIM_FRAME_TIME 250
#endif
//-------- CONFIGURATION END--------

#define ANIM_WPM_WIDTH 22
#define OLED_ROWS OLED_DISPLAY_HEIGHT / 4

// NOTE: static delete
void oled_render_wpm(void);

// NOTE: static delete
void oled_render_anim_frame(const char **fast_frames, const char **slow_frames, uint8_t frames_len);
