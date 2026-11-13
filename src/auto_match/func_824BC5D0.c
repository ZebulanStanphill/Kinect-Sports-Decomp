extern int fn_8265CA20();
extern int fn_82864898();
extern unsigned int lbl_821C0618;


unsigned int * fn_824BC5D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C0618;
  fn_82864898(param_1 + 4);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

