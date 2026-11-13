extern int fn_8292E080();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82011638;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_8202EE88;
extern unsigned int lbl_8202EE8C;
extern unsigned int lbl_8202EE90;
extern unsigned int lbl_8202EE94;
extern unsigned int lbl_8202EE98;
extern unsigned int lbl_821AAD20;


void fn_8292E3B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar25;
  unsigned __int64 uVar24;
  unsigned short *puVar26;
  unsigned int uVar27;
  float *pfVar28;
  
  iVar25 = fn_82F6A548();
  if (*(int *)(iVar25 + 0xa4) == 0) {
    uVar24 = 0xffffffff8007000e;
  }
  else {
    if (((((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar25 + 0x88)) ||
         ((unsigned __int64)*(unsigned int *)(iVar25 + 0x90) <= (param_2 & 0xffffffff))) ||
        ((param_3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar25 + 0x94))) ||
       ((unsigned __int64)*(unsigned int *)(iVar25 + 0x98) <= (param_3 & 0xffffffff))) {
      uVar24 = fn_8292E080(iVar25);
      if ((int)uVar24 < 0) goto LAB_8292e7f8;
      iVar5 = (int)param_2;
      *(int *)(iVar25 + 0x88) = iVar5;
      iVar6 = (int)param_3;
      *(int *)(iVar25 + 0x94) = iVar6;
      *(int *)(iVar25 + 0x90) = iVar5 + 1;
      *(int *)(iVar25 + 0x98) = iVar6 + 1;
      fVar23 = lbl_821AAD20;
      fVar22 = lbl_8202EE98;
      fVar21 = lbl_8202EE94;
      fVar20 = lbl_8202EE90;
      fVar19 = lbl_8202EE8C;
      fVar18 = lbl_8202EE88;
      fVar17 = lbl_8201DFEC;
      fVar15 = lbl_82011638;
      fVar7 = lbl_82005328;
      fVar16 = lbl_82002AE0;
      if (param_4 != 0) {
        uVar27 = *(unsigned int *)(iVar25 + 0x84);
        uVar3 = *(unsigned int *)(iVar25 + 4) & 0xfffffeff;
        puVar26 = (unsigned short *)
                  (*(int *)(iVar25 + 0x60) * iVar5 + *(int *)(iVar25 + 100) * iVar6 + uVar27 * 2 +
                  *(int *)(iVar25 + 0x20));
        if (0x1828004a < (int)uVar3) {
          if ((int)uVar3 < 0x1828004d) {
            if (uVar27 < *(unsigned int *)(iVar25 + 0x8c)) {
              puVar26 = puVar26 + -1;
              pfVar28 = (float *)(*(int *)(iVar25 + 0x80) + -4);
              do {
                uVar3 = *(unsigned int *)(iVar25 + 0xa8);
                uVar27 = uVar27 + 2;
                uVar4 = *(unsigned int *)(iVar25 + 0xac);
                uVar1 = puVar26[1];
                puVar26 = puVar26 + 2;
                uVar2 = *puVar26;
                pfVar28[4] = fVar16;
                fVar15 = (float)(uVar2 >> (uVar4 & 0x3f) & 0xff) * fVar7;
                pfVar28[3] = fVar15;
                pfVar28[7] = fVar15;
                pfVar28[6] = (float)(uVar2 >> (uVar3 & 0x3f) & 0xff) * fVar7;
                fVar15 = (float)(uVar1 >> (uVar4 & 0x3f) & 0xff) * fVar7;
                pfVar28[1] = fVar15;
                pfVar28[5] = fVar15;
                pfVar28[2] = (float)(uVar1 >> (uVar3 & 0x3f) & 0xff) * fVar7;
                pfVar28 = pfVar28 + 8;
                *pfVar28 = fVar16;
              } while (uVar27 < *(unsigned int *)(iVar25 + 0x8c));
            }
          }
          else if (((0x1a20004a < (int)uVar3) && ((int)uVar3 < 0x1a20004d)) &&
                  (uVar27 < *(unsigned int *)(iVar25 + 0x8c))) {
            pfVar28 = (float *)(*(int *)(iVar25 + 0x80) + -8);
            do {
              uVar1 = *puVar26;
              uVar2 = puVar26[1];
              uVar3 = *(unsigned int *)(iVar25 + 0xac);
              uVar4 = *(unsigned int *)(iVar25 + 0xa8);
              pfVar28[5] = fVar16;
              fVar8 = (float)(((unsigned int)(((unsigned __int64)uVar1 & 0xff) << 8) | (unsigned int)(uVar1 >> 8)) >>
                              (uVar3 & 0x3f) & 0xff) - fVar17;
              fVar11 = (float)(((unsigned int)(((unsigned __int64)uVar2 & 0xff) << 8) | (unsigned int)(uVar2 >> 8)) >>
                               (uVar3 & 0x3f) & 0xff) - fVar17;
              fVar7 = ((float)(((unsigned int)(((unsigned __int64)uVar1 & 0xff) << 8) | (unsigned int)(uVar1 >> 8)) >>
                               (uVar4 & 0x3f) & 0xff) - fVar15) * fVar19;
              fVar9 = fVar8 * fVar20;
              fVar13 = fVar11 * fVar18;
              fVar8 = fVar8 * fVar22;
              fVar11 = fVar11 * fVar21;
              fVar10 = fVar7 + fVar13;
              pfVar28[2] = fVar10;
              fVar12 = fVar8 + fVar7;
              pfVar28[4] = fVar12;
              fVar14 = (fVar7 - fVar9) - fVar11;
              pfVar28[3] = fVar14;
              fVar7 = fVar23;
              if ((fVar23 <= fVar10) && (fVar7 = fVar10, fVar16 < fVar10)) {
                fVar7 = fVar16;
              }
              pfVar28[2] = fVar7;
              fVar7 = fVar23;
              if ((fVar23 <= fVar14) && (fVar7 = fVar14, fVar16 < fVar14)) {
                fVar7 = fVar16;
              }
              pfVar28[3] = fVar7;
              fVar7 = fVar23;
              if ((fVar23 <= fVar12) && (fVar7 = fVar12, fVar16 < fVar12)) {
                fVar7 = fVar16;
              }
              fVar10 = ((float)(((unsigned int)(((unsigned __int64)uVar2 & 0xff) << 8) | (unsigned int)(uVar2 >> 8)) >>
                                (uVar4 & 0x3f) & 0xff) - fVar15) * fVar19;
              pfVar28[4] = fVar7;
              pfVar28[9] = fVar16;
              fVar13 = fVar10 + fVar13;
              pfVar28[6] = fVar13;
              fVar8 = fVar10 + fVar8;
              pfVar28[8] = fVar8;
              fVar11 = (fVar10 - fVar9) - fVar11;
              pfVar28[7] = fVar11;
              fVar7 = fVar23;
              if ((fVar23 <= fVar13) && (fVar7 = fVar13, fVar16 < fVar13)) {
                fVar7 = fVar16;
              }
              pfVar28[6] = fVar7;
              fVar7 = fVar23;
              if ((fVar23 <= fVar11) && (fVar7 = fVar11, fVar16 < fVar11)) {
                fVar7 = fVar16;
              }
              pfVar28[7] = fVar7;
              fVar7 = fVar23;
              if ((fVar23 <= fVar8) && (fVar7 = fVar8, fVar16 < fVar8)) {
                fVar7 = fVar16;
              }
              uVar27 = uVar27 + 2;
              pfVar28 = pfVar28 + 8;
              *pfVar28 = fVar7;
              puVar26 = puVar26 + 2;
            } while (uVar27 < *(unsigned int *)(iVar25 + 0x8c));
          }
        }
      }
    }
    uVar24 = 0;
  }
LAB_8292e7f8:
  fn_82F6A594(uVar24);
  return;
}

