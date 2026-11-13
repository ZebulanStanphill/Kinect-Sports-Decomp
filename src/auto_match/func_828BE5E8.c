extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern unsigned int lbl_820256E0;
extern unsigned int lbl_820256E8;


unsigned int * fn_828BE5E8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820256E8;
  param_1[0x14] = &lbl_820256E0;
  fn_828B55B0(param_1 + 0x21);
  fn_828BDE70(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

