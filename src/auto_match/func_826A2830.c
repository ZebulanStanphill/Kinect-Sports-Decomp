extern int fn_82689BE0();


void fn_826A2830(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  fn_82689BE0(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  piVar2 = (int *)(param_1[1] * 4 + *param_1 + -4);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_2;
    *piVar2 = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

