extern int fn_82424398();
extern int fn_82424630();
extern unsigned int lbl_821B86B0;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82423330(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar2 = 0;
  *param_1 = &lbl_821B86B0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = uVar1;
  param_1[0xf] = *param_2;
  if (param_2[2] == 0) {
    fn_82424630(param_1,param_2 + 1);
  }
  else {
    fn_82424398(param_1,param_2 + 2);
  }
  param_1[0x10] = param_2[5];
  param_1[0x11] = param_2[6];
  param_1[0x12] = param_2[8];
  if ((param_2[4] == 0) || (uVar1 = 0, param_2[4] == 2)) {
    uVar1 = 1;
  }
  param_1[0x15] = uVar1;
  if ((param_2[4] == 1) || (param_2[4] == 2)) {
    uVar2 = 1;
  }
  param_1[0x16] = uVar2;
  param_1[0x13] = param_2[7];
  param_1[0x14] = param_2[8];
  return param_1;
}

