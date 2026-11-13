extern int fn_82930378();
extern unsigned int lbl_8202F374;


unsigned int *
fn_82934EB8(unsigned int *param_1,unsigned __int64 *param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5)

{
  unsigned __int64 uVar1;
  
  fn_82930378(param_1,0x18);
  *param_1 = &lbl_8202F374;
  *(unsigned __int64 *)(param_1 + 4) = *param_2;
  *(unsigned __int64 *)(param_1 + 6) = param_2[1];
  *(unsigned __int64 *)(param_1 + 8) = param_2[2];
  uVar1 = param_2[3];
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(unsigned __int64 *)(param_1 + 10) = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}

