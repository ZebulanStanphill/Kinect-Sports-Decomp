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
extern int fn_82949AB0();


int fn_82949BE0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int count;
  int aiStack_30;
  
  uVar1 = **(uint **)(param_1 + 0x104) & 0xfff00000;
  if ((**(uint **)(param_1 + 0x104) & 0xfffff) == 4) {
    aiStack_30 = 0;
    count = (uVar1 == 0x70700000) + 3;
    if (count > 0) {
      do {
        fn_82949AB0(param_1,0,param_3,0,&aiStack_30);
        aiStack_30 = aiStack_30 + 1;
      } while (aiStack_30 < count);
    }
  }
  else {
    if (uVar1 == 0x70700000) {
      iVar2 = 4;
    }
    else {
      iVar2 = (uVar1 == 0x70600000) + 2;
    }
    aiStack_30 = 0;
    if (iVar2 > 0) {
      do {
        fn_82949AB0(param_1,0,param_2,0,&aiStack_30);
        aiStack_30 = aiStack_30 + 1;
      } while (aiStack_30 < iVar2);
    }
  }
  return 0;
}

