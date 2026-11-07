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
extern unsigned int fStack0000004c;
extern int fn_822315A0();
extern int fn_82251E58();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002f;
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000047;
extern unsigned int stack0x0000004c;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002f;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000047;
extern unsigned int uStack_20;


void fn_823F1000(int param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,float param_1)

{
  unsigned iVar2;
  unsigned uVar1;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 uStack0000002f;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined1 uStack00000047;
  float fStack0000004c;
  struct { undefined4 first; unsigned second; } stack_pair_20;

  







  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 != 0) {
    uVar1 = fn_822D7FE0(iVar2);
  }
  else {
    uVar1 = 0;
  }
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_822D79D8(&stack_pair_20.first,uVar1);
  (*(code *)(**(int **)(param_2 + 0x68) + 0x10))
            (*(int **)(param_2 + 0x68),stack_pair_20.first,&param_3);
  (*(code *)(**(int **)(param_2 + 0x70) + 0x10))
            (*(int **)(param_2 + 0x70),stack_pair_20.first,&param_4);
  (*(code *)(**(int **)(param_2 + 0x78) + 0x10))
            (*(int **)(param_2 + 0x78),stack_pair_20.first,&param_5);
  (*(code *)(**(int **)(param_2 + 0x80) + 0x10))
            (*(int **)(param_2 + 0x80),stack_pair_20.first,&param_6);
  (*(code *)(**(int **)(param_2 + 0x88) + 0x10))
            (*(int **)(param_2 + 0x88),stack_pair_20.first,&param_7);
  (*(code *)(**(int **)(param_2 + 0x90) + 0x10))
            (*(int **)(param_2 + 0x90),stack_pair_20.first,&param_8);
  (*(code *)(**(int **)(param_2 + 0x98) + 0x10))
            (*(int **)(param_2 + 0x98),stack_pair_20.first,&param_1);
  if (*(unsigned *)(param_2 + 0x48) != 0) {
    fn_828E9D90(stack_pair_20.first);
    fn_828E9D40(stack_pair_20.first);
    fn_82251E58(param_2,stack_pair_20.first,param_2 + 0x38);
  }
  fn_828E2B28(param_2,&stack_pair_20.first);
  if (stack_pair_20.second != 0) {
    fn_822315A0(stack_pair_20.second);
  }
  return;
}

