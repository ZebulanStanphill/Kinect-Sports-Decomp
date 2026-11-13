extern int fn_8227DCF8();
extern int fn_8265CA20();
extern unsigned int lbl_821A87C0;


unsigned int * fn_8227EE08(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821A87C0;
  fn_8227DCF8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

