extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82025010;
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


void fn_828BFD18(unsigned int *param_1)

{
  *param_1 = &lbl_82025D58;
  param_1[0x14] = &lbl_82025D50;
  param_1[0x30] = &lbl_82025010;
  if (param_1[0x31] != 0) {
    fn_8265CA20();
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (0xf < (unsigned int)param_1[0x2e]) {
    fn_8265CA20(param_1[0x29]);
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xf;
  *(unsigned char *)(param_1 + 0x29) = 0;
  fn_828BDE70(param_1);
  return;
}

