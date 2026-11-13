typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82011630;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_82052318;
extern unsigned int uStack_c0;


unsigned __int64
fn_82C6ECC0(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,int param_8)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  unsigned char *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  unsigned __int64 uVar19;
  int iVar20;
  int iVar21;
  unsigned char *puVar22;
  unsigned char *puVar23;
  int iVar24;
  __int64 lVar25;
  unsigned int uVar26;
  int iVar27;
  unsigned char *puVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  unsigned int uStack_c0;
  
  if (param_8 == 0) {
    return 0xfffffffffffffffd;
  }
  uVar2 = *(unsigned int *)(param_8 + 0x14);
  iVar3 = *(int *)(param_8 + 0x3c30);
  iVar4 = *(int *)(param_8 + 0x3c34);
  iVar27 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  dVar30 = SQRT(param_1 * param_1 + param_2 * param_2);
  dVar32 = SQRT(param_4 * param_4 + param_5 * param_5);
  dVar33 = dVar32;
  if (dVar30 < dVar32) {
    dVar33 = dVar30;
  }
  if (dVar33 < lbl_82005758) {
    dVar33 = dVar32;
    if (dVar30 < dVar32) {
      dVar33 = dVar30;
    }
    dVar31 = lbl_82011630;
    if (dVar33 <= lbl_82011630) goto LAB_82c6ed90;
  }
  dVar33 = dVar32;
  if (dVar30 < dVar32) {
    dVar33 = dVar30;
  }
  dVar31 = lbl_82005758;
  if ((dVar33 < lbl_82005758) && (dVar31 = dVar30, dVar32 <= dVar30)) {
    dVar31 = dVar32;
  }
LAB_82c6ed90:
  iVar7 = (int)(param_7 * lbl_82052318 + lbl_82005730);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else if (0x100 < iVar7) {
    iVar7 = 0x100;
  }
  if (lbl_8202DCE0 <= dVar31) {
    if (lbl_82005730 <= dVar31) {
      iVar29 = 0x80;
      iVar17 = 7;
      iVar21 = 8;
      uVar9 = 0x7f;
    }
    else {
      iVar29 = 0x100;
      iVar17 = 8;
      iVar21 = 9;
      uVar9 = 0xff;
    }
  }
  else {
    iVar29 = 0x200;
    iVar17 = 9;
    iVar21 = 10;
    uVar9 = 0x1ff;
  }
  iVar18 = *(int *)(param_8 + 0x3c1c) * iVar29;
  iVar20 = 0;
  dVar33 = (double)(__int64)iVar29;
  uVar19 = (unsigned __int64)(unsigned int)(int)(dVar33 * param_1);
  iVar1 = (int)(dVar33 * param_4);
  if (0 < *(int *)(param_8 + 0x3c24)) {
    uVar26 = (int)(dVar33 * param_6) - iVar1;
    lVar25 = (unsigned int)(int)(dVar33 * param_3) - uVar19;
    puVar22 = (unsigned char *)(*(int *)(param_8 + 0x3c40) + -1);
    puVar23 = (unsigned char *)(*(int *)(param_8 + 0x3c3c) + -1);
    puVar28 = (unsigned char *)(*(int *)(param_8 + 0x3c38) + -1);
    do {
      iVar8 = *(int *)(param_8 + 0x3c20);
      bVar6 = true;
      iVar24 = 0;
      lVar12 = lVar25;
      uVar11 = uVar26;
      if (0 < iVar8) {
        do {
          lVar12 = lVar12 + uVar19;
          uVar11 = uVar11 + iVar1;
          if ((((-1 < lVar12) && (uVar13 = (unsigned int)lVar12, (int)uVar13 < (int)(uVar2 * iVar29))) &&
              (-1 < (int)uVar11)) && ((int)uVar11 < iVar18)) {
            pbVar14 = (unsigned char *)(((int)uVar11 >> iVar17) * *(int *)(param_8 + 0x14) +
                               ((int)uVar13 >> iVar17) + *(int *)(param_8 + 0x3c2c));
            puVar28[1] = (char)(((int)((((iVar29 - (uVar11 & uVar9)) - (uVar13 & uVar9)) *
                                        (unsigned int)*pbVar14 +
                                        (unsigned int)pbVar14[*(int *)(param_8 + 0x14)] * (uVar11 & uVar9) +
                                       (unsigned int)pbVar14[1] * (uVar13 & uVar9)) * iVar7) >> 8) >> iVar17
                               );
            puVar28 = puVar28 + 1;
            if (bVar6) {
              iVar10 = ((int)uVar11 >> iVar21) * iVar27 + ((int)uVar13 >> iVar21);
              uVar5 = (int)uVar11 >> 1 & uVar9;
              iVar15 = iVar10 + iVar3;
              uVar13 = (int)uVar13 >> 1 & uVar9;
              iVar8 = (iVar29 - uVar5) - uVar13;
              bVar6 = false;
              iVar16 = iVar10 + iVar4;
              puVar23 = puVar23 + 1;
              *puVar23 = (char)(((int)((*(unsigned char *)(iVar15 + iVar27) * uVar5 +
                                        *(unsigned char *)(iVar15 + 1) * uVar13 +
                                       (unsigned int)*(unsigned char *)(iVar10 + iVar3) * iVar8) * iVar7) >> 8) >>
                               iVar17);
              uStack_c0 = (unsigned int)*(unsigned char *)(iVar10 + iVar4);
              puVar22 = puVar22 + 1;
              *puVar22 = (char)(((int)((*(unsigned char *)(iVar16 + iVar27) * uVar5 +
                                        *(unsigned char *)(iVar16 + 1) * uVar13 + uStack_c0 * iVar8) * iVar7)
                                >> 8) >> iVar17);
            }
            else {
              bVar6 = true;
            }
          }
          iVar8 = *(int *)(param_8 + 0x3c20);
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar8);
      }
      lVar25 = lVar25 + (unsigned __int64)(unsigned int)(int)(dVar33 * param_2);
      iVar24 = 0;
      uVar26 = uVar26 + (int)(dVar33 * param_5);
      lVar12 = lVar25;
      uVar11 = uVar26;
      if (0 < iVar8) {
        do {
          lVar12 = lVar12 + uVar19;
          uVar11 = uVar11 + iVar1;
          if (((-1 < lVar12) && (uVar13 = (unsigned int)lVar12, (int)uVar13 < (int)(uVar2 * iVar29))) &&
             ((-1 < (int)uVar11 && ((int)uVar11 < iVar18)))) {
            pbVar14 = (unsigned char *)(((int)uVar11 >> iVar17) * *(int *)(param_8 + 0x14) +
                               ((int)uVar13 >> iVar17) + *(int *)(param_8 + 0x3c2c));
            uStack_c0 = (unsigned int)pbVar14[1];
            puVar28 = puVar28 + 1;
            *puVar28 = (char)(((int)((((iVar29 - (uVar11 & uVar9)) - (uVar13 & uVar9)) *
                                      (unsigned int)*pbVar14 +
                                      (unsigned int)pbVar14[*(int *)(param_8 + 0x14)] * (uVar11 & uVar9) +
                                     uStack_c0 * (uVar13 & uVar9)) * iVar7) >> 8) >> iVar17);
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < *(int *)(param_8 + 0x3c20));
      }
      iVar20 = iVar20 + 2;
      lVar25 = lVar25 + (unsigned __int64)(unsigned int)(int)(dVar33 * param_2);
      uVar26 = uVar26 + (int)(dVar33 * param_5);
    } while (iVar20 < *(int *)(param_8 + 0x3c24));
  }
  return 0;
}

