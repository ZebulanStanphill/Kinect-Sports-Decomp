extern int fn_82695DA0();


int * fn_826A78C8(int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_82695DA0(param_1 + 2,param_2[1]);
  return param_1;
}

