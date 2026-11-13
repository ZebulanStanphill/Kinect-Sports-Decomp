extern int fn_8227B1D0();
extern int fn_8265CA20();
extern unsigned int lbl_821AC05C;


unsigned int * fn_822A33F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AC05C;
  fn_8227B1D0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

