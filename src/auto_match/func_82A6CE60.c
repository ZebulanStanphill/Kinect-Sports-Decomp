extern int fn_82BA02A8();


void fn_82A6CE60(unsigned int *param_1,int *param_2)

{
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x13] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0xf;
  param_1[0xe] = *(unsigned int *)(*param_2 + 0xd4);
  param_1[0xf] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  if (param_2[0xb0] != 0) {
    param_1[0x11] = 0;
    param_1[0x13] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x14] = 0;
  }
  param_1[0x15] = fn_82BA02A8;
  return;
}

