extern int fn_822315A0();
extern int fn_822523E0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_2c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_30;


void fn_823F1EC0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned __int64 param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  struct { unsigned int first; int second; } stack_pair_30;

  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D7FE0();
  }
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  fn_822D79D8(&stack_pair_30.first,uVar1);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),stack_pair_30.first,&stack0x0000001c);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x10))
            (*(int **)(param_1 + 0x70),stack_pair_30.first,&stack0x00000024);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x10))
            (*(int **)(param_1 + 0x78),stack_pair_30.first,&stack0x0000002c);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),stack_pair_30.first,&stack0x00000034);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x10))
            (*(int **)(param_1 + 0x88),stack_pair_30.first,&stack0x00000040);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x10))
            (*(int **)(param_1 + 0x90),stack_pair_30.first,&stack0x00000050);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x10))(*(int **)(param_1 + 0x98),stack_pair_30.first,param_6);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_30.first);
    fn_828E9D40(stack_pair_30.first);
    fn_822523E0(param_1,stack_pair_30.first,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&stack_pair_30.first);
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  return;
}

