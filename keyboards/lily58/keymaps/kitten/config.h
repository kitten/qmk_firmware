/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Add a custom font (from ../druotoni/navi_font.c) */
#ifdef OLED_FONT_H
#undef OLED_FONT_H
#endif
#define OLED_FONT_H "font.c"
#undef OLED_FONT_END
#define OLED_FONT_END 125

/* Define a custom x-split keyboard RPC event */
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_A

/* Disable native OLED timeout for custom one */
#define OLED_TIMEOUT 0
/* Set a lower OLED refresh rate */
#define OLED_UPDATE_INTERVAL 100

/* Set USB polling to 1000Hz */
#define USB_POLLING_INTERVAL_MS 1

/* Remove cycle delay from GPIO reads */
#define GPIO_INPUT_PIN_DELAY 1

/* Disable quick tap and set low tapping term */
#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

#define FORCE_NKRO

/* Set small layer state (perf) */
#define LAYER_STATE_8BIT

/* Disable locking key switches */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* Disable som unused features for lower size */
#define DISABLE_LEADER
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define NO_MUSIC_MODE

/* Only synchronize layers between split halves */
#undef SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE

#ifdef RGB_MATRIX_ENABLE

/* Set RGB Matrix refresh rate to ~60Hz */
#ifdef RGB_MATRIX_LED_FLUSH_LIMIT
#undef RGB_MATRIX_LED_FLUSH_LIMIT
#endif
#define RGB_MATRIX_LED_FLUSH_LIMIT 16

#undef RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Disable unused RGB Matrix effects */
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

#define RGB_DISABLE_TIMEOUT 60000
#endif
