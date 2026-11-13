extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_821970D0;


unsigned int * fn_82240630(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821970D0;
  fn_82897D88();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

