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
typedef unsigned int undefined8;
typedef unsigned int ulonglong;
typedef unsigned __int64 qword;
typedef int longlong;
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
extern float fn_830177C8();
extern float lbl_821AAD20;
extern unsigned int lbl_832642FC;


bool fn_83009060(int param_1)

{
  byte bVar1;
  double dVar2;
  
  if (*(unsigned int *)(param_1 + 0x28) == 0) {
    return false;
  }
  bVar1 = (*(byte *)(*(unsigned int *)(param_1 + 0x28) + 0x3c) >> 4) & 1;
  if ((unsigned char)(*(uint *)(param_1 + 0x40) >> 0x1c & 1) != 0) {
    dVar2 = (double)fn_830177C8(lbl_832642FC,param_1,0x1c,0);
    return dVar2 != 0.0;
  }
  if (*(unsigned int *)(param_1 + 0x24) != 0) {
    bVar1 = (*(byte *)(*(unsigned int *)(param_1 + 0x24) + 0x3d) >> 4) & 1;
  }
  return bVar1;
}

