extern int fn_82BFF9F0();


void fn_82C011F0(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  fn_82BFF9F0();
  puVar1 = (unsigned int *)(param_1 + 0x11c);
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x144) = 0;
  *(unsigned int *)(param_1 + 0x148) = 0;
  lVar2 = 9;
  *(unsigned int *)(param_1 + 0x174) = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(unsigned int *)(param_1 + 0x14c) = 0;
  *(unsigned int *)(param_1 + 0x150) = 0;
  *(unsigned int *)(param_1 + 0x154) = 0;
  *(unsigned int *)(param_1 + 0x158) = 0;
  *(unsigned int *)(param_1 + 0x15c) = 0;
  *(unsigned int *)(param_1 + 0x160) = 0;
  *(unsigned int *)(param_1 + 0x164) = 0;
  *(unsigned int *)(param_1 + 0x168) = 0;
  *(unsigned int *)(param_1 + 0x16c) = 0;
  return;
}

