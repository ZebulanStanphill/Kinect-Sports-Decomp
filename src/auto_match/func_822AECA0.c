extern int fn_822AEE20();
extern int fn_8265CA20();
extern unsigned int lbl_821AC508;


unsigned int * fn_822AECA0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AC508;
  fn_822AEE20();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

