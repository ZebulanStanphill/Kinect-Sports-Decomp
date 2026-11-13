extern int fn_82BE56C0();
extern int fn_82BF4138();
extern unsigned int lbl_820E9B40;


unsigned int * fn_82BE8C88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820E9B40;
  fn_82BF4138();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

