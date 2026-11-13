extern unsigned int lbl_8202F1A0;


void fn_829334D8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 *param_4)

{
  param_1[4] = param_2;
  param_1[6] = param_3;
  param_1[2] = 0;
  param_1[1] = 0xf;
  *param_1 = &lbl_8202F1A0;
  param_1[3] = 0;
  *(unsigned __int64 *)(param_1 + 8) = *param_4;
  *(unsigned __int64 *)(param_1 + 10) = param_4[1];
  *(unsigned __int64 *)(param_1 + 0xc) = param_4[2];
  *(unsigned __int64 *)(param_1 + 0xe) = param_4[3];
  return;
}

