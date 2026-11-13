extern int fn_82703910();


unsigned int * fn_827039E8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x48) != *param_1) {
    param_1[3] = 0;
    *param_1 = *(int *)(iVar2 + 0x48);
  }
  iVar1 = param_1[3];
  puVar4 = *(unsigned int **)(iVar1 * 0xc + iVar2);
  if (puVar4 == (unsigned int *)0x0) {
    do {
      iVar1 = iVar1 + 1;
      param_1[3] = iVar1;
      if (5 < iVar1) break;
      puVar4 = *(unsigned int **)(iVar1 * 0xc + iVar2);
    } while (puVar4 == (unsigned int *)0x0);
    if (puVar4 == (unsigned int *)0x0) goto LAB_82703a98;
  }
  iVar2 = param_1[3] * 0xc + iVar2;
  if (puVar4 == *(unsigned int **)(iVar2 + 4)) {
    *(unsigned int *)(iVar2 + 4) = *puVar4;
  }
  *(unsigned int *)(param_1[3] * 0xc + param_1[1]) = *puVar4;
  *puVar4 = 0;
LAB_82703a98:
  piVar3 = (int *)(param_1[3] * 0xc + param_1[1]);
  if (*piVar3 == 0) {
    piVar3[1] = 0;
    *(unsigned int *)(param_1[3] * 0xc + param_1[1] + 8) = 0;
  }
  if (param_1[2] != 0) {
    fn_82703910(param_1[1]);
  }
  param_1[2] = (int)puVar4;
  return puVar4;
}

