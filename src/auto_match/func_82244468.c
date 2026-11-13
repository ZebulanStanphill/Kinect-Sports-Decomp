extern int fn_82517E78();
extern int fn_8265CA20();
extern unsigned int lbl_82197648;
extern unsigned int lbl_82197688;


unsigned int * fn_82244468(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197648;
  param_1[0x1a] = &lbl_82197688;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 0x3f4) = 0;
    param_1[0x20] = 0;
  }
  fn_82517E78(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

