extern int fn_82BE56C0();
extern int fn_82BF7A60();
extern unsigned int lbl_820EBD64;


unsigned int * fn_82BF82A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBD64;
  fn_82BF7A60();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

