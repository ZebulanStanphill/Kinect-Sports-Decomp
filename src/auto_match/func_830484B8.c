extern int fn_8265CA20();
extern int fn_8304D718();
extern unsigned int lbl_8217DA20;


unsigned int * fn_830484B8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DA20;
  fn_8304D718();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

