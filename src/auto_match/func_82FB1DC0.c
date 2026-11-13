extern int fn_82FB63E0();
extern unsigned int lbl_8216D428;
extern unsigned int lbl_8216D430;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_821968A4;


unsigned int * fn_82FB1DC0(unsigned int *param_1)

{
  fn_82FB63E0();
  param_1[0x2c] = 0;
  param_1[0x2b] = &lbl_821968A4;
  param_1[0x2d] = 0;
  param_1[0x2b] = &lbl_8216D428;
  *param_1 = &lbl_8216D430;
  param_1[7] = &lbl_8217C940;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(unsigned char *)(param_1 + 0x34) = 1;
  return param_1;
}

