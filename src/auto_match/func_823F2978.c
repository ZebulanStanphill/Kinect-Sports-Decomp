typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822527F8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern unsigned fn_8265C9E0(unsigned);
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_34;
extern unsigned int stack0x00000020;
extern unsigned int stack0x0000003f;
extern unsigned int stack0x0000004c;
extern unsigned int uStack0000003f;
extern unsigned int uStack0000004c;
extern unsigned int uStack_38;


void fn_823F2978(int param_1,__vector4 pos,int param_2,undefined1 param_3,int param_4,undefined4 param_5)

{
  unsigned iVar2;
  int uVar1;

  undefined1 auStack_40;
  struct { undefined4 first; void *second; } stack_pair_38;


  auStack_40 = 0;

  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 != 0) {
    uVar1 = fn_822D7FE0(iVar2);
  } else {
    uVar1 = 0;
  }
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  fn_822D79D8(&stack_pair_38.first,uVar1);
  (*(code *)(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),stack_pair_38.first,&pos);
  (*(code *)(**(int **)(param_1 + 0x70) + 0x10))(*(int **)(param_1 + 0x70),stack_pair_38.first,param_2);
  (*(code *)(**(int **)(param_1 + 0x78) + 0x10))(*(int **)(param_1 + 0x78),stack_pair_38.first,&auStack_40);
  (*(code *)(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),stack_pair_38.first,&param_3);
  (*(code *)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),stack_pair_38.first,param_4);
  (*(code *)(**(int **)(param_1 + 0x90) + 0x10))
            (*(int **)(param_1 + 0x90),stack_pair_38.first,&param_5);
  if (*(unsigned *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_38.first);
    fn_828E9D40(stack_pair_38.first);
    fn_822527F8(param_1,stack_pair_38.first,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&stack_pair_38.first);
  if (stack_pair_38.second != 0) {
    fn_822315A0(stack_pair_38.second);
  }
  return;
}
