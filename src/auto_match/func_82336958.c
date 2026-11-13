extern int fn_823410C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B0CA0;


unsigned int * fn_82336958(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B0CA0;
  fn_823410C8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

