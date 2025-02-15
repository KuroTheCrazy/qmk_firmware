#include "40rmie.h"

/* Copyright 2021 Jeremy Beal
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 

40rmie v2 by KuroTheCrazy
Sorry for the mess, it's my first time uwu


A row has three enters, in this order: 1.25u, 2.25u, ISO
Bottom row spaces are: 2.75/2.25u, 2.25/2.75u, 6.25u, 7u
Split space is bad but you do you
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = KEYMAP(
		   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                 KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_INS,  KC_HOME, KC_PGUP, 
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC,   KC_DEL,  KC_END,  KC_PGDN, 
		LT(1, KC_ESC), KC_A, KC_S, KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT, KC_ENT, KC_ENT, 
		KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                    KC_UP, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_APP,  KC_RALT, KC_RGUI, KC_RCTL,           KC_LEFT, KC_DOWN, KC_RGHT),

	[1] = KEYMAP(
		   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_SCLN, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_TRNS, KC_QUOT, KC_QUOT, KC_QUOT, 
		KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,  KC_F6,   KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(2),   MO(2),   MO(2),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS),

	[2] = KEYMAP(
		   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, RESET, 
		KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,    KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_END,  KC_PGDN, KC_PGUP, KC_HOME, KC_COLN, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_TRNS, KC_DQUO, KC_DQUO, KC_DQUO, 
		KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS)

};

/*

Here's a blank layer if you want it for convenience:

	KEYMAP(
		   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS)
		
*/