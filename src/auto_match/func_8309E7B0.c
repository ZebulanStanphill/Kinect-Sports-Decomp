void fn_8309E7B0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 < *(int *)(param_2 + 0x10)) {
    iVar6 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0x14) = iVar1 + 1;
    *(int *)(param_2 + 0xc) = iVar6 + 0x30;
  }
  else {
    iVar6 = *(int *)(param_2 + 8);
    if (1 < iVar1) {
      lVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0x14) - 1;
      iVar1 = iVar6;
      do {
        if (*(float *)(iVar6 + 0x1c) < *(float *)(iVar1 + 0x4c)) {
          iVar6 = iVar1 + 0x30;
        }
        lVar5 = lVar5 + -1;
        iVar1 = iVar1 + 0x30;
      } while (lVar5 != 0);
    }
    if (*(float *)(iVar6 + 0x1c) <= *(float *)(param_1 + 0x1c)) {
      return;
    }
  }
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)(iVar6 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  iVar1 = *(int *)(param_1 + 0x20);
  for (iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar1 = iVar4;
  }
  *(int *)(iVar6 + 0x20) = iVar1;
  iVar1 = *(int *)(param_1 + 0x24);
  for (iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar1 = iVar4;
  }
  *(int *)(iVar6 + 0x28) = iVar1;
  *(unsigned int *)(iVar6 + 0x24) = *(unsigned int *)(*(int *)(param_1 + 0x20) + 4);
  *(unsigned int *)(iVar6 + 0x2c) = *(unsigned int *)(*(int *)(param_1 + 0x24) + 4);
  if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 0x1c)) {
    return;
  }
  *(float *)(param_2 + 4) = *(float *)(param_1 + 0x1c);
  return;
}

