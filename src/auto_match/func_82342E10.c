extern int fn_824CD030();


void fn_82342E10(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  iVar4 = fn_824CD030(param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0xf8) != 0) {
      puVar2 = (unsigned int *)(*(int *)(param_2 + 0xfc) + 0x90U & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (unsigned int *)(**(int **)(param_1 + 0xc) + 0x80U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    }
  }
  else {
    iVar4 = **(int **)(param_1 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x24);
    puVar2 = (unsigned int *)(iVar4 + 0xe0U & 0xfffffff0);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar2 = (unsigned int *)(iVar4 + 0x80U & 0xfffffff0);
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    uVar11 = puVar2[3];
    puVar3 = (unsigned int *)(*(int *)(iVar1 + 0xfc) + 0x90U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    puVar2 = (unsigned int *)(*(int *)(iVar1 + 0xfc) + 0xa0U & 0xfffffff0);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(unsigned int *)(*(int *)(iVar1 + 0xfc) + 0xb0) = 1;
  }
  return;
}

