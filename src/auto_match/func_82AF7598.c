unsigned int fn_82AF7598(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  puVar4 = (unsigned int *)(-(unsigned int)((uVar1 & 1) == 0) & uVar1);
  iVar5 = *(int *)(param_1 + 8) + 1;
  uVar3 = puVar4[*(int *)(param_1 + 8) + 2];
  *(int *)(param_1 + 8) = iVar5;
  uVar1 = *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1 & 0xfffffffe) + 4);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    if (iVar5 != 10) {
      return uVar3;
    }
    puVar2 = (unsigned int *)((unsigned int)puVar4 & 0xfffffffe);
    *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
    iVar5 = *(int *)(param_1 & 0xfffff000);
    *puVar4 = *(unsigned int *)(iVar5 + 0x2c);
    *(unsigned int **)(iVar5 + 0x2c) = puVar4;
    *(unsigned int *)(param_1 + 8) = 0;
    return uVar3;
  }
  if (iVar5 != 10) {
    return uVar3;
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return uVar3;
}

