/*
 *  pslash - a lightweight framebuffer splashscreen for embedded devices.
 *
 *  Copyright (c) 2012 sleep(5) ltd
 *  Author: Tomas Frydrych <tomas@sleepfive.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef _HAVE_PSPLASH_COLORS_H
#define _HAVE_PSPLASH_COLORS_H

/* This is the overall background color */
#ifndef PSPLASH_BACKGROUND_COLOR
#define PSPLASH_BACKGROUND_COLOR 0x00, 0x00, 0x00
#endif

/* This is the color of any text output */
#ifndef PSPLASH_TEXT_COLOR
#define PSPLASH_TEXT_COLOR 0xbb, 0xbb, 0xbb
#endif

/* This is the color of the progress bar indicator */
#ifndef PSPLASH_BAR_COLOR
#define PSPLASH_BAR_COLOR 0x88, 0x88, 0x88
#endif

/* This is the color of the progress bar background */
#ifndef PSPLASH_BAR_BACKGROUND_COLOR
#define PSPLASH_BAR_BACKGROUND_COLOR 0x44, 0x44, 0x44
#endif

/* This is the color of the progress bar border */
#ifndef PSPLASH_BAR_BORDER_COLOR
#define PSPLASH_BAR_BORDER_COLOR 0xbb, 0xbb, 0xbb
#endif

/* This is the color of the space between progress bar and its border */
#ifndef PSPLASH_BAR_BORDER_SPACE_COLOR
#define PSPLASH_BAR_BORDER_SPACE_COLOR 0x00, 0x00, 0x00
#endif

#endif
