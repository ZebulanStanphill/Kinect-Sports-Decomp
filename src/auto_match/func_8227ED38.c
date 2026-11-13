extern int fn_824BFB68();
extern int fn_826286B0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821A87A4;
extern unsigned int lbl_821A87C0;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_8227ED38(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &lbl_821A87A4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_4;
  param_1[0x13] = 0;
  fn_826286B0(param_1 + 3,10);
  fn_824BFB68(param_1 + 7,0x28);
  uVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_821916FC;
  *param_1 = &lbl_821A87C0;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar1;
  return param_1;
}

