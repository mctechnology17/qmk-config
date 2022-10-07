# ===========================================
# FileName: rules.mk
# Date: 15:17 23.September.2022
# Author: Marcos Ivan Chow Castro @mctechnology17
# Email: mctechnology170318@gmail.com
# GitHub: https://github.com/mctechnology17
# Brief: enable and disable rules an source files
# ===========================================
#                            ╔═╦═╦═╗
#                     ╔════╗ ║║║║║╔╝
#                     ║╔╗╔╗║ ║║║║║╚╗
#                     ╚╝║║╚╝ ║╠═╩╩═╝
#                       ║╠═╦═╣╚╦═╦╦═╦╗╔═╦═╦╦╗
#                       ║║╩╣═╣║║║║║╬║╚╣╬║╬║║║
#                       ╚╩═╩═╩╩╩╩═╩═╩═╩═╬╗╠╗║
#                                       ╚═╩═╝
#
# Copyright QMK Community
# Copyright 2022 Marcos Ivan Chow Castro @mctechnology17
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
### COMBO_ENABLE {{{
COMBO_ENABLE = yes
#}}}
### VIA_ENABLE {{{
# VIA_ENABLE = yes
#}}}
### RAW_ENABLE {{{
# https://docs.qmk.fm/#/feature_rawhid?id=keyboard-firmware
# RAW HID permite una comunicación bidireccional entre QMK y la computadora
# host sobre una interfaz HID. Esto tiene muchos casos de uso potenciales, como
# cambiar los kimapas en la mosca o cambiar los colores y modos del LED RGB.
# Hay dos componentes principales para obtener el HID sin procesar con su
# teclado.
# RAW_ENABLE = yes
#}}}
### OLED_ENABLE {{{
# https://docs.qmk.fm/#/feature_oled_driver?id=basic-configuration
OLED_ENABLE  = yes
OLED_DRIVER = SSD1306
# test de oled
# OLED_TIMEOUT = 3500
# OLED_FADE_OUT = yes
# OLED_FADE_OUT_INTERVAL = 6
# OLED_SCROLL_TIMEOUT = 1000
# OLED_BRIGHTNESS = 100
#}}}
### EXTRAKEY_ENABLE audio control and System control (+450) {{{
EXTRAKEY_ENABLE = yes # Audio control and System control(+450)
#}}}
### WPM_ENABLE {{{
# DOG BONGOCAT_KEYBOARD BONGOCAT CRAB DEMON MUSIC_BAR
WPM_ENABLE = yes
#}}}
### size optimisations (over +400) {{{
CONSOLE_ENABLE = no         # Console for debug(+400)
COMMAND_ENABLE = no         # Commands for debug and configuration
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESCAPE_ENABLE = no
#}}}
### MOUSEKEY_ENABLE(+1348) RGBLIGHT_ENABLE(+2842) BONGOCAT_KEYBOARD {{{
# activar (yes) SOLO si BONGOCAT_KEYBOARD = yes DOG = true
# es por el tamaño del compilado
MOUSEKEY_ENABLE = no       # Mouse keys(+1348)
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight(+2842)
# RGBLIGHT_TWINKLE = no
# RGB_MATRIX_ENABLE = yes # mas optimizado que RGBLIGHT_ENABLE(+2432)
#}}}
### experimental size optimisations (+316) {{{
EXTRAFLAGS += -flto
NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE = no           # Audio output on port C6
LEADER_ENABLE = no
MIDI_ENABLE = no            # MIDI controls
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
#}}}
### ANIMATIONS_ENABLE {{{
# And if you want to disable it without turning off the OLED Driver you can simply set
OCEAN_DREAM_ENABLE = no
LUNA_ENABLE = no
BONGOCAT_ENABLE = no
CRAB_ENABLE = yes # (default)
DEMON_ENABLE = no
DOG_ENABLE = yes # is smaller as LUNA_ENABLE (default)
BONGOCAT_KEYBOARD_ENABLE = no # is smaller as BONGOCAT_ENABLE
MUSIC_BARS_ENABLE = no # TODO
ifeq ($(strip $(OLED_ENABLE)), yes)
  SRC += oled_setup.c

  ifdef MUSIC_BARS_ENABLE
    ifeq ($(strip $(MUSIC_BARS_ENABLE)), yes)
      # SRC += music-bars.c animation-utils.c
      OPT_DEFS += -DMUSIC_BARS_ENABLE
    endif
  endif
  ifndef MUSIC_BARS_ENABLE
    # SRC += music-bars.c animation-utils.c
    OPT_DEFS += -DMUSIC_BARS_ENABLE
  endif

  ifdef DOG_ENABLE
      ifeq ($(strip $(DOG_ENABLE)), yes)
        OPT_DEFS += -DDOG_ENABLE
      endif
  endif
  ifndef DOG_ENABLE
    OPT_DEFS += -DDOG_ENABLE
  endif

  ifdef BONGOCAT_KEYBOARD_ENABLE
      ifeq ($(strip $(BONGOCAT_KEYBOARD_ENABLE)), yes)
        OPT_DEFS += -DBONGOCAT_KEYBOARD_ENABLE
      endif
  endif
  ifndef BONGOCAT_KEYBOARD_ENABLE
    OPT_DEFS += -DBONGOCAT_KEYBOARD_ENABLE
  endif

  ifdef OCEAN_DREAM_ENABLE
      ifeq ($(strip $(OCEAN_DREAM_ENABLE)), yes)
        SRC += ocean_dream.c
        OPT_DEFS += -DOCEAN_DREAM_ENABLE
      endif
  endif
  ifndef OCEAN_DREAM_ENABLE
      SRC += ocean_dream.c
      OPT_DEFS += -DOCEAN_DREAM_ENABLE
  endif

  ifdef LUNA_ENABLE
      ifeq ($(strip $(LUNA_ENABLE)), yes)
        SRC += luna.c
        OPT_DEFS += -DLUNA_ENABLE
      endif
  endif
  ifndef LUNA_ENABLE
    SRC += luna.c
    OPT_DEFS += -DLUNA_ENABLE
  endif

  ifdef BONGOCAT_ENABLE
    ifeq ($(strip $(BONGOCAT_ENABLE)), yes)
      SRC += bongocat.c
      OPT_DEFS += -DBONGOCAT_ENABLE
    endif
  endif
  ifndef BONGOCAT_ENABLE
    SRC += bongocat.c
    OPT_DEFS += -DBONGOCAT_ENABLE
  endif

  ifdef CRAB_ENABLE
    ifeq ($(strip $(CRAB_ENABLE)), yes)
      SRC += crab.c animation-utils.c
      OPT_DEFS += -DCRAB_ENABLE
    endif
  endif
  ifndef CRAB_ENABLE
    SRC += crab.c animation-utils.c
    OPT_DEFS += -DCRAB_ENABLE
  endif

  ifdef DEMON_ENABLE
    ifeq ($(strip $(DEMON_ENABLE)), yes)
      SRC += demon.c animation-utils.c
      OPT_DEFS += -DDEMON_ENABLE
    endif
  endif
  ifndef DEMON_ENABLE
    SRC += demon.c animation-utils.c
    OPT_DEFS += -DDEMON_ENABLE
  endif

endif
#}}}

# vim: set sw=2 ts=2 sts=2 et ft=make fdm=marker:
