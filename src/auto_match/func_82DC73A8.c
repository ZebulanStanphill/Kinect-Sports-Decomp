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


int fn_82DC73A8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (iVar1 <= 0x10) {
    return 0x10;
  }
  if (iVar1 <= 0x20) {
    return 0x20;
  }
  if (iVar1 <= 0x30) {
    return 0x30;
  }
  if (iVar1 <= 0x40) {
    return 0x40;
  }
  if (iVar1 <= 0x60) {
    return 0x60;
  }
  if (iVar1 <= 0x80) {
    return 0x80;
  }
  if (iVar1 <= 0xa0) {
    return 0xa0;
  }
  if (iVar1 <= 0xc0) {
    return 0xc0;
  }
  if (iVar1 <= 0x100) {
    return 0x100;
  }
  if (iVar1 <= 0x140) {
    return 0x140;
  }
  if (iVar1 <= 0x200) {
    return 0x200;
  }
  if (iVar1 <= 0x220) {
    return 0x220;
  }
  if (iVar1 <= 0x400) {
    return 0x400;
  }
  if (iVar1 <= 0x800) {
    return 0x800;
  }
  if (iVar1 <= 0x1000) {
    return 0x1000;
  }
  if (iVar1 > 0x2000) {
    return param_1;
  }
  return 0x2000;
}

