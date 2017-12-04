// DXGL
// Copyright (C) 2011 William Feely

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#include "common.h"
#include "palette.h"

const unsigned char DefaultPalette[1024] = {
0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x80,0x80,0x00,0x00,
0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0x80,0x80,0x00,0xc0,0xc0,0xc0,0x00,
0xa0,0xa0,0xa0,0x00,0xf0,0xf0,0xf0,0x00,0x40,0x20,0x00,0x00,0x60,0x20,0x00,0x00,
0x80,0x20,0x00,0x00,0xa0,0x20,0x00,0x00,0xc0,0x20,0x00,0x00,0xe0,0x20,0x00,0x00,
0x00,0x40,0x00,0x00,0x20,0x40,0x00,0x00,0x40,0x40,0x00,0x00,0x60,0x40,0x00,0x00,
0x80,0x40,0x00,0x00,0xa0,0x40,0x00,0x00,0xc0,0x40,0x00,0x00,0xe0,0x40,0x00,0x00,
0x00,0x60,0x00,0x00,0x20,0x60,0x00,0x00,0x40,0x60,0x00,0x00,0x60,0x60,0x00,0x00,
0x80,0x60,0x00,0x00,0xa0,0x60,0x00,0x00,0xc0,0x60,0x00,0x00,0xe0,0x60,0x00,0x00,
0x00,0x80,0x00,0x00,0x20,0x80,0x00,0x00,0x40,0x80,0x00,0x00,0x60,0x80,0x00,0x00,
0x80,0x80,0x00,0x00,0xa0,0x80,0x00,0x00,0xc0,0x80,0x00,0x00,0xe0,0x80,0x00,0x00,
0x00,0xa0,0x00,0x00,0x20,0xa0,0x00,0x00,0x40,0xa0,0x00,0x00,0x60,0xa0,0x00,0x00,
0x80,0xa0,0x00,0x00,0xa0,0xa0,0x00,0x00,0xc0,0xa0,0x00,0x00,0xe0,0xa0,0x00,0x00,
0x00,0xc0,0x00,0x00,0x20,0xc0,0x00,0x00,0x40,0xc0,0x00,0x00,0x60,0xc0,0x00,0x00,
0x80,0xc0,0x00,0x00,0xa0,0xc0,0x00,0x00,0xc0,0xc0,0x00,0x00,0xe0,0xc0,0x00,0x00,
0x00,0xe0,0x00,0x00,0x20,0xe0,0x00,0x00,0x40,0xe0,0x00,0x00,0x60,0xe0,0x00,0x00,
0x80,0xe0,0x00,0x00,0xa0,0xe0,0x00,0x00,0xc0,0xe0,0x00,0x00,0xe0,0xe0,0x00,0x00,
0x00,0x00,0x40,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x60,0x00,0x40,0x00,
0x80,0x00,0x40,0x00,0xa0,0x00,0x40,0x00,0xc0,0x00,0x40,0x00,0xe0,0x00,0x40,0x00,
0x00,0x20,0x40,0x00,0x20,0x20,0x40,0x00,0x40,0x20,0x40,0x00,0x60,0x20,0x40,0x00,
0x80,0x20,0x40,0x00,0xa0,0x20,0x40,0x00,0xc0,0x20,0x40,0x00,0xe0,0x20,0x40,0x00,
0x00,0x40,0x40,0x00,0x20,0x40,0x40,0x00,0x40,0x40,0x40,0x00,0x60,0x40,0x40,0x00,
0x80,0x40,0x40,0x00,0xa0,0x40,0x40,0x00,0xc0,0x40,0x40,0x00,0xe0,0x40,0x40,0x00,
0x00,0x60,0x40,0x00,0x20,0x60,0x40,0x00,0x40,0x60,0x40,0x00,0x60,0x60,0x40,0x00,
0x80,0x60,0x40,0x00,0xa0,0x60,0x40,0x00,0xc0,0x60,0x40,0x00,0xe0,0x60,0x40,0x00,
0x00,0x80,0x40,0x00,0x20,0x80,0x40,0x00,0x40,0x80,0x40,0x00,0x60,0x80,0x40,0x00,
0x80,0x80,0x40,0x00,0xa0,0x80,0x40,0x00,0xc0,0x80,0x40,0x00,0xe0,0x80,0x40,0x00,
0x00,0xa0,0x40,0x00,0x20,0xa0,0x40,0x00,0x40,0xa0,0x40,0x00,0x60,0xa0,0x40,0x00,
0x80,0xa0,0x40,0x00,0xa0,0xa0,0x40,0x00,0xc0,0xa0,0x40,0x00,0xe0,0xa0,0x40,0x00,
0x00,0xc0,0x40,0x00,0x20,0xc0,0x40,0x00,0x40,0xc0,0x40,0x00,0x60,0xc0,0x40,0x00,
0x80,0xc0,0x40,0x00,0xa0,0xc0,0x40,0x00,0xc0,0xc0,0x40,0x00,0xe0,0xc0,0x40,0x00,
0x00,0xe0,0x40,0x00,0x20,0xe0,0x40,0x00,0x40,0xe0,0x40,0x00,0x60,0xe0,0x40,0x00,
0x80,0xe0,0x40,0x00,0xa0,0xe0,0x40,0x00,0xc0,0xe0,0x40,0x00,0xe0,0xe0,0x40,0x00,
0x00,0x00,0x80,0x00,0x20,0x00,0x80,0x00,0x40,0x00,0x80,0x00,0x60,0x00,0x80,0x00,
0x80,0x00,0x80,0x00,0xa0,0x00,0x80,0x00,0xc0,0x00,0x80,0x00,0xe0,0x00,0x80,0x00,
0x00,0x20,0x80,0x00,0x20,0x20,0x80,0x00,0x40,0x20,0x80,0x00,0x60,0x20,0x80,0x00,
0x80,0x20,0x80,0x00,0xa0,0x20,0x80,0x00,0xc0,0x20,0x80,0x00,0xe0,0x20,0x80,0x00,
0x00,0x40,0x80,0x00,0x20,0x40,0x80,0x00,0x40,0x40,0x80,0x00,0x60,0x40,0x80,0x00,
0x80,0x40,0x80,0x00,0xa0,0x40,0x80,0x00,0xc0,0x40,0x80,0x00,0xe0,0x40,0x80,0x00,
0x00,0x60,0x80,0x00,0x20,0x60,0x80,0x00,0x40,0x60,0x80,0x00,0x60,0x60,0x80,0x00,
0x80,0x60,0x80,0x00,0xa0,0x60,0x80,0x00,0xc0,0x60,0x80,0x00,0xe0,0x60,0x80,0x00,
0x00,0x80,0x80,0x00,0x20,0x80,0x80,0x00,0x40,0x80,0x80,0x00,0x60,0x80,0x80,0x00,
0x80,0x80,0x80,0x00,0xa0,0x80,0x80,0x00,0xc0,0x80,0x80,0x00,0xe0,0x80,0x80,0x00,
0x00,0xa0,0x80,0x00,0x20,0xa0,0x80,0x00,0x40,0xa0,0x80,0x00,0x60,0xa0,0x80,0x00,
0x80,0xa0,0x80,0x00,0xa0,0xa0,0x80,0x00,0xc0,0xa0,0x80,0x00,0xe0,0xa0,0x80,0x00,
0x00,0xc0,0x80,0x00,0x20,0xc0,0x80,0x00,0x40,0xc0,0x80,0x00,0x60,0xc0,0x80,0x00,
0x80,0xc0,0x80,0x00,0xa0,0xc0,0x80,0x00,0xc0,0xc0,0x80,0x00,0xe0,0xc0,0x80,0x00,
0x00,0xe0,0x80,0x00,0x20,0xe0,0x80,0x00,0x40,0xe0,0x80,0x00,0x60,0xe0,0x80,0x00,
0x80,0xe0,0x80,0x00,0xa0,0xe0,0x80,0x00,0xc0,0xe0,0x80,0x00,0xe0,0xe0,0x80,0x00,
0x00,0x00,0xc0,0x00,0x20,0x00,0xc0,0x00,0x40,0x00,0xc0,0x00,0x60,0x00,0xc0,0x00,
0x80,0x00,0xc0,0x00,0xa0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xe0,0x00,0xc0,0x00,
0x00,0x20,0xc0,0x00,0x20,0x20,0xc0,0x00,0x40,0x20,0xc0,0x00,0x60,0x20,0xc0,0x00,
0x80,0x20,0xc0,0x00,0xa0,0x20,0xc0,0x00,0xc0,0x20,0xc0,0x00,0xe0,0x20,0xc0,0x00,
0x00,0x40,0xc0,0x00,0x20,0x40,0xc0,0x00,0x40,0x40,0xc0,0x00,0x60,0x40,0xc0,0x00,
0x80,0x40,0xc0,0x00,0xa0,0x40,0xc0,0x00,0xc0,0x40,0xc0,0x00,0xe0,0x40,0xc0,0x00,
0x00,0x60,0xc0,0x00,0x20,0x60,0xc0,0x00,0x40,0x60,0xc0,0x00,0x60,0x60,0xc0,0x00,
0x80,0x60,0xc0,0x00,0xa0,0x60,0xc0,0x00,0xc0,0x60,0xc0,0x00,0xe0,0x60,0xc0,0x00,
0x00,0x80,0xc0,0x00,0x20,0x80,0xc0,0x00,0x40,0x80,0xc0,0x00,0x60,0x80,0xc0,0x00,
0x80,0x80,0xc0,0x00,0xa0,0x80,0xc0,0x00,0xc0,0x80,0xc0,0x00,0xe0,0x80,0xc0,0x00,
0x00,0xa0,0xc0,0x00,0x20,0xa0,0xc0,0x00,0x40,0xa0,0xc0,0x00,0x60,0xa0,0xc0,0x00,
0x80,0xa0,0xc0,0x00,0xa0,0xa0,0xc0,0x00,0xc0,0xa0,0xc0,0x00,0xe0,0xa0,0xc0,0x00,
0x00,0xc0,0xc0,0x00,0x20,0xc0,0xc0,0x00,0x40,0xc0,0xc0,0x00,0x60,0xc0,0xc0,0x00,
0x80,0xc0,0xc0,0x00,0xa0,0xc0,0xc0,0x00,0xff,0xfb,0xf0,0x00,0xa0,0xa0,0xa4,0x00,
0x80,0x80,0x80,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0xff,0x00,0x00,
0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0x00,0xff,0xff,0xff,0x00
}; // Grabbed from a Windows DDRAW run
