extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BFEDC;


unsigned int * fn_824AD208(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BFEDC;
  fn_82F53A10();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

