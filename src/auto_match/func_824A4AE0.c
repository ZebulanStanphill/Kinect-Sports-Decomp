extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BF668;


unsigned int * fn_824A4AE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BF668;
  fn_82F53A10();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

