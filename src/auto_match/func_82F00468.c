void fn_82F00468(int param_1,int param_2,unsigned char *param_3,__int64 param_4)

{
  if (*(int *)(param_1 + 0x5254) != 1) {
    if ((int)param_4 < 1) {
      return;
    }
    param_2 = param_2 - (int)param_3;
    do {
      *param_3 = *(unsigned char *)((unsigned char)param_3[param_2] + 0x831ae420);
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    return;
  }
  if ((int)param_4 < 1) {
    return;
  }
  param_2 = param_2 - (int)param_3;
  do {
    *param_3 = *(unsigned char *)((unsigned char)param_3[param_2] + 0x831ae320);
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

