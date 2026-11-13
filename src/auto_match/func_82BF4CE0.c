extern int fn_82BE56C0();
extern int fn_82BF4560();
extern unsigned int lbl_820EB9CC;


unsigned int * fn_82BF4CE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EB9CC;
  fn_82BF4560();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

