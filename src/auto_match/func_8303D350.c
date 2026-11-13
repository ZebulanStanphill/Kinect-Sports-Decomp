extern int fn_8265CA20();
extern int fn_8304CCA8();
extern unsigned int lbl_8217D590;


unsigned int * fn_8303D350(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217D590;
  fn_8304CCA8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

