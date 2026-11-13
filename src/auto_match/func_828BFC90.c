extern int fn_828BDDA0();
extern unsigned int lbl_82025010;
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


unsigned int * fn_828BFC90(unsigned int *param_1)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025D58;
  param_1[0x14] = &lbl_82025D50;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xf;
  *(unsigned char *)(param_1 + 0x29) = 0;
  param_1[0x30] = &lbl_82025010;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(unsigned short *)(param_1 + 0x35) = 0x8000;
  return param_1;
}

