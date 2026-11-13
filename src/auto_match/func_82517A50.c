extern int fn_822315A0(iVar1);
extern int fn_82517978();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned int * fn_82517A50(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_82517978(&stack_pair_20.first,*param_2,param_2[1],0);
  iVar1 = param_1[1];
  param_1[1] = stack_pair_20.second;
  *param_1 = stack_pair_20.first;
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  return param_1;
}

