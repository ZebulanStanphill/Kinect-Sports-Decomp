void fn_82C41C38(unsigned __int64 param_1,int param_2,int *param_3,int param_4,unsigned int param_5)

{
  int *piVar1;
  int *piVar2;
  __int64 lVar3;
  
  lVar3 = (__int64)((int)param_5 >> 1) + (unsigned __int64)((int)param_5 < 0 && (param_5 & 1) != 0);
  if ((int)lVar3 < 1) {
    return;
  }
  piVar2 = (int *)(param_4 + -4);
  piVar1 = (int *)(param_5 * 4 + param_4);
  param_2 = param_2 - (int)param_3;
  do {
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
    *piVar2 = -((*(int *)(param_2 + (int)param_3) >> 1) + (*param_3 >> 1));
    piVar1 = piVar1 + -1;
    *piVar1 = (*param_3 >> 1) - (*(int *)(param_2 + (int)param_3) >> 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

