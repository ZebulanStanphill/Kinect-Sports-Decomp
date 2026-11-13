extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82248B90();


unsigned int * fn_825138E0(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puStack_40;
  unsigned int *apuStack_3c [1];
  
  puVar6 = *(unsigned int **)(param_2 + 8);
  puVar4 = (unsigned int *)puVar6[1];
  puStack_40 = puVar6;
  while (puVar3 = puVar4, *(char *)((int)puVar3 + 0x19) == '\0') {
    if ((unsigned int)puVar3[3] < param_3) {
      puVar4 = (unsigned int *)puVar3[2];
    }
    else {
      if ((*(char *)((int)puVar6 + 0x19) != '\0') && (param_3 < (unsigned int)puVar3[3])) {
        puVar6 = puVar3;
      }
      puVar4 = (unsigned int *)*puVar3;
      puStack_40 = puVar3;
    }
  }
  if (*(char *)((int)puVar6 + 0x19) == '\0') {
    puVar4 = (unsigned int *)*puVar6;
  }
  else {
    puVar4 = *(unsigned int **)(*(int *)(param_2 + 8) + 4);
  }
  while (*(char *)((int)puVar4 + 0x19) == '\0') {
    if (param_3 < (unsigned int)puVar4[3]) {
      puVar6 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
    else {
      puVar4 = (unsigned int *)puVar4[2];
    }
  }
  iVar7 = 0;
  if (puStack_40 != puVar6) {
    do {
      iVar7 = iVar7 + 1;
      fn_82248B90(&puStack_40);
    } while (puStack_40 != puVar6);
    if (iVar7 != 0) {
      puStack_40 = *(unsigned int **)(param_2 + 8);
      puVar6 = (unsigned int *)(*(unsigned int **)(param_2 + 8))[1];
      while (*(char *)((int)puVar6 + 0x19) == '\0') {
        if ((unsigned int)puVar6[3] < param_3) {
          puVar6 = (unsigned int *)puVar6[2];
        }
        else {
          puStack_40 = puVar6;
          puVar6 = (unsigned int *)*puVar6;
        }
      }
      if ((puStack_40 == *(unsigned int **)(param_2 + 8)) || (param_3 < (unsigned int)puStack_40[3])) {
        ppuVar5 = apuStack_3c;
        apuStack_3c[0] = *(unsigned int **)(param_2 + 8);
      }
      else {
        ppuVar5 = &puStack_40;
      }
      puVar6 = *ppuVar5;
      *param_1 = 0;
      param_1[1] = 0;
      iVar7 = puVar6[5];
      uVar1 = puVar6[4];
      if (iVar7 == 0) {
        return param_1;
      }
      cVar2 = fn_8223AAC0(iVar7);
      if (cVar2 == '\0') {
        return param_1;
      }
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar7;
      *param_1 = uVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

