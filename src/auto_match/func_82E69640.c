extern unsigned int lbl_82005344;
extern unsigned int lbl_82021544;
extern unsigned int lbl_8207F4FC;
extern unsigned int lbl_8207F5C0;
extern unsigned int lbl_8208ED60;
extern unsigned int lbl_8209A980;
extern unsigned int lbl_820F3FA0;
extern unsigned int lbl_820F99C8;


void fn_82E69640(int *param_1)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  float *pfVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  unsigned int *puVar21;
  
  fVar10 = lbl_8209A980;
  fVar9 = lbl_8208ED60;
  fVar8 = lbl_8207F5C0;
  fVar7 = lbl_8207F4FC;
  fVar6 = lbl_82021544;
  fVar5 = lbl_82005344;
  iVar2 = *param_1;
  iVar11 = *(int *)(iVar2 + 0x158);
  if (*(int *)(iVar2 + 0x3c) < 3) {
    puVar21 = &lbl_820F3FA0;
  }
  else {
    puVar21 = (unsigned int *)&lbl_820F99C8;
  }
  iVar18 = 0;
  pfVar20 = (float *)param_1[0x1dfd];
  if (0 < *(int *)(iVar2 + 0xf4)) {
    iVar19 = 0;
    do {
      uVar3 = *(unsigned int *)(iVar19 + *(int *)(iVar2 + 0x154));
      uVar15 = (unsigned __int64)uVar3;
      if (0 < (int)uVar3) {
        pfVar14 = pfVar20;
        do {
          iVar17 = 0;
          uVar12 = (*(int *)((int)pfVar14 + (iVar11 - (int)pfVar20) + 4) +
                   *(int *)((iVar11 - (int)pfVar20) + (int)pfVar14)) - 1;
          fVar1 = (float)(__int64)
                         (int)((((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0)) *
                              *(int *)(iVar2 + 0x50)) /
                  ((float)(__int64)*(int *)(uVar3 * 4 + iVar11) * fVar5);
          fVar4 = fVar6;
          puVar13 = puVar21;
          if ((float)*puVar21 < fVar1) {
            do {
              iVar16 = iVar17;
              puVar13 = puVar13 + 1;
              iVar17 = iVar16 + 1;
            } while ((float)*puVar13 < fVar1);
            if (4 < iVar17) {
              if (iVar17 < 0xf) {
                fVar4 = (float)(__int64)(iVar16 + -3) * fVar9;
              }
              else {
                fVar4 = (float)(__int64)(iVar16 + -0xe) * fVar7 + fVar10;
              }
            }
          }
          *pfVar14 = fVar8 / fVar4;
          if (iVar17 < 5) {
            fVar1 = (float)param_1[0x4261];
          }
          else if (iVar17 < 0x17) {
            fVar1 = (float)param_1[0x4262];
          }
          else {
            fVar1 = (float)param_1[0x4263];
          }
          *pfVar14 = fVar1 * (fVar8 / fVar4);
          pfVar14 = pfVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar18 = iVar18 + 1;
      iVar11 = iVar11 + 0x74;
      pfVar20 = pfVar20 + 0x1d;
      iVar19 = iVar19 + 4;
    } while (iVar18 < *(int *)(iVar2 + 0xf4));
  }
  return;
}

