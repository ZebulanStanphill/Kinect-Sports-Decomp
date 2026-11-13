extern int fn_82A512B8();
extern int fn_82A5A1A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82089758;
extern unsigned int lbl_82089788;
extern unsigned int lbl_820897F8;


unsigned int * fn_82A44520(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82A512B8(param_1 + 1,param_2,0,0);
  *param_1 = &lbl_820897F8;
  param_1[0x24] = 0;
  param_1[1] = &lbl_82089788;
  param_1[0x23] = &lbl_82089758;
  param_1[0x25] = 0;
  param_1[0x26] = param_1 + 0x27;
  param_1[0x2e] = 1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar2 = lbl_82002AE0;
  param_1[0x27] = 0;
  iVar1 = param_1[0x26];
  *(unsigned int *)(iVar1 + 8) = param_1[0x25];
  param_1[0x25] = iVar1 + 4;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = uVar2;
  param_1[0x31] = param_3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(unsigned short *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  fn_82A5A1A8(param_1 + 0x39);
  return param_1;
}

