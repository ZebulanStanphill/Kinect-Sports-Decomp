extern int fn_82F3BF68();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154ACC;
extern unsigned int lbl_82154AD0;
extern unsigned int lbl_82154AD4;
extern unsigned int lbl_82162CD4;
extern unsigned int lbl_82162CE8;


unsigned int * fn_82F3C000(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_82F3BF68();
  param_1[0x12] = 1;
  param_1[1] = &lbl_82162CD4;
  *param_1 = &lbl_82162CE8;
  param_1[0x13] = 1;
  param_1[0x14] = lbl_8202E618;
  param_1[0x15] = lbl_8202E61C;
  param_1[0x16] = lbl_8202E620;
  uVar1 = lbl_8202E624;
  *(unsigned __int64 *)(param_1 + 0x18) = 10000000;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = uVar1;
  param_1[4] = lbl_82154AC8;
  param_1[5] = lbl_82154ACC;
  param_1[6] = lbl_82154AD0;
  uVar1 = lbl_82154AD4;
  *(unsigned __int64 *)(param_1 + 8) = 0x38;
  param_1[7] = uVar1;
  return param_1;
}

