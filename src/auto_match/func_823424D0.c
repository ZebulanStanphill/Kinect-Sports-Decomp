extern int fn_82349F18();
extern int fn_8265CA20();
extern unsigned int lbl_821B1880;


unsigned int * fn_823424D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B1880;
  fn_82349F18();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

