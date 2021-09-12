#pragma once
#include <Windows.h>

static WCHAR* files[] = {
	L"entry.lua",
	L"A-4E-C.lua",
	L"Cockpit/Scripts/EFM_Data_Bus.lua",
	L"Entry/Suspension.lua",
};

static BYTE hashes[][32] = {
	{0x2c,0x97,0x98,0x2f,0xb6,0xbf,0x64,0x68,0x14,0x37,0xad,0x8b,0x74,0x43,0x75,0xe4,0x36,0xcd,0x41,0xe6},
	{0x6e,0xb1,0x3b,0xcc,0x5e,0x6c,0x4f,0x7b,0xed,0x41,0xef,0x8a,0x77,0x1d,0x17,0xf2,0xc0,0xef,0x3a,0xb3},
	{0xa8,0xf7,0x0b,0xa4,0xcf,0x94,0xeb,0x38,0x36,0x69,0x26,0x11,0x61,0x35,0xb3,0x07,0x0c,0x16,0x30,0x67},
	{0x76,0x0a,0x96,0x5c,0xff,0x3d,0x20,0x51,0xc0,0x2e,0x9a,0x79,0x72,0xe6,0x67,0x1b,0x20,0x5b,0x6e,0x92}
};
    