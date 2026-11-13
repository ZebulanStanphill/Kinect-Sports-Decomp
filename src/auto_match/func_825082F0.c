extern int fn_82521D28();
extern int fn_8265CA20();
extern unsigned int lbl_821C2258;


unsigned int * fn_825082F0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C2258;
  fn_82521D28();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

