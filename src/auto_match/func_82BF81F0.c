extern int fn_82BE56C0();
extern int fn_82BF7A60();
extern unsigned int lbl_820EBCE4;


unsigned int * fn_82BF81F0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBCE4;
  fn_82BF7A60();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

