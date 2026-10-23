int fn_82EFE140(int param_1, unsigned int *param_2, int param_3)
{
  if (param_3 != 0) {
    param_2[0] = *(unsigned int *)(param_1 + 0x1bcc);
    param_2[1] = *(unsigned int *)(param_1 + 0x1bd0);
    param_2[2] = *(unsigned int *)(param_1 + 0x1bd8);
    param_2[4] = *(unsigned int *)(param_1 + 0x1bd4);
    param_2[3] = *(unsigned int *)(param_1 + 0x1bdc);
  } else {
  param_2[0] = *(unsigned int *)(param_1 + 0x1bb4);
  param_2[1] = *(unsigned int *)(param_1 + 0x1bb8);
  param_2[2] = *(unsigned int *)(param_1 + 0x1bc8);
  param_2[4] = *(unsigned int *)(param_1 + 0x1bc0);
  param_2[3] = *(unsigned int *)(param_1 + 0x5298);
  }
  return param_3;
}
