/*
*********************************************************************************************************
*
*    模块名称 : ASCII点阵字库。
*    文件名称 : asc24.c
*    版    本 : V1.0
*    说    明 : 只包含本程序用到汉字字库
*    修改记录 :
*        版本号  日期       作者    说明
*        v1.0    2015-04-05 armfly  ST固件库V3.5.0版本。
*
*    Copyright (C), 2015-2016, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/

#include "fonts.h"

/*
    FLASH中内嵌小字库，只包括本程序用到的汉字点阵
    每行点阵数据，头2字节是汉子的内码，后面字节是点阵汉字的字模数据。
*/
#ifdef USE_SMALL_FONT

unsigned char const g_Hz24[] = {
0xB1,0xBE, 0x00,0x10,0x00,0x00,0x1C,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,// 本 //
           0x18,0x0C,0x7F,0xFF,0xFE,0x00,0x7A,0x00,0x00,0xDA,0x00,0x00,0xD9,0x00,0x01,0x99,
           0x80,0x01,0x98,0x80,0x03,0x18,0xC0,0x06,0x18,0x60,0x0C,0x18,0x30,0x18,0x19,0xB8,
           0x33,0xFF,0xDC,0x60,0x18,0x0F,0x80,0x18,0x04,0x00,0x18,0x00,0x00,0x18,0x00,0x00,
           0x18,0x00,0x00,0x18,0x00,0x00,0x10,0x00,

0xB2,0xA8, 0x00,0x02,0x00,0x30,0x03,0x80,0x18,0x03,0x00,0x0C,0x03,0x00,0x08,0x83,0x0C,0x00,// 波 //
           0xFF,0xFE,0x00,0xC3,0x0C,0x60,0xC3,0x18,0x32,0xC3,0x10,0x1A,0xC3,0x00,0x12,0xC3,
           0x10,0x04,0xFF,0xF8,0x04,0xC8,0x30,0x08,0xC8,0x30,0x18,0xC4,0x60,0x78,0xC4,0x60,
           0x18,0xC2,0xC0,0x18,0xC3,0x80,0x19,0x83,0x80,0x19,0x86,0xC0,0x1B,0x0C,0x70,0x0A,
           0x18,0x3E,0x0C,0x60,0x18,0x01,0x80,0x00,

0xB2,0xCE, 0x00,0x20,0x00,0x00,0x38,0x00,0x00,0x63,0x00,0x00,0xC0,0xC0,0x03,0x00,0x60,0x0F,// 参 //
           0xFF,0xF0,0x07,0x90,0x20,0x00,0x18,0x00,0x00,0x30,0x0C,0x7F,0xFF,0xFE,0x00,0xC1,
           0x00,0x01,0x88,0x80,0x03,0x1C,0xC0,0x06,0x30,0x70,0x0C,0x62,0x3E,0x11,0x87,0x18,
           0x66,0x0C,0x00,0x08,0x30,0x60,0x00,0xC0,0xF0,0x03,0x03,0x80,0x0C,0x0E,0x00,0x00,
           0x38,0x00,0x01,0xC0,0x00,0x1E,0x00,0x00,

0xB2,0xE2, 0x00,0x00,0x00,0x30,0x00,0x08,0x19,0x06,0x0E,0x0D,0xFF,0x0C,0x09,0x06,0x4C,0x01,// 测 //
           0x26,0x6C,0xC1,0x36,0x6C,0x61,0x26,0x6C,0x35,0x26,0x6C,0x25,0x26,0x6C,0x05,0x26,
           0x6C,0x09,0x26,0x6C,0x09,0x26,0x6C,0x11,0x26,0x6C,0x31,0x26,0x6C,0xF1,0x26,0x6C,
           0x31,0x26,0x6C,0x31,0x24,0x4C,0x30,0x60,0x0C,0x30,0xDC,0x0C,0x30,0x86,0x0C,0x31,
           0x03,0x7C,0x12,0x01,0x18,0x04,0x00,0x10,

0xB3,0xFD, 0x00,0x02,0x00,0x21,0x83,0x80,0x3F,0xC7,0x00,0x31,0x86,0x80,0x31,0x0C,0x40,0x33,// 除 //
           0x18,0x60,0x32,0x30,0x38,0x32,0x20,0x1F,0x34,0x40,0x6C,0x32,0xBF,0xF0,0x31,0x03,
           0x00,0x31,0x83,0x00,0x31,0x83,0x0C,0x31,0xFF,0xFE,0x31,0x83,0x00,0x3F,0xA3,0x40,
           0x33,0x3B,0x20,0x32,0x33,0x30,0x30,0x63,0x18,0x30,0xC3,0x0C,0x31,0x83,0x0E,0x32,
           0x1F,0x06,0x34,0x06,0x04,0x20,0x04,0x00,

0xB5,0xC0, 0x00,0x40,0x80,0x00,0x20,0xE0,0x30,0x30,0xC0,0x18,0x19,0x80,0x0C,0x11,0x18,0x0D,// 道 //
           0xFF,0xFC,0x08,0x06,0x00,0x00,0x4C,0x30,0x00,0x7F,0xF8,0x0C,0x60,0x30,0x7E,0x60,
           0x30,0x0C,0x7F,0xF0,0x0C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x7F,0xF0,0x0C,0x60,0x30,
           0x0C,0x60,0x30,0x0C,0x7F,0xF0,0x0C,0x60,0x30,0x0C,0x40,0x20,0x1B,0x00,0x00,0x71,
           0xFF,0xFF,0x20,0x7F,0xFC,0x00,0x00,0x00,

0xB5,0xE7, 0x00,0x20,0x00,0x00,0x38,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x10,0x30,0x60,0x1F,// 电 //
           0xFF,0xF0,0x18,0x30,0x60,0x18,0x30,0x60,0x18,0x30,0x60,0x18,0x30,0x60,0x1F,0xFF,
           0xE0,0x18,0x30,0x60,0x18,0x30,0x60,0x18,0x30,0x60,0x18,0x30,0x60,0x1F,0xFF,0xE0,
           0x18,0x30,0x40,0x10,0x30,0x04,0x00,0x30,0x04,0x00,0x30,0x04,0x00,0x30,0x06,0x00,
           0x3F,0xFE,0x00,0x1F,0xFC,0x00,0x00,0x00,

0xB7,0xD6, 0x00,0x02,0x00,0x01,0x03,0x80,0x01,0xC3,0x00,0x01,0x81,0x00,0x03,0x01,0x80,0x03,// 分 //
           0x00,0x80,0x06,0x00,0xC0,0x06,0x00,0x40,0x0C,0x00,0x60,0x18,0x01,0xB8,0x37,0xFF,
           0xDE,0x20,0x61,0x88,0x40,0x61,0x80,0x80,0x61,0x80,0x00,0x41,0x80,0x00,0xC1,0x80,
           0x00,0xC1,0x80,0x01,0x81,0x80,0x03,0x01,0x80,0x06,0x01,0x80,0x0C,0x03,0x80,0x18,
           0x3F,0x00,0x60,0x0E,0x00,0x00,0x04,0x00,

0xB8,0xBA, 0x00,0x80,0x00,0x00,0xE0,0x00,0x01,0x81,0x80,0x03,0xFF,0xC0,0x03,0x03,0x00,0x06,// 负 //
           0x06,0x00,0x0C,0x0C,0x00,0x1C,0x10,0x60,0x37,0xFF,0xF0,0x46,0x00,0x60,0x06,0x10,
           0x60,0x06,0x1C,0x60,0x06,0x18,0x60,0x06,0x18,0x60,0x06,0x18,0x60,0x06,0x18,0x60,
           0x06,0x30,0x60,0x06,0x30,0x40,0x04,0x67,0x00,0x00,0xC1,0xC0,0x01,0x80,0x70,0x06,
           0x00,0x3C,0x18,0x00,0x0C,0x60,0x00,0x04,

0xB9,0xCC, 0x00,0x00,0x00,0x10,0x00,0x18,0x1F,0xFF,0xFC,0x18,0x10,0x18,0x18,0x1C,0x18,0x18,// 固 //
           0x18,0x18,0x18,0x19,0x98,0x1B,0xFF,0xD8,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x19,
           0x98,0x19,0xFF,0xD8,0x19,0x81,0x98,0x19,0x81,0x98,0x19,0x81,0x98,0x19,0x81,0x98,
           0x19,0xFF,0x98,0x19,0x81,0x98,0x19,0x01,0x18,0x18,0x00,0x18,0x1F,0xFF,0xF8,0x18,
           0x00,0x18,0x18,0x00,0x18,0x10,0x00,0x10,

0xBB,0xF9, 0x01,0xC1,0xC0,0x01,0x81,0x80,0x01,0x81,0x98,0x3F,0xFF,0xFC,0x01,0x81,0x80,0x01,// 基 //
           0x81,0x80,0x01,0xFF,0x80,0x01,0x81,0x80,0x01,0x81,0x80,0x01,0xFF,0x80,0x01,0x81,
           0x80,0x01,0x81,0x8C,0x7F,0xFF,0xFE,0x01,0x91,0x00,0x03,0x1C,0x80,0x06,0x18,0x60,
           0x0C,0x19,0x38,0x31,0xFF,0x9F,0xC0,0x18,0x0C,0x00,0x18,0x00,0x00,0x18,0x30,0x1F,
           0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,

0xBB,0xFA, 0x04,0x00,0x00,0x07,0x00,0x00,0x06,0x08,0x60,0x06,0x0F,0xF0,0x06,0x0C,0x60,0x06,// 机 //
           0xCC,0x60,0x7F,0xEC,0x60,0x06,0x0C,0x60,0x06,0x0C,0x60,0x0E,0x0C,0x60,0x0F,0x0C,
           0x60,0x1E,0x8C,0x60,0x16,0xCC,0x60,0x36,0x4C,0x60,0x66,0x0C,0x64,0x46,0x0C,0x64,
           0x86,0x18,0x64,0x06,0x18,0x64,0x06,0x18,0x64,0x06,0x30,0x66,0x06,0x20,0x7E,0x06,
           0x40,0x3C,0x06,0x80,0x00,0x04,0x00,0x00,

0xBC,0xAD, 0x08,0x00,0x00,0x0E,0x10,0x30,0x0C,0x1F,0xF8,0x0C,0x18,0x30,0x19,0x98,0x30,0xFF,// 辑 //
           0xD8,0x30,0x18,0x1F,0xF0,0x10,0x10,0x20,0x36,0x00,0x0C,0x26,0x7F,0xFE,0x26,0x98,
           0x30,0x7F,0xD8,0x30,0x26,0x1F,0xF0,0x06,0x18,0x30,0x06,0x18,0x30,0x07,0x9F,0xF0,
           0x1E,0x18,0x34,0xF6,0x18,0x3E,0x46,0x1F,0xF0,0x06,0xF8,0x30,0x06,0x00,0x30,0x06,
           0x00,0x30,0x06,0x00,0x30,0x04,0x00,0x20,

0xBC,0xB6, 0x04,0x00,0x00,0x07,0x00,0x00,0x06,0x00,0x30,0x0C,0x7F,0xF8,0x08,0x18,0x30,0x19,// 级 //
           0x18,0x60,0x11,0xD8,0x60,0x21,0x98,0xC0,0x7F,0x18,0xC8,0x23,0x1D,0xFC,0x06,0x1C,
           0x98,0x04,0x1A,0x18,0x08,0x1A,0x18,0x10,0x1A,0x30,0x7F,0x99,0x30,0x30,0x31,0xE0,
           0x00,0x30,0xE0,0x00,0x30,0xC0,0x07,0x61,0xE0,0x7C,0x43,0x30,0x20,0x86,0x38,0x03,
           0x18,0x1F,0x0C,0x60,0x0C,0x00,0x00,0x00,

0xBC,0xC7, 0x00,0x00,0x00,0x0C,0x00,0x00,0x06,0x00,0x18,0x07,0x3F,0xFC,0x03,0x00,0x18,0x02,// 记 //
           0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x06,0x00,0x18,0x7F,0x10,0x18,0x06,0x1F,
           0xF8,0x06,0x18,0x18,0x06,0x18,0x10,0x06,0x18,0x00,0x06,0x18,0x00,0x06,0x18,0x00,
           0x06,0x38,0x00,0x06,0x58,0x04,0x07,0x98,0x04,0x07,0x18,0x04,0x0E,0x18,0x06,0x04,
           0x1F,0xFE,0x00,0x0F,0xFC,0x00,0x00,0x00,

0xBC,0xFE, 0x02,0x01,0x00,0x03,0x81,0xC0,0x03,0x11,0x80,0x03,0x1D,0x80,0x07,0x19,0x80,0x06,// 件 //
           0x11,0x80,0x0E,0x31,0x8C,0x0F,0x3F,0xFE,0x1E,0x61,0x80,0x16,0x41,0x80,0x36,0x81,
           0x80,0x26,0x01,0x80,0x46,0x01,0x86,0x86,0xFF,0xFF,0x06,0x01,0x80,0x06,0x01,0x80,
           0x06,0x01,0x80,0x06,0x01,0x80,0x06,0x01,0x80,0x06,0x01,0x80,0x06,0x01,0x80,0x06,
           0x01,0x80,0x06,0x01,0x80,0x04,0x01,0x00,

0xC1,0xF7, 0x00,0x0C,0x00,0x30,0x06,0x00,0x18,0x03,0x00,0x0C,0x02,0x18,0x08,0xFF,0xFC,0x00,// 流 //
           0x0C,0x00,0x01,0x18,0x80,0x61,0x30,0x60,0x32,0x60,0x30,0x1A,0xFF,0xF8,0x12,0x60,
           0x18,0x04,0x00,0x08,0x04,0x44,0x40,0x08,0x77,0x70,0x18,0x66,0x60,0x78,0x66,0x60,
           0x18,0x66,0x60,0x18,0x66,0x64,0x18,0xC6,0x64,0x18,0xC6,0x64,0x19,0x86,0x66,0x19,
           0x06,0x7E,0x0A,0x04,0x3C,0x04,0x00,0x00,

0xC2,0xBC, 0x00,0x00,0x00,0x00,0x00,0xC0,0x0F,0xFF,0xE0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,// 录 //
           0x00,0xC0,0x07,0xFF,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xCC,0x7F,0xFF,
           0xFE,0x04,0x18,0x00,0x02,0x18,0x20,0x03,0x1C,0x70,0x01,0x9C,0xC0,0x01,0x1B,0x00,
           0x00,0x7A,0x00,0x01,0x99,0x00,0x0E,0x18,0xC0,0x78,0x18,0x70,0x30,0x18,0x3E,0x00,
           0xF8,0x18,0x00,0x30,0x00,0x00,0x20,0x00,

0xC2,0xDF, 0x00,0x00,0x00,0x00,0x80,0x0C,0x18,0xFF,0xFE,0x0C,0xCC,0xCC,0x06,0xCC,0xCC,0x06,// 逻 //
           0xCC,0xCC,0x04,0xCC,0xCC,0x00,0xFF,0xFC,0x00,0x88,0x08,0x0C,0x0E,0x00,0x7E,0x0C,
           0x18,0x0C,0x1F,0xFC,0x0C,0x30,0x18,0x0C,0x70,0x30,0x0C,0xCC,0x30,0x0D,0x06,0x60,
           0x0C,0x02,0xC0,0x0C,0x03,0x80,0x0C,0x1E,0x00,0x0C,0xF0,0x00,0x1B,0x00,0x00,0x71,
           0xFF,0xFF,0x20,0x7F,0xFC,0x00,0x00,0x00,

0xC6,0xF7, 0x00,0x00,0x00,0x10,0xC2,0x18,0x1F,0xE3,0xFC,0x18,0xC3,0x18,0x18,0xC3,0x18,0x18,// 器 //
           0xC3,0x18,0x1F,0xD3,0xF8,0x18,0x99,0x90,0x10,0x30,0xC0,0x00,0x60,0x8C,0x7F,0xFF,
           0xFE,0x01,0x82,0x00,0x03,0x01,0x80,0x06,0x00,0x60,0x0C,0x64,0x3E,0x3F,0xF7,0xF8,
           0xCC,0x66,0x30,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0F,0xE7,0xF0,0x0C,
           0x66,0x30,0x08,0x44,0x20,0x00,0x00,0x00,

0xC9,0xBE, 0x00,0x00,0x08,0x11,0x22,0x0E,0x1F,0xBF,0x0C,0x19,0x32,0x4C,0x19,0x32,0x6C,0x19,// 删 //
           0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,0x7F,0xFF,
           0xCC,0x19,0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,0x19,0x32,0x4C,
           0x19,0x32,0x4C,0x31,0x32,0x0C,0x31,0x62,0x0C,0x61,0x62,0x0C,0x4E,0x42,0x0C,0x84,
           0x9E,0x7C,0x01,0x04,0x18,0x00,0x00,0x10,

0xC9,0xE8, 0x00,0x00,0x00,0x18,0x10,0x60,0x0C,0x1F,0xF0,0x0E,0x18,0x60,0x06,0x18,0x60,0x04,// 设 //
           0x18,0x60,0x00,0x18,0x60,0x00,0x30,0x7C,0x0C,0x60,0x3E,0xFE,0x80,0x00,0x0C,0x00,
           0x30,0x0C,0x7F,0xF8,0x0C,0x10,0x60,0x0C,0x10,0x60,0x0C,0x08,0xC0,0x0C,0x08,0xC0,
           0x0C,0x0D,0x80,0x0C,0x87,0x00,0x0F,0x07,0x00,0x0E,0x0D,0x80,0x1C,0x18,0xE0,0x08,
           0x60,0x7E,0x01,0x80,0x18,0x06,0x00,0x00,

0xC9,0xFD, 0x00,0x01,0x00,0x00,0x21,0xC0,0x00,0x71,0x80,0x03,0xF9,0x80,0x3F,0x81,0x80,0x01,// 升 //
           0x81,0x80,0x01,0x81,0x80,0x01,0x81,0x80,0x01,0x81,0x80,0x01,0x81,0x80,0x01,0x81,
           0x8C,0x7F,0xFF,0xFE,0x01,0x81,0x80,0x01,0x81,0x80,0x03,0x01,0x80,0x03,0x01,0x80,
           0x03,0x01,0x80,0x06,0x01,0x80,0x06,0x01,0x80,0x0C,0x01,0x80,0x18,0x01,0x80,0x10,
           0x01,0x80,0x20,0x01,0x80,0x40,0x01,0x00,

0xCA,0xB1, 0x00,0x00,0x40,0x00,0x00,0x70,0x20,0xC0,0x60,0x3F,0xE0,0x60,0x30,0xC0,0x60,0x30,// 时 //
           0xC0,0x60,0x30,0xC0,0x6C,0x30,0xDF,0xFE,0x30,0xC0,0x60,0x30,0xC0,0x60,0x3F,0xCC,
           0x60,0x30,0xC6,0x60,0x30,0xC3,0x60,0x30,0xC2,0x60,0x30,0xC0,0x60,0x30,0xC0,0x60,
           0x30,0xC0,0x60,0x3F,0xC0,0x60,0x30,0xC0,0x60,0x30,0x80,0x60,0x20,0x00,0x60,0x00,
           0x03,0xE0,0x00,0x00,0xC0,0x00,0x00,0x80,

0xCA,0xBE, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x0F,0xFF,0xF0,0x00,0x00,0x00,0x00,// 示 //
           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x7F,0xFF,0xFE,0x00,0x18,
           0x00,0x00,0x18,0x00,0x02,0x19,0x00,0x03,0x98,0xC0,0x03,0x18,0x60,0x06,0x18,0x30,
           0x06,0x18,0x30,0x0C,0x18,0x18,0x18,0x18,0x1C,0x10,0x18,0x0C,0x20,0x18,0x08,0x40,
           0xF8,0x00,0x00,0x30,0x00,0x00,0x20,0x00,

0xCA,0xD4, 0x00,0x01,0x00,0x18,0x01,0xD8,0x0C,0x01,0x8C,0x0E,0x01,0x88,0x06,0x01,0x84,0x04,// 试 //
           0xFF,0xFE,0x00,0x01,0x80,0x00,0x01,0x80,0x0C,0x01,0x80,0xFE,0x09,0x80,0x0C,0xFD,
           0x80,0x0C,0x31,0x80,0x0C,0x30,0xC0,0x0C,0x30,0xC0,0x0C,0x30,0xC0,0x0C,0x30,0xC4,
           0x0C,0x30,0x64,0x0C,0xB0,0x64,0x0F,0x36,0x34,0x0E,0x38,0x34,0x1C,0xE0,0x1C,0x08,
           0x40,0x0E,0x00,0x00,0x06,0x00,0x00,0x00,

0xCA,0xFD, 0x02,0x01,0x00,0x23,0xA1,0xC0,0x13,0x39,0x80,0x1B,0x61,0x80,0x0B,0x43,0x00,0x03,// 数 //
           0x93,0x06,0x7F,0xFB,0xFF,0x07,0x03,0x18,0x0F,0xC6,0x18,0x1B,0x66,0x18,0x33,0x2A,
           0x18,0x42,0x12,0x18,0x03,0x02,0x18,0x06,0x22,0x18,0x7F,0xF1,0x30,0x0C,0x61,0x30,
           0x0C,0x61,0xE0,0x18,0xC0,0xE0,0x07,0x80,0xE0,0x03,0xC1,0xB0,0x06,0x63,0x1C,0x18,
           0x26,0x0F,0x60,0x0C,0x04,0x00,0x30,0x00,

0xCD,0xA8, 0x00,0x00,0x00,0x00,0x00,0x30,0x18,0xFF,0xF8,0x0C,0x00,0x60,0x06,0x06,0xC0,0x06,// 通 //
           0x03,0x80,0x04,0x41,0x18,0x00,0x7F,0xFC,0x00,0x63,0x18,0x0C,0x63,0x18,0x7E,0x63,
           0x18,0x0C,0x7F,0xF8,0x0C,0x63,0x18,0x0C,0x63,0x18,0x0C,0x63,0x18,0x0C,0x7F,0xF8,
           0x0C,0x63,0x18,0x0C,0x63,0x18,0x0C,0x63,0x78,0x0C,0x62,0x30,0x1A,0x40,0x20,0x71,
           0xFF,0xFF,0x20,0x7F,0xFC,0x00,0x00,0x00,

0xCD,0xB3, 0x04,0x06,0x00,0x07,0x03,0x00,0x06,0x01,0x80,0x0C,0x01,0x0C,0x08,0x7F,0xFE,0x19,// 统 //
           0x02,0x00,0x11,0xC7,0x00,0x21,0x8C,0x40,0x7F,0x18,0x30,0x23,0x20,0x18,0x06,0x7F,
           0xFC,0x04,0x30,0x08,0x08,0x08,0x80,0x10,0x0E,0xE0,0x7F,0x8C,0xC0,0x30,0x0C,0xC0,
           0x00,0x0C,0xC0,0x00,0x0C,0xC4,0x07,0x98,0xC4,0x7C,0x18,0xC4,0x20,0x30,0xC6,0x00,
           0x60,0xFE,0x00,0x80,0x7C,0x01,0x00,0x00,

0xCD,0xD1, 0x00,0x00,0x10,0x11,0x88,0x1C,0x1F,0xC4,0x18,0x19,0x86,0x30,0x19,0x83,0x20,0x19,// 脱 //
           0x82,0x40,0x19,0x90,0x98,0x19,0x9F,0xFC,0x1F,0x98,0x18,0x19,0x98,0x18,0x19,0x98,
           0x18,0x19,0x98,0x18,0x19,0x98,0x18,0x1F,0x9F,0xF8,0x19,0x96,0x60,0x19,0x86,0x60,
           0x19,0x86,0x60,0x31,0x86,0x64,0x31,0x8C,0x64,0x21,0x8C,0x64,0x6F,0x98,0x66,0x43,
           0x30,0x7E,0x82,0x40,0x3C,0x00,0x80,0x00,

0xCE,0xF6, 0x04,0x00,0x00,0x07,0x00,0x30,0x06,0x11,0xF8,0x06,0x1F,0x80,0x06,0x18,0x00,0x06,// 析 //
           0x58,0x00,0x7F,0xF8,0x00,0x06,0x18,0x00,0x06,0x18,0x0C,0x0E,0x1F,0xFE,0x0F,0x18,
           0x60,0x1E,0x98,0x60,0x16,0xD8,0x60,0x36,0x58,0x60,0x66,0x18,0x60,0x46,0x18,0x60,
           0x86,0x18,0x60,0x06,0x30,0x60,0x06,0x30,0x60,0x06,0x60,0x60,0x06,0x40,0x60,0x06,
           0x80,0x60,0x07,0x00,0x60,0x04,0x00,0x40,

0xCF,0xB5, 0x00,0x00,0x20,0x00,0x07,0xF0,0x00,0x7F,0xF8,0x3F,0xF0,0x00,0x00,0x20,0x00,0x00,// 系 //
           0x70,0x80,0x00,0xC1,0xE0,0x01,0x03,0x80,0x0F,0xFE,0x00,0x06,0x18,0x00,0x00,0x63,
           0x00,0x01,0x80,0xC0,0x06,0x00,0x70,0x3F,0xFF,0xF8,0x1C,0x18,0x1C,0x01,0x18,0x08,
           0x03,0xDB,0x80,0x03,0x18,0xE0,0x06,0x18,0x38,0x0C,0x18,0x1C,0x18,0x18,0x0C,0x20,
           0xF8,0x08,0x40,0x30,0x00,0x00,0x20,0x00,

0xCF,0xC2, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x7F,0xFF,0xFE,0x00,0x30,0x00,0x00,// 下 //
           0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x37,0x00,0x00,0x31,
           0xC0,0x00,0x30,0xF0,0x00,0x30,0x30,0x00,0x30,0x10,0x00,0x30,0x00,0x00,0x30,0x00,
           0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,
           0x30,0x00,0x00,0x30,0x00,0x00,0x20,0x00,

0xD2,0xC7, 0x04,0x00,0x00,0x07,0x08,0x00,0x06,0x0C,0x20,0x06,0x46,0x38,0x0E,0x47,0x30,0x0C,// 仪 //
           0x43,0x30,0x0C,0x22,0x30,0x18,0x20,0x60,0x1E,0x20,0x60,0x3C,0x10,0x60,0x2C,0x10,
           0xC0,0x4C,0x18,0xC0,0x8C,0x08,0xC0,0x0C,0x0D,0x80,0x0C,0x05,0x80,0x0C,0x07,0x00,
           0x0C,0x07,0x00,0x0C,0x0D,0x80,0x0C,0x18,0xC0,0x0C,0x30,0x60,0x0C,0x60,0x38,0x0C,
           0x80,0x1F,0x0D,0x00,0x0C,0x08,0x00,0x00,

0xD4,0xD8, 0x01,0x02,0x00,0x01,0xC3,0x80,0x01,0x83,0x20,0x01,0x93,0x30,0x1F,0xFB,0x18,0x01,// 载 //
           0x83,0x10,0x01,0x83,0x04,0x7F,0xFF,0xFE,0x04,0x03,0x00,0x07,0x03,0x10,0x06,0x33,
           0x1C,0x3F,0xFB,0x18,0x0C,0x03,0x18,0x09,0x81,0xB0,0x19,0x91,0xB0,0x3F,0xF9,0xE0,
           0x11,0x80,0xC4,0x01,0x81,0xC4,0x01,0xFB,0x64,0x7F,0x86,0x64,0x39,0x88,0x34,0x01,
           0x90,0x1C,0x01,0x80,0x0E,0x01,0x00,0x06,

0xD6,0xC3, 0x08,0x00,0x30,0x0F,0xFF,0xF8,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0F,// 置 //
           0xFF,0xF0,0x08,0x18,0x20,0x00,0x18,0x0C,0x7F,0xFF,0xFE,0x00,0x30,0x00,0x02,0x30,
           0xC0,0x03,0xFF,0xE0,0x03,0x00,0xC0,0x03,0x00,0xC0,0x03,0xFF,0xC0,0x03,0x00,0xC0,
           0x03,0xFF,0xC0,0x03,0x00,0xC0,0x03,0xFF,0xC0,0x03,0x00,0xC0,0x03,0x00,0xCC,0x7F,
           0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,

0xD6,0xD3, 0x08,0x01,0x00,0x0E,0x01,0xC0,0x0C,0x01,0x80,0x0C,0x01,0x80,0x19,0x01,0x80,0x1F,// 钟 //
           0x81,0x80,0x18,0x21,0x8C,0x30,0x3F,0xFE,0x22,0x31,0x8C,0x7F,0x31,0x8C,0x4C,0x31,
           0x8C,0x8C,0x31,0x8C,0x0D,0x31,0x8C,0x7F,0xB1,0x8C,0x0C,0x3F,0xFC,0x0C,0x31,0x8C,
           0x0C,0x21,0x88,0x0C,0x01,0x80,0x0C,0x81,0x80,0x0F,0x01,0x80,0x0E,0x01,0x80,0x1C,
           0x01,0x80,0x08,0x01,0x80,0x00,0x01,0x00,

0xD7,0xE8, 0x00,0x00,0x00,0x21,0x90,0x30,0x3F,0xDF,0xF8,0x31,0x98,0x30,0x31,0x18,0x30,0x33,// 阻 //
           0x18,0x30,0x32,0x18,0x30,0x32,0x18,0x30,0x34,0x1F,0xF0,0x32,0x18,0x30,0x31,0x18,
           0x30,0x31,0x98,0x30,0x31,0x98,0x30,0x31,0x98,0x30,0x31,0x9F,0xF0,0x3F,0x98,0x30,
           0x33,0x18,0x30,0x32,0x18,0x30,0x30,0x18,0x30,0x30,0x18,0x30,0x30,0x18,0x34,0x30,
           0xFF,0xFE,0x30,0x00,0x00,0x20,0x00,0x00,

0xCF,0xA2, 0x00,0x38,0x00,0x00,0x30,0x00,0x04,0x20,0x60,0x07,0xFF,0xF0,0x06,0x00,0x60,0x06,// 息 //
           0x00,0x60,0x07,0xFF,0xE0,0x06,0x00,0x60,0x06,0x00,0x60,0x07,0xFF,0xE0,0x06,0x00,
           0x60,0x06,0x00,0x60,0x06,0x00,0x60,0x07,0xFF,0xE0,0x06,0x00,0x60,0x00,0x30,0x00,
           0x02,0x18,0x20,0x13,0x8C,0x98,0x13,0x08,0x8C,0x33,0x00,0x8E,0x73,0x00,0xC6,0x63,
           0xFF,0xC4,0x01,0xFF,0x80,0x00,0x00,0x00,

0xD0,0xC5, 0x04,0x0C,0x00,0x07,0x06,0x00,0x06,0x03,0x00,0x06,0x02,0x0C,0x0E,0xFF,0xFE,0x0C,// 信 //
           0x00,0x00,0x0C,0x00,0x00,0x18,0x00,0x30,0x1E,0x7F,0xF8,0x3C,0x00,0x00,0x2C,0x00,
           0x30,0x4C,0x7F,0xF8,0x8C,0x00,0x00,0x0C,0x00,0x00,0x0C,0x40,0x30,0x0C,0x7F,0xF8,
           0x0C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x7F,0xF0,0x0C,
           0x60,0x30,0x0C,0x60,0x30,0x08,0x40,0x20,

0xD3,0xB2, 0x00,0x00,0x00,0x00,0x00,0x0C,0x01,0xBF,0xFE,0x7F,0xC1,0x80,0x0C,0x01,0x80,0x0C,// 硬 //
           0x11,0x98,0x0C,0x1F,0xFC,0x18,0x19,0x98,0x19,0x99,0x98,0x1F,0xDF,0xF8,0x39,0x99,
           0x98,0x39,0x99,0x98,0x59,0x99,0x98,0x59,0x9F,0xF8,0x99,0x91,0x90,0x19,0xA1,0x80,
           0x19,0x91,0x80,0x19,0x8B,0x00,0x1F,0x87,0x00,0x19,0x87,0x80,0x19,0x0D,0xE0,0x10,
           0x18,0x7E,0x00,0x60,0x18,0x01,0x80,0x00,

0xC4,0xA3, 0x08,0x08,0x40,0x0E,0x0E,0x70,0x0C,0x0C,0x60,0x0C,0x0C,0x6C,0x0C,0xFF,0xFE,0x0D,// 模 //
           0x0C,0x60,0x7F,0x88,0x40,0x0C,0x20,0x18,0x0C,0x3F,0xFC,0x1C,0x30,0x18,0x1E,0x30,
           0x18,0x3D,0x3F,0xF8,0x2D,0xB0,0x18,0x2C,0xB0,0x18,0x4C,0x3F,0xF8,0x4C,0x23,0x10,
           0x8C,0x03,0x04,0x0C,0xFF,0xFE,0x0C,0x06,0x80,0x0C,0x06,0x40,0x0C,0x0C,0x60,0x0C,
           0x18,0x38,0x0C,0x60,0x1E,0x09,0x80,0x08,

0xC5,0xCC, 0x00,0x38,0x00,0x00,0x30,0x00,0x02,0x20,0xC0,0x03,0xFF,0xE0,0x03,0x00,0xC0,0x03,// 盘 //
           0x18,0xC0,0x03,0x0C,0xC0,0x03,0x08,0xCC,0x7F,0xFF,0xFE,0x03,0x00,0xC0,0x03,0x30,
           0xC0,0x06,0x18,0xC0,0x06,0x10,0xC0,0x0C,0x07,0xC0,0x18,0x01,0x80,0x28,0x00,0x30,
           0x4F,0xFF,0xF8,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0C,0x66,0x30,0x0C,
           0x66,0x34,0x7F,0xFF,0xFE,0x00,0x00,0x00,

0xCA,0xBD, 0x00,0x04,0x00,0x00,0x07,0x40,0x00,0x06,0x60,0x00,0x06,0x30,0x00,0x06,0x20,0x00,// 式 //
           0x06,0x0C,0x7F,0xFF,0xFE,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x66,
           0x00,0x3F,0xF3,0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x03,0x01,0x80,
           0x03,0x01,0x84,0x03,0x1C,0xC4,0x03,0xE0,0xC4,0x7F,0x00,0x64,0x38,0x00,0x34,0x20,
           0x00,0x1C,0x00,0x00,0x0E,0x00,0x00,0x06,

0xB4,0xAE, 0x00,0x10,0x00,0x00,0x1C,0x00,0x00,0x18,0x00,0x08,0x18,0x30,0x0F,0xFF,0xF8,0x0C,// 串 //
           0x18,0x30,0x0C,0x18,0x30,0x0C,0x18,0x30,0x0F,0xFF,0xF0,0x08,0x18,0x20,0x00,0x18,
           0x00,0x10,0x18,0x18,0x1F,0xFF,0xFC,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
           0x18,0x18,0x18,0x1F,0xFF,0xF8,0x18,0x18,0x18,0x10,0x18,0x10,0x00,0x18,0x00,0x00,
           0x18,0x00,0x00,0x18,0x00,0x00,0x10,0x00,

0xBF,0xDA, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x30,0x0F,// 口 //
           0xFF,0xF8,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,
           0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,
           0x0C,0x00,0x30,0x0C,0x00,0x30,0x0F,0xFF,0xF0,0x0C,0x00,0x30,0x0C,0x00,0x30,0x08,
           0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,

0xD7,0xAA, 0x04,0x01,0x00,0x07,0x01,0xC0,0x06,0x01,0x80,0x06,0x01,0x80,0x0C,0xC1,0x98,0x7F,// 转 //
           0xFF,0xFC,0x0C,0x03,0x00,0x1A,0x03,0x00,0x1B,0x83,0x00,0x13,0x03,0x0C,0x33,0x5F,
           0xFE,0x7F,0xE6,0x00,0x23,0x06,0x00,0x03,0x06,0x18,0x03,0x0F,0xFC,0x03,0xE4,0x30,
           0x0F,0x00,0x60,0x7B,0x08,0x40,0x23,0x06,0x80,0x03,0x03,0x80,0x03,0x01,0xC0,0x03,
           0x00,0x60,0x03,0x00,0x30,0x02,0x00,0x20,

0xB1,0xED, 0x00,0x10,0x00,0x00,0x1C,0x00,0x00,0x18,0x00,0x00,0x18,0x30,0x1F,0xFF,0xF8,0x00,// 表 //
           0x18,0x00,0x00,0x18,0x00,0x00,0x18,0x60,0x0F,0xFF,0xF0,0x00,0x18,0x00,0x00,0x18,
           0x00,0x00,0x18,0x0C,0x7F,0xFF,0xFE,0x00,0x38,0x00,0x00,0x64,0x20,0x00,0xC4,0x70,
           0x01,0xC2,0xC0,0x06,0xC3,0x00,0x0C,0xC1,0x80,0x30,0xC4,0xC0,0x40,0xD8,0x70,0x00,
           0xE0,0x3E,0x01,0xC0,0x18,0x00,0x80,0x00,

0xB2,0xE0, 0x08,0x00,0x08,0x0E,0x00,0x0E,0x0D,0x06,0x0C,0x0D,0xFF,0x4C,0x19,0x06,0x6C,0x19,// 侧 //
           0x26,0x4C,0x19,0x36,0x4C,0x1D,0x26,0x4C,0x39,0x26,0x4C,0x39,0x26,0x4C,0x59,0x26,
           0x4C,0x59,0x26,0x4C,0x99,0x26,0x4C,0x19,0x26,0x4C,0x19,0x26,0x4C,0x19,0x26,0x4C,
           0x19,0x26,0x4C,0x19,0x24,0x4C,0x18,0x68,0x0C,0x18,0x44,0x0C,0x18,0x86,0x0C,0x18,
           0x83,0x7C,0x19,0x01,0x18,0x12,0x00,0x10,

0xB8,0xDF, 0x00,0x30,0x00,0x00,0x18,0x00,0x00,0x10,0x0C,0x7F,0xFF,0xFE,0x00,0x00,0x00,0x02,// 高 //
           0x01,0x80,0x03,0xFF,0xC0,0x03,0x01,0x80,0x03,0x01,0x80,0x03,0xFF,0x80,0x02,0x01,
           0x00,0x20,0x00,0x18,0x3F,0xFF,0xFC,0x30,0x00,0x18,0x31,0x03,0x18,0x31,0xFF,0x98,
           0x31,0x83,0x18,0x31,0x83,0x18,0x31,0xFF,0x18,0x31,0x82,0x18,0x31,0x00,0x18,0x30,
           0x00,0xF8,0x30,0x00,0x30,0x20,0x00,0x20,

0xC1,0xAA, 0x00,0x00,0x00,0x00,0x28,0x10,0x7F,0xF4,0x1C,0x18,0xC6,0x30,0x18,0xC3,0x20,0x18,// 联 //
           0xC2,0x40,0x18,0xC0,0x98,0x1F,0xDF,0xFC,0x18,0xC1,0x80,0x18,0xC1,0x80,0x18,0xC1,
           0x80,0x18,0xC1,0x8C,0x1F,0xFF,0xFE,0x18,0xC1,0x80,0x18,0xC3,0x40,0x18,0xC3,0x40,
           0x18,0xF3,0x60,0x1F,0xC6,0x20,0xF8,0xC6,0x30,0x60,0xCC,0x10,0x00,0xC8,0x18,0x00,
           0xD0,0x0E,0x00,0xE0,0x08,0x00,0x80,0x00,

0xC1,0xBF, 0x04,0x00,0x60,0x07,0xFF,0xF0,0x06,0x00,0x60,0x07,0xFF,0xE0,0x06,0x00,0x60,0x06,// 量 //
           0x00,0x60,0x07,0xFF,0xE0,0x00,0x00,0x0C,0x7F,0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,
           0xE0,0x06,0x18,0x60,0x06,0x18,0x60,0x07,0xFF,0xE0,0x06,0x18,0x60,0x06,0x18,0x60,
           0x07,0xFF,0xE0,0x04,0x18,0x40,0x00,0x18,0x10,0x1F,0xFF,0xF8,0x00,0x18,0x00,0x00,
           0x18,0x0C,0x7F,0xFF,0xFE,0x00,0x00,0x00,

0xC9,0xD5, 0x08,0x08,0x00,0x0E,0x0E,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x18,0x0C,0x0F,0xFC,0x0C,// 烧 //
           0x3E,0x00,0x0C,0x86,0x20,0x2D,0xC6,0x70,0x2E,0x03,0xC4,0x2C,0x03,0x84,0x6C,0x0C,
           0xF4,0x6C,0x70,0x3E,0x4C,0x00,0x06,0x0C,0x00,0x30,0x0C,0xFF,0xF8,0x0C,0x19,0x80,
           0x1A,0x19,0x80,0x1B,0x19,0x84,0x11,0xB1,0x84,0x31,0x31,0x84,0x20,0x61,0x86,0x40,
           0xC1,0xFE,0x83,0x00,0xFC,0x0C,0x00,0x00,

0xB6,0xC8, 0x00,0x18,0x00,0x00,0x0C,0x00,0x10,0x08,0x0C,0x1F,0xFF,0xFE,0x18,0x41,0x00,0x18,// 度 //
           0x71,0xC0,0x18,0x61,0x80,0x18,0x61,0x98,0x1F,0xFF,0xFC,0x18,0x61,0x80,0x18,0x61,
           0x80,0x18,0x61,0x80,0x18,0x7F,0x80,0x18,0x41,0x00,0x18,0x00,0x60,0x19,0xFF,0xF0,
           0x18,0x40,0xC0,0x18,0x21,0x80,0x30,0x13,0x00,0x30,0x0E,0x00,0x20,0x1E,0x00,0x60,
           0x33,0xC0,0x41,0xC0,0xFE,0x8E,0x00,0x30,

0xCE,0xC2, 0x00,0x00,0x00,0x18,0x20,0x30,0x0C,0x3F,0xF8,0x06,0x30,0x30,0x04,0xB0,0x30,0x00,// 温 //
           0xB0,0x30,0x01,0x3F,0xF0,0x61,0x30,0x30,0x31,0x30,0x30,0x1A,0x30,0x30,0x12,0x3F,
           0xF0,0x02,0x30,0x30,0x04,0x00,0x00,0x04,0x40,0x18,0x0C,0x7F,0xFC,0x7C,0x64,0x98,
           0x0C,0x64,0x98,0x0C,0x64,0x98,0x0C,0x64,0x98,0x0C,0x64,0x98,0x0C,0x64,0x9A,0x0D,
           0xFF,0xFF,0x04,0x00,0x00,0x00,0x00,0x00,

0xD1,0xB9, 0x00,0x00,0x00,0x08,0x00,0x18,0x0F,0xFF,0xFC,0x0C,0x00,0x00,0x0C,0x08,0x00,0x0C,// 压 //
           0x0E,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x30,0x0D,0xFF,
           0xF8,0x0C,0x0C,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0xC0,0x0C,0x0C,0x60,0x0C,0x0C,0x70,
           0x0C,0x0C,0x30,0x0C,0x0C,0x20,0x18,0x0C,0x00,0x18,0x0C,0x0C,0x37,0xFF,0xFE,0x20,
           0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,

0xA1,0xE6, 0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x0F,0xC4,0x24,0x30,0x34,0x24,0x60,0x1C,0x18,// ℃ //
           0xC0,0x0C,0x00,0xC0,0x04,0x01,0x80,0x04,0x01,0x80,0x04,0x01,0x80,0x00,0x01,0x80,
           0x00,0x01,0x80,0x00,0x01,0x80,0x00,0x01,0x80,0x00,0x01,0x80,0x00,0x01,0x80,0x00,
           0x01,0x80,0x00,0x00,0xC0,0x04,0x00,0xC0,0x04,0x00,0x60,0x08,0x00,0x30,0x10,0x00,
           0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,

0xA6,0xB8, 0x00,0x00,0x00,0x00,0x7E,0x00,0x01,0x81,0x80,0x06,0x00,0x60,0x06,0x00,0x30,0x0C,// Ω //
           0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,0x30,0x0C,0x00,
           0x30,0x06,0x00,0x60,0x06,0x00,0x60,0x01,0x81,0x80,0x00,0xE7,0x00,0x00,0x24,0x00,
           0x04,0x24,0x20,0x07,0xE7,0xE0,0x07,0xE7,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0xD6,0xB5, 0x04,0x04,0x00,0x07,0x07,0x00,0x06,0x06,0x00,0x06,0x06,0x18,0x0E,0xFF,0xFC,0x0C,// 值 //
           0x06,0x00,0x0C,0x06,0x00,0x18,0x46,0x30,0x1E,0x7F,0xF8,0x3C,0x60,0x30,0x2C,0x60,
           0x30,0x4C,0x7F,0xF0,0x8C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x7F,0xF0,0x0C,0x60,0x30,
           0x0C,0x60,0x30,0x0C,0x7F,0xF0,0x0C,0x60,0x30,0x0C,0x60,0x30,0x0C,0x60,0x34,0x0D,
           0xFF,0xFE,0x0C,0x00,0x00,0x08,0x00,0x00,


           
/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};
#else
    unsigned char const g_Hz24[] = {0xFF, 0xFF};
#endif

/***************************** 安富莱电子 www.armfly.com (END OF FILE) *********************************/

