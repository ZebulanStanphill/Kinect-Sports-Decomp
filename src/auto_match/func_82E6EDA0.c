extern unsigned int lbl_8215ED88;


unsigned int *
fn_82E6EDA0(unsigned int *param_1,unsigned short param_2,unsigned int *param_3,unsigned int *param_4,
             int *param_5,unsigned __int64 param_6,unsigned int param_7)

{
  *(unsigned short *)(param_1 + 2) = param_2;
  *param_1 = &lbl_8215ED88;
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_1[6] = param_3[3];
  param_1[7] = *param_4;
  param_1[8] = param_4[1];
  param_1[9] = param_4[2];
  param_1[10] = param_4[3];
  param_1[0xb] = param_5;
  *(unsigned __int64 *)(param_1 + 0xc) = param_6;
  param_1[0xe] = param_7;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  if (param_5 != (int *)0x0) {
    (*(int (**)())(*param_5 + 4))(param_5);
  }
  return param_1;
}

