extern int fn_822B4CE0();
extern int fn_8265CA20();
extern unsigned int lbl_821AC980;


unsigned int * fn_822B4B60(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AC980;
  fn_822B4CE0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

