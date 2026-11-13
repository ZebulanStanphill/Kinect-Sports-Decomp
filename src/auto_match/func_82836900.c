extern int fn_8265CA20();
extern int fn_82835898();
extern unsigned int lbl_8201F444;


unsigned int * fn_82836900(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201F444;
  fn_82835898();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

