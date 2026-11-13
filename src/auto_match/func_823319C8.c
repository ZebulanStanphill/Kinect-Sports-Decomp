extern int fn_82330BE8();
extern int fn_8265CA20();
extern unsigned int lbl_821B0988;


unsigned int * fn_823319C8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B0988;
  fn_82330BE8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

