extern int fn_82508160();
extern unsigned int ltcg_pool_0_0f;


void fn_82507EA8(double param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  double dVar9;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x10) - param_1);
  *(float *)(param_2 + 0x10) = fVar1;
  dVar9 = (double)ltcg_pool_0_0f;
  if ((double)fVar1 < dVar9) {
    *(float *)(param_2 + 0x10) = ltcg_pool_0_0f;
  }
  if ((*(int *)(param_2 + 0x18) != 0) &&
     ((fVar1 = (float)((double)*(float *)(param_2 + 0x20) - param_1),
      *(float *)(param_2 + 0x20) = fVar1, (double)fVar1 <= dVar9 ||
      (iVar3 = fn_82508160(param_2,*(int *)(param_2 + 0x18),1,0), iVar3 != 0)))) {
    *(unsigned int *)(param_2 + 0x1c) = 0;
    *(unsigned int *)(param_2 + 0x18) = 0;
    *(float *)(param_2 + 0x20) = (float)dVar9;
  }
  iVar3 = *(int *)(param_2 + 0x3c);
  while (iVar3 != *(int *)(param_2 + 0x40)) {
    fVar1 = (float)((double)*(float *)(iVar3 + 4) - param_1);
    *(float *)(iVar3 + 4) = fVar1;
    if (dVar9 < (double)fVar1) {
      iVar3 = iVar3 + 8;
    }
    else {
      puVar8 = *(unsigned int **)(param_2 + 0x40);
      puVar7 = (unsigned int *)(iVar3 + 8);
      if (puVar7 != puVar8) {
        puVar5 = (unsigned int *)(iVar3 + -8);
        do {
          puVar5[2] = *puVar7;
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar5[3] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar7 != puVar8);
      }
      iVar6 = *(int *)(param_2 + 0x40) + -8;
      for (iVar4 = iVar6; iVar4 != *(int *)(param_2 + 0x40); iVar4 = iVar4 + 8) {
      }
      *(int *)(param_2 + 0x40) = iVar6;
    }
  }
  puVar8 = *(unsigned int **)(param_2 + 0x2c);
  while (puVar8 != *(unsigned int **)(param_2 + 0x30)) {
    fVar1 = (float)puVar8[1];
    puVar8[1] = (float)((double)fVar1 - param_1);
    if (dVar9 < (double)(float)((double)fVar1 - param_1)) {
      puVar8 = puVar8 + 3;
    }
    else {
      fn_82508160(param_2,*puVar8,puVar8[2],1);
      puVar7 = *(unsigned int **)(param_2 + 0x30);
      puVar5 = puVar8;
      puVar2 = puVar8;
      while (puVar2 = puVar2 + 3, puVar2 != puVar7) {
        *puVar5 = *puVar2;
        puVar5[1] = puVar2[1];
        puVar5[2] = puVar2[2];
        puVar5 = puVar5 + 3;
      }
      iVar4 = *(int *)(param_2 + 0x30) + -0xc;
      for (iVar3 = iVar4; iVar3 != *(int *)(param_2 + 0x30); iVar3 = iVar3 + 0xc) {
      }
      *(int *)(param_2 + 0x30) = iVar4;
    }
  }
  return;
}

