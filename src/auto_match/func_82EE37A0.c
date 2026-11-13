extern unsigned int lbl_8215FC70;


void fn_82EE37A0(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  *param_1 = &lbl_8215FC70;
  puVar1 = param_1 + 5;
  *(unsigned short *)(param_1 + 3) = 0;
  param_1[4] = 0;
  lVar2 = 0x14;
  do {
    *(unsigned short *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned short *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x16) = 0;
  *param_1 = &lbl_8215FC70;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return;
}

