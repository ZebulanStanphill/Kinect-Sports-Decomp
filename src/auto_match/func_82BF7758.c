extern int fn_82BE56C0();
extern int fn_82BE8CF8();
extern int fn_82BF7370();
extern unsigned int lbl_820EBC08;


unsigned int * fn_82BF7758(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBC08;
  fn_82BF7370();
  fn_82BE8CF8(param_1);
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

