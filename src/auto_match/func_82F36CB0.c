extern int fn_82F36C18();
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154ADC;
extern unsigned int lbl_82154AE0;
extern unsigned int lbl_82154AE4;
extern unsigned int lbl_8215FE18;
extern unsigned int lbl_8215FE94;
extern unsigned int lbl_82162BB0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82F36CB0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_82F36C18();
  *param_1 = &lbl_8215FE18;
  param_1[1] = &lbl_8215FE94;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(unsigned short *)(param_1 + 0x1b) = 0;
  *(unsigned char *)((int)param_1 + 0x6e) = 0;
  param_1[0x17] = &lbl_82162BB0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(unsigned short *)(param_1 + 0x36) = 0;
  *(unsigned char *)((int)param_1 + 0xda) = 0;
  param_1[0x32] = &lbl_82162BB0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[4] = lbl_82154AD8;
  param_1[5] = lbl_82154ADC;
  param_1[6] = lbl_82154AE0;
  uVar1 = lbl_82154AE4;
  *(unsigned __int64 *)(param_1 + 8) = 0;
  param_1[0x4d] = 0;
  *(unsigned short *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[7] = uVar1;
  return param_1;
}

