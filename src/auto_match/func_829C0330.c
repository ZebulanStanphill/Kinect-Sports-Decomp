void fn_829C0330(int param_1,int *param_2,int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *puVar15;
  unsigned __int64 uVar16;
  
  param_3 = param_3 * 4;
  iVar4 = *(int *)(param_1 + 0x1c8);
  pbVar14 = *(unsigned char **)(*param_2 + param_3);
  iVar5 = *(int *)(iVar4 + 0x10);
  iVar6 = *(int *)(iVar4 + 0x14);
  iVar7 = *(int *)(iVar4 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x1c);
  pbVar12 = *(unsigned char **)(param_2[1] + param_3);
  iVar8 = *(int *)(param_1 + 0x148);
  pbVar13 = *(unsigned char **)(param_2[2] + param_3);
  puVar15 = (unsigned char *)*param_4;
  for (uVar16 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x70) >> 1); uVar16 != 0; uVar16 = uVar16 - 1) {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar3 = *pbVar14;
    iVar9 = *(int *)((unsigned int)bVar1 * 4 + iVar5);
    iVar10 = *(int *)((unsigned int)bVar2 * 4 + iVar6);
    iVar11 = *(int *)((unsigned int)bVar2 * 4 + iVar4) + *(int *)((unsigned int)bVar1 * 4 + iVar7) >> 0x10;
    *puVar15 = *(unsigned char *)((unsigned int)bVar3 + iVar9 + iVar8);
    puVar15[1] = *(unsigned char *)((unsigned int)bVar3 + iVar11 + iVar8);
    puVar15[2] = *(unsigned char *)((unsigned int)bVar3 + iVar10 + iVar8);
    bVar1 = pbVar14[1];
    puVar15[3] = *(unsigned char *)((unsigned int)bVar1 + iVar9 + iVar8);
    pbVar14 = pbVar14 + 2;
    puVar15[4] = *(unsigned char *)((unsigned int)bVar1 + iVar11 + iVar8);
    puVar15[5] = *(unsigned char *)((unsigned int)bVar1 + iVar10 + iVar8);
    puVar15 = puVar15 + 6;
  }
  if ((*(unsigned int *)(param_1 + 0x70) & 1) != 0) {
    bVar1 = *pbVar14;
    iVar7 = *(int *)((unsigned int)*pbVar13 * 4 + iVar7);
    iVar4 = *(int *)((unsigned int)*pbVar12 * 4 + iVar4);
    iVar6 = *(int *)((unsigned int)*pbVar12 * 4 + iVar6);
    *puVar15 = *(unsigned char *)(*(int *)((unsigned int)*pbVar13 * 4 + iVar5) + (unsigned int)bVar1 + iVar8);
    puVar15[1] = *(unsigned char *)((unsigned int)bVar1 + (iVar4 + iVar7 >> 0x10) + iVar8);
    puVar15[2] = *(unsigned char *)((unsigned int)bVar1 + iVar6 + iVar8);
  }
  return;
}

