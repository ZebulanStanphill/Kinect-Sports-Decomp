extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82026F50;
extern unsigned int lbl_82026F58;


unsigned int * fn_828DD210(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82026F58;
  param_1[0x14] = &lbl_82026F50;
  fn_828BDE70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

