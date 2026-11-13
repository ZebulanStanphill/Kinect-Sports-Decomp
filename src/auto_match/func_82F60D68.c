extern int fn_82F619E8();
extern unsigned int lbl_82167E5C;


unsigned int * fn_82F60D68(unsigned int *param_1)

{
  *param_1 = &lbl_82167E5C;
  fn_82F619E8(param_1 + 1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}

