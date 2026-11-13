void fn_82D966C8(int param_1,char param_2,unsigned int *param_3)

{
  if ((param_2 == '\0') && (*(float *)(param_1 + 0x44) == 3.40282e+38f)) {
    *param_3 = 0;
    param_3[1] = 0;
    return;
  }
  param_3[1] = 3;
  *param_3 = 0x18;
  return;
}

