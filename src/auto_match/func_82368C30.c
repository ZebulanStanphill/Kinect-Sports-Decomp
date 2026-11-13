unsigned int fn_82368C30(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int **ppuVar6;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  if (*(int *)(param_1 + 0x41c) == 0) {
    return 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x424);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x420) * 4 + **(int **)(param_1 + 8));
  iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
  puStack_10 = *(unsigned int **)(iVar3 + 4);
  puVar4 = (unsigned int *)puStack_10[1];
  while (puVar5 = puVar4, *(char *)((int)puVar5 + 0x15) == '\0') {
    if ((unsigned int)puVar5[3] < uVar1) {
      puVar4 = (unsigned int *)puVar5[2];
    }
    else {
      puVar4 = (unsigned int *)*puVar5;
      puStack_10 = puVar5;
    }
  }
  apuStack_c[0] = *(unsigned int **)(iVar3 + 4);
  if ((puStack_10 == apuStack_c[0]) || (uVar1 < (unsigned int)puStack_10[3])) {
    ppuVar6 = apuStack_c;
  }
  else {
    ppuVar6 = &puStack_10;
  }
  return (*ppuVar6)[4];
}

