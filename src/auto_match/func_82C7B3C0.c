void fn_82C7B3C0(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  unsigned short *puVar15;
  int iVar16;
  int iVar17;
  unsigned short *puVar18;
  __int64 lVar19;
  
  puVar18 = (unsigned short *)(param_4 * 8 + param_1);
  psVar13 = (short *)(param_3 + -2);
  lVar19 = 8;
  puVar15 = puVar18;
  do {
    psVar1 = psVar13 + 2;
    psVar2 = psVar13 + 3;
    psVar3 = psVar13 + 1;
    psVar13 = psVar13 + 4;
    iVar14 = *psVar1 * 0x764 + *psVar13 * 0x310;
    iVar4 = ((int)*psVar2 + (int)*psVar3) * 0x5a8;
    iVar9 = *psVar1 * 0x310 + *psVar13 * -0x764;
    iVar5 = ((int)*psVar3 - (int)*psVar2) * 0x5a8;
    *puVar15 = (short)(iVar14 + iVar4 + 0x40 >> 7);
    puVar15[1] = (short)(iVar9 + iVar5 + 0x40 >> 7);
    puVar15[2] = (short)((iVar5 - iVar9) + 0x40 >> 7);
    puVar15[3] = (short)((iVar4 - iVar14) + 0x40 >> 7);
    puVar15 = puVar15 + param_2;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  psVar13 = puVar18 + param_2;
  iVar14 = (int)puVar18 - (int)psVar13;
  lVar19 = 4;
  do {
    iVar9 = ((int)psVar13[param_2 * 6] + (int)*psVar13) * 0x235 + 4;
    iVar10 = ((int)psVar13[param_2 * 2] + (int)psVar13[param_2 * 4]) * 0x968 + 4;
    iVar4 = *psVar13 * 0x8e4 + iVar9 >> 3;
    iVar9 = iVar9 + psVar13[param_2 * 6] * -0xd4e >> 3;
    iVar5 = iVar10 + psVar13[param_2 * 4] * -799 >> 3;
    iVar10 = iVar10 + psVar13[param_2 * 2] * -0xfb1 >> 3;
    iVar11 = ((int)psVar13[param_2] + (int)psVar13[param_2 * 5]) * 0x454 + 4;
    iVar7 = iVar4 - iVar5;
    iVar6 = iVar9 - iVar10;
    iVar16 = (*(short *)(iVar14 + (int)psVar13) + 0x20) * 0x100;
    iVar8 = iVar11 + psVar13[param_2 * 5] * -0xec8 >> 3;
    iVar11 = psVar13[param_2] * 0x620 + iVar11 >> 3;
    iVar12 = psVar13[param_2 * 3] * 0x100 + iVar16;
    iVar16 = iVar16 + ((int)psVar13[param_2 * 3] & 0xffffffU) * -0x100;
    iVar17 = iVar12 - iVar11;
    iVar5 = iVar5 + iVar4;
    iVar12 = iVar12 + iVar11;
    iVar10 = iVar10 + iVar9;
    iVar4 = (iVar6 + iVar7) * 0xb5 + 0x80 >> 8;
    iVar11 = iVar16 - iVar8;
    iVar8 = iVar8 + iVar16;
    iVar9 = (iVar7 - iVar6) * 0xb5 + 0x80 >> 8;
    *(short *)(iVar14 + (int)psVar13) = (short)(iVar5 + iVar12 >> 0xe);
    *psVar13 = (short)(iVar8 + iVar4 >> 0xe);
    psVar13[param_2] = (short)(iVar11 + iVar9 >> 0xe);
    psVar13[param_2 * 2] = (short)(iVar17 + iVar10 >> 0xe);
    psVar13[param_2 * 3] = (short)(iVar17 - iVar10 >> 0xe);
    psVar13[param_2 * 4] = (short)(iVar11 - iVar9 >> 0xe);
    psVar13[param_2 * 5] = (short)(iVar8 - iVar4 >> 0xe);
    psVar13[param_2 * 6] = (short)(iVar12 - iVar5 >> 0xe);
    psVar13 = psVar13 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

