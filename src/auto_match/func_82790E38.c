extern int fn_8268C210();
extern int fn_82724A80();
extern unsigned int lbl_82015628;


unsigned int * fn_82790E38(unsigned int *param_1)

{
  fn_82724A80();
  *param_1 = &lbl_82015628;
  fn_8268C210(param_1 + 0xe);
  fn_8268C210(param_1 + 0xf);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x13) = 0;
  return param_1;
}

