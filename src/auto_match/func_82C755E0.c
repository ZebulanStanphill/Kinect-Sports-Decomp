void fn_82C755E0(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)(param_1 + -4);
  lVar2 = 4;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

