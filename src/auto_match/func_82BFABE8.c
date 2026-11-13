extern int fn_82BE56C0();
extern int fn_82BE8CF8();
extern unsigned int lbl_820EBE74;


unsigned int * fn_82BFABE8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBE74;
  fn_82BE8CF8();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

