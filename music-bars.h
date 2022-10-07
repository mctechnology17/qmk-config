/* ========================================
FileName: music-bars.h
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: QMK oled animations music bars
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

// NOTE test
// #define ANIM_SCROLL true
// #define ANIM_FRAME_WIDTH 72
// #define ANIM_BOUNCE true

#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM 10 // 45 (default) Switch to fast animation when over words per minute

//-------- CONFIGURATION START --------
#ifndef FAST_TYPE_WPM
#    define FAST_TYPE_WPM 45 // Switch to fast animation when over words per minute
#endif
//-------- CONFIGURATION END--------

#define ANIM_SIZE 512
#define ANIM_FRAME 300

// NOTE: static delete because it is not working
void oled_render_anim(void);
