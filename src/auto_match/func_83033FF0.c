extern int fn_8265CA20();
extern int fn_8303EA68();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217D070;


unsigned int * fn_83033FF0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217D070;
  param_1[7] = &lbl_8217C940;
  fn_8303EA68();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

