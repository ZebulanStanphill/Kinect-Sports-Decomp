extern int fn_82702DE0();


int * fn_82704318(int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_82702DE0(param_1 + 1,param_2[1]);
  return param_1;
}

