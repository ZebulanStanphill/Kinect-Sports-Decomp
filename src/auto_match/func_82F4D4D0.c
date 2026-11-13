extern int fn_8265CA20();
extern int fn_82F53B68();
extern unsigned int lbl_821655CC;


unsigned int * fn_82F4D4D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821655CC;
  fn_82F53B68();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

