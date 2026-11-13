extern int fn_8265CA20();
extern int fn_8304B330();
extern int fn_8304D718();
extern unsigned int lbl_8217DB0C;


unsigned int * fn_8304BB40(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DB0C;
  fn_8304B330();
  fn_8304D718(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

