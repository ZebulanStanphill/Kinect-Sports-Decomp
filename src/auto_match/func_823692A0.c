unsigned int fn_823692A0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int **ppuVar6;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + (unsigned int)(param_3 == 0) * 4);
  uVar4 = 0;
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(unsigned int *)(iVar2 + 8) != 0) {
    do {
      if (*(int *)(((unsigned int)(param_3 == 0) * 7 + 0x59 + uVar4) * 0x30 + param_1) ==
          *(int *)((param_3 * 7 + param_2 + 0x59) * 0x30 + param_1)) {
        puVar3 = (unsigned int *)(*(unsigned int **)(iVar2 + 4))[1];
        puStack_10 = *(unsigned int **)(iVar2 + 4);
        while (puVar5 = puVar3, *(char *)((int)puVar5 + 0x15) == '\0') {
          if ((unsigned int)puVar5[3] < uVar4) {
            puVar3 = (unsigned int *)puVar5[2];
          }
          else {
            puVar3 = (unsigned int *)*puVar5;
            puStack_10 = puVar5;
          }
        }
        if ((puStack_10 == *(unsigned int **)(iVar2 + 4)) || (uVar4 < (unsigned int)puStack_10[3])) {
          apuStack_c[0] = *(unsigned int **)(iVar2 + 4);
          ppuVar6 = apuStack_c;
        }
        else {
          ppuVar6 = &puStack_10;
        }
        return (*ppuVar6)[4];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(unsigned int *)(iVar2 + 8));
  }
  return 0;
}

