void fn_82AAA7D8(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  __int64 lVar18;
  short *psStack_50;
  
  param_3 = param_4 * 4 + param_3;
  iVar8 = param_2 * 4 + param_3;
  iVar16 = 0x8000 >> (0x10U - param_8 & 0x3f);
  piVar12 = (int *)(param_2 * 4 + iVar8);
  iVar17 = iVar16 + -1;
  iVar16 = -iVar16;
  iVar3 = param_1 >> 1;
  lVar18 = (__int64)iVar3;
  psVar13 = psStack_50;
  psVar7 = psStack_50;
  psVar11 = psStack_50;
  if (param_6 == 0) {
    psStack_50 = (short *)*param_5;
    psVar13 = psStack_50 + param_1;
    psVar7 = psStack_50 + param_1 + 1;
    psVar11 = psStack_50 + 1;
  }
  if (param_7 == 0) {
    if (0 < iVar3) {
      iVar8 = iVar8 - (int)piVar12;
      param_3 = param_3 - (int)piVar12;
      iVar3 = (int)psStack_50 - (int)psVar11;
      iVar1 = (int)psVar13 - (int)psVar11;
      iVar6 = (int)psVar7 - (int)psVar11;
      do {
        iVar2 = *(int *)((int)piVar12 + iVar8);
        iVar10 = *(int *)((int)piVar12 + param_3) - (piVar12[param_2] >> 1);
        iVar9 = iVar10 - (*piVar12 >> 1);
        iVar10 = (piVar12[param_2] - (iVar2 >> 1)) + iVar10;
        iVar15 = *piVar12 + iVar9 + 8 >> 4;
        iVar14 = iVar17;
        if ((iVar15 <= iVar17) && (iVar14 = iVar15, iVar15 < iVar16)) {
          iVar14 = iVar16;
        }
        iVar15 = iVar10 + 8 >> 4;
        *(short *)(iVar3 + (int)psVar11) = (short)iVar14;
        iVar14 = iVar17;
        if ((iVar15 <= iVar17) && (iVar14 = iVar15, iVar15 < iVar16)) {
          iVar14 = iVar16;
        }
        iVar2 = iVar2 + iVar10 + 8 >> 4;
        *psVar11 = (short)iVar14;
        iVar15 = iVar17;
        if ((iVar2 <= iVar17) && (iVar15 = iVar2, iVar2 < iVar16)) {
          iVar15 = iVar16;
        }
        iVar2 = iVar9 + 8 >> 4;
        *(short *)(iVar1 + (int)psVar11) = (short)iVar15;
        iVar15 = iVar17;
        if ((iVar2 <= iVar17) && (iVar15 = iVar2, iVar2 < iVar16)) {
          iVar15 = iVar16;
        }
        *(short *)(iVar6 + (int)psVar11) = (short)iVar15;
        piVar12 = piVar12 + 1;
        psVar11 = psVar11 + 2;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  else if (0 < iVar3) {
    iVar3 = (int)psVar11 - (int)psVar13;
    iVar8 = iVar8 - (int)piVar12;
    param_3 = param_3 - (int)piVar12;
    iVar16 = (int)psStack_50 - (int)psVar13;
    iVar17 = (int)psVar7 - (int)psVar13;
    do {
      iVar1 = *(int *)(iVar8 + (int)piVar12);
      sVar5 = (short)*(unsigned int *)(param_3 + (int)piVar12) - (short)(piVar12[param_2] >> 1);
      sVar4 = sVar5 - (short)(*piVar12 >> 1);
      sVar5 = ((short)piVar12[param_2] - (short)(iVar1 >> 1)) + sVar5;
      *(short *)(iVar16 + (int)psVar13) = (short)*piVar12 + sVar4;
      piVar12 = piVar12 + 1;
      *(short *)(iVar3 + (int)psVar13) = sVar5;
      *psVar13 = (short)iVar1 + sVar5;
      *(short *)(iVar17 + (int)psVar13) = sVar4;
      psVar13 = psVar13 + 2;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

