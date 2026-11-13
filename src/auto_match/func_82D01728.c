__int64 fn_82D01728(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar2 = 0;
  for (puVar1 = *(unsigned int **)(param_1 + 0xc); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    lVar2 = (unsigned __int64)(unsigned int)puVar1[3] + lVar2;
  }
  lVar3 = 0;
  for (puVar1 = *(unsigned int **)(param_1 + 0x10); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    lVar3 = (unsigned __int64)(unsigned int)puVar1[3] + lVar3;
  }
  return lVar3 + lVar2;
}

