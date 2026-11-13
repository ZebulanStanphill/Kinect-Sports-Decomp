extern int fn_822315A0();
extern int fn_82252938();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001f;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000030;
extern unsigned int uStack0000001f;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_20;


void fn_823F2BF0(int param_1,unsigned char param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char uStack0000001f;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  struct { unsigned int first; int second; } stack_pair_20;

  
  uStack0000001f = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
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
            (*(int **)(param_1 + 0x68),stack_pair_20.first,&stack0x0000001f);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x10))
            (*(int **)(param_1 + 0x70),stack_pair_20.first,&stack0x00000024);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x10))
            (*(int **)(param_1 + 0x78),stack_pair_20.first,&stack0x0000002c);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),stack_pair_20.first,&stack0x00000030);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_20.first);
    fn_828E9D40(stack_pair_20.first);
    fn_82252938(param_1,stack_pair_20.first,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&stack_pair_20.first);
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return;
}

