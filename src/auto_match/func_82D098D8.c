extern int fn_82CE5410();
extern int fn_82D08138();
extern int fn_82D1BCD8();
extern unsigned int iStack_2c;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82D098D8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  struct { unsigned int first; int second; } stack_pair_30;

  unsigned int uStack_28;

  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  fn_82D1BCD8(param_1,&stack_pair_40.first);
  if (stack_pair_40.second < 1) {
    *(unsigned int *)(param_2 + 0x10) = 0;
    *(unsigned int *)(param_2 + 4) = 0;
  }
  else {
    stack_pair_30.second = stack_pair_40.second;
    uStack_28 = 0x10;
    stack_pair_30.first = stack_pair_40.first;
    fn_82D08138(&stack_pair_30.first,param_2);
  }
  iVar1 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,0x10);
  }
  return;
}
