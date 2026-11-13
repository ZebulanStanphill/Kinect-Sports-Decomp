extern int fn_8248F8E8();
extern int fn_82497250();
extern unsigned int lbl_821BEF18;


unsigned int * fn_82496E30(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEF18;
  fn_82497250();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

