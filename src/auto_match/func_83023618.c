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
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_83023618(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  unsigned short uVar3;
  undefined4 *puVar4;
  int lVar5;
  struct { undefined4 first; int second; unsigned third; unsigned rest[6]; } stack_pair_40;
  
  puVar4 = &stack_pair_40.first;
  stack_pair_40.first = 0;
  uVar1 = 1;
  lVar5 = 8;
  do {
    puVar4++;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar3 = *(ushort *)(param_1 + 0x3e) + 1;
  stack_pair_40.second = (uint)*(ushort *)(param_1 + 0x4a) << 10;
  stack_pair_40.third = *(undefined4 *)((*(ushort *)(param_1 + 0x3e) + 0x10) * 4 + param_1);
  *(unsigned short *)(param_1 + 0x3e) = uVar3;
  if ((uVar3 & 0xffff) == 2) {
    *(undefined2 *)(param_1 + 0x3e) = 0;
  }
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) + 0xffffu;
  iVar2 = (*(code *)(**(int **)(param_1 + 0x34) + 0x54))(*(int **)(param_1 + 0x34),&stack_pair_40.first,0);
  if (iVar2 < 0) {
    uVar1 = 2;
  }
  return uVar1;
}

