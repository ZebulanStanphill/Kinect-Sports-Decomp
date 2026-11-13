extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_82025B20;
extern unsigned int lbl_82025B28;


unsigned int * fn_828BF550(unsigned int *param_1)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025B28;
  param_1[0x14] = &lbl_82025B20;
  fn_828B5608(param_1 + 0x20);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}

