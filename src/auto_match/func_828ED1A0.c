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


bool fn_828ED1A0(int param_1)

{
  uint uVar1;
  
  switch (*(uint *)(param_1 + 8)) {
  case 0: return false;
  case 1: case 3: case 5: return true;
  case 2: case 4: default: break;
  }
  if ((((*(int *)(param_1 + 0x1ac) != 1) && (*(unsigned char *)(param_1 + 0x128) == 0)) &&
      (*(int *)(param_1 + 0x188) != 1)) && (*(int *)(param_1 + 0x188) != 3)) {
    return *(unsigned char *)(param_1 + 0x164) != 0;
  }
  return true;
}
