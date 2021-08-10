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

/* *INDENT-OFF* */
KEYMAPS(
  // DVORAK
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

  // QWERTY
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

  // FUNCTION
  [FUNCTION] = KEYMAP_STACKED
  (
   XXX, XXX, XXX, XXX, XXX, XXX, XXX,
   XXX, XXX, XXX, XXX, XXX, XXX, XXX,
   XXX, XXX, XXX, XXX, XXX, XXX,
   XXX, XXX, XXX, XXX, XXX, XXX, XXX,

   XXX, XXX, XXX, XXX,
   XXX,

   Key_VolumeUp,   XXX, XXX, XXX, XXX, XXX, XXX,
   Key_VolumeDown, XXX, XXX, XXX, XXX, XXX, XXX,
                   XXX, XXX, XXX, XXX, XXX, XXX,
   Key_Mute,       XXX, XXX, XXX, XXX, XXX, XXX,

   XXX, XXX, XXX, XXX,
   XXX
  ),
)
/* *INDENT-ON* */

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
