extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82023FE8;
extern unsigned int lbl_82023FF0;


unsigned int * fn_828A08E0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82023FF0;
  param_1[0x14] = &lbl_82023FE8;
  fn_828BDE70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

