extern int fn_82517D50();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B96A8;


unsigned int * fn_8236D8F8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  fn_82517D50(param_1,param_2,9);
  param_1[0x20] = param_3;
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  return param_1;
}

