extern int fn_826D0280();
extern int fn_826D0310();
extern unsigned int lbl_8200C1CC;


unsigned int * fn_826D3F58(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  *param_1 = &lbl_8200C1CC;
  fn_826D0280(param_1 + 2);
  puVar1 = param_1 + 6;
  lVar2 = 4;
  do {
    puVar1 = puVar1 + 4;
    *(unsigned char *)puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(unsigned char *)(param_1 + 0x1f) = 0;
  fn_826D0310(param_1 + 0x20);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(unsigned char *)(param_1 + 0x2c) = 10;
  param_1[0x30] = 0;
  *(unsigned short *)(param_1 + 0x31) = 0;
  *(unsigned char *)((int)param_1 + 0xc6) = *(unsigned char *)((int)param_1 + 0xc6) & 0x3f;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}

