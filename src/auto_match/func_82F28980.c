void fn_82F28980(int param_1,short *param_2,__int64 param_3)

{
  if ((int)param_3 < 1) {
    return;
  }
  param_1 = param_1 - (int)param_2;
  do {
    *param_2 = *(short *)(param_1 + (int)param_2) + 0x80;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

