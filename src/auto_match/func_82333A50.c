extern int fn_822C87C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B0AAC;


unsigned int * fn_82333A50(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B0AAC;
  fn_822C87C8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

