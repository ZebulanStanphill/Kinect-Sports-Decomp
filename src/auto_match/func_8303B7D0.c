extern int fn_8265CA20();
extern int fn_8302BA30();
extern unsigned int lbl_8217D3F0;


unsigned int * fn_8303B7D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217D3F0;
  fn_8302BA30();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

