extern int fn_8265CA20();
extern int fn_82883EE0();
extern unsigned int lbl_82022FD4;


unsigned int * fn_82884630(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82022FD4;
  fn_82883EE0(param_1 + 1);
  fn_8265CA20(param_1[1]);
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

