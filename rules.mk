# ========================================
# FileName: rules.mk
# Date: 15:17 05.September.2022
# Author: Marcos Chow Castro
# Email: mctechnology170318@gmail.com
# GitHub: https://github.com/mctechnology17
# Brief: delcarar macros y optimisar archivo de compilacion
#        importante poner "no" en variable para hacer efecto
# =========================================
### OLED_ENABLE {{{
OLED_ENABLE  = yes
OLED_DRIVER = SSD1306
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
MOUSEKEY_ENABLE = yes       # Mouse keys(+1348)
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
# vim: set sw=2 ts=2 sts=2 et ft=make fdm=marker:
