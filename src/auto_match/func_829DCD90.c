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
extern int fn_82A1DDC0();




undefined8 fn_829DCD90(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *piVar2;
  uint lVar3;
  uint uVar4;
  struct { uint a,b; } header;
  
  if (param_2 != 0) {
    piVar2 = (uint *)(param_1 + 0x9c98);
    uVar1 = *piVar2;
    if ((uVar1 == 0) || (param_3 >= uVar1 * 0x7d4 + 8U)) {
      header.b = uVar1;
      header.a = 0x10001;
      fn_82A1DDC0(param_2,&header.a,8);
      lVar3 = param_2 + 8;
      uVar1 = *(uint *)(param_1 + 0x9c90);
      uVar4 = uVar1 - *piVar2;
      if (uVar4 < uVar1) {
        do {
          fn_82A1DDC0(lVar3,((*(int *)(param_1 + 0x9c94) + uVar4) % 0x14) * 0x7d4 + param_1,
                            0x7d4);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x7d4;
        } while (uVar4 < *(uint *)(param_1 + 0x9c90));
      }
      *piVar2 = 0;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

