extern int fn_82695DA0();


int * fn_826BDE70(int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  iVar1 = param_2[1];
  fn_82695DA0(param_1 + 2,iVar1);
  *(unsigned char *)((int)param_1 + 9) = *(unsigned char *)(iVar1 + 1);
  return param_1;
}

