unsigned __int64 fn_822EB0E0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int **ppuVar4;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  puVar2 = (unsigned int *)puVar1[1];
  puStack_10 = puVar1;
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
    if ((int)puVar3[3] < *param_2) {
      puVar2 = (unsigned int *)puVar3[2];
    }
    else {
      puVar2 = (unsigned int *)*puVar3;
      puStack_10 = puVar3;
    }
  }
  if ((puStack_10 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (int)puStack_10[3])) {
    apuStack_c[0] = *(unsigned int **)(param_1 + 4);
    ppuVar4 = apuStack_c;
  }
  else {
    ppuVar4 = &puStack_10;
  }
  if (*ppuVar4 != puVar1) {
    puVar1 = *(unsigned int **)(param_1 + 0x14);
    puVar2 = (unsigned int *)puVar1[1];
    apuStack_c[0] = puVar1;
    while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
      if ((int)puVar3[3] < param_2[1]) {
        puVar2 = (unsigned int *)puVar3[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar3;
        apuStack_c[0] = puVar3;
      }
    }
    if ((apuStack_c[0] == *(unsigned int **)(param_1 + 0x14)) || (param_2[1] < (int)apuStack_c[0][3]))
    {
      puStack_10 = *(unsigned int **)(param_1 + 0x14);
      ppuVar4 = &puStack_10;
    }
    else {
      ppuVar4 = apuStack_c;
    }
    if (*ppuVar4 != puVar1) {
      puVar1 = *(unsigned int **)(param_1 + 0x24);
      puVar2 = (unsigned int *)puVar1[1];
      apuStack_c[0] = puVar1;
      while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
        if ((int)puVar3[3] < param_2[2]) {
          puVar2 = (unsigned int *)puVar3[2];
        }
        else {
          puVar2 = (unsigned int *)*puVar3;
          apuStack_c[0] = puVar3;
        }
      }
      if ((apuStack_c[0] == *(unsigned int **)(param_1 + 0x24)) ||
         (param_2[2] < (int)apuStack_c[0][3])) {
        puStack_10 = *(unsigned int **)(param_1 + 0x24);
        ppuVar4 = &puStack_10;
      }
      else {
        ppuVar4 = apuStack_c;
      }
      if (*ppuVar4 != puVar1) {
        puVar1 = *(unsigned int **)(param_1 + 0x34);
        puVar2 = (unsigned int *)puVar1[1];
        apuStack_c[0] = puVar1;
        while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
          if ((int)puVar3[3] < param_2[3]) {
            puVar2 = (unsigned int *)puVar3[2];
          }
          else {
            puVar2 = (unsigned int *)*puVar3;
            apuStack_c[0] = puVar3;
          }
        }
        if ((apuStack_c[0] == *(unsigned int **)(param_1 + 0x34)) ||
           (param_2[3] < (int)apuStack_c[0][3])) {
          puStack_10 = *(unsigned int **)(param_1 + 0x34);
          ppuVar4 = &puStack_10;
        }
        else {
          ppuVar4 = apuStack_c;
        }
        if (*ppuVar4 != puVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}

