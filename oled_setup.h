/* ========================================
FileName: oled_setup.h
Date: 15:17 23.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: define keymap for the wired corne keyboard
Use: in your keymap file, include this file
     #include "oled_setup.h"
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

#include "quantum.h"

#ifdef OLED_ENABLE

#    include "oled_driver.h"

#    ifdef LUNA_ENABLE
#        include "luna.h"
#    endif

#    ifdef OCEAN_DREAM_ENABLE
#        include "ocean_dream.h"
#    endif

#    ifdef BONGOCAT_ENABLE
#        include "bongocat.h"
#    endif

#    ifdef CRAB_ENABLE
#        include "animation-utils.h"
#        include "crab.h"
#    endif

#    ifdef DEMON_ENABLE
#        include "animation-utils.h"
#        include "demon.h"
#    endif

// TODO INCLUIR ESTAS DEF
// NOTE: comment out to disable
#    ifdef MUSIC_BARS_ENABLE
#        define ANIM_INVERT false
#        define ANIM_RENDER_WPM true
#        define FAST_TYPE_WPM 10 // 45 (default) Switch to fast animation when over words per minute
#        include "music-bars-test.c"
// #        include "music-bars.h"
#    endif

#endif
