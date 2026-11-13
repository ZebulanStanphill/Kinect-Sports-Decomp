extern int fn_82BE56C0();
extern int fn_82BFB150();
extern unsigned int lbl_820EBED4;


unsigned int * fn_82BFB788(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBED4;
  fn_82BFB150();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

