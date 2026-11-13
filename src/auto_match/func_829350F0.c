extern int fn_82930378();
extern unsigned int lbl_8202F380;


unsigned int *
fn_829350F0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6)

{
  fn_82930378(param_1,0x19);
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  *param_1 = &lbl_8202F380;
  param_1[8] = 0xf0000;
  param_1[9] = 0xe40000;
  param_1[10] = param_6;
  return param_1;
}

