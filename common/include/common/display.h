/**
 * Looking Glass
 * Copyright © 2017-2024 The Looking Glass Authors
 * https://looking-glass.io
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _H_COMMON_DISPLAY_
#define _H_COMMON_DISPLAY_

#if defined(_WIN32)
#include <windows.h>
#include <stdbool.h>

bool display_getPathInfo(HMONITOR monitor, DISPLAYCONFIG_PATH_INFO * info);
float display_getSDRWhiteLevel(const DISPLAYCONFIG_PATH_INFO * displayPathInfo);
#endif

#endif
