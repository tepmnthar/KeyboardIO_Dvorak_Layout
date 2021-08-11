// -*- mode: c++ -*-
/*  Copyright (C) 2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Kaleidoscope.h"
#include <Kaleidoscope-MouseKeys.h>


/* *INDENT-OFF* */
KEYMAPS(
  // 以下是 base layer
  // 1. DVORAK
  [DVORAK] = KEYMAP_STACKED
  (
   Key_Backtick,    Key_1,         Key_2,       Key_3,        Key_4, Key_5, Key_NoKey,
   Key_Tab,         Key_Quote,     Key_Comma,   Key_Period,   Key_P, Key_Y, Key_NoKey,
   Key_LeftControl, Key_A,         Key_O,       Key_E,        Key_U, Key_I,
   Key_LeftShift,   Key_Semicolon, Key_Q,       Key_J,        Key_K, Key_X, Key_NoKey,

   Key_Escape,      Key_LeftAlt,   Key_LeftGui, Key_Spacebar,
   Key_NoKey,

   Key_NoKey,       Key_6,         Key_7,       Key_8,        Key_9, Key_0, Key_Slash,
   Key_NoKey,       Key_F,         Key_G,       Key_C,        Key_R, Key_L, Key_Backslash,
   ,                Key_D,         Key_H,       Key_T,        Key_N, Key_S, Key_Minus,
   Key_NoKey,       Key_B,         Key_M,       Key_W,        Key_V, Key_Z, Key_Equals,

   Key_Backspace,   Key_Enter,     Key_NoKey,   Key_NoKey,
   Key_NoKey
  ),

  // 2. QWERTY
  [QWERTY] = KEYMAP_STACKED
  (
   Key_Backtick,    Key_1,       Key_2,       Key_3,        Key_4,      Key_5,         Key_NoKey,
   Key_Tab,         Key_Q,       Key_W,       Key_E,        Key_R,      Key_T,         Key_NoKey,
   Key_LeftControl, Key_A,       Key_S,       Key_D,        Key_F,      Key_G,
   Key_LeftShift,   Key_Z,       Key_X,       Key_C,        Key_V,      Key_B,         Key_NoKey,

   Key_Escape,      Key_LeftAlt, Key_LeftGui, Key_Spacebar,
   Key_NoKey,

   Key_NoKey,       Key_6,       Key_7,       Key_8,        Key_9,      Key_0,         Key_NoKey,
   Key_NoKey,       Key_Y,       Key_U,       Key_I,        Key_O,      Key_P,         Key_Equals,
                    Key_H,       Key_J,       Key_K,        Key_L,      Key_Semicolon, Key_Quote,
   Key_NoKey,       Key_N,       Key_M,       Key_Comma,    Key_Period, Key_Slash,     Key_Minus,

   Key_Backspace,   Key_Enter,   Key_NoKey,   Key_NoKey,
   Key_NoKey
  ),

  // 以下是 override layer
  // FUNCTION(FN)
  [FUNCTION] = KEYMAP_STACKED
  (
   XXX,            Key_F1, Key_F2, Key_F3, Key_F4, Key_F5,  XXX,
   XXX,            XXX,    XXX,    XXX,    XXX,    XXX,     XXX,
   XXX,            XXX,    XXX,    XXX,    XXX,    XXX,
   XXX,            XXX,    XXX,    XXX,    XXX,    XXX,     XXX,

   XXX,            XXX,    XXX,    XXX,
   XXX,

   Key_VolumeUp,   Key_F6, Key_F7, Key_F8, Key_F9, Key_F10, Key_F11,
   Key_VolumeDown, XXX,    XXX,    XXX,    XXX,    XXX,     Key_F12,
   ,               XXX,    XXX,    XXX,    XXX,    XXX,     XXX,
   Key_Mute,       XXX,    XXX,    XXX,    XXX,    XXX,     XXX,

   XXX,            XXX,    XXX,    XXX,
   XXX
  ),

  // PALM LEFT(左手鼠标键右手数字键)
  [PALM_LEFT] = KEYMAP_STACKED
  (
   XXX, XXX,           XXX,         XXX,           XXX,           XXX,                XXX,
   XXX, Key_mouseBtnL, Key_mouseUp, Key_mouseBtnR, XXX,           XXX,                XXX,
   XXX, Key_mouseL,    Key_mouseDn, Key_mouseR,    XXX,           XXX,
   XXX, XXX,           XXX,         XXX,           XXX,           XXX,                XXX,

   XXX, XXX,           XXX,         XXX,
   XXX,

   XXX, XXX,           Key_Keypad7, Key_Keypad8,   Key_Keypad9,   Key_KeypadDivide,   Key_KeypadEnter,
   XXX, XXX,           Key_Keypad4, Key_Keypad5,   Key_Keypad6,   Key_KeypadMultiply, Key_KeypadEnter,
        XXX,           Key_Keypad1, Key_Keypad2,   Key_Keypad3,   Key_KeypadSubtract, Key_KeypadEnter,
   XXX, XXX,           Key_Keypad0, XXX,           Key_KeypadDot, Key_KeypadAdd,      Key_KeypadEnter,

   XXX, XXX,           XXX,         XXX,
   XXX
  ),

  // PALM RIGHT(左手方向键右手数字键)
  [PALM_LEFT] = KEYMAP_STACKED
  (
   XXX, XXX,           XXX,           XXX,            XXX,           XXX,                XXX,
   XXX, XXX,           Key_UpArrow,   XXX,            XXX,           XXX,                XXX,
   XXX, Key_LeftArrow, Key_DownArrow, Key_RightArrow, XXX,           XXX,
   XXX, XXX,           XXX,           XXX,            XXX,           XXX,                XXX,

   XXX, XXX,           XXX,           XXX,
   XXX,

   XXX, XXX,           Key_Keypad7,   Key_Keypad8,    Key_Keypad9,   Key_KeypadDivide,   Key_KeypadEnter,
   XXX, XXX,           Key_Keypad4,   Key_Keypad5,    Key_Keypad6,   Key_KeypadMultiply, Key_KeypadEnter,
        XXX,           Key_Keypad1,   Key_Keypad2,    Key_Keypad3,   Key_KeypadSubtract, Key_KeypadEnter,
   XXX, XXX,           Key_Keypad0,   XXX,            Key_KeypadDot, Key_KeypadAdd,      Key_KeypadEnter,

   XXX, XXX,           XXX,           XXX,
   XXX
  )
)
/* *INDENT-ON* */

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
