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
extern unsigned int fn_8265C940(unsigned int, unsigned int);
extern int fn_8265C990(unsigned int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82940C38(int param_1, int param_2)
{
  unsigned int uVar1;
  unsigned int lVar2;
  unsigned int uVar3;

  uVar1 = *(unsigned int *)(param_1 + 0x604);
  if (uVar1 != 0) {
    uVar3 = uVar1;
  } else {
    uVar3 = 0x400;
  }
  while ((unsigned int)(param_2 + *(int *)(param_1 + 0x600)) > uVar3) {
    uVar3 = uVar3 << 1;
  }
  if (uVar3 != uVar1) {
    lVar2 = fn_8265C940(uVar3, 0x24810000);
    if (lVar2 == 0) {
      return 0x8007000e;
    }
    memcpy((void *)lVar2, *(void **)(param_1 + 0x5fc), *(unsigned int *)(param_1 + 0x600));
    fn_8265C990(*(unsigned int *)(param_1 + 0x5fc), 0x24810000);
    *(unsigned int *)(param_1 + 0x5fc) = lVar2;
    *(unsigned int *)(param_1 + 0x604) = uVar3;
  }
  return 0;
}
