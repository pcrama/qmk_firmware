/*
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

#define SERIAL_USART_SPEED 115200

#define MK_COMBINED

/* Work-around for slave half sometimes losing connection with master half:
   https://github.com/qmk/qmk_firmware/issues/19420#issuecomment-1372134274 */
#define usb_lld_disconnect_bus(usbp) do {} while(0)

#include "keyboards/input_club/ergodox_infinity/config.h"
