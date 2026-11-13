extern int fn_8265CA20();
extern int fn_828A8678();
extern unsigned int lbl_821968A8;


unsigned int * fn_82231E38(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821968A8;
  fn_828A8678();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

