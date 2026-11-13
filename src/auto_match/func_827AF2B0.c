void fn_827AF2B0(unsigned int *param_1,unsigned int *param_2)

{
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_2 + 9);
  return;
}

