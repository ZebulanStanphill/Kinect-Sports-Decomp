void fn_8249DA08(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  
  puVar6 = *(unsigned int **)(param_1 + 0x10);
  do {
    puVar4 = puVar6;
    if (puVar4 == *(unsigned int **)(param_1 + 0x14)) {
      return;
    }
    puVar6 = puVar4 + 2;
  } while (puVar4[1] != param_2);
  puVar1 = *(unsigned int **)(param_1 + 0x14);
  if (puVar6 != puVar1) {
    puVar4 = puVar4 + -2;
    do {
      puVar4[2] = *puVar6;
      puVar2 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      puVar4[3] = *puVar2;
      puVar4 = puVar4 + 2;
    } while (puVar6 != puVar1);
  }
  iVar5 = *(int *)(param_1 + 0x14) + -8;
  for (iVar3 = iVar5; iVar3 != *(int *)(param_1 + 0x14); iVar3 = iVar3 + 8) {
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return;
}

