void fn_829BF560(int param_1,int *param_2,int param_3,int param_4,__int64 param_5)

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
  int *piVar12;
  int iVar13;
  int iVar14;
  unsigned char *pbVar15;
  int iVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  int *piVar19;
  unsigned __int64 uVar20;
  
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
    piVar19 = (int *)(param_4 + -4);
    do {
      piVar19 = piVar19 + 1;
      piVar10 = (int *)(*param_2 + param_3);
      pbVar18 = *(unsigned char **)(param_3 + param_2[1]);
      piVar11 = (int *)(param_2[2] + param_3);
      piVar12 = (int *)(param_3 + param_2[3]);
      param_3 = param_3 + 4;
      if ((unsigned __int64)uVar5 != 0) {
        pbVar17 = (unsigned char *)(*piVar19 + -1);
        iVar14 = *piVar10 - (int)pbVar18;
        iVar13 = *piVar11 - (int)pbVar18;
        iVar16 = *piVar12 - (int)pbVar18;
        uVar20 = (unsigned __int64)uVar5;
        do {
          bVar2 = pbVar18[iVar13];
          bVar1 = *pbVar18;
          bVar3 = pbVar18[iVar14];
          pbVar17[1] = *(unsigned char *)(((iVar6 - *(int *)((unsigned int)bVar2 * 4 + iVar7)) - (unsigned int)bVar3) + 0xff)
          ;
          pbVar17[2] = *(unsigned char *)(((iVar6 - (*(int *)((unsigned int)bVar1 * 4 + iVar4) +
                                            *(int *)((unsigned int)bVar2 * 4 + iVar9) >> 0x10)) -
                                 (unsigned int)bVar3) + 0xff);
          pbVar17[3] = *(unsigned char *)(((iVar6 - *(int *)((unsigned int)bVar1 * 4 + iVar8)) - (unsigned int)bVar3) + 0xff)
          ;
          pbVar15 = pbVar18 + iVar16;
          pbVar18 = pbVar18 + 1;
          pbVar17 = pbVar17 + 4;
          *pbVar17 = *pbVar15;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

