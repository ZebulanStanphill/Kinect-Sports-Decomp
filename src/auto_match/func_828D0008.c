extern int fn_8265CA20();
extern int fn_828AC488();
extern int fn_82CE07C8();
extern unsigned int lbl_82026788;


unsigned int * fn_828D0008(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82026788;
  if (param_1[0x21] != 0) {
    fn_82CE07C8(param_1[0x21]);
    param_1[0x21] = 0;
  }
  fn_828AC488(param_1 + 0x18);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

