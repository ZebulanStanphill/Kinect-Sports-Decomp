extern int fn_8265CA20();
extern int fn_8304DF08();
extern unsigned int lbl_8217DA58;


unsigned int * fn_83048E18(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DA58;
  fn_8304DF08();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

