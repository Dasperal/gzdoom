//-----------------------------------------------------------------------------
//
// Copyright 1993-1996 id Software
// Copyright 1999-2016 Randy Heit
// Copyright 2002-2016 Christoph Oelckers
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/
//

#pragma once

// Old ZDoom net commands that now only loop back as events internally in the playsim

void LoopBackCommands();
void RunCommands(int player);
void DoCommand(int type, uint8_t** stream, int player);

void CmdWriteBytes(const uint8_t* block, int len);
void CmdWriteByte(uint8_t it);
void CmdWriteWord(short it);
void CmdWriteLong(int it);
void CmdWriteFloat(float it);
void CmdWriteString(const char* it);

// Demo recording (To do: reimplement - it probably just copied the commands already written)
inline size_t CopySpecData(int player, uint8_t* dest, size_t dest_size) { return 0; }