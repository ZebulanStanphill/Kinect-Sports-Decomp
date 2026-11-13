void fn_8256EA58(double param_1,int *param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;

  param_2 = (int *)*param_2;
  uVar1 = 0;
  if (param_2[1] - *param_2 >> 2 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    if (**(int **)(*param_2 + iVar2) == param_3) {
      (*(int **)(*param_2 + iVar2))[param_5 + 0x1d] = (int)(float)param_1;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar1 < (unsigned int)(param_2[1] - *param_2 >> 2));
  return;
}
