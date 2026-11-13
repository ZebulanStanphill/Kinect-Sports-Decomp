extern int fn_822315A0();
extern int fn_822520E8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack_20;


void fn_823F17E0(int param_1, unsigned int param_2, unsigned int param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned __int64 unused_arg_12, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned int in_stack_00000084)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned __int64 uStack00000060;

  struct { unsigned int first; int second; } stack_pair_20;

  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D7FE0();
  }
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_822D79D8(&stack_pair_20.first,uVar1);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),stack_pair_20.first,&stack0x0000001c);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x10))
            (*(int **)(param_1 + 0x70),stack_pair_20.first,&stack0x00000024);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x10))
            (*(int **)(param_1 + 0x78),stack_pair_20.first,&stack0x00000030);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),stack_pair_20.first,&stack0x00000040);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x10))
            (*(int **)(param_1 + 0x88),stack_pair_20.first,in_stack_00000084);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_20.first);
    fn_828E9D40(stack_pair_20.first);
    fn_822520E8(param_1,stack_pair_20.first,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&stack_pair_20.first);
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return;
}

