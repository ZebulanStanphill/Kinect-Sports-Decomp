extern int fn_82954BD0();
extern unsigned int lbl_82051EB0;


unsigned int * fn_829A9A18(unsigned int *param_1,unsigned int param_2)

{
  fn_82954BD0();
  param_1[0x38] = param_2;
  param_1[0x7f] = 0;
  *param_1 = &lbl_82051EB0;
  return param_1;
}

