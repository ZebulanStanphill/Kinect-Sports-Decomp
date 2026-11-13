__int64 fn_82822580(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  puVar3 = (unsigned int *)*param_1;
  while (puVar1 = puVar3, puVar1 != (unsigned int *)0x0) {
    param_1 = puVar1;
    puVar3 = (unsigned int *)*puVar1;
  }
  lVar4 = 0;
  for (iVar2 = param_1[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    lVar4 = lVar4 + 1;
  }
  return lVar4;
}

