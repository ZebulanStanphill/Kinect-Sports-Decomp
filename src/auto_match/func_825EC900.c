extern int fn_82623608();
extern int fn_8265CA20();
extern unsigned int lbl_821CA200;


unsigned int * fn_825EC900(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821CA200;
  fn_82623608();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

