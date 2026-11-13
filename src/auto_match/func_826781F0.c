extern int fn_82F68CC0();


void fn_826781F0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
                  int param_5,unsigned __int64 param_6)

{
  if (((param_3 == (unsigned int *)0x0) && (param_3 = param_4, param_4 == (unsigned int *)0x0)) &&
     (param_5 == 0)) {
    fn_82F68CC0(param_1 + 3,param_6,0x20);
    param_1[0xb] = 0;
  }
  else {
    *param_1 = 2;
    param_1[0xb] = *param_3;
    param_1[0xc] = param_3[1];
    param_1[0xd] = param_3[2];
    param_1[0xe] = param_3[3];
    param_1[0xf] = param_3[4];
    param_1[0x10] = param_3[5];
    param_1[0x11] = param_3[6];
    param_1[0x12] = param_3[7];
    param_1[0x13] = param_3[8];
    param_1[2] = 0xffffffff;
    fn_82F68CC0(param_1 + 3,param_6,0x20);
    if (param_4 != (unsigned int *)0x0) {
      param_1[0x14] = *param_4;
      param_1[0x15] = param_4[1];
      param_1[0x16] = param_4[2];
      param_1[0x17] = param_4[3];
      param_1[0x18] = param_4[4];
      param_1[0x19] = param_4[5];
      param_1[0x1a] = param_4[6];
      param_1[0x1b] = param_4[7];
      param_1[0x1c] = param_4[8];
    }
  }
  param_1[1] = param_2;
  *param_1 = 3;
  return;
}

