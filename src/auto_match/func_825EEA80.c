extern int fn_82622B68();
extern int fn_8265CA20();
extern unsigned int lbl_821CA26C;


unsigned int * fn_825EEA80(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821CA26C;
  fn_82622B68();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

