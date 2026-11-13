extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200D900;
extern unsigned int lbl_8200D9C0;
extern unsigned int lbl_8200DA00;


void fn_826EFAF8(unsigned int *param_1,unsigned __int64 param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_8200D900;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[4] = param_1[4] & 0x3fffff | 0x8400000;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_1 + 5) & 1 | 0x40;
  param_1[6] = 0;
  *(unsigned char *)((int)param_1 + 0x16) = *(unsigned char *)((int)param_1 + 0x16) & 0xf | 0x80;
  param_1[3] = &lbl_8200C4D4;
  param_1[6] = param_1 + 0x13;
  *param_1 = &lbl_8200D9C0;
  param_1[3] = &lbl_8200DA00;
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) & 0x3f;
  param_1[7] = param_1[7] & 0x7ffffff | 0x50000000;
  *(unsigned __int64 *)(param_1 + 10) = param_2 & 0xffffffff;
  *(unsigned char *)(param_1 + 0x13) = 0;
  return;
}

