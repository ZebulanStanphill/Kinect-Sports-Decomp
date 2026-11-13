extern int fn_82BE56C0();
extern int fn_82BE5998();
extern unsigned int lbl_820EB10C;


unsigned int * fn_82BEE2C8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EB10C;
  fn_82BE5998();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

