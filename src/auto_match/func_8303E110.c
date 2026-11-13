extern int fn_8265CA20();
extern int fn_8303ECB0();
extern unsigned int lbl_8217D6B0;


unsigned int * fn_8303E110(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217D6B0;
  fn_8303ECB0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

