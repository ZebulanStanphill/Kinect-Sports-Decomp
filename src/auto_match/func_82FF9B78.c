extern unsigned int lbl_8217BCF4;


void fn_82FF9B78(unsigned int *param_1,unsigned int param_2,unsigned int param_3,__int64 param_4,
                  int param_5,int param_6)

{
  param_1[6] = param_3;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &lbl_8217BCF4;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = (int)param_4;
  param_1[0x11] = param_5 + param_6;
  param_1[0x13] = param_6;
  *(unsigned char *)(param_1 + 0x12) = (param_4 != 0) << 7 | *(unsigned char *)(param_1 + 0x12) & 0x1f;
  return;
}

