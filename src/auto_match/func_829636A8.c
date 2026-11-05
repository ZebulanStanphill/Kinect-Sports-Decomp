typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
unsigned int fn_829636A8(unsigned int *p)
{
  switch (*p & 0xfff00000) {
  case 0x73800000:
  case 0x20900000:
  case 0x11400000:
  case 0x10f00000:
  case 0x11100000:
  case 0x11200000:
  case 0x11300000:
  case 0x11500000:
  case 0x20700000:
  case 0x20800000:
  case 0x73400000:
  case 0x73000000:
  case 0x73100000:
  case 0x73200000:
  case 0x73300000:
  case 0x73500000:
  case 0x73600000:
  case 0x73700000:
  case 0x74100000:
  case 0x73d00000:
  case 0x73900000:
  case 0x73a00000:
  case 0x73b00000:
  case 0x73c00000:
  case 0x73e00000:
  case 0x73f00000:
  case 0x74000000:
  case 0x74600000:
  case 0x74200000:
  case 0x74300000:
  case 0x74400000:
  case 0x74500000:
  case 0x74700000:
  case 0x74a00000:
  case 0x74b00000:
    return 1;
  default:
    return 0;
  }
}
