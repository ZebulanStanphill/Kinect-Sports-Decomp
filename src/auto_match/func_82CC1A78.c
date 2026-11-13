void fn_82CC1A78(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if ((__int64)param_3 * (__int64)param_4 < 1) {
    return;
  }
  param_2 = param_2 - (int)param_1;
  do {
    iVar1 = iVar1 + param_3;
    *param_1 = param_1[param_2];
    param_1 = param_1 + param_3;
  } while (iVar1 < (int)((__int64)param_3 * (__int64)param_4));
  return;
}

