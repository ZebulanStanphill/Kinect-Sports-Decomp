extern int fn_822315A0();
extern int fn_82F56AB8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82F56EA0(unsigned int *param_1)

{
  unsigned int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_82F56AB8(&stack_pair_20.first);
  iVar1 = param_1[1];
  param_1[1] = stack_pair_20.second;
  *param_1 = stack_pair_20.first;
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  return;
}

