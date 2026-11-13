void *memcpy(void *, const void *, unsigned int);
extern unsigned int lbl_82162C1C;


unsigned int * fn_82F398D0(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_82162C1C;
  param_1[1] = *(unsigned int *)(param_2 + 4);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  param_1[4] = *(unsigned int *)(param_2 + 0x10);
  *(unsigned short *)(param_1 + 5) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned char *)((int)param_1 + 0x16) = *(unsigned char *)(param_2 + 0x16);
  memcpy(param_1 + 6,(void *)(param_2 + 0x18),0xa0);
  param_1[0x2e] = *(unsigned int *)(param_2 + 0xb8);
  return param_1;
}

