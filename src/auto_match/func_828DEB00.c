extern int fn_822360C8();
extern int fn_8265CA20();
extern int fn_828AC488();
extern int fn_828BDE70();
extern unsigned int lbl_820270D4;
extern unsigned int lbl_820270D8;


unsigned int * fn_828DEB00(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820270D8;
  param_1[0x14] = &lbl_820270D4;
  fn_828AC488(param_1 + 0x3c);
  fn_822360C8(param_1 + 0x38);
  fn_822360C8(param_1 + 0x34);
  fn_828BDE70(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

