extern int fn_8265CA20();
extern int fn_8303F130();
extern unsigned int lbl_8217DBC8;


unsigned int * fn_8304D540(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DBC8;
  fn_8303F130();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

