void fn_82FC9F38(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x1b0) = 0;
  lVar2 = 0x10;
  do {
    puVar1[-0x1f] = 0;
    puVar1[-0xf] = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (unsigned int *)(param_1 + 500);
  lVar2 = 8;
  do {
    puVar1[-0xf] = 0;
    puVar1[-7] = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

