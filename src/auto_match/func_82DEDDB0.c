void fn_82DEDDB0(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar6 = 0;
  piVar3 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  if (0 < piVar3[1]) {
    do {
      puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      iVar4 = *piVar3 + iVar6;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x14));
      puVar2 = (unsigned int *)(piVar5[1] * 0x50 + *(int *)(*piVar5 + 0x18) + 0x20U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
    } while (iVar6 < piVar3[1]);
    return;
  }
  return;
}

