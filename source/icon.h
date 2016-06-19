/*
Copyright (c) 2002, Marcin 'Shard' Konicki
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Name "Marcin Konicki", "Shard" or any combination of them, must not be used to endorse or promote products derived from this software without specific prior written permission from Marcin Konicki.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


const unsigned char WMM_ICON_DATA [] = {
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x70,0x70,0x70,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,
	0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x20,0x20,0x20,0xff,0x20,0x20,0x20,0xff,0x38,0x38,0x38,0xff,0x48,0x48,0x48,0xff,0x48,0x48,0x48,0xff,0x50,0x50,0x50,0xff,0x00,0x66,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0xcb,0x33,0xff,0x30,0x30,0x30,0xff,
	0x50,0x50,0x50,0xff,0x50,0x50,0x50,0xff,0x78,0x78,0x78,0xff,0x78,0x78,0x78,0xff,0x80,0x80,0x80,0xff,0x80,0x80,0x80,0xff,0x90,0x90,0x90,0xff,0x80,0x80,0x80,0xff,0x38,0x38,0x38,0xff,0x00,0x66,0x33,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x38,0x38,0x38,0xff,0x68,0x68,0x68,0xff,0x80,0x80,0x80,0xff,
	0xa0,0xa0,0xa0,0xff,0xa8,0xa8,0xa8,0xff,0xa8,0xa8,0xa8,0xff,0xa8,0xa8,0xa8,0xff,0xa8,0xa8,0xa8,0xff,0xa8,0xa8,0xa8,0xff,0xa8,0xa8,0xa8,0xff,0x90,0x90,0x90,0xff,0x68,0x68,0x68,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x48,0x48,0x48,0xff,0x68,0x68,0x68,0xff,0x98,0x98,0x98,0xff,0xb0,0xb0,0xb0,0xff,0xb0,0xb0,0xb0,0xff,
	0xb0,0xb0,0xb0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xb0,0xb0,0xb0,0xff,0x80,0x80,0x80,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x50,0x50,0x50,0xff,0x98,0x98,0x98,0xff,0xb0,0xb0,0xb0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,
	0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc0,0xc0,0xc0,0xff,0xc0,0xc0,0xc0,0xff,0xb0,0xb0,0xb0,0xff,0xa8,0xa8,0xa8,0xff,0x90,0x90,0x90,0xff,0x80,0x80,0x80,0xff,0x68,0x68,0x68,0xff,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0x00,0x50,0x00,0xff,0x70,0x70,0x70,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x48,0x48,0x48,0xff,0xa0,0xa0,0xa0,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,
	0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xb0,0xb0,0xb0,0xff,0x60,0x60,0x60,0xff,0x38,0x38,0x38,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x68,0x68,0x68,0xff,0xc0,0xc0,0xc0,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,
	0xd8,0xd8,0xd8,0xff,0xc8,0xc8,0xc8,0xff,0x78,0x78,0x78,0xff,0x00,0x98,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x70,0x70,0x70,0xff,0x70,0x70,0x70,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x80,0x80,0x80,0xff,0xc8,0xc8,0xc8,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,
	0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xb0,0xb0,0xb0,0xff,0x78,0x78,0x78,0xff,0x48,0x48,0x48,0xff,0x00,0x98,0x33,0xff,0x00,0x98,0x33,0xff,0x00,0x50,0x00,0xff,0x70,0x70,0x70,0xff,0x00,0x98,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x68,0x68,0x68,0xff,0xc8,0xc8,0xc8,0xff,0xe0,0xe0,0xe0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,
	0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xd8,0xd8,0xd8,0xff,0xc0,0xc0,0xc0,0xff,0x98,0x98,0x98,0xff,0x50,0x50,0x50,0xff,0x00,0x98,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x90,0x90,0x90,0xff,0xc8,0xc8,0xc8,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,
	0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xe0,0xe0,0xe0,0xff,0xc8,0xc8,0xc8,0xff,0xa0,0xa0,0xa0,0xff,0x50,0x50,0x50,0xff,0x00,0x66,0x33,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x80,0x80,0x80,0xff,0xc0,0xc0,0xc0,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xf0,0xf0,0xf0,0xff,
	0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xe0,0xe0,0xe0,0xff,0xc0,0xc0,0xc0,0xff,0x80,0x80,0x80,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0x00,0x50,0x00,0xff,0x48,0x48,0x48,0xff,0x80,0x80,0x80,0xff,0xb0,0xb0,0xb0,0xff,0xe0,0xe0,0xe0,0xff,
	0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xc8,0xc8,0xc8,0xff,0x80,0x80,0x80,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x00,0xcb,0x33,0xff,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x38,0x38,0x38,0xff,0x68,0x68,0x68,0xff,
	0xa8,0xa8,0xa8,0xff,0xc8,0xc8,0xc8,0xff,0xe0,0xe0,0xe0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xf0,0xf0,0xf0,0xff,0xe0,0xe0,0xe0,0xff,0xa8,0xa8,0xa8,0xff,0x78,0x78,0x78,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,
	0x00,0x66,0x33,0xff,0x48,0x48,0x48,0xff,0x98,0x98,0x98,0xff,0xe0,0xe0,0xe0,0xff,0xf0,0xf0,0xf0,0xff,0x38,0x38,0x38,0xff,0x33,0x66,0x66,0xff,0x38,0x38,0x38,0xff,0x78,0x78,0x78,0xff,0xe0,0xe0,0xe0,0xff,0xb8,0xb8,0xb8,0xff,0x78,0x78,0x78,0xff,0x78,0x78,0x78,0xff,0x78,0x78,0x78,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,
	0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xb8,0xb8,0xb8,0xff,0x38,0x38,0x38,0xff,0x33,0x66,0x66,0xff,0x98,0xcb,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x70,0x70,0x70,0xff,0x70,0x70,0x70,0xff,0x70,0x70,0x70,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x78,0x78,0x78,0xff,0x78,0x78,0x78,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x98,0x33,0xff,
	0x00,0x50,0x00,0xff,0x38,0x38,0x38,0xff,0x38,0x38,0x38,0xff,0xe0,0xe0,0xe0,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xcb,0xcb,0xff,0x33,0x98,0x98,0xff,0x78,0x78,0x78,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0x00,0x98,0x33,0xff,0xff,0x00,0xff,0x00,0x00,0x98,0x33,0xff,0x00,0x50,0x00,0xff,
	0x48,0x48,0x48,0xff,0x90,0x90,0x90,0xff,0x48,0x48,0x48,0xff,0x66,0xcb,0xcb,0xff,0x98,0xcb,0xcb,0xff,0xcb,0xff,0xff,0xff,0x66,0x98,0xcb,0xff,0x98,0xcb,0xcb,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xcb,0xff,0xff,0x33,0x98,0x98,0xff,0x33,0x66,0x98,0xff,0x78,0x78,0x78,0xff,0x00,0x50,0x00,0xff,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0x68,0x68,0x68,0xff,
	0xa0,0xa0,0xa0,0xff,0xe0,0xe0,0xe0,0xff,0x20,0x20,0x20,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xff,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x66,0x98,0x98,0xff,0x98,0xff,0xff,0xff,0x98,0xff,0xff,0xff,0x98,0xcb,0xff,0xff,0x33,0x98,0x98,0xff,0x33,0x66,0x98,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x66,0x33,0xff,0x78,0x78,0x78,0xff,0xc0,0xc0,0xc0,0xff,
	0xe0,0xe0,0xe0,0xff,0xf0,0xf0,0xf0,0xff,0x40,0x40,0x40,0xff,0x33,0x98,0x98,0xff,0x66,0xcb,0xff,0xff,0x33,0x98,0x98,0xff,0x98,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x33,0x98,0xcb,0xff,0x98,0xff,0xff,0xff,0x98,0xcb,0xff,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0xcb,0xff,0x28,0x28,0x28,0xff,0x70,0x70,0x70,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x68,0x68,0x68,0xff,0xa0,0xa0,0xa0,0xff,0xd8,0xd8,0xd8,0xff,0xe0,0xe0,0xe0,0xff,
	0xf0,0xf0,0xf0,0xff,0xe0,0xe0,0xe0,0xff,0xc0,0xc0,0xc0,0xff,0x33,0x66,0x66,0xff,0x66,0xcb,0xff,0xff,0x66,0x98,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xff,0xff,0xcb,0xff,0xff,0xff,0x66,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x50,0x50,0x50,0xff,0x38,0x38,0x38,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0xcb,0x33,0xff,0x00,0xcb,0x33,0xff,0x50,0x50,0x50,0xff,0x98,0x98,0x98,0xff,0xc8,0xc8,0xc8,0xff,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xff,0xc8,0xc8,0xc8,0xff,
	0xb0,0xb0,0xb0,0xff,0x80,0x80,0x80,0xff,0x50,0x50,0x50,0xff,0x33,0x66,0x66,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xcb,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0xcb,0xff,0x70,0x70,0x70,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xa8,0xa8,0xa8,0xff,0xc0,0xc0,0xc0,0xff,0xc8,0xc8,0xc8,0xff,0xd8,0xd8,0xd8,0xff,0xc8,0xc8,0xc8,0xff,0xb0,0xb0,0xb0,0xff,0x78,0x78,0x78,0xff,
	0x50,0x50,0x50,0xff,0x00,0xcb,0x33,0xff,0x00,0xcb,0x33,0xff,0x50,0x50,0x50,0xff,0x66,0x98,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xff,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x20,0x20,0x20,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0xcb,0x33,0xff,0x00,0x98,0x33,0xff,0x38,0x38,0x38,0xff,0x80,0x80,0x80,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc8,0xc8,0xc8,0xff,0xc0,0xc0,0xc0,0xff,0x98,0x98,0x98,0xff,0x68,0x68,0x68,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,
	0x00,0xcb,0x33,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0x20,0x20,0x20,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x66,0xcb,0xff,0xff,0x66,0x98,0xcb,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0x98,0xff,0x33,0x98,0xcb,0xff,0x33,0x66,0x98,0xff,0x30,0x30,0x30,0xff,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0x50,0x50,0x50,0xff,0x80,0x80,0x80,0xff,0xa8,0xa8,0xa8,0xff,0xb0,0xb0,0xb0,0xff,0xa8,0xa8,0xa8,0xff,0x90,0x90,0x90,0xff,0x68,0x68,0x68,0xff,0x48,0x48,0x48,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,
	0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x60,0x60,0x60,0xff,0x38,0x38,0x38,0xff,0x20,0x20,0x20,0xff,0x50,0x50,0x50,0xff,0x66,0x98,0xcb,0xff,0x66,0x98,0xcb,0xff,0x33,0x98,0xcb,0xff,0x66,0xcb,0xcb,0xff,0x33,0x98,0x98,0xff,0x33,0x66,0x98,0xff,0x20,0x20,0x20,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x66,0x33,0xff,0x50,0x50,0x50,0xff,0x68,0x68,0x68,0xff,0x80,0x80,0x80,0xff,0x80,0x80,0x80,0xff,0x68,0x68,0x68,0xff,0x50,0x50,0x50,0xff,0x48,0x48,0x48,0xff,0x00,0x98,0x33,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x18,0x18,0x18,0xff,0x33,0x66,0x98,0xff,0x66,0x98,0xcb,0xff,0x33,0x98,0x98,0xff,0x33,0x66,0x98,0xff,0x20,0x20,0x20,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0x00,0x66,0x33,0xff,0x50,0x50,0x50,0xff,0x68,0x68,0x68,0xff,0x50,0x50,0x50,0xff,0x38,0x38,0x38,0xff,0x30,0x30,0x30,0xff,0x00,0x66,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0xcb,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x66,0x33,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,
	0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x38,0x38,0x38,0xff,0x28,0x28,0x28,0xff,0x33,0x66,0x66,0xff,0x20,0x20,0x20,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x66,0x33,0xff,0x00,0xcb,0x33,0xff,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0x00,0x98,0x33,0xff,0x00,0xcb,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x60,0x60,0x60,0xff,0x40,0x40,0x40,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x66,0x33,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x50,0x00,0xff,0x00,0x50,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00
};

