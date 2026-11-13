extern int fn_828BDDA0();
extern unsigned int lbl_82025658;
extern unsigned int lbl_82025660;


unsigned int *
fn_828C8008(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  fn_828BDDA0();
  param_1[0x20] = param_4;
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  *param_1 = &lbl_82025660;
  param_1[0x14] = &lbl_82025658;
  return param_1;
}

