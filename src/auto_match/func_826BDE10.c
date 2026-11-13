extern int fn_82695DA0();


int * fn_826BDE10(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_82695DA0(param_1 + 2,param_2 + 2);
  *(unsigned char *)((int)param_1 + 9) = *(unsigned char *)((int)param_2 + 9);
  return param_1;
}

