extern int fn_826A74A0();


unsigned __int64 fn_826A76D0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_826A74A0(param_2);
  iVar1 = *(int *)((iVar2 + 2) * 4 + *param_3);
  iVar2 = *(int *)(iVar1 + 8);
  *(int *)param_1 = iVar1;
  *(int *)(iVar1 + 8) = iVar2 + 1;
  return param_1;
}

