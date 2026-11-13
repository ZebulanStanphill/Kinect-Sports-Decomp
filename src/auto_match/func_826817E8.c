extern int fn_82694738();


int * fn_826817E8(int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82694738(param_2 + 0x24c,param_3);
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return param_1;
}

