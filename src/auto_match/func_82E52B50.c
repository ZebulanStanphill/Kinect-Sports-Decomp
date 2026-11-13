extern int fn_82E50C30();
extern int fn_82E63428();
extern unsigned int lbl_82154748;


unsigned int * fn_82E52B50(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_82154748;
  fn_82E50C30(param_1 + 1);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  fn_82E63428(param_1,param_2);
  return param_1;
}

