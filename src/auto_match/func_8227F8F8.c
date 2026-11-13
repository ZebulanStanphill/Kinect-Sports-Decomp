extern int fn_82279AF0();
extern int fn_8265CA20();
extern unsigned int lbl_821A89BC;


unsigned int * fn_8227F8F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821A89BC;
  fn_82279AF0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

