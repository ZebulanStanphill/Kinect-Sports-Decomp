extern int fn_82F68CC0();


unsigned int *
fn_82771090(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned int param_5,unsigned int *param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  
  *param_1 = param_2;
  if (param_6[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_6;
  }
  param_1[1] = uVar1;
  if (param_7[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_7;
  }
  param_1[2] = uVar1;
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_1[6] = param_3[3];
  param_1[7] = param_3[4];
  param_1[8] = param_3[5];
  fn_82F68CC0(param_1 + 9,param_4,0x20);
  param_1[0x11] = param_5;
  param_1[0x12] = param_6[1];
  param_1[0x13] = param_7[1];
  return param_1;
}

