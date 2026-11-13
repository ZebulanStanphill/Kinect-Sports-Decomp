extern unsigned int lbl_82162C1C;
extern unsigned int lbl_82162C24;


void fn_82F3A790(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_82162C24;
  param_1[9] = 0;
  param_1[10] = 0;
  *(unsigned short *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x36) = 0;
  lVar1 = 0x13;
  puVar2 = param_1 + 0x42;
  param_1[8] = &lbl_82162C1C;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  do {
    puVar2[-1] = 0;
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    *(unsigned short *)(puVar2 + 3) = 0;
    *(unsigned char *)((int)puVar2 + 0xe) = 0;
    puVar2[0x2c] = 0;
    puVar2[-2] = &lbl_82162C1C;
    puVar2[0x2d] = 0;
    puVar2 = puVar2 + 0x37;
  } while (-1 < lVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned short *)(param_1 + 0x3a) = 0;
  *(unsigned char *)((int)param_1 + 0xea) = 0;
  param_1[0x487] = 0;
  return;
}

