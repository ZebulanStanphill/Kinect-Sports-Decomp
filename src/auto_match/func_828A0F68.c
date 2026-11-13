extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82024070;
extern unsigned int lbl_82024078;


unsigned int * fn_828A0F68(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82024078;
  param_1[0x14] = &lbl_82024070;
  fn_828BDE70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

