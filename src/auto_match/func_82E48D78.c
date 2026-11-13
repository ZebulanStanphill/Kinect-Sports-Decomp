extern int fn_82E47EE8();
extern unsigned int lbl_821539A8;


unsigned int * fn_82E48D78(unsigned int *param_1,unsigned int *param_2)

{
  fn_82E47EE8(param_1,0);
  param_1[0xc] = 0;
  *param_1 = &lbl_821539A8;
  param_1[0xb] = 1;
  param_1[0xd] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1 + 0x1a;
  *param_2 = 0;
  return param_1;
}

