extern int fn_82930378();
extern unsigned int lbl_82054198;


unsigned int *
fn_829B3508(unsigned int *param_1,unsigned __int64 *param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  fn_82930378(param_1,0x1c);
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  *param_1 = &lbl_82054198;
  param_1[8] = 0x8d1;
  param_1[9] = 0xe4;
  param_1[10] = param_7;
  param_1[0xb] = 0;
  *(unsigned __int64 *)(param_1 + 0xc) = *param_2;
  *(unsigned __int64 *)(param_1 + 0xe) = param_2[1];
  *(unsigned __int64 *)(param_1 + 0x10) = param_2[2];
  *(unsigned __int64 *)(param_1 + 0x12) = param_2[3];
  return param_1;
}

