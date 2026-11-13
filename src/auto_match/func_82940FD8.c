extern int fn_82936290();
extern int fn_829603E0();
extern unsigned int lbl_820344C0;


unsigned int *
fn_82940FD8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_829603E0();
  param_1[0x17f] = 0;
  *param_1 = &lbl_820344C0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1c6] = 0xc;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  fn_82936290(param_1 + 0x7f,0x400,param_4);
  return param_1;
}

