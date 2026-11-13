extern unsigned int lbl_8202F194;


unsigned int *
fn_82933088(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned __int64 *param_7)

{
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[1] = 0xe;
  *param_1 = &lbl_8202F194;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = param_5;
  param_1[10] = param_6;
  *(unsigned __int64 *)(param_1 + 0xc) = *param_7;
  *(unsigned __int64 *)(param_1 + 0xe) = param_7[1];
  *(unsigned __int64 *)(param_1 + 0x10) = param_7[2];
  *(unsigned __int64 *)(param_1 + 0x12) = param_7[3];
  return param_1;
}

