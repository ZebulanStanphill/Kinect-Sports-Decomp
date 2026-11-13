extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200D900;
extern unsigned int lbl_8200DA00;
extern unsigned int lbl_8200DA08;


void fn_826F01D0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  param_2[1] = param_3;
  *(unsigned char *)(param_2 + 2) = 0;
  *param_2 = &lbl_8200D900;
  *(unsigned char *)((int)param_2 + 0x15) = 0;
  param_2[6] = 0;
  param_2[4] = param_2[4] & 0x3fffff | 0x8400000;
  *(unsigned char *)((int)param_2 + 0x16) = *(unsigned char *)((int)param_2 + 0x16) & 0xf | 0x80;
  *(unsigned char *)(param_2 + 5) = *(unsigned char *)(param_2 + 5) & 1 | 0x40;
  param_2[3] = &lbl_8200C4D4;
  param_2[6] = (int)param_2 + 0x187;
  param_2[7] = 0;
  param_2[10] = 0;
  *(unsigned __int64 *)(param_2 + 8) = param_1;
  *(unsigned char *)((int)param_2 + 0x187) = 0;
  *param_2 = &lbl_8200DA08;
  param_2[3] = &lbl_8200DA00;
  param_2[4] = param_2[4] & 0x7ffffff | 0x30000000;
  return;
}

