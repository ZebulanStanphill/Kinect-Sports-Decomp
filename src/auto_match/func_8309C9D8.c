void fn_8309C9D8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  int in_r0;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 < *(int *)(param_3 + 0x10)) {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_3 + 0xc);
    *(int *)(param_3 + 0x14) = iVar1 + 1;
    *(unsigned int *)(param_3 + 0xc) = *(unsigned int *)(param_3 + 0xc) + 0x60;
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_3 + 8);
    if (1 < iVar1) {
      lVar9 = (unsigned __int64)*(unsigned int *)(param_3 + 0x14) - 1;
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 + 0x60;
        if (*(float *)((int)uVar7 + 0x10) < *(float *)((int)uVar8 + 0x10)) {
          uVar7 = uVar8;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(float *)((int)uVar7 + 0x10) <= *(float *)(param_2 + 0x10)) {
      return;
    }
  }
  iVar1 = (int)uVar7;
  *(unsigned int *)(iVar1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  puVar3 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (unsigned int *)(in_r0 + iVar1 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar2 = param_1;
    while (iVar5 = iVar6, iVar5 != 0) {
      iVar2 = iVar5;
      iVar6 = *(int *)(iVar5 + 0xc);
    }
    *(int *)(iVar1 + 0x50) = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x50) = *(int *)(param_3 + 0x18);
  }
  lVar9 = 0;
  for (iVar2 = *(int *)(param_1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    lVar9 = lVar9 + 1;
  }
  *(unsigned int *)((int)((lVar9 + 8U & 0xffffffff) << 2) + iVar1) = 0xffffffff;
  if (lVar9 + -1 < 0) {
    return;
  }
  lVar10 = (lVar9 + 8U & 0x3fffffff) * 4 + uVar7;
  do {
    lVar10 = lVar10 + -4;
    *(unsigned int *)lVar10 = *(unsigned int *)(param_1 + 4);
    param_1 = *(int *)(param_1 + 0xc);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

