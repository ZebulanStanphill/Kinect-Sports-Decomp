extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_820240FC;
extern unsigned int lbl_82024100;


unsigned int * fn_828A0FD0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82024100;
  param_1[0x14] = &lbl_820240FC;
  fn_828BDE70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

