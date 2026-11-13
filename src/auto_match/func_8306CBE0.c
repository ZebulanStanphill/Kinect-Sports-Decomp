extern int fn_8306DAB0();
extern unsigned int lbl_8217EB38;
extern unsigned int lbl_8217EB64;


unsigned int * fn_8306CBE0(unsigned int *param_1)

{
  *param_1 = &lbl_8217EB64;
  param_1[2] = &lbl_8217EB38;
  param_1[1] = 1;
  fn_8306DAB0(param_1 + 0x20);
  param_1[0x6c8] = 0;
  param_1[0x6d0] = 0;
  param_1[0x6d1] = 0;
  return param_1;
}

