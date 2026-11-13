extern int fn_8265CA20();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217D360;


unsigned int * fn_8303B440(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = &lbl_8217D360;
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

