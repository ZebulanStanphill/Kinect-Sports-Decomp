extern int fn_8265CA20();
extern unsigned int lbl_82023970;


unsigned int * fn_828974F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82023970;
  if (param_1[2] != 0) {
    fn_8265CA20(param_1[2]);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

