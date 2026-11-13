extern int fn_822F2470();
extern int fn_8265CA20();
extern unsigned int lbl_821AE5C8;


unsigned int * fn_822F2720(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AE5C8;
  fn_822F2470();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

