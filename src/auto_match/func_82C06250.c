extern int fn_82C06348();
extern unsigned int lbl_820EC938;


unsigned int * fn_82C06250(unsigned int *param_1)

{
  fn_82C06348(param_1);
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  { unsigned int *sub = param_1 + 0xb; sub[0] = 0xffffffff; }
  *param_1 = &lbl_820EC938;
  param_1[0xc] = 1;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  *(unsigned __int64 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}

