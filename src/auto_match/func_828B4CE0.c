extern int fn_8265CA20();
extern int fn_828B22F0();
extern int fn_828B3E88();
extern unsigned int lbl_82024E20;


unsigned int * fn_828B4CE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82024E20;
  fn_828B22F0(param_1 + 8);
  fn_8265CA20(param_1[8]);
  fn_828B3E88(param_1 + 2);
  fn_8265CA20(param_1[2]);
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

