void fn_8249D128(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar5 = *(int *)(param_1 + 0x30);
  do {
    iVar4 = iVar5;
    if (iVar4 == *(int *)(param_1 + 0x34)) {
      return;
    }
    iVar5 = iVar4 + 0x14;
  } while (*(int *)(iVar4 + 0x10) != param_2);
  iVar1 = *(int *)(param_1 + 0x34);
  for (; iVar5 != iVar1; iVar5 = iVar5 + 0x14) {
    puVar3 = (unsigned int *)(iVar5 + -4);
    puVar2 = (unsigned int *)(iVar4 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar4 = iVar4 + 0x14;
  }
  iVar4 = *(int *)(param_1 + 0x34) + -0x14;
  for (iVar5 = iVar4; iVar5 != *(int *)(param_1 + 0x34); iVar5 = iVar5 + 0x14) {
  }
  *(int *)(param_1 + 0x34) = iVar4;
  return;
}

