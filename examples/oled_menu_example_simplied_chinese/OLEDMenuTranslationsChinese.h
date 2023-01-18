#ifndef OLED_MENU_TRANSLATIONS_H_
#define OLED_MENU_TRANSLATIONS_H_

#define OM_STATUS_CUSTOM_WIDTH 40
#define OM_STATUS_CUSTOM_HEIGHT 15
const unsigned char OM_STATUS_CUSTOM [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x22,0x10,0x4,0x80,
0xc0,0xff,0x21,0x2,0x0,0x0,0x22,0xf8,0xf,0xf8,0xf,0xe0,0x88,0x8,0x80,0xc0,
0x1f,0xf8,0xf,0x80,0x80,0x44,0x88,0x8,0x80,0x0,0x29,0xf8,0xf,0xf8,0xf,0x8,
0x80,0x0,0x80,0xc0,0xff,0xfd,0x1f,0x80,0x0,0x2a,0x80,0x0,0x80,0x0,0x49,0x80,
0x0,0xfc,0xdf,0x88,0x81,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define OM_STATUS_BAR_BACK_WIDTH 40
#define OM_STATUS_BAR_BACK_HEIGHT 15
const unsigned char OM_STATUS_BAR_BACK [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xc0,0x1,0x0,0x0,
0x0,0x3d,0xf8,0x1f,0x0,0x0,0x4,0x8,0x10,0x40,0x0,0xfc,0x9,0x10,0x30,0xc0,
0x5,0xc9,0x13,0xfc,0x1f,0x15,0x49,0x12,0x30,0x0,0xa5,0x48,0x12,0x40,0x0,0x45,
0xc8,0x13,0x0,0x0,0xa5,0x8,0x10,0x0,0x0,0x13,0x9,0x10,0x0,0x80,0x2,0xf8,
0x1f,0x0,0x40,0xfc,0x9,0x10,0x0,0x0,0x0,0x0,0x0,

};

#define OM_SCREEN_SAVER_WIDTH 76
#define OM_SCREEN_SAVER_HEIGHT 15
const unsigned char OM_SCREEN_SAVER [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x2,0x2,0x80,0x80,0x20,0x90,0x0,0xff,0x1,0x10,0x4,
0xc2,0xf8,0x8f,0xf1,0x90,0x80,0x0,0x0,0x90,0x1f,0x39,0x20,0x42,0xa6,0xd0,0x5f,
0xff,0x0,0xbc,0x10,0x21,0xfc,0x1f,0xfc,0xb5,0x0,0x81,0x0,0x10,0x82,0x21,0x10,
0xc4,0xa5,0x94,0x4,0xff,0x0,0x10,0x42,0x21,0xf0,0x87,0xf2,0x94,0x14,0x81,0x0,
0xb0,0x1f,0xfd,0x11,0x84,0x26,0x54,0xd,0xff,0x0,0x1c,0x9,0x21,0xf0,0xc7,0xfd,
0x50,0x5,0x2,0x0,0x10,0x9,0x21,0x80,0x80,0x24,0x50,0x4,0xff,0x0,0x10,0x6,
0x21,0x28,0x89,0xfe,0x51,0x8a,0x42,0x0,0x10,0x9,0x21,0x28,0x94,0x25,0x30,0x9,
0x3c,0x0,0xd8,0x10,0xf9,0xc4,0x97,0xfa,0x91,0x90,0xc3,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_SHORT_WIDTH 40
#define DEMO_SHORT_HEIGHT 15
const unsigned char DEMO_SHORT [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x4,0x80,0x0,0xc8,
0x1f,0x8,0x80,0x0,0x38,0xc0,0xff,0xfd,0x1f,0x94,0xf,0x41,0x80,0x0,0x90,0x8,
0x41,0xc0,0x1,0x90,0x8,0x22,0xa0,0x2,0xbc,0xf,0x22,0xa0,0x2,0x10,0x0,0x14,
0x90,0x4,0x90,0x8,0x8,0x88,0x8,0x28,0x5,0x14,0xf4,0x17,0x28,0x0,0x63,0x80,
0x0,0xc4,0xdf,0x80,0x81,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_LONG_WIDTH 172
#define DEMO_LONG_HEIGHT 15
const unsigned char DEMO_LONG [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x2,0x8,0x0,
0x8,0x8,0x0,0x0,0x21,0x0,0x2,0x20,0x10,0x2,0x2,0x0,0x50,0x40,0x41,0x0,
0x8,0x0,0x90,0x2,0x8,0x3c,0x8,0x14,0xf8,0xf,0x21,0xe4,0x9f,0x23,0x8,0x2,
0xc2,0xf4,0x91,0x40,0x80,0x0,0x8,0x0,0x80,0xf,0x8,0x24,0x8,0x22,0x20,0x2,
0x11,0x48,0x8,0x20,0x7c,0x1e,0x32,0x18,0x15,0xfc,0xfd,0xdf,0xff,0x1,0x40,0x82,
0xff,0xa4,0x1f,0x41,0x20,0xc2,0x8b,0x20,0x11,0xf0,0x45,0x11,0xe,0x50,0x15,0x40,
0x10,0x4,0x8,0x0,0x1c,0x82,0x88,0x24,0xc8,0xbe,0x21,0x82,0xfa,0x81,0xc4,0x27,
0xc5,0x10,0x2,0x50,0xd5,0x40,0x10,0x4,0x1c,0x0,0xd0,0x9f,0x88,0x3c,0x8,0x0,
0x20,0x82,0x2,0x45,0x8,0x21,0x45,0xd2,0xff,0x55,0x95,0x5c,0x20,0x2,0x2a,0x0,
0x10,0x85,0x88,0x24,0x9,0x0,0xfc,0x9f,0xfa,0xe8,0x9f,0x20,0x7d,0x14,0x12,0x58,
0x95,0x48,0x20,0x2,0x2a,0x0,0x10,0x85,0xff,0x24,0xca,0xff,0x21,0x42,0x8a,0x80,
0x92,0x22,0x45,0x14,0x12,0x50,0x95,0x48,0x40,0x1,0x49,0x0,0x90,0x94,0x88,0x24,
0xa,0x2,0x20,0x82,0x8a,0x40,0x4a,0x24,0x45,0x10,0x22,0x50,0x95,0x48,0x80,0x80,
0x88,0x0,0x50,0x18,0x8,0x3c,0x8,0x41,0x10,0x2,0x89,0x68,0xc4,0x17,0x45,0x10,
0x4a,0x48,0x90,0x58,0x41,0x41,0x7f,0x1,0x28,0x0,0x8,0x24,0x88,0xff,0x10,0x82,
0xfa,0x54,0x9,0x10,0x7d,0x10,0x86,0xa5,0x90,0x8d,0x31,0x6,0x8,0x0,0xc4,0x1f,
0x8,0x0,0xe,0x80,0x8,0x42,0x8a,0xc0,0x10,0xc8,0x44,0xc,0x2,0x10,0x99,0x0,
0xd,0x18,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_LONG_ALWAYS_SCROLL_WIDTH 232
#define DEMO_LONG_ALWAYS_SCROLL_HEIGHT 15
const unsigned char DEMO_LONG_ALWAYS_SCROLL [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x10,0xf0,0xc7,0xff,
0x9,0x2,0x8,0x0,0x0,0x0,0x80,0x0,0x1,0x40,0x0,0x20,0x0,0x2,0x21,0x20,
0x0,0x0,0x5,0x14,0x4,0x80,0x0,0xfc,0x9f,0xf7,0x11,0x4,0x8,0x90,0x2,0x8,
0x0,0x0,0x0,0xf8,0x1f,0xe9,0x41,0x40,0xfe,0x39,0x82,0x20,0x20,0x4c,0x1f,0x9,
0x4,0x8,0x80,0x0,0x0,0x41,0x4a,0xf0,0x7,0x6c,0x80,0xf,0x8,0x0,0x0,0x0,
0x80,0x80,0x2b,0xfd,0x9f,0x84,0x0,0xc2,0xe7,0x21,0x83,0x51,0xc1,0xdf,0xff,0xfd,
0x1f,0x0,0xc1,0xff,0x11,0x4,0x8b,0x40,0x82,0xff,0x0,0x0,0x0,0xf0,0xf,0x25,
0x21,0x0,0x12,0x1,0x5f,0x14,0xe1,0x0,0x55,0x1,0x4,0x41,0x80,0x0,0x80,0x40,
0x0,0xf1,0xc7,0x8,0x1d,0x82,0x88,0x0,0x0,0x0,0x10,0xc8,0xaf,0x20,0x2,0x48,
0x7c,0x52,0xc,0x21,0x0,0x55,0xd,0x4,0x41,0xc0,0x1,0xc0,0x2,0x7f,0x0,0x0,
0x8,0xd0,0x9f,0x88,0x0,0x0,0x0,0xf0,0xf,0xa1,0x10,0x42,0x84,0x10,0x52,0x24,
0xfd,0x5f,0x55,0xc9,0x5,0x22,0xa0,0x2,0xa0,0x4,0x41,0xfc,0x1f,0x0,0x10,0x85,
0x88,0x0,0xc0,0xff,0x11,0x88,0x2f,0x19,0x82,0xfe,0x9,0xd2,0x47,0x21,0x81,0x55,
0x89,0x4,0x22,0xa0,0x2,0x90,0x8,0x7f,0x80,0x80,0xff,0x10,0x85,0xff,0x0,0x0,
0x0,0xf0,0xcf,0x28,0x95,0xf,0x28,0x29,0x52,0x44,0x21,0x1,0x55,0x89,0x4,0x14,
0x90,0x4,0x8c,0x10,0x1,0x90,0x8f,0x80,0x90,0x94,0x88,0x0,0x0,0x0,0x10,0x88,
0x2f,0x11,0x2,0xa4,0x44,0x52,0x4,0x21,0x2,0x55,0x89,0x4,0x8,0x88,0x8,0x80,
0x0,0xff,0x90,0x80,0x80,0x50,0x18,0x8,0x8,0x0,0x0,0xf0,0x8f,0xe8,0x10,0x82,
0x46,0x7c,0x51,0x4,0xa1,0x84,0x4,0x89,0x15,0x14,0xf4,0x17,0x80,0x0,0x81,0xa8,
0x80,0xff,0x28,0x0,0x8,0x8,0x0,0x0,0x10,0x88,0x2f,0x10,0x42,0x95,0x0,0xd1,
0x7,0x61,0x58,0xa,0xd9,0x18,0x63,0x80,0x0,0x80,0x0,0xff,0xc4,0x9f,0x80,0xc4,
0x1f,0x8,0x4,0x0,0x0,0xf8,0x9f,0x28,0xd0,0x1f,0xc,0x81,0x4c,0xc4,0x20,0x0,
0x91,0x9,0xd0,0x80,0x81,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,

};

#define DEMO_SUB_MENU_5_WIDTH 82
#define DEMO_SUB_MENU_5_HEIGHT 15
const unsigned char DEMO_SUB_MENU_5 [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x0,0xf0,0x47,0x8,0x88,0x40,0x10,
0x0,0x0,0x20,0xc0,0x1f,0x87,0x20,0x8,0xff,0x87,0x8,0x0,0x7c,0x50,0x0,0x8,
0x42,0xf0,0x79,0x88,0xe0,0x3f,0x0,0x4,0x88,0x0,0x4,0xf2,0x17,0x45,0x80,0x23,
0x22,0x0,0x4,0x24,0x1,0x2,0x12,0x14,0x43,0x7f,0xe0,0x3f,0x0,0x3c,0x23,0x6,
0x2,0x92,0x14,0x49,0x12,0x21,0x22,0x0,0x40,0x20,0xf0,0x7f,0x92,0xf4,0x51,0xa4,
0xe0,0x3f,0x0,0x40,0x20,0x0,0x2,0x92,0x14,0x51,0x20,0x0,0x2,0x0,0x44,0x20,
0x0,0x2,0x96,0x14,0x41,0xff,0xf7,0x7f,0x0,0x38,0x20,0x0,0x2,0x41,0x11,0x41,
0xa8,0x0,0x2,0x0,0x0,0x20,0x0,0x2,0x20,0xf2,0x41,0x24,0x1,0x2,0x0,0x0,
0x20,0x80,0x3,0x18,0x14,0x31,0x23,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_SUB_MENU_DYNAMIC_WIDTH 112
#define DEMO_SUB_MENU_DYNAMIC_HEIGHT 15
const unsigned char DEMO_SUB_MENU_DYNAMIC [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x8,0x1c,
0x2,0x1,0x80,0x0,0x50,0x0,0x0,0x22,0x10,0x4,0x38,0x2,0x8,0xd4,0x1f,0x79,
0x90,0x0,0x90,0xf0,0xc7,0xff,0x21,0x2,0x0,0xc2,0xff,0x15,0x1,0x49,0x90,0x80,
0xff,0x1,0x2,0x22,0xf8,0xf,0x0,0x1f,0x14,0xb4,0xcf,0x4b,0xf0,0x8f,0x10,0x0,
0x1,0xe0,0x88,0x8,0x7c,0x12,0x22,0x4c,0x9,0x49,0x88,0x80,0x10,0x80,0xc0,0x1f,
0xf8,0xf,0x10,0x12,0x49,0xc,0x8f,0x4b,0x84,0x80,0x97,0x80,0x80,0x44,0x88,0x8,
0x8,0xd2,0x90,0x75,0x89,0x4d,0x80,0x80,0x94,0xfc,0x1f,0x29,0xf8,0xf,0x28,0x12,
0x8,0x54,0x4f,0x49,0xf0,0x87,0x54,0x80,0x0,0x8,0x80,0x0,0x44,0x92,0x92,0x54,
0x9,0x49,0x80,0x80,0x24,0x81,0xc0,0xff,0xfd,0x1f,0x7c,0x91,0x12,0x4d,0xd,0x49,
0x81,0x80,0x56,0x81,0x0,0x2a,0x80,0x0,0x0,0x51,0x42,0x45,0x0,0x45,0x81,0x80,
0x88,0x81,0x0,0x49,0x80,0x0,0x80,0xc,0x7c,0xa4,0x1f,0x83,0xfd,0x5f,0x4,0xe1,
0xc0,0x88,0x81,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,

};

#define DEMO_FREEZE_5s_RETURN_WIDTH 106
#define DEMO_FREEZE_5s_RETURN_HEIGHT 15
const unsigned char DEMO_FREEZE_5s_RETURN [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x2,0x4,0x20,
0x2,0x41,0x0,0x88,0x0,0x38,0x2,0x7,0x0,0x0,0x58,0x12,0x8,0xfc,0x1f,0x22,
0x0,0x87,0xc0,0x7,0xf4,0xe0,0x7f,0x0,0x84,0xca,0xff,0x21,0x82,0xff,0x7c,0x84,
0x42,0x0,0x10,0x20,0x40,0x0,0x0,0x42,0x0,0x1,0x8e,0x88,0x4,0xa4,0x44,0x0,
0xf0,0x27,0x40,0x0,0xdc,0x1f,0x0,0xfc,0x81,0xff,0x4,0xaf,0xc4,0x7f,0x17,0x24,
0x4f,0x0,0x48,0xd0,0xff,0x49,0x84,0x88,0x3c,0xa4,0x44,0x0,0x54,0x24,0x49,0x0,
0x48,0x12,0x8,0x90,0x82,0xff,0x40,0x96,0x40,0x0,0x94,0x22,0x49,0x0,0x5c,0x12,
0x9,0x80,0x0,0x8,0x40,0x8e,0x44,0x7f,0x14,0x21,0x4f,0x0,0x48,0x12,0xf9,0xfc,
0xdf,0xff,0x45,0x5,0x42,0x41,0x94,0x22,0x40,0x0,0x8,0x5,0x9,0xa0,0x2,0x8,
0x38,0x4,0x21,0x41,0x4c,0x24,0x40,0x0,0x98,0x88,0xa,0x90,0x4,0x8,0x0,0xc4,
0x20,0x7f,0xa,0xe0,0x7f,0x0,0x68,0x50,0xfc,0x8d,0x18,0x8,0x0,0x34,0x10,0x41,
0xf1,0x27,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,

};

#define DEMO_FREEZE_INPUT_RETURN_WIDTH 136
#define DEMO_FREEZE_INPUT_RETURN_HEIGHT 15
const unsigned char DEMO_FREEZE_INPUT_RETURN [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x2,0x4,0x20,0x2,0x41,0x0,0x0,0x21,0x0,0x1,0x4,0x8,0x82,
0xc0,0x1,0x0,0x58,0x12,0x8,0xfc,0x1f,0x22,0x0,0x0,0x41,0x3c,0xf,0x8,0x18,
0xf,0x3d,0xf8,0x1f,0x84,0xca,0xff,0x21,0x82,0xff,0x0,0x0,0xf9,0x91,0xc8,0xff,
0x65,0xa,0x4,0x8,0x10,0x0,0x42,0x0,0x1,0x8e,0x88,0x0,0xc0,0xb,0x11,0x44,
0x0,0xc1,0x1f,0xfc,0x9,0x10,0xdc,0x1f,0x0,0xfc,0x81,0xff,0x0,0x0,0x21,0x88,
0x1f,0x0,0x5c,0xca,0x5,0xc9,0x13,0x48,0xd0,0xff,0x49,0x84,0x88,0x0,0x0,0x21,
0xb8,0xd2,0xff,0x29,0xf,0x15,0x49,0x12,0x48,0x12,0x8,0x90,0x82,0xff,0x0,0x0,
0xfb,0xad,0x1f,0x8,0x68,0x2,0xa5,0x48,0x12,0x5c,0x12,0x9,0x80,0x0,0x8,0x0,
0xc0,0x91,0xa8,0x12,0x9,0xdc,0xf,0x45,0xc8,0x13,0x48,0x12,0xf9,0xfc,0xdf,0xff,
0x1,0x0,0x91,0xa8,0x1f,0xf9,0x48,0x2,0xa5,0x8,0x10,0x8,0x5,0x9,0xa0,0x2,
0x8,0x8,0x0,0x61,0xb8,0x12,0x9,0xe8,0x1f,0x13,0x9,0x10,0x98,0x88,0xa,0x90,
0x4,0x8,0x8,0x0,0x91,0xa8,0x92,0xa,0x58,0x82,0x2,0xf8,0x1f,0x68,0x50,0xfc,
0x8d,0x18,0x8,0x4,0x80,0xd,0x41,0x58,0xfc,0xa9,0x5f,0xfc,0x9,0x10,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_FREEZE_SUB_MENU_WIDTH 154
#define DEMO_FREEZE_SUB_MENU_HEIGHT 15
const unsigned char DEMO_FREEZE_SUB_MENU [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x2,0x4,0x20,0x2,0x41,0x0,0x0,
0x80,0x8,0x80,0x3,0x0,0x0,0x0,0x0,0x88,0x40,0x10,0x0,0x58,0x12,0x8,0xfc,
0x1f,0x22,0x0,0x0,0x70,0x8,0x7c,0xe0,0x3f,0xfc,0xc1,0x1f,0xff,0x87,0x8,0x0,
0x84,0xca,0xff,0x21,0x82,0xff,0x0,0x80,0x43,0x28,0x4,0x20,0x20,0x0,0x0,0x8,
0x88,0xe0,0x3f,0x0,0x0,0x42,0x0,0x1,0x8e,0x88,0x0,0x40,0x44,0x4a,0x4,0xe0,
0x3f,0x0,0x0,0x4,0x80,0x23,0x22,0x0,0xdc,0x1f,0x0,0xfc,0x81,0xff,0x0,0x0,
0xf4,0x4a,0xfc,0x27,0x20,0xff,0x7,0x2,0x7f,0xe0,0x3f,0x0,0x48,0xd0,0xff,0x49,
0x84,0x88,0x0,0x0,0x43,0x4a,0x4,0xe0,0x3f,0x20,0x0,0x2,0x12,0x21,0x22,0x0,
0x48,0x12,0x8,0x90,0x82,0xff,0x0,0x0,0x64,0x9,0x4,0x80,0x8,0x20,0xf0,0x7f,
0xa4,0xe0,0x3f,0x0,0x5c,0x12,0x9,0x80,0x0,0x8,0x0,0x0,0xe4,0x48,0xf4,0x97,
0x48,0x24,0x1,0x2,0x20,0x0,0x2,0x0,0x48,0x12,0xf9,0xfc,0xdf,0xff,0x1,0x40,
0x54,0x20,0x14,0xa4,0x28,0x24,0x2,0x2,0xff,0xf7,0x7f,0x0,0x8,0x5,0x9,0xa0,
0x2,0x8,0x8,0x80,0x43,0x10,0x12,0xc4,0x18,0x22,0x4,0x2,0xa8,0x0,0x2,0x0,
0x98,0x88,0xa,0x90,0x4,0x8,0x8,0x0,0x40,0xc,0xf2,0x87,0x8,0x21,0x4,0x2,
0x24,0x1,0x2,0x0,0x68,0x50,0xfc,0x8d,0x18,0x8,0x4,0x0,0x40,0x3,0x11,0xf4,
0x7f,0x30,0x80,0x3,0x23,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_TEXT_FREEZING_5S_WIDTH 58
#define DEMO_TEXT_FREEZING_5S_HEIGHT 15
const unsigned char DEMO_TEXT_FREEZING_5S [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x88,0x0,0x38,0x2,0x7,0x0,0x0,0x0,0x87,0xc0,0x7,0xf4,0xe0,0x7f,0x0,
0x7c,0x84,0x42,0x0,0x10,0x20,0x40,0x0,0x4,0xa4,0x44,0x0,0xf0,0x27,0x40,0x0,
0x4,0xaf,0xc4,0x7f,0x17,0x24,0x4f,0x0,0x3c,0xa4,0x44,0x0,0x54,0x24,0x49,0x0,
0x40,0x96,0x40,0x0,0x94,0x22,0x49,0x0,0x40,0x8e,0x44,0x7f,0x14,0x21,0x4f,0x0,
0x44,0x5,0x42,0x41,0x94,0x22,0x40,0x0,0x38,0x4,0x21,0x41,0x4c,0x24,0x40,0x0,
0x0,0xc4,0x20,0x7f,0xa,0xe0,0x7f,0x0,0x0,0x34,0x10,0x41,0xf1,0x27,0x40,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

};

#define DEMO_TEXT_FREEZING_3S_WIDTH 94
#define DEMO_TEXT_FREEZING_3S_HEIGHT 15
const unsigned char DEMO_TEXT_FREEZING_3S [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x88,0x0,0x38,0x0,0x0,0x0,0x0,
0x80,0x8,0x4,0x1,0x0,0x87,0xc0,0x7,0xfe,0xc3,0x1f,0xfc,0xf1,0x7f,0x88,0x0,
0x38,0x84,0x42,0x0,0x2,0x2,0x0,0x80,0x80,0x8,0xfe,0x3,0x44,0xa4,0x44,0x0,
0xfe,0x3,0x0,0x40,0x0,0x38,0x22,0x2,0x40,0xaf,0xc4,0x7f,0x2,0xf2,0x7f,0x20,
0xf0,0x7,0xfe,0x3,0x30,0xa4,0x44,0x0,0xfe,0x3,0x2,0x20,0x20,0x11,0x22,0x2,
0x40,0x96,0x40,0x0,0x88,0x0,0x2,0xff,0x47,0xa,0xfe,0x3,0x40,0x8e,0x44,0x7f,
0x89,0x44,0x12,0x20,0x0,0x2,0x20,0x0,0x44,0x5,0x42,0x41,0x8a,0x42,0x22,0x20,
0xf0,0x7f,0xff,0x7,0x38,0x4,0x21,0x41,0x8c,0x21,0x42,0x20,0x80,0xa,0x20,0x0,
0x0,0xc4,0x20,0x7f,0x88,0x10,0x42,0x20,0x40,0x12,0x20,0x0,0x0,0x34,0x10,0x41,
0xff,0x7,0x3,0x38,0x30,0x62,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,

};

#define DEMO_TEXT_FREEZING_INPUT_WIDTH 76
#define DEMO_TEXT_FREEZING_INPUT_HEIGHT 15
const unsigned char DEMO_TEXT_FREEZING_INPUT [] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x2,0x10,0x40,0x80,0x20,0x8,0x1c,0x0,0x0,0x10,0xc4,
0xf3,0x80,0x80,0xf1,0xd0,0x83,0xff,0x1,0x90,0x1f,0x89,0xfc,0x5f,0xa6,0x40,0x80,
0x0,0x1,0xbc,0x10,0x41,0x4,0x10,0xfc,0xc1,0x9f,0x0,0x1,0x10,0x82,0xf8,0x1,
0xc0,0xa5,0x5c,0x90,0x3c,0x1,0x10,0x82,0x2b,0xfd,0x9f,0xf2,0x50,0x91,0x24,0x1,
0xb0,0xdf,0xfa,0x81,0x80,0x26,0x50,0x8a,0x24,0x1,0x1c,0x89,0x2a,0x91,0xc0,0xfd,
0x50,0x84,0x3c,0x1,0x10,0x89,0xfa,0x91,0x8f,0x24,0x50,0x8a,0x0,0x1,0x10,0x86,
0x2b,0x91,0x80,0xfe,0x31,0x91,0x0,0x1,0x10,0x89,0x2a,0xa9,0x80,0x25,0x28,0x80,
0xff,0x1,0xd8,0x10,0x84,0xc5,0x9f,0xfa,0xc5,0x9f,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,

};
#endif