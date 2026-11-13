extern int fn_82381BC0();


__int64 fn_822AA7E0(int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *apuStack_20 [2];
  
  lVar2 = 0;
  puVar1 = *(unsigned int **)(*(int *)(param_1[4] * 4 + *param_1) + 4);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while (apuStack_20[0] != puVar1) {
    if (*(int *)(apuStack_20[0][4] + 0x24) != 0) {
      lVar2 = lVar2 + 1;
    }
    fn_82381BC0(apuStack_20);
  }
  return lVar2;
}

