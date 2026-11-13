extern int fn_822C71C8();
extern int fn_8265CA20();
extern unsigned int lbl_821ADAB4;


unsigned int * fn_822D8AE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821ADAB4;
  fn_822C71C8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

