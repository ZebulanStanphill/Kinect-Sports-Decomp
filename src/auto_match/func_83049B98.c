extern int fn_8265CA20();
extern int fn_830490E0();
extern int fn_8304D718();
extern unsigned int lbl_8217DA9C;


unsigned int * fn_83049B98(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DA9C;
  fn_830490E0();
  fn_8304D718(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

