extern int fn_82381BC0();


__int64 fn_8289EFB8(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *apuStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 0x220);
  lVar2 = 0;
  apuStack_20[0] = (unsigned int *)*puVar1;
  while (apuStack_20[0] != puVar1) {
    lVar2 = (unsigned __int64)*(unsigned int *)(apuStack_20[0][4] + 0x10) + lVar2;
    fn_82381BC0(apuStack_20);
  }
  return lVar2;
}

