extern int fn_82233888();
extern int fn_8265CA20();
extern unsigned int lbl_821982B0;


unsigned int * fn_82257658(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821982B0;
  fn_82233888();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

