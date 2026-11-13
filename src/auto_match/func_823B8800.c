extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_823B8800(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  struct { unsigned int first; int second; } stack_pair_40;

  struct { unsigned int first; int second; } stack_pair_38;

  unsigned char auStack_30 [48];

  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  fn_822D79D8(&stack_pair_40.first,uVar2);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x10))(*(int **)(param_1 + 0x68),stack_pair_40.first,param_2);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x10))(*(int **)(param_1 + 0x70),stack_pair_40.first,param_3);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_40.first);
    fn_828E9D40(stack_pair_40.first);
    uVar1 = stack_pair_40.first;
    stack_pair_38.first = 0;
    stack_pair_38.second = 0;
    (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),stack_pair_40.first,auStack_30)
    ;
    (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),uVar1,&stack_pair_38.first);
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(int (***)())(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),auStack_30,&stack_pair_38.first)
      ;
    }
    if (stack_pair_38.second != 0) {
      fn_822315A0();
    }
  }
  fn_828E2B28(param_1,&stack_pair_40.first);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  return;
}
