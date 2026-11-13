extern int fn_8265CA20();
extern int fn_83049CF0();
extern int fn_8304D718();
extern unsigned int lbl_8217DAD4;


unsigned int * fn_8304B228(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DAD4;
  fn_83049CF0();
  fn_8304D718(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

