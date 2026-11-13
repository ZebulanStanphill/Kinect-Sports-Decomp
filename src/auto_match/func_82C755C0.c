void fn_82C755C0(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)(param_1 + -0xc);
  lVar2 = 8;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

