extern int fn_8265CA20();
extern int fn_82FAA728();
extern unsigned int lbl_8216D7E4;


unsigned int * fn_82FB61C8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216D7E4;
  fn_82FAA728();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

