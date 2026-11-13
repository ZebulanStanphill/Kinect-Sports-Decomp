extern int fn_82517E78();
extern int fn_8265CA20();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B96A8;


unsigned int * fn_8243C568(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 0x84) = 0;
    param_1[0x20] = 0;
  }
  fn_82517E78(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

