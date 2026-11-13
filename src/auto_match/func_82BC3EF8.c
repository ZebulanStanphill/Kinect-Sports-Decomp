extern int fn_82BC3738();
extern unsigned int lbl_820E4678;


unsigned int * fn_82BC3EF8(unsigned int *param_1)

{
  fn_82BC3738();
  param_1[0x14] = 0x15;
  *param_1 = &lbl_820E4678;
  param_1[5] = 2;
  return param_1;
}

