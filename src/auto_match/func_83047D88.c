void fn_83047D88(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned int uVar12;
  int iVar13;
  unsigned __int64 uVar11;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int *puVar18;
  
  uVar9 = 0;
  uVar5 = *(unsigned short *)((int)param_2 + 0xe);
  uVar7 = param_1[1];
  for (uVar15 = uVar7; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
    uVar9 = uVar9 + 1;
  }
  uVar15 = 0;
  if (uVar9 != 0) {
    uVar6 = *(unsigned short *)(param_2 + 3);
    iVar8 = *param_2;
    param_1 = (unsigned int *)*param_1;
    do {
      uVar17 = uVar15;
      if ((uVar7 & 8) != 0) {
        uVar12 = 0;
        for (uVar16 = uVar7 & 7; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
          uVar12 = uVar12 + 1;
        }
        if (uVar15 == uVar12) {
          iVar13 = 0;
          for (uVar17 = uVar7; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
            iVar13 = iVar13 + 1;
          }
          uVar17 = iVar13 - 1;
        }
        else if (uVar12 < uVar15) {
          uVar17 = uVar15 - 1;
        }
      }
      uVar11 = 0;
      puVar18 = (unsigned int *)(uVar6 * uVar17 * 4 + iVar8);
      puVar14 = param_1;
      if (3 < uVar5) {
        do {
          uVar11 = uVar11 + 4;
          puVar1 = puVar14 + uVar9;
          uVar2 = *puVar1;
          puVar1 = puVar1 + uVar9;
          uVar3 = *puVar1;
          uVar4 = puVar1[uVar9];
          *puVar18 = *puVar14;
          puVar18[1] = uVar2;
          puVar14 = puVar1 + uVar9 + uVar9;
          puVar18[2] = uVar3;
          puVar18[3] = uVar4;
          puVar18 = puVar18 + 4;
        } while ((uVar11 & 0xffffffff) < ((unsigned __int64)uVar5 - 3 & 0xffffffff));
      }
      if ((uVar11 & 0xffffffff) < (unsigned __int64)(unsigned int)uVar5) {
        lVar10 = uVar5 - uVar11;
        puVar18 = puVar18 + -1;
        puVar14 = puVar14 + -(uVar9 & 0x3fffffff);
        do {
          puVar14 = puVar14 + uVar9;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar14;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar15 = uVar15 + 1;
      param_1 = param_1 + 1;
    } while (uVar15 < uVar9);
  }
  return;
}

