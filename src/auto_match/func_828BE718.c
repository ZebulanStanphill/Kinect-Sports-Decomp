extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82025878;
extern unsigned int lbl_82025880;


unsigned int * fn_828BE718(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82025880;
  param_1[0x14] = &lbl_82025878;
  fn_828BDE70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

