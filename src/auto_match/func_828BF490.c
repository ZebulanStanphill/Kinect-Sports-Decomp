extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_82025A98;
extern unsigned int lbl_82025AA0;


unsigned int * fn_828BF490(unsigned int *param_1)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025AA0;
  param_1[0x14] = &lbl_82025A98;
  fn_828B5608(param_1 + 0x20);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  return param_1;
}

