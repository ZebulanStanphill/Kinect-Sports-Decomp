extern int fn_8265CA20();
extern int fn_8304E950();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217DC18;


unsigned int * fn_8304D7D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DC18;
  fn_8304E950(param_1 + 4);
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

