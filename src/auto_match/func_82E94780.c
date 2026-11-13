extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82007310;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82015610;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_8202DCF0;
extern unsigned int lbl_820E86E0;
extern unsigned int lbl_820FC2C8;
extern unsigned int lbl_8215F740;


void fn_82E94780(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar4 = lbl_82005730;
  iVar6 = 1;
  if (*(int *)(param_1 + 0x7780) == 0) {
    if (*(int *)(param_1 + 0x7734) == 0) {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = 4;
  }
  dVar14 = lbl_820FC2C8;
  if (*(int *)(param_1 + 0x7780) == 0) {
    lVar8 = *(__int64 *)(param_1 + 0x1e20);
    lVar7 = *(__int64 *)(param_1 + 0x1e18);
    dVar15 = *(double *)(param_1 + 0x76e8) - *(double *)(param_1 + 0x76f8);
    dVar14 = (double)lVar8 / (double)lVar7;
    if ((*(int *)(param_1 + 0x7734) != 0) || (*(__int64 *)(param_1 + 0x1e40) << 2 < lVar8)) {
      dVar14 = dVar14 * dVar14;
    }
    if (dVar14 <= lbl_820E86E0) {
      dVar14 = lbl_820E86E0;
    }
    iVar12 = *(int *)(param_1 + 0x7774);
    iVar9 = *(int *)(param_1 + 0x7760);
    dVar14 = -(dVar14 * dVar15) + (double)(__int64)iVar12;
    *(double *)(param_1 + 0x76f0) = dVar14;
    if (iVar9 <= iVar12) {
      iVar12 = iVar9;
    }
    dVar16 = (double)(__int64)iVar12 * lbl_8215F740;
    if (dVar14 <= dVar16) {
      dVar16 = (double)(__int64)iVar12 * lbl_82007310;
      if (dVar14 < dVar16) {
        *(double *)(param_1 + 0x76f0) = dVar16;
      }
    }
    else {
      *(double *)(param_1 + 0x76f0) = dVar16;
    }
    dVar16 = (double)(__int64)*(int *)(param_1 + 8000);
    dVar14 = *(double *)(param_1 + 0x76f0);
    if (dVar16 < *(double *)(param_1 + 0x76f0)) {
      dVar14 = dVar16;
    }
    *(double *)(param_1 + 0x76f0) = dVar14;
    if (*(double *)(param_1 + 0x7708) < dVar14) {
      dVar14 = *(double *)(param_1 + 0x7708);
    }
    *(double *)(param_1 + 0x76f0) = dVar14;
    dVar5 = lbl_82005758;
    if (dVar14 < lbl_82005758) {
      dVar14 = lbl_82005758;
    }
    *(double *)(param_1 + 0x76f0) = dVar14;
    dVar3 = lbl_82005710;
    dVar14 = ((dVar5 - SQRT(dVar14 / (double)(__int64)iVar9)) /
             SQRT(dVar14 / (double)(__int64)iVar9)) * (double)(__int64)*(int *)(param_1 + 0x2a4);
    if (lbl_82005710 <= dVar14) {
      uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7978) - 1;
      *(unsigned int *)(param_1 + 0x7978) = -(unsigned int)(uVar10 < 0xffffffff80000000) & (unsigned int)uVar10;
      if (((*(__int64 *)(param_1 + 0x1e40) << 2 < lVar8) || (*(int *)(param_1 + 0x7734) != 0)) &&
         ((__int64)*(int *)(param_1 + 0x797c) * *(__int64 *)(param_1 + 0x1e40) < 500)) {
        *(int *)(param_1 + 0x797c) = *(int *)(param_1 + 0x797c) + 1;
        dVar14 = dVar3;
      }
      else {
        *(unsigned int *)(param_1 + 0x797c) = 0;
      }
    }
    else {
      uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x797c) - 1;
      dVar17 = *(double *)(param_1 + 0x7720) + lbl_820FC2C8;
      *(unsigned int *)(param_1 + 0x797c) =
           0x80000000 - ((uVar10 < 0xffffffff80000000) + 0x80000000) & (unsigned int)uVar10;
      if ((*(double *)(param_1 + 0x7718) < dVar17) ||
         ((double)(__int64)*(int *)(param_1 + 0x2a4) < dVar17)) {
        if (*(__int64 *)(param_1 + 0x1e40) * (__int64)*(int *)(param_1 + 0x7978) < 600) {
          *(int *)(param_1 + 0x7978) = *(int *)(param_1 + 0x7978) + 1;
          dVar14 = dVar3;
        }
        else {
          *(unsigned int *)(param_1 + 0x7978) = 0;
          if (((dVar14 < lbl_8200E890) && (dVar15 < dVar3)) &&
             (-dVar15 < *(double *)(param_1 + 0x76e8) * dVar4)) {
            dVar14 = lbl_8200E890;
          }
        }
      }
    }
    if ((*(__int64 *)(param_1 + 0x1e40) * 10 < lVar7) &&
       (lVar7 < *(__int64 *)(param_1 + 0x1e40) * 5 + lVar8)) {
      dVar15 = dVar5 - (double)(__int64)*(int *)(param_1 + 0x1f10) / dVar16;
      if (dVar15 <= dVar4) {
        if (dVar15 <= lbl_82015610) {
          if (dVar14 < 0.0) {
            dVar14 = dVar3;
          }
        }
        else if (dVar14 < dVar5) {
          dVar14 = dVar5;
        }
      }
      else if (dVar14 < lbl_82002C40) {
        dVar14 = lbl_82002C40;
      }
    }
  }
  if ((double)(__int64)iVar6 < dVar14) {
    dVar14 = (double)(__int64)iVar6;
  }
  if (dVar14 < lbl_8202DCF0) {
    dVar14 = lbl_8202DCF0;
  }
  iVar12 = *(int *)(param_1 + 0x7710);
  *(int *)(param_1 + 0x1ee4) = iVar12;
  if (*(int *)(param_1 + 0x4f20) == 0) {
    iVar9 = *(int *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x2a4) = iVar9;
    *(double *)(param_1 + 0x2b0) = (double)(__int64)iVar9;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x2a4);
    if (dVar4 < ABS(*(double *)(param_1 + 0x2b0) - (double)(__int64)iVar9)) {
      *(double *)(param_1 + 0x2b0) = (double)(__int64)iVar9;
    }
  }
  dVar14 = *(double *)(param_1 + 0x2b0) + dVar14;
  *(double *)(param_1 + 0x2b0) = dVar14;
  iVar1 = (int)(dVar14 + dVar4);
  iVar11 = iVar1;
  if (iVar12 <= iVar1) {
    iVar11 = iVar12;
  }
  iVar2 = *(int *)(param_1 + 0x1efc);
  iVar13 = iVar2;
  if ((iVar2 <= iVar11) && (iVar13 = iVar1, iVar12 <= iVar1)) {
    iVar13 = iVar12;
  }
  if (((iVar13 < 9) && (iVar13 != iVar2)) && (ABS(dVar14 - (double)(__int64)iVar13) < dVar4)) {
    iVar13 = (int)(dVar14 + lbl_8202DCE0);
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    else if (ABS(dVar14 - ((double)(__int64)iVar13 + dVar4)) < lbl_8202DCE0) {
      *(unsigned int *)(param_1 + 0x590) = 1;
      goto LAB_82e94c40;
    }
  }
  *(unsigned int *)(param_1 + 0x590) = 0;
LAB_82e94c40:
  if ((*(int *)(param_1 + 0x1f58) != 0) &&
     (iVar12 = 0x16 - (*(int *)(param_1 + 0x1ee0) * 0xe) / 100, iVar13 <= iVar12)) {
    iVar13 = iVar12;
  }
  if (iVar13 < iVar9 + iVar6) {
    if (iVar9 + -2 < iVar13) {
      *(int *)(param_1 + 0x2a4) = iVar13;
    }
    else {
      *(int *)(param_1 + 0x2a4) = iVar9 + -2;
    }
  }
  else {
    *(int *)(param_1 + 0x2a4) = iVar9 + iVar6;
  }
  if (*(int *)(param_1 + 0x4f20) == 0) {
    iVar6 = *(int *)(param_1 + 0x2a0);
    if (*(int *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x2a4)) {
      iVar6 = *(int *)(param_1 + 0x2a4);
    }
    *(int *)(param_1 + 0x2a4) = iVar6;
  }
  return;
}

