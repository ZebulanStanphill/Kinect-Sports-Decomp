extern int fn_82489928();
extern int fn_8265CA20();
extern unsigned int lbl_821BE9C4;


unsigned int * fn_82489F20(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BE9C4;
  fn_82489928(param_1[4],param_1[3]);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

