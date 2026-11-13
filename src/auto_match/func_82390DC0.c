extern unsigned int fStack00000054;
extern unsigned int fStack00000074;
extern int fn_822315A0();
extern int fn_82236448();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000054;
extern unsigned int stack0x0000005c;
extern unsigned int stack0x00000064;
extern unsigned int stack0x0000006c;
extern unsigned int stack0x00000074;
extern unsigned int uStack0000005c;
extern unsigned int uStack00000064;
extern unsigned int uStack0000006c;
extern unsigned int uStack_20;


void fn_82390DC0(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned int param_6,unsigned int param_7)

{
  int iVar2;
  unsigned __int64 uVar1;
  float fStack00000054;
  unsigned int uStack0000005c;
  unsigned int uStack00000064;
  unsigned int uStack0000006c;
  float fStack00000074;
  struct { unsigned int first; int second; } stack_pair_20;

  
  fStack00000054 = (float)param_1;
  fStack00000074 = (float)param_2;
  uStack0000005c = param_5;
  uStack00000064 = param_6;
  uStack0000006c = param_7;
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
  (**(int (***)())(**(int **)(param_3 + 0x68) + 0x10))
            (*(int **)(param_3 + 0x68),stack_pair_20.first,&stack0x00000020);
  (**(int (***)())(**(int **)(param_3 + 0x70) + 0x10))
            (*(int **)(param_3 + 0x70),stack_pair_20.first,&stack0x00000030);
  (**(int (***)())(**(int **)(param_3 + 0x78) + 0x10))
            (*(int **)(param_3 + 0x78),stack_pair_20.first,&stack0x00000040);
  (**(int (***)())(**(int **)(param_3 + 0x80) + 0x10))
            (*(int **)(param_3 + 0x80),stack_pair_20.first,&stack0x00000054);
  (**(int (***)())(**(int **)(param_3 + 0x88) + 0x10))
            (*(int **)(param_3 + 0x88),stack_pair_20.first,&stack0x0000005c);
  (**(int (***)())(**(int **)(param_3 + 0x90) + 0x10))
            (*(int **)(param_3 + 0x90),stack_pair_20.first,&stack0x00000064);
  (**(int (***)())(**(int **)(param_3 + 0x98) + 0x10))
            (*(int **)(param_3 + 0x98),stack_pair_20.first,&stack0x0000006c);
  (**(int (***)())(**(int **)(param_3 + 0xa0) + 0x10))
            (*(int **)(param_3 + 0xa0),stack_pair_20.first,&stack0x00000074);
  if (*(int *)(param_3 + 0x48) != 0) {
    fn_828E9D90(stack_pair_20.first);
    fn_828E9D40(stack_pair_20.first);
    fn_82236448(param_3,stack_pair_20.first,param_3 + 0x38);
  }
  fn_828E2B28(param_3,&stack_pair_20.first);
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return;
}

