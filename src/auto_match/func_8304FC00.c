extern int fn_8265CA20(param_1);
extern unsigned int lbl_8217DD8C;


unsigned int * fn_8304FC00(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DD8C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

