extern int fn_829DCEC0();
extern unsigned int lbl_82057560;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B68;
extern unsigned int lbl_83217B6C;
extern unsigned int lbl_83217B70;


void fn_829DCFB0(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  __int64 lVar15;
  __int64 lVar16;
  int iVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  double dVar20;
  
  uVar5 = lbl_821AAD20;
  iVar6 = (int)param_1;
  if (0 < iVar6) {
    iVar14 = 0;
    uVar19 = param_1;
    do {
      *(unsigned int *)(*(int *)(iVar14 + lbl_83217B68) + iVar14) = uVar5;
      iVar14 = iVar14 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (0 < iVar6) {
    iVar17 = 4;
    iVar14 = lbl_83217B68 + -4;
    lVar18 = 0;
    do {
      lVar15 = lVar18 + 1;
      if ((int)lVar15 < iVar6) {
        iVar10 = *(int *)(iVar14 + iVar17);
        lVar16 = lVar15;
        iVar7 = iVar17;
        do {
          dVar20 = (double)fn_829DCEC0(param_3,lVar18,lVar16);
          lVar16 = lVar16 + 1;
          *(float *)(*(int *)(iVar7 + lbl_83217B68) + iVar17 + -4) = (float)dVar20;
          *(float *)(iVar10 + iVar7) = (float)dVar20;
          iVar7 = iVar7 + 4;
        } while ((int)lVar16 < iVar6);
      }
      iVar17 = iVar17 + 4;
      lVar18 = lVar15;
    } while ((int)lVar15 < iVar6);
  }
  iVar14 = 0;
  if (0 < iVar6) {
    iVar17 = 0;
    uVar19 = param_1;
    do {
      *(int *)(iVar17 + lbl_83217B70) = iVar14;
      iVar17 = iVar17 + 4;
      *(unsigned char *)(lbl_83217B6C + iVar14) = 0;
      iVar14 = iVar14 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  fVar4 = lbl_82057560;
  param_2 = param_1 - param_2;
  if (0 < param_2) {
    lVar18 = (param_1 & 0x3fffffff) << 2;
    uVar19 = param_1;
    do {
      iVar14 = 0;
      iVar17 = 0;
      iVar10 = (int)uVar19;
      if (0 < iVar10) {
        iVar11 = 4;
        fVar3 = fVar4;
        iVar7 = 0;
        do {
          iVar8 = iVar7 + 1;
          if (iVar8 < iVar10) {
            iVar12 = iVar8;
            iVar9 = iVar11;
            do {
              fVar1 = *(float *)(*(int *)(iVar11 + lbl_83217B68 + -4) + iVar9);
              if (fVar1 < fVar3) {
                fVar3 = fVar1;
                iVar17 = iVar12;
                iVar14 = iVar7;
              }
              iVar12 = iVar12 + 1;
              iVar9 = iVar9 + 4;
            } while (iVar12 < iVar10);
          }
          iVar11 = iVar11 + 4;
          iVar7 = iVar8;
        } while (iVar8 < iVar10);
      }
      iVar7 = 0;
      if (iVar10 < 1) {
LAB_829dd1b4:
        iVar14 = iVar17;
      }
      else {
        iVar11 = 0;
        fVar3 = fVar4;
        fVar1 = fVar4;
        do {
          if ((iVar7 != iVar14) && (iVar7 != iVar17)) {
            fVar2 = *(float *)(*(int *)(iVar14 * 4 + lbl_83217B68) + iVar11);
            if (fVar2 < fVar1) {
              fVar1 = fVar2;
            }
            fVar2 = *(float *)(*(int *)(iVar17 * 4 + lbl_83217B68) + iVar11);
            if (fVar2 < fVar3) {
              fVar3 = fVar2;
            }
          }
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < iVar10);
        if (fVar3 <= fVar1) goto LAB_829dd1b4;
      }
      iVar14 = iVar14 * 4;
      uVar19 = uVar19 - 1;
      iVar10 = 0;
      *(unsigned char *)(*(int *)(iVar14 + lbl_83217B70) + lbl_83217B6C) = 1;
      iVar17 = (int)lVar18;
      *(unsigned int *)(iVar14 + lbl_83217B70) = *(unsigned int *)(iVar17 + lbl_83217B70 + -4);
      if (0 < (__int64)uVar19) {
        iVar7 = 0;
        do {
          iVar10 = iVar10 + 1;
          iVar11 = *(int *)(iVar7 + lbl_83217B68);
          *(unsigned int *)(*(int *)(iVar14 + lbl_83217B68) + iVar7) =
               *(unsigned int *)(*(int *)(iVar17 + lbl_83217B68 + -4) + iVar7);
          iVar7 = iVar7 + 4;
          *(unsigned int *)(iVar11 + iVar14) = *(unsigned int *)(iVar17 + iVar11 + -4);
        } while (iVar10 < (int)uVar19);
      }
      lVar18 = lVar18 + -4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar14 = 0;
  if (0 < iVar6) {
    piVar13 = (int *)(param_4 + -4);
    do {
      if (*(char *)(lbl_83217B6C + iVar14) == '\0') {
        piVar13 = piVar13 + 1;
        *piVar13 = iVar14;
      }
      iVar14 = iVar14 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

