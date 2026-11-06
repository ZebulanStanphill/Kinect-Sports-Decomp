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
extern void fn_82281868(int, int, int);
extern void fn_822819E0(int, int);
extern void fn_8229E090(int, int, int);
extern void fn_82480BF8(int);

void fn_82481488(int param_1, int param_2)
{
  int iVar1;
  int iVar2;

  if (param_1 != 2) {
    fn_8229E090(*(int *)(param_2 + 0xb4), 0, 1);
    *(int *)(param_2 + 0xb4) = 0;
    if (param_1 == 0) {
      fn_82480BF8(param_2);
      iVar1 = *(int *)(param_2 + 0x14);
      iVar2 = *(int *)(param_2 + 0x48) + 4;
    } else {
      iVar1 = *(int *)(param_2 + 0x14);
      iVar2 = iVar1 + 100;
    }
    if (*(unsigned int *)(iVar1 + 0x10) != 0) {
      fn_82281868(iVar1, iVar2, 0);
    } else if (*(int *)(iVar1 + 8) != 0) {
      fn_822819E0(iVar1, iVar2);
    }
    *(int *)(param_2 + 0x100) = 1;
  } else {
    *(int *)(param_2 + 0xb4) = 0;
  }
}
