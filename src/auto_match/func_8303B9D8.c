extern int fn_8303F0D0();
extern unsigned int lbl_8217D440;


unsigned int * fn_8303B9D8(unsigned int *param_1)

{
  fn_8303F0D0();
  *(unsigned char *)(param_1 + 10) = 0;
  *param_1 = &lbl_8217D440;
  param_1[0xb] = 0xffffffff;
  return param_1;
}

