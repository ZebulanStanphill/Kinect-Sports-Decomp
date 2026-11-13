extern int fn_82E4B218();
extern int fn_82E50C30();
extern unsigned int lbl_82153B60;
extern unsigned int lbl_82153BE8;
extern unsigned int lbl_82153BF8;


unsigned int * fn_82E4B4C8(unsigned int *param_1,unsigned int *param_2)

{
  fn_82E4B218(param_1 + 2,0);
  *param_1 = &lbl_82153BF8;
  param_1[1] = &lbl_82153BE8;
  param_1[2] = &lbl_82153B60;
  param_1[0x15] = 0;
  fn_82E50C30(param_1 + 0x16);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x200;
  param_1[0x31] = 1;
  *(unsigned __int64 *)(param_1 + 0x32) = 0;
  *param_2 = 0;
  return param_1;
}

