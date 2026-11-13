void fn_829BF380(int param_1,int *param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  unsigned char *puVar14;
  unsigned char *pbVar15;
  int *piVar16;
  unsigned __int64 uVar17;
  
  iVar4 = *(int *)(param_1 + 0x1cc);
  param_5 = param_5 + -1;
  uVar5 = *(unsigned int *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x148);
  iVar7 = *(int *)(iVar4 + 8);
  iVar8 = *(int *)(iVar4 + 0xc);
  iVar9 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x14);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    piVar16 = (int *)(param_4 + -4);
    do {
      piVar16 = piVar16 + 1;
      piVar10 = (int *)(*param_2 + param_3);
      pbVar15 = *(unsigned char **)(param_3 + param_2[1]);
      piVar11 = (int *)(param_2[2] + param_3);
      param_3 = param_3 + 4;
      if ((unsigned __int64)uVar5 != 0) {
        puVar14 = (unsigned char *)(*piVar16 + -1);
        iVar13 = *piVar10 - (int)pbVar15;
        iVar12 = *piVar11 - (int)pbVar15;
        uVar17 = (unsigned __int64)uVar5;
        do {
          bVar2 = pbVar15[iVar12];
          bVar3 = pbVar15[iVar13];
          bVar1 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          puVar14[1] = *(unsigned char *)(*(int *)((unsigned int)bVar2 * 4 + iVar7) + (unsigned int)bVar3 + iVar6);
          puVar14[2] = *(unsigned char *)
                        ((*(int *)((unsigned int)bVar1 * 4 + iVar4) + *(int *)((unsigned int)bVar2 * 4 + iVar9) >>
                         0x10) + (unsigned int)bVar3 + iVar6);
          puVar14 = puVar14 + 3;
          *puVar14 = *(unsigned char *)(*(int *)((unsigned int)bVar1 * 4 + iVar8) + (unsigned int)bVar3 + iVar6);
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

