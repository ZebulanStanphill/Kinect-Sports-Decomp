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
extern void fn_822315A0(unsigned);
extern unsigned fn_82372C00(int);
extern char lbl_831D1CA8[];
extern int fn_824D2AE8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


char *fn_8237F060(int param_1)

{
  int iVar1;
  int bVar2;
  int bVar3;
  int bVar4;
  unsigned iVar5;
  int iVar6;
  struct { unsigned first; unsigned second; } stack_pair_30;

  
  iVar1 = *(int *)(param_1 + 0x240);
  iVar6 = 0;
  iVar5 = fn_82372C00(iVar1);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x28);
  }
  if (*(int *)(param_1 + 0x254) != *(int *)(iVar1 + 0x1f8)) {
    return lbl_831D1CA8;
  }
  bVar2=*(unsigned *)(iVar1+0x54)==2 || *(unsigned *)(iVar1+0x54)==4;
  bVar3=bVar2 && *(int *)(iVar1+0x1e4)==*(int *)(param_1+0x254);
  fn_824D2AE8(&stack_pair_30.first,param_1 + 0x24c);
  if (stack_pair_30.first && *(int *)(stack_pair_30.first+0x9c)) bVar4=1; else bVar4=0;
  if (((!bVar2) || (bVar3)) || (!bVar4)) {
    if (*(int *)(param_1 + 600) != iVar6) {
      if (stack_pair_30.second != 0) {
        fn_822315A0(stack_pair_30.second);
      }
      return (lbl_831D1CA8+0x4c);
    }
    if (*(int *)(*(int *)(param_1 + 0x240) + 0x1f0) == *(int *)(param_1 + 0x254)) {
      if (stack_pair_30.second != 0) {
        fn_822315A0(stack_pair_30.second);
      }
      return (lbl_831D1CA8+0x98);
    }
  }
  if (stack_pair_30.second != 0) {
    fn_822315A0(stack_pair_30.second);
  }
  return lbl_831D1CA8;
}

