void fn_82FC99C0(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)(param_1 + 0x4c);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  lVar2 = 8;
  do {
    puVar1[-0xf] = 0;
    puVar1[-7] = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (unsigned int *)(param_1 + 0x104);
  lVar2 = 4;
  do {
    puVar1[-7] = 0;
    puVar1[-3] = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

