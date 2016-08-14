// DXGL
// Copyright (C) 2016 William Feely

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

#pragma once
#ifndef __STRUCT_COMMAND_H
#define __STRUCT_COMMAND_H

typedef struct MakeTextureCmd
{
	DWORD opcode;
	DWORD size;
	glTexture *texture;
} MakeTextureCmd;
typedef struct UploadTextureCmd
{
	DWORD opcode;
	DWORD size;
	glTexture *texture;
	GLint level;
	DWORD texturesize;
	BYTE *content;
	DWORD offset;
} UploadTextureCmd;
typedef struct DownloadTextureCmd
{
	DWORD opcode;
	DWORD size;
	glTexture *texture;
	GLint level;
} DownloadTextureCmd;
typedef struct DeleteTextureCmd
{
	DWORD opcode;
	DWORD size;
	glTexture *texture;
} DeleteTextureCmd;
typedef struct BltCmd  // Frontend command structure for Blt command.
{
	DWORD opcode;
	DWORD size;
	BltCommand cmd;
} BltCmd;
#endif //__STRUCT_COMMAND_H