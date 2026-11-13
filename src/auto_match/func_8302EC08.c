extern int fn_8265CA20();
extern int fn_8302D2E8();
extern int fn_8303EA68();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217C948;


unsigned int * fn_8302EC08(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217C948;
  param_1[7] = &lbl_8217C940;
  fn_8302D2E8();
  fn_8303EA68(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

