typedef unsigned char bool;
#define true 1
#define false 0
extern int iRam832617f4;
extern unsigned int iStack_108;
extern unsigned int iStack_11c;
extern unsigned int iStack_158;
extern unsigned int iStack_170;
extern unsigned int iStack_f0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC3A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F2F398(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned char bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  unsigned __int64 uVar34;
  int iVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  int iVar38;
  unsigned __int64 uVar39;
  unsigned char *puVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  unsigned char *pbVar43;
  int iVar44;
  int iVar46;
  unsigned __int64 uVar45;
  unsigned __int64 uVar47;
  int iVar48;
  int iVar49;
  unsigned char bVar50;
  int iVar51;
  int iVar52;
  unsigned char *puVar53;
  unsigned __int64 uVar54;
  unsigned __int64 uVar55;
  int iVar56;
  unsigned char *pbVar59;
  unsigned __int64 uVar57;
  unsigned __int64 uVar58;
  unsigned __int64 uVar60;
  unsigned char *pbVar62;
  unsigned __int64 uVar61;
  unsigned __int64 uVar63;
  unsigned __int64 uVar64;
  unsigned char *puVar65;
  unsigned __int64 uVar66;
  unsigned __int64 uVar67;
  double dVar68;
  int iStack_170;
  unsigned char *puStack_160;
  int iStack_158;
  unsigned char *puStack_148;
  unsigned char *puStack_138;
  int iStack_11c;
  int iStack_108;
  int iStack_f0;
  
  dVar31 = lbl_820FC3A8;
  dVar30 = lbl_82052318;
  dVar29 = lbl_82005758;
  dVar28 = lbl_82005730;
  dVar27 = lbl_82005710;
  iVar18 = *(int *)(param_5 + 0x68);
  iVar19 = *(int *)(param_5 + 0x6c);
  iVar20 = *(int *)(param_5 + 0x50) >> 1;
  iStack_108 = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar65 = (unsigned char *)(*(int *)(param_5 + 0x78) + -1);
    param_2 = param_2 - param_1;
    puVar53 = (unsigned char *)(*(int *)(param_5 + 0x74) + -1);
    puVar40 = (unsigned char *)(*(int *)(param_5 + 0x70) + -1);
    puStack_160 = puVar40;
    puStack_148 = puVar53;
    puStack_138 = puVar65;
    do {
      dVar68 = dVar27;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar68 = (param_3 - dVar29) * dVar28;
      }
      dVar68 = dVar68 + (double)(__int64)iStack_108 * param_3 + param_4;
      bVar26 = true;
      bVar25 = true;
      iVar35 = (int)dVar68;
      iVar1 = (int)(dVar68 * dVar28);
      iVar46 = *(int *)(param_5 + 0x50) * iVar35 + *(int *)(param_5 + 100);
      iVar2 = (int)(dVar68 * dVar30 - (double)(__int64)(iVar35 << 8));
      iVar44 = iVar2 * iVar2 >> 8;
      iVar21 = iVar44 * iVar2 >> 8;
      iVar38 = (int)(dVar68 * dVar31 - (double)(__int64)(iVar1 << 8));
      iVar22 = iVar38 * iVar38 >> 8;
      iVar23 = iVar22 * iVar38 >> 8;
      if ((iVar35 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar35)) {
        if (iVar35 < *(int *)(param_5 + 0x54)) {
          iVar38 = 0;
          iVar49 = *(int *)(param_5 + 0x58);
          if (iVar35 < *(int *)(param_5 + 0x54) + -1) {
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar35 = (int)dVar68;
                if ((iVar35 < 0) || (*(int *)(param_5 + 0x50) <= iVar35)) {
                  puVar40[1] = 0x10;
                  if (!bVar26) goto LAB_82f30670;
                  puVar53[1] = 0x80;
                  bVar26 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar53 = puVar53 + 1;
                }
                else {
                  puVar40[1] = (char)((unsigned __int64)
                                      ((__int64)(int)(unsigned int)*(unsigned char *)(iVar35 + iVar46) *
                                       (__int64)(0x100 - iVar2) +
                                      (__int64)
                                      (int)(unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) + iVar35 +
                                                          iVar46) * (__int64)iVar2) >> 8);
                  if (bVar26) {
                    bVar26 = false;
                    iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                    puVar53[1] = *(unsigned char *)(iVar35 + iVar18);
                    puVar53 = puVar53 + 1;
                    puVar65[1] = *(unsigned char *)(iVar35 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82f30670:
                    bVar26 = true;
                  }
                }
                puVar40 = puVar40 + 1;
                iVar49 = *(int *)(param_5 + 0x58);
                iVar38 = iVar38 + 1;
                puStack_160 = puVar40;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              } while (iVar38 < iVar49);
            }
          }
          else {
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar35 = (int)dVar68;
                if ((iVar35 < 0) || (*(int *)(param_5 + 0x50) <= iVar35)) {
                  puVar40[1] = 0x10;
                  if (!bVar26) goto LAB_82f30720;
                  puVar53[1] = 0x80;
                  bVar26 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar53 = puVar53 + 1;
                }
                else {
                  puVar40[1] = *(unsigned char *)(iVar35 + iVar46);
                  if (bVar26) {
                    bVar26 = false;
                    iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                    puVar53[1] = *(unsigned char *)(iVar35 + iVar18);
                    puVar53 = puVar53 + 1;
                    puVar65[1] = *(unsigned char *)(iVar35 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82f30720:
                    bVar26 = true;
                  }
                }
                puVar40 = puVar40 + 1;
                iVar49 = *(int *)(param_5 + 0x58);
                iVar38 = iVar38 + 1;
                puStack_160 = puVar40;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              } while (iVar38 < iVar49);
            }
          }
        }
        else {
          iVar49 = *(int *)(param_5 + 0x58);
          iVar35 = 0;
          if (0 < iVar49) {
            do {
              puVar40[1] = 0x10;
              bVar26 = !bVar26;
              puVar40 = puVar40 + 1;
              if (!bVar26) {
                puVar53 = puVar53 + 1;
                *puVar53 = 0x80;
                puVar65 = puVar65 + 1;
                *puVar65 = 0x80;
              }
              iVar49 = *(int *)(param_5 + 0x58);
              iVar35 = iVar35 + 1;
              puStack_160 = puVar40;
              puStack_148 = puVar53;
              puStack_138 = puVar65;
            } while (iVar35 < iVar49);
          }
        }
      }
      else {
        iVar49 = *(int *)(param_5 + 0x58);
        iStack_11c = 0;
        dVar68 = param_2;
        if (0 < iVar49) {
          do {
            dVar68 = dVar68 + param_1;
            iVar35 = (int)dVar68;
            iVar49 = (int)(dVar68 * dVar30 - (double)(__int64)(iVar35 << 8));
            if ((iVar35 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar35)) {
              iVar24 = *(int *)(param_5 + 0x50);
              if (iVar35 < iVar24) {
                if (iVar35 < iVar24 + -1) {
                  pbVar43 = (unsigned char *)(iVar24 + iVar35 + iVar46);
                  bVar50 = *(unsigned char *)(iVar35 + iVar46 + 1);
                  bVar3 = *pbVar43;
                  puVar40[1] = (char)(((int)(((((unsigned int)pbVar43[1] - (unsigned int)bVar50) - (unsigned int)bVar3) +
                                             (unsigned int)*(unsigned char *)(iVar35 + iVar46)) * iVar49 * iVar2) >>
                                      8) + ((0x100 - iVar49) - iVar2) *
                                           (unsigned int)*(unsigned char *)(iVar35 + iVar46) + (unsigned int)bVar50 * iVar49
                                      + (unsigned int)bVar3 * iVar2 >> 8);
                }
                else {
                  puVar40[1] = (char)((unsigned __int64)
                                      ((__int64)(int)(unsigned int)*(unsigned char *)(iVar35 + iVar46) *
                                       (__int64)(0x100 - iVar2) +
                                      (__int64)(int)(unsigned int)*(unsigned char *)(iVar24 + iVar35 + iVar46) *
                                      (__int64)iVar2) >> 8);
                }
                puStack_160 = puVar40 + 1;
                if (bVar25) {
                  bVar25 = false;
                  iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                  puVar53[1] = *(unsigned char *)(iVar35 + iVar18);
                  puVar53 = puVar53 + 1;
                  puVar65[1] = *(unsigned char *)(iVar35 + iVar19);
                  puVar65 = puVar65 + 1;
                  puStack_148 = puVar53;
                  puStack_138 = puVar65;
                }
                else {
LAB_82f3044c:
                  bVar25 = true;
                }
              }
              else {
                puVar40[1] = 0x10;
                puStack_160 = puVar40 + 1;
                if (!bVar25) goto LAB_82f3044c;
                puVar53[1] = 0x80;
                puVar53 = puVar53 + 1;
                puVar65[1] = 0x80;
                puVar65 = puVar65 + 1;
                bVar25 = false;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              }
            }
            else {
              pbVar43 = (unsigned char *)(iVar35 + iVar46);
              iVar35 = *(int *)(param_5 + 0x50);
              bVar16 = pbVar43[iVar35];
              uVar39 = (unsigned __int64)bVar16;
              bVar50 = *pbVar43;
              uVar47 = (unsigned __int64)bVar50;
              bVar3 = pbVar43[-1];
              uVar42 = (unsigned __int64)bVar3;
              bVar4 = pbVar43[2];
              uVar36 = (unsigned __int64)bVar4;
              bVar5 = pbVar43[1];
              uVar41 = (unsigned __int64)bVar5;
              pbVar62 = pbVar43 + -iVar35;
              iVar24 = iVar49 * iVar49 >> 8;
              pbVar59 = pbVar43 + iVar35 * 2;
              bVar6 = pbVar43[iVar35 + 1];
              uVar66 = (unsigned __int64)bVar6;
              bVar7 = pbVar62[-1];
              uVar37 = (unsigned __int64)bVar7;
              bVar8 = *pbVar62;
              uVar45 = (unsigned __int64)bVar8;
              bVar9 = pbVar62[1];
              uVar63 = (unsigned __int64)bVar9;
              bVar10 = pbVar43[iVar35 + -1];
              uVar64 = (unsigned __int64)bVar10;
              bVar11 = pbVar59[-1];
              uVar60 = (unsigned __int64)bVar11;
              uVar55 = (unsigned __int64)pbVar59[1];
              bVar12 = pbVar59[2];
              bVar13 = *pbVar59;
              uVar34 = (unsigned __int64)bVar13;
              bVar14 = pbVar62[2];
              uVar61 = (unsigned __int64)bVar14;
              uVar32 = (unsigned __int64)pbVar43[iVar35 + 2];
              uVar57 = uVar34 + (uVar42 + uVar45) * -2 + uVar36;
              uVar54 = ((uVar47 * 2 + uVar64 + uVar63) * 2 - uVar55) - uVar32;
              uVar58 = ((uVar39 - uVar66) - uVar36) + uVar42;
              iVar35 = iVar24 * iVar49 >> 8;
              iVar51 = (unsigned int)bVar50 + (unsigned int)bVar50 * 4;
              uVar33 = ((uVar66 - uVar39) - uVar41) + uVar47;
              iStack_f0 = (int)((((((uVar34 - uVar55) - uVar32) - uVar42) - uVar45) + uVar64 +
                                 uVar36 + uVar63 & 0x7fffffff) << 1);
              iVar35 = (((int)(((int)((uVar57 & 0xffffffff) << 3) - (int)uVar57) +
                               ((int)((((uVar66 + uVar37) * 2 - uVar60) - uVar61 & 0xffffffff) << 1)
                               + (unsigned int)bVar12) * 2 + (int)uVar54 + (int)((uVar54 & 0xffffffff) << 2)
                              + ((unsigned int)bVar16 + (unsigned int)bVar5) * -0xd) >> 1) * iVar24 +
                        ((int)((int)(((((((uVar45 - uVar63 & 0x7fffffff) * 2 - uVar34) - uVar37) +
                                        uVar55 + uVar61 & 0x7fffffff) * 2 - (unsigned __int64)bVar12) +
                                      uVar60 & 0xffffffff) << 1) +
                               ((int)((uVar58 & 0xffffffff) << 3) - (int)uVar58) +
                               (int)(uVar32 - uVar64) + (int)((uVar32 - uVar64 & 0xffffffff) << 2) +
                              ((unsigned int)bVar5 - (unsigned int)bVar50) * 0xb) >> 1) * iVar35 +
                        ((int)((((((int)(((uVar45 - uVar47) - uVar37 & 0xffffffff) << 1) -
                                  (unsigned int)bVar13) + (unsigned int)bVar11 + (unsigned int)bVar16) * 2 +
                                (int)(uVar66 - uVar41) + (int)((uVar66 - uVar41 & 0xffffffff) << 1))
                               - ((unsigned int)bVar10 + (unsigned int)bVar10 * 4)) +
                              ((unsigned int)bVar3 * 8 - (unsigned int)bVar3)) >> 1) * iVar49 +
                       ((int)((((unsigned int)bVar16 * 2 + (unsigned int)bVar8) * 2 - iVar51) - (unsigned int)bVar13) >> 1)
                       * 0x100) * iVar44 +
                       (((int)((int)(((((((uVar42 - uVar64 & 0x7fffffff) * 2 - uVar36) - uVar37) +
                                        uVar60 + uVar32 & 0x7fffffff) * 2 - (unsigned __int64)bVar12) +
                                      uVar61 & 0xffffffff) << 1) +
                               ((((unsigned int)bVar5 - (unsigned int)bVar13) - (unsigned int)bVar6) + (unsigned int)bVar8) * 7 +
                               ((unsigned int)bVar16 - (unsigned int)bVar50) * 0xb +
                              (int)(uVar55 - uVar63) + (int)((uVar55 - uVar63 & 0xffffffff) << 2))
                        >> 1) * iVar24 +
                        ((((iStack_f0 + (int)uVar33 + (int)((uVar33 & 0xffffffff) << 1)) -
                          (unsigned int)bVar11) - (unsigned int)bVar14) + (unsigned int)bVar12 + (unsigned int)bVar7) * iVar35 +
                       ((((((int)((uVar64 - uVar42 & 0xffffffff) << 1) - (unsigned int)bVar11) - (unsigned int)bVar6
                          ) - (unsigned int)bVar16) - (unsigned int)bVar8) + (unsigned int)bVar13 + (unsigned int)bVar5 +
                        (unsigned int)bVar50 + (unsigned int)bVar7) * iVar49) * iVar21 +
                       (((int)((((int)(((((uVar42 - uVar47) - uVar37 & 0x7fffffff) * 2 - uVar36) +
                                        uVar41 + uVar61 & 0xffffffff) << 1) +
                                (int)(uVar66 - uVar39) + (int)((uVar66 - uVar39 & 0xffffffff) << 1))
                               - ((unsigned int)bVar9 + (unsigned int)bVar9 * 4)) + ((unsigned int)bVar8 * 8 - (unsigned int)bVar8))
                        >> 1) * iVar24 +
                        ((((((int)((uVar63 - uVar45 & 0xffffffff) << 1) - (unsigned int)bVar6) - (unsigned int)bVar5
                           ) - (unsigned int)bVar3) - (unsigned int)bVar14) + (unsigned int)bVar16 + (unsigned int)bVar4 +
                         (unsigned int)bVar50 + (unsigned int)bVar7) * iVar35 +
                       ((((unsigned int)bVar50 - (unsigned int)bVar3) - (unsigned int)bVar8) + (unsigned int)bVar7) * iVar49) *
                       iVar2 + (int)(((__int64)
                                      ((int)((((unsigned int)bVar5 * 2 + (unsigned int)bVar3) * 2 - iVar51) -
                                            (unsigned int)bVar4) >> 1) * (__int64)iVar24 +
                                      (__int64)
                                      ((int)((((int)(uVar47 - uVar41) +
                                              (int)((uVar47 - uVar41 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar3) + (unsigned int)bVar4) >> 1) * (__int64)iVar35 +
                                      (__int64)
                                      ((int)((((int)(uVar47 - uVar39) +
                                              (int)((uVar47 - uVar39 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar8) + (unsigned int)bVar13) >> 1) * (__int64)iVar21 +
                                      (__int64)((int)((unsigned int)bVar5 - (unsigned int)bVar3) >> 1) *
                                      (__int64)iVar49 +
                                      (__int64)((int)((unsigned int)bVar16 - (unsigned int)bVar8) >> 1) *
                                      (__int64)iVar2 + uVar47 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              puVar40 = puStack_160 + 1;
              puStack_160[1] = bVar50;
              puVar53 = puStack_148;
              puVar65 = puStack_138;
              puStack_160 = puVar40;
              if (!bVar25) goto LAB_82f3044c;
              iVar48 = iVar1 * iVar20 + (int)(dVar68 * dVar28);
              pbVar43 = (unsigned char *)(iVar48 + iVar18);
              iVar56 = iVar20 * 2;
              pbVar59 = pbVar43 + -iVar20;
              bVar50 = *pbVar43;
              uVar47 = (unsigned __int64)bVar50;
              bVar10 = pbVar43[iVar20 + 1];
              uVar60 = (unsigned __int64)bVar10;
              bVar3 = pbVar59[-1];
              uVar36 = (unsigned __int64)bVar3;
              bVar11 = pbVar43[iVar20 + -1];
              uVar61 = (unsigned __int64)bVar11;
              bVar4 = *pbVar59;
              uVar41 = (unsigned __int64)bVar4;
              bVar5 = pbVar43[-1];
              uVar42 = (unsigned __int64)bVar5;
              iVar52 = (unsigned int)bVar50 + (unsigned int)bVar50 * 4;
              bVar12 = pbVar43[iVar56 + -1];
              uVar58 = (unsigned __int64)bVar12;
              bVar6 = pbVar59[1];
              uVar64 = (unsigned __int64)bVar6;
              bVar13 = pbVar43[iVar56];
              uVar67 = (unsigned __int64)bVar13;
              bVar7 = pbVar59[2];
              uVar57 = (unsigned __int64)bVar7;
              uVar54 = (unsigned __int64)pbVar43[iVar56 + 1];
              bVar8 = pbVar43[2];
              uVar66 = (unsigned __int64)bVar8;
              bVar14 = pbVar43[iVar56 + 2];
              bVar16 = pbVar43[iVar20];
              uVar37 = (unsigned __int64)bVar16;
              uVar39 = uVar67 + (uVar42 + uVar41) * -2 + uVar66;
              uVar55 = (unsigned __int64)pbVar43[iVar20 + 2];
              bVar9 = pbVar43[1];
              uVar45 = (unsigned __int64)bVar9;
              uVar34 = ((uVar47 * 2 + uVar61 + uVar64) * 2 - uVar54) - uVar55;
              iVar35 = (int)(dVar68 * dVar31 - (double)(__int64)((int)(dVar68 * dVar28) << 8));
              iVar49 = iVar35 * iVar35 >> 8;
              iVar24 = iVar49 * iVar35 >> 8;
              iStack_158 = (int)(((((uVar41 - uVar64 & 0x7fffffff) * 2 - uVar67) - uVar36) + uVar54
                                  + uVar57 & 0x7fffffff) << 1);
              iVar51 = iStack_158 - (unsigned int)bVar14;
              uVar32 = ((uVar37 - uVar60) - uVar66) + uVar42;
              iStack_158 = (int)((uVar54 - uVar64 & 0x3fffffff) << 2);
              uVar33 = uVar60 - uVar37;
              uVar63 = (uVar33 - uVar45) + uVar47;
              iVar51 = (((int)(((int)((uVar39 & 0xffffffff) << 3) - (int)uVar39) +
                               (int)(((((uVar60 + uVar36) * 2 - uVar58) - uVar57 & 0x7fffffff) * 2 +
                                      (unsigned __int64)bVar14 & 0xffffffff) << 1) +
                               (int)uVar34 + (int)((uVar34 & 0xffffffff) << 2) +
                              ((unsigned int)bVar16 + (unsigned int)bVar9) * -0xd) >> 1) * iVar49 +
                        ((int)((iVar51 + (unsigned int)bVar12) * 2 +
                               ((int)((uVar32 & 0xffffffff) << 3) - (int)uVar32) +
                               ((unsigned int)pbVar43[iVar20 + 2] - (unsigned int)bVar11) * 5 +
                              ((unsigned int)bVar9 - (unsigned int)bVar50) * 0xb) >> 1) * iVar24 +
                        ((int)((((int)(((((uVar41 - uVar47) - uVar36 & 0x7fffffff) * 2 - uVar67) +
                                        uVar58 + uVar37 & 0xffffffff) << 1) +
                                (int)(uVar60 - uVar45) + (int)((uVar60 - uVar45 & 0xffffffff) << 1))
                               - ((unsigned int)bVar11 + (unsigned int)bVar11 * 4)) +
                              ((unsigned int)bVar5 * 8 - (unsigned int)bVar5)) >> 1) * iVar35 +
                       ((int)((((unsigned int)bVar16 * 2 + (unsigned int)bVar4) * 2 - iVar52) - (unsigned int)bVar13) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)((((int)(((((uVar42 - uVar61 & 0x7fffffff) * 2 - uVar66) -
                                              uVar36) + uVar58 + uVar55 & 0xffffffff) << 1) -
                                      (unsigned int)bVar14) + uVar57 & 0xffffffff) << 1) +
                               ((((unsigned int)bVar9 - (unsigned int)bVar13) - (unsigned int)bVar10) + (unsigned int)bVar4) * 7 +
                               ((unsigned int)bVar16 - (unsigned int)bVar50) * 0xb +
                              (int)(uVar54 - uVar64) + iStack_158) >> 1) * iVar49 +
                        (((((int)((((((uVar67 - uVar54) - uVar55) - uVar42) - uVar41) + uVar61 +
                                   uVar66 + uVar64 & 0xffffffff) << 1) +
                           (int)uVar63 + (int)((uVar63 & 0xffffffff) << 1)) - (unsigned int)bVar12) -
                         (unsigned int)bVar7) + (unsigned int)bVar14 + (unsigned int)bVar3) * iVar24 +
                       ((((((int)((uVar61 - uVar42 & 0xffffffff) << 1) - (unsigned int)bVar12) -
                          (unsigned int)bVar10) - (unsigned int)bVar16) - (unsigned int)bVar4) + (unsigned int)bVar13 + (unsigned int)bVar9
                        + (unsigned int)bVar50 + (unsigned int)bVar3) * iVar35) * iVar23 +
                       (((int)((((int)(((((uVar42 - uVar47) - uVar36 & 0x7fffffff) * 2 - uVar66) +
                                        uVar45 + uVar57 & 0xffffffff) << 1) +
                                (int)uVar33 + (int)((uVar33 & 0xffffffff) << 1)) -
                               ((unsigned int)bVar6 + (unsigned int)bVar6 * 4)) + ((unsigned int)bVar4 * 8 - (unsigned int)bVar4))
                        >> 1) * iVar49 +
                        ((((((int)((uVar64 - uVar41 & 0xffffffff) << 1) - (unsigned int)bVar10) -
                           (unsigned int)bVar9) - (unsigned int)bVar5) - (unsigned int)bVar7) + (unsigned int)bVar16 + (unsigned int)bVar8 +
                         (unsigned int)bVar50 + (unsigned int)bVar3) * iVar24 +
                       ((((unsigned int)bVar50 - (unsigned int)bVar5) - (unsigned int)bVar4) + (unsigned int)bVar3) * iVar35) *
                       iVar38 + (int)(((__int64)
                                       ((int)((((unsigned int)bVar9 * 2 + (unsigned int)bVar5) * 2 - iVar52) -
                                             (unsigned int)bVar8) >> 1) * (__int64)iVar49 +
                                       (__int64)
                                       ((int)((((int)(uVar47 - uVar37) +
                                               (int)((uVar47 - uVar37 & 0xffffffff) << 1)) -
                                              (unsigned int)bVar4) + (unsigned int)bVar13) >> 1) * (__int64)iVar23
                                       + (__int64)
                                         ((int)((((int)(uVar47 - uVar45) +
                                                 (int)((uVar47 - uVar45 & 0xffffffff) << 1)) -
                                                (unsigned int)bVar5) + (unsigned int)bVar8) >> 1) * (__int64)iVar24
                                       + (__int64)((int)((unsigned int)bVar9 - (unsigned int)bVar5) >> 1) *
                                         (__int64)iVar35 +
                                       (__int64)((int)((unsigned int)bVar16 - (unsigned int)bVar4) >> 1) *
                                       (__int64)iVar38 + uVar47 * 0x100 & 0xffffffff) << 8);
              if (iVar51 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar51 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar51 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              pbVar43 = (unsigned char *)(iVar48 + iVar19);
              puStack_148[1] = bVar50;
              puVar53 = puStack_148 + 1;
              pbVar59 = pbVar43 + -iVar20;
              bVar10 = pbVar43[iVar56 + -1];
              uVar58 = (unsigned __int64)bVar10;
              bVar50 = pbVar43[2];
              uVar64 = (unsigned __int64)bVar50;
              bVar3 = pbVar59[-1];
              uVar67 = (unsigned __int64)bVar3;
              uVar32 = (unsigned __int64)pbVar43[iVar56 + 2];
              bVar4 = pbVar59[1];
              uVar61 = (unsigned __int64)bVar4;
              bVar11 = pbVar43[iVar56];
              uVar66 = (unsigned __int64)bVar11;
              uVar55 = (unsigned __int64)pbVar43[iVar56 + 1];
              bVar12 = pbVar43[iVar20];
              uVar33 = (unsigned __int64)bVar12;
              bVar13 = pbVar43[iVar20 + 1];
              uVar63 = (unsigned __int64)bVar13;
              bVar5 = pbVar59[2];
              uVar57 = (unsigned __int64)bVar5;
              bVar6 = *pbVar43;
              uVar42 = (unsigned __int64)bVar6;
              bVar14 = pbVar43[iVar20 + -1];
              uVar60 = (unsigned __int64)bVar14;
              bVar7 = pbVar43[-1];
              uVar37 = (unsigned __int64)bVar7;
              bVar8 = *pbVar59;
              uVar36 = (unsigned __int64)bVar8;
              uVar45 = ((uVar33 - uVar63) - uVar64) + uVar37;
              bVar9 = pbVar43[1];
              uVar34 = (unsigned __int64)bVar9;
              uVar39 = (unsigned __int64)pbVar43[iVar20 + 2];
              iStack_170 = (int)(((((uVar63 + uVar67) * 2 - uVar58) - uVar57 & 0x7fffffff) * 2 +
                                  uVar32 & 0x7fffffff) << 1);
              uVar54 = ((unsigned int)bVar11 + ((unsigned int)bVar7 + (unsigned int)bVar8) * -2) + uVar64;
              iStack_158 = (int)((uVar39 - uVar60 & 0x3fffffff) << 2);
              iVar51 = (unsigned int)bVar6 + (unsigned int)bVar6 * 4;
              uVar41 = ((uVar63 - uVar33) - uVar34) + uVar42;
              uVar47 = ((uVar34 - uVar66) - uVar63) + uVar36;
              iVar35 = (((int)(((int)((uVar54 & 0xffffffff) << 3) - (int)uVar54) + iStack_170 +
                               ((((unsigned int)bVar6 * 2 + (unsigned int)bVar14 + (unsigned int)bVar4) * 2 -
                                (unsigned int)pbVar43[iVar56 + 1]) - (unsigned int)pbVar43[iVar20 + 2]) * 5 +
                              ((unsigned int)bVar12 + (unsigned int)bVar9) * -0xd) >> 1) * iVar49 +
                        ((int)((int)(((((((uVar36 - uVar61 & 0x7fffffff) * 2 - uVar66) - uVar67) +
                                        uVar55 + uVar57 & 0x7fffffff) * 2 - uVar32) + uVar58 &
                                     0xffffffff) << 1) +
                               ((int)((uVar45 & 0xffffffff) << 3) - (int)uVar45) +
                               (int)(uVar39 - uVar60) + iStack_158 +
                              ((unsigned int)bVar9 - (unsigned int)bVar6) * 0xb) >> 1) * iVar24 +
                        ((int)((((int)(((((uVar36 - uVar42) - uVar67 & 0x7fffffff) * 2 - uVar66) +
                                        uVar58 + uVar33 & 0xffffffff) << 1) +
                                (int)(uVar63 - uVar34) + (int)((uVar63 - uVar34 & 0xffffffff) << 1))
                               - ((unsigned int)bVar14 + (unsigned int)bVar14 * 4)) +
                              ((unsigned int)bVar7 * 8 - (unsigned int)bVar7)) >> 1) * iVar35 +
                       ((int)((((unsigned int)bVar12 * 2 + (unsigned int)bVar8) * 2 - iVar51) - (unsigned int)bVar11) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)(((((((uVar37 - uVar60 & 0x7fffffff) * 2 - uVar64) - uVar67) +
                                        uVar58 + uVar39 & 0x7fffffff) * 2 - uVar32) + uVar57 &
                                     0xffffffff) << 1) +
                               ((int)((uVar47 & 0xffffffff) << 3) - (int)uVar47) +
                               ((unsigned int)bVar12 - (unsigned int)bVar6) * 0xb +
                              (int)(uVar55 - uVar61) + (int)((uVar55 - uVar61 & 0xffffffff) << 2))
                        >> 1) * iVar49 +
                        (((((int)((((((uVar66 - uVar55) - uVar39) - uVar37) - uVar36) + uVar60 +
                                   uVar64 + uVar61 & 0xffffffff) << 1) +
                           (int)uVar41 + (int)((uVar41 & 0xffffffff) << 1)) - (unsigned int)bVar10) -
                         (unsigned int)bVar5) + (unsigned int)pbVar43[iVar56 + 2] + (unsigned int)bVar3) * iVar24 +
                       ((((((int)((uVar60 - uVar37 & 0xffffffff) << 1) - (unsigned int)bVar10) -
                          (unsigned int)bVar13) - (unsigned int)bVar12) - (unsigned int)bVar8) + (unsigned int)bVar11 + (unsigned int)bVar9
                        + (unsigned int)bVar6 + (unsigned int)bVar3) * iVar35) * iVar23 +
                       (((int)((((int)(((((uVar37 - uVar42) - uVar67 & 0x7fffffff) * 2 - uVar64) +
                                        uVar34 + uVar57 & 0xffffffff) << 1) +
                                (int)(uVar63 - uVar33) + (int)((uVar63 - uVar33 & 0xffffffff) << 1))
                               - ((unsigned int)bVar4 + (unsigned int)bVar4 * 4)) + ((unsigned int)bVar8 * 8 - (unsigned int)bVar8))
                        >> 1) * iVar49 +
                        ((((((int)((uVar61 - uVar36 & 0xffffffff) << 1) - (unsigned int)bVar13) -
                           (unsigned int)bVar9) - (unsigned int)bVar7) - (unsigned int)bVar5) + (unsigned int)bVar12 + (unsigned int)bVar50
                         + (unsigned int)bVar6 + (unsigned int)bVar3) * iVar24 +
                       ((((unsigned int)bVar6 - (unsigned int)bVar7) - (unsigned int)bVar8) + (unsigned int)bVar3) * iVar35) *
                       iVar38 + (int)(((__int64)
                                       ((int)((((unsigned int)bVar9 * 2 + (unsigned int)bVar7) * 2 - iVar51) -
                                             (unsigned int)bVar50) >> 1) * (__int64)iVar49 +
                                       (__int64)
                                       ((int)((((int)(uVar42 - uVar33) +
                                               (int)((uVar42 - uVar33 & 0xffffffff) << 1)) -
                                              (unsigned int)bVar8) + (unsigned int)bVar11) >> 1) * (__int64)iVar23
                                       + (__int64)
                                         ((int)((((int)(uVar42 - uVar34) +
                                                 (int)((uVar42 - uVar34 & 0xffffffff) << 1)) -
                                                (unsigned int)bVar7) + (unsigned int)bVar50) >> 1) *
                                         (__int64)iVar24 +
                                       (__int64)((int)((unsigned int)bVar9 - (unsigned int)bVar7) >> 1) *
                                       (__int64)iVar35 +
                                       (__int64)((int)((unsigned int)bVar12 - (unsigned int)bVar8) >> 1) *
                                       (__int64)iVar38 + uVar42 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              bVar25 = false;
              puVar65 = puStack_138 + 1;
              puStack_138[1] = bVar50;
              puStack_148 = puVar53;
              puStack_138 = puVar65;
            }
            iVar49 = *(int *)(param_5 + 0x58);
            iStack_11c = iStack_11c + 1;
            puVar40 = puStack_160;
          } while (iStack_11c < iVar49);
        }
      }
      dVar68 = (double)(__int64)(iStack_108 + 1) * param_3 + param_4;
      iVar35 = (int)dVar68;
      iRam832617f4 = iVar35 << 8;
      iVar44 = *(int *)(param_5 + 0x50) * iVar35 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar68 * dVar30 - (double)(__int64)iRam832617f4);
      iVar2 = iVar1 * iVar1 >> 8;
      iVar38 = iVar2 * iVar1 >> 8;
      if ((iVar35 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar35)) {
        if (iVar35 < *(int *)(param_5 + 0x54)) {
          if (iVar35 < *(int *)(param_5 + 0x54) + -1) {
            iVar35 = 0;
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar2 = (int)dVar68;
                if ((iVar2 < 0) || (*(int *)(param_5 + 0x50) <= iVar2)) {
                  puVar40[1] = 0x10;
                }
                else {
                  puVar40[1] = (char)((unsigned __int64)
                                      ((__int64)(int)(unsigned int)*(unsigned char *)(iVar2 + iVar44) *
                                       (__int64)(0x100 - iVar1) +
                                      (__int64)
                                      (int)(unsigned int)*(unsigned char *)(iVar2 + *(int *)(param_5 + 0x50) + iVar44
                                                          ) * (__int64)iVar1) >> 8);
                }
                iVar35 = iVar35 + 1;
                puVar40 = puVar40 + 1;
                puStack_160 = puVar40;
              } while (iVar35 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar35 = 0;
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar1 = (int)dVar68;
                if ((iVar1 < 0) || (*(int *)(param_5 + 0x50) <= iVar1)) {
                  puVar40[1] = 0x10;
                }
                else {
                  puVar40[1] = *(unsigned char *)(iVar1 + iVar44);
                }
                iVar35 = iVar35 + 1;
                puVar40 = puVar40 + 1;
                puStack_160 = puVar40;
              } while (iVar35 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar35 = 0;
          if (0 < iVar49) {
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              iVar35 = iVar35 + 1;
              puStack_160 = puVar40;
            } while (iVar35 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_11c = 0;
        dVar68 = param_2;
        if (0 < iVar49) {
          do {
            dVar68 = dVar68 + param_1;
            iVar35 = (int)dVar68;
            if ((iVar35 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar35)) {
              if (iVar35 < *(int *)(param_5 + 0x50)) {
                puVar40[1] = *(unsigned char *)(iVar35 + iVar44);
              }
              else {
                puVar40[1] = 0x10;
              }
            }
            else {
              pbVar43 = (unsigned char *)(iVar35 + iVar44);
              iVar21 = *(int *)(param_5 + 0x50);
              iRam832617f4 = iVar35 << 8;
              pbVar62 = pbVar43 + -iVar21;
              bVar50 = pbVar43[2];
              bVar3 = pbVar62[-1];
              uVar36 = (unsigned __int64)bVar3;
              bVar4 = pbVar43[iVar21 + 1];
              uVar58 = (unsigned __int64)bVar4;
              pbVar59 = pbVar43 + iVar21 * 2;
              bVar5 = *pbVar43;
              uVar45 = (unsigned __int64)bVar5;
              bVar6 = pbVar43[iVar21 + -1];
              uVar60 = (unsigned __int64)bVar6;
              bVar7 = pbVar43[-1];
              uVar42 = (unsigned __int64)bVar7;
              bVar8 = *pbVar62;
              uVar41 = (unsigned __int64)bVar8;
              bVar9 = pbVar59[-1];
              uVar55 = (unsigned __int64)bVar9;
              bVar10 = pbVar62[1];
              uVar61 = (unsigned __int64)bVar10;
              bVar11 = pbVar62[2];
              uVar57 = (unsigned __int64)bVar11;
              bVar12 = *pbVar59;
              uVar34 = (unsigned __int64)bVar12;
              bVar13 = pbVar59[2];
              bVar14 = pbVar59[1];
              bVar16 = pbVar43[1];
              uVar39 = (unsigned __int64)bVar16;
              bVar17 = pbVar43[iVar21];
              uVar37 = (unsigned __int64)bVar17;
              bVar15 = pbVar43[iVar21 + 2];
              uVar32 = uVar34 + (uVar42 + uVar41) * -2 + (unsigned __int64)bVar50;
              uVar54 = ((uVar45 * 2 + uVar60 + uVar61) * 2 - (unsigned __int64)bVar14) - (unsigned __int64)bVar15;
              iVar35 = (int)(dVar68 * dVar30 - (double)(__int64)iRam832617f4);
              uVar33 = ((uVar39 - uVar34) - uVar58) + uVar41;
              iVar21 = iVar35 * iVar35 >> 8;
              iVar22 = (int)(uVar58 - uVar37);
              uVar47 = (iVar22 - (unsigned int)bVar16) + uVar45;
              iVar35 = (((int)(((int)((uVar32 & 0xffffffff) << 3) - (int)uVar32) +
                               (int)(((((uVar58 + uVar36) * 2 - uVar55) - uVar57 & 0x7fffffff) * 2 +
                                      (unsigned __int64)bVar13 & 0xffffffff) << 1) +
                               (int)uVar54 + (int)((uVar54 & 0xffffffff) << 2) +
                              ((unsigned int)bVar17 + (unsigned int)bVar16) * -0xd) >> 1) * iVar2 +
                        ((int)((((int)(((((uVar42 - uVar60 & 0x7fffffff) * 2 - (unsigned __int64)bVar50) -
                                        uVar36) + uVar55 + (unsigned __int64)bVar15 & 0xffffffff) << 1) -
                                (unsigned int)bVar13) + (unsigned int)bVar11) * 2 +
                               ((int)((uVar33 & 0xffffffff) << 3) - (int)uVar33) +
                               ((unsigned int)bVar17 - (unsigned int)bVar5) * 0xb +
                              ((unsigned int)bVar14 - (unsigned int)bVar10) * 5) >> 1) * iVar38 +
                       ((int)((((int)(((((int)(((uVar42 - uVar45) - uVar36 & 0xffffffff) << 1) -
                                        (unsigned int)bVar50) + (unsigned int)bVar16) + uVar57 & 0xffffffff) << 1) +
                               iVar22 + (int)((uVar58 - uVar37 & 0xffffffff) << 1)) -
                              ((unsigned int)bVar10 + (unsigned int)bVar10 * 4)) + ((unsigned int)bVar8 * 8 - (unsigned int)bVar8))
                       >> 1) * iVar1) * iVar21 +
                       (((int)((int)((((int)(((((uVar41 - uVar61 & 0x7fffffff) * 2 - uVar34) -
                                              uVar36) + (unsigned __int64)bVar14 + uVar57 & 0xffffffff) <<
                                            1) - (unsigned int)bVar13) + uVar55 & 0xffffffff) << 1) +
                               ((((unsigned int)bVar17 - (unsigned int)bVar4) - (unsigned int)bVar50) + (unsigned int)bVar7) * 7 +
                               ((unsigned int)bVar15 - (unsigned int)bVar6) * 5 + ((unsigned int)bVar16 - (unsigned int)bVar5) * 0xb
                              ) >> 1) * iVar2 +
                        (((((int)((((((((unsigned int)bVar12 - (unsigned int)bVar14) - (unsigned int)bVar15) - (unsigned int)bVar7)
                                    - (unsigned int)bVar8) + (unsigned int)bVar6 + (unsigned int)bVar50) + uVar61 &
                                  0xffffffff) << 1) +
                           (int)uVar47 + (int)((uVar47 & 0xffffffff) << 1)) - (unsigned int)bVar9) -
                         (unsigned int)bVar11) + (unsigned int)bVar13 + (unsigned int)bVar3) * iVar38 +
                        ((((((int)((uVar61 - uVar41 & 0xffffffff) << 1) - (unsigned int)bVar4) -
                           (unsigned int)bVar16) - (unsigned int)bVar7) - (unsigned int)bVar11) + (unsigned int)bVar17 +
                         (unsigned int)bVar50 + (unsigned int)bVar5 + (unsigned int)bVar3) * iVar1 +
                       ((int)((((int)(uVar45 - uVar39) + (int)((uVar45 - uVar39 & 0xffffffff) << 1))
                              - (unsigned int)bVar7) + (unsigned int)bVar50) >> 1) * 0x100) * (iVar21 * iVar35 >> 8)
                       + (((int)((((int)(((((unsigned __int64)(((unsigned int)bVar8 - (unsigned int)bVar5) - (unsigned int)bVar3) &
                                           0x7fffffff) * 2 - uVar34) + uVar55 + uVar37 & 0xffffffff)
                                        << 1) +
                                  (int)(uVar58 - uVar39) +
                                  (int)((uVar58 - uVar39 & 0xffffffff) << 1)) -
                                 ((unsigned int)bVar6 + (unsigned int)bVar6 * 4)) + ((unsigned int)bVar7 * 8 - (unsigned int)bVar7))
                          >> 1) * iVar2 +
                          ((((((int)((uVar60 - uVar42 & 0xffffffff) << 1) - (unsigned int)bVar9) -
                             (unsigned int)bVar4) - (unsigned int)bVar17) - (unsigned int)bVar8) + (unsigned int)bVar12 +
                           (unsigned int)bVar16 + (unsigned int)bVar5 + (unsigned int)bVar3) * iVar38 +
                          ((((unsigned int)bVar5 - (unsigned int)bVar7) - (unsigned int)bVar8) + (unsigned int)bVar3) * iVar1 +
                         ((int)((unsigned int)bVar16 - (unsigned int)bVar7) >> 1) * 0x100) * iVar35 +
                       (int)(((__int64)
                              ((int)((((unsigned int)bVar17 * 2 + (unsigned int)bVar8) * 2 - (unsigned int)bVar12) +
                                    (unsigned int)bVar5 * -5) >> 1) * (__int64)iVar2 +
                              (__int64)
                              ((int)((((unsigned int)bVar16 * 2 + (unsigned int)bVar7) * 2 - (unsigned int)bVar50) +
                                    (unsigned int)bVar5 * -5) >> 1) * (__int64)iVar21 +
                              (__int64)
                              ((int)((((int)(uVar45 - uVar37) +
                                      (int)((uVar45 - uVar37 & 0xffffffff) << 1)) - (unsigned int)bVar8) +
                                    (unsigned int)bVar12) >> 1) * (__int64)iVar38 +
                              (__int64)((int)((unsigned int)bVar17 - (unsigned int)bVar8) >> 1) * (__int64)iVar1 +
                              uVar45 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              puStack_160[1] = bVar50;
              puVar53 = puStack_148;
              puVar65 = puStack_138;
              puVar40 = puStack_160;
            }
            puVar40 = puVar40 + 1;
            iStack_11c = iStack_11c + 1;
            puStack_160 = puVar40;
          } while (iStack_11c < *(int *)(param_5 + 0x58));
        }
      }
      iStack_108 = iStack_108 + 2;
    } while (iStack_108 < *(int *)(param_5 + 0x5c));
  }
  return;
}

