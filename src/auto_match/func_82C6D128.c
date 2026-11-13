typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_110;
extern unsigned int fStack_104;
extern int fn_82C6B350();
extern int fn_82C6BA10();
extern int fn_82F68918();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82052318;
extern unsigned int lbl_8208DE50;
extern unsigned int lbl_820FC378;
extern unsigned int lbl_820FC380;
extern unsigned int lbl_820FC388;
extern unsigned int lbl_83232050;
extern unsigned int lbl_83232150;
extern unsigned int uStack_130;
extern unsigned int uStack_15c;


void fn_82C6D128(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  int in_r0;
  int iVar21;
  int iVar22;
  int iVar23;
  unsigned char *pbVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  int iVar27;
  int iVar28;
  unsigned int uVar29;
  unsigned int uVar31;
  int iVar32;
  __int64 lVar30;
  unsigned char *pbVar33;
  int iVar34;
  unsigned char *puVar36;
  int iVar37;
  unsigned __int64 uVar35;
  char *pcVar38;
  int iVar39;
  int iVar41;
  char *pcVar42;
  __int64 lVar40;
  unsigned int *puVar43;
  int *piVar44;
  unsigned int *puVar45;
  int iVar46;
  int iVar47;
  unsigned char *puVar48;
  unsigned int uVar49;
  __int64 lVar50;
  __int64 lVar51;
  unsigned int uVar52;
  unsigned int uVar53;
  bool bVar54;
  unsigned int uVar55;
  unsigned int uVar56;
  unsigned int uVar57;
  double dVar58;
  double dVar59;
  double extraout_f1;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_000103f0;
  char *pcStack_178;
  char *pcStack_174;
  unsigned int uStack_15c;
  unsigned int uStack_130;
  unsigned int auStack_110 [3];
  float fStack_104;
  __int64 lStack_100;
  __int64 lStack_f0;
  
  iVar21 = fn_82F6A534();
  dVar64 = lbl_82005710;
  if (iVar21 == 0) {
    fn_82F6A580(0xfffffffffffffffd);
  }
  else {
    iVar34 = *(int *)(iVar21 + 0x14);
    uVar8 = *(unsigned int *)(iVar21 + 0x3c30);
    uVar9 = *(unsigned int *)(iVar21 + 0x3c34);
    iVar47 = iVar34 >> 1;
    iVar10 = *(int *)(iVar21 + 0x3c20) >> 1;
    auStack_110[0] = lbl_82002AE0;
    uVar57 = iVar34 >> 5;
    lVar51 = (__int64)(int)uVar57;
    altv207_13(in_vs32,in_vs41);
    uVar56 = iVar34 >> 6;
    lVar50 = (__int64)(int)uVar56;
    lStack_f0 = CONCAT44((float)param_5,(((unsigned __int64)(lStack_f0) >> 32) & 0xFFFFFFFF));
    bVar54 = extraout_f1 != lbl_82005710;
    puVar14 = (unsigned int *)((int)auStack_110 + in_r0 & 0xfffffff0);
    *puVar14 = in_register_000103f0;
    puVar14[1] = in_register_000103f0;
    puVar14[2] = in_register_000103f0;
    puVar14[3] = in_register_000103f0;
    if ((bVar54) && (param_3 != dVar64)) {
      dVar65 = ((double)(__int64)iVar34 - param_2) / extraout_f1;
      dVar58 = (lbl_8200E890 / extraout_f1) * param_2;
      dVar60 = dVar58;
      if (dVar65 < dVar58) {
        dVar60 = dVar65;
        dVar65 = dVar58;
      }
      if (dVar60 < 0.0) {
        dVar60 = dVar64;
      }
      dVar58 = extraout_f1;
      dVar66 = lbl_8200E890;
      dVar60 = (double)fn_82F6B2A8(dVar60);
      if ((double)(__int64)*(int *)(iVar21 + 0x3c20) < dVar60) {
        dVar60 = (double)(__int64)*(int *)(iVar21 + 0x3c20);
      }
      dVar61 = (double)fn_82F68918(dVar60);
      dVar60 = dVar65 + lbl_820FC388;
      if ((double)(__int64)*(int *)(iVar21 + 0x3c20) < dVar65 + lbl_820FC388) {
        dVar60 = (double)(__int64)*(int *)(iVar21 + 0x3c20);
      }
      dVar60 = (double)fn_82F68918(dVar60);
      dVar59 = (double)(__int64)*(int *)(iVar21 + 0x3c20);
      if (dVar65 <= (double)(__int64)*(int *)(iVar21 + 0x3c20)) {
        dVar59 = dVar65;
      }
      dVar65 = (double)fn_82F68918(dVar59);
      if (dVar65 < 0.0) {
        dVar65 = dVar64;
      }
      dVar65 = (double)fn_82F6B2A8(dVar65);
      if (dVar60 < 0.0) {
        dVar60 = dVar64;
      }
      dVar62 = (double)fn_82F6B2A8(dVar60);
      dVar59 = (dVar66 / param_3) * param_4;
      dVar66 = ((double)(__int64)*(int *)(iVar21 + 0x3c1c) - param_4) / param_3 + lbl_82005758;
      dVar60 = dVar59;
      if (dVar66 < dVar59) {
        dVar60 = dVar66;
        dVar66 = dVar59;
      }
      if (dVar60 < 0.0) {
        dVar60 = dVar64;
      }
      dVar59 = lbl_82005758;
      dVar60 = (double)fn_82F6B2A8(dVar60);
      if ((double)(__int64)*(int *)(iVar21 + 0x3c24) < dVar60) {
        dVar60 = (double)(__int64)*(int *)(iVar21 + 0x3c24);
      }
      dVar63 = (double)fn_82F68918(dVar60);
      dVar60 = (double)(__int64)*(int *)(iVar21 + 0x3c24);
      if (dVar66 <= (double)(__int64)*(int *)(iVar21 + 0x3c24)) {
        dVar60 = dVar66;
      }
      dVar60 = (double)fn_82F68918(dVar60);
      if (dVar60 < 0.0) {
        dVar60 = dVar64;
      }
      uVar15 = (int)dVar63 + 1U & 0xfffffffe;
      uVar16 = (int)dVar61 + 1U & 0xfffffffe;
      uVar17 = (int)dVar65 & 0xfffffffe;
      uVar18 = (unsigned __int64)(unsigned int)(int)dVar62 & 0xfffffffe;
      iVar34 = (int)uVar18;
      dVar60 = (double)fn_82F6B2A8(dVar60);
      uStack_130 = (int)dVar60 & 0xfffffffe;
      if ((int)uStack_130 < 2) {
        uStack_130 = 2;
      }
      pcStack_174 = *(char **)(iVar21 + 0x3c3c);
      pcStack_178 = *(char **)(iVar21 + 0x3c40);
      uVar11 = (int)((int)dVar61 + 1U) >> 1;
      puVar48 = *(unsigned char **)(iVar21 + 0x3c38);
      iVar12 = (int)dVar65 >> 1;
      iVar23 = iVar34 >> 1;
      iVar39 = (int)(dVar58 * lbl_820FC380);
      uVar1 = (unsigned int)(param_3 * lbl_820FC380);
      iVar2 = (int)(dVar58 * lbl_820FC380 * lbl_82002C40);
      uVar25 = (__int64)(int)uVar1 * (__int64)(int)uVar15 -
               (unsigned __int64)(unsigned int)(int)(param_4 * lbl_820FC378);
      uVar31 = iVar39 * uVar16 - (int)(param_2 * lbl_820FC378);
      uVar25 = ((uVar25 & 0xffffffff) >> 0x1f) - 1 & uVar25;
      uVar31 = -((int)uVar31 >> 0x1f) - 1U & uVar31;
      uStack_15c = (unsigned int)uVar25;
      if ((param_5 <= dVar59) && (dVar59 = param_5, param_5 < dVar64)) {
        dVar59 = dVar64;
      }
      iVar32 = 0;
      altv207_13(in_vs32,in_vs42);
      iVar3 = (int)(dVar59 * lbl_82052318);
      if (0 < (int)uVar15) {
        do {
          iVar41 = 0;
          if (0 < *(int *)(iVar21 + 0x3c20)) {
            puVar36 = puVar48 + -1;
            do {
              iVar41 = iVar41 + 1;
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            } while (iVar41 < *(int *)(iVar21 + 0x3c20));
          }
          if (0 < iVar10) {
            pcVar42 = pcStack_178;
            iVar41 = iVar10;
            do {
              pcVar42[(int)pcStack_174 - (int)pcStack_178] = -0x80;
              *pcVar42 = -0x80;
              pcVar42 = pcVar42 + 1;
              iVar41 = iVar41 + -1;
            } while (iVar41 != 0);
          }
          iVar41 = *(int *)(iVar21 + 0x3c20);
          pcStack_174 = pcStack_174 + iVar10;
          pcStack_178 = pcStack_178 + iVar10;
          iVar37 = 0;
          iVar46 = iVar41;
          if (0 < iVar41) {
            puVar36 = puVar48 + iVar41 + -1;
            do {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              iVar37 = iVar37 + 1;
              iVar46 = *(int *)(iVar21 + 0x3c20);
            } while (iVar37 < iVar46);
          }
          iVar32 = iVar32 + 2;
          puVar48 = puVar48 + iVar46 + iVar41;
        } while (iVar32 < (int)uVar15);
      }
      lVar40 = 0;
      lVar30 = (__int64)((int)uStack_15c >> 0xb) * (__int64)(int)*(unsigned int *)(iVar21 + 0x14) +
               (unsigned __int64)*(unsigned int *)(iVar21 + 0x3c2c);
      if (0 < (int)uVar57) {
        do {
          dataCacheBlockTouch(lVar40 + lVar30);
          dataCacheBlockTouch(lVar40 + (unsigned __int64)*(unsigned int *)(iVar21 + 0x14) + lVar30);
          lVar40 = lVar40 + 0x80;
          lVar51 = lVar51 + -1;
        } while (lVar51 != 0);
      }
      lVar51 = (__int64)((int)uStack_15c >> 0xc) * (__int64)iVar47;
      if (0 < (int)uVar56) {
        do {
          dataCacheBlockTouch(lVar51 + (unsigned __int64)uVar8);
          dataCacheBlockTouch(lVar51 + (unsigned __int64)uVar9);
          lVar51 = lVar51 + 0x80;
          lVar50 = lVar50 + -1;
        } while (lVar50 != 0);
      }
      if ((int)uVar15 < (int)(uStack_130 - 2)) {
        iVar32 = uVar17 - uVar16;
        dVar64 = (double)lbl_8208DE50;
        uVar49 = uVar15;
        do {
          uVar52 = (unsigned int)uVar25 & 0x7ff;
          lStack_100 = (__int64)(int)uVar52;
          lVar51 = (__int64)((int)(unsigned int)uVar25 >> 0xb) * (__int64)(int)*(unsigned int *)(iVar21 + 0x14) +
                   (unsigned __int64)*(unsigned int *)(iVar21 + 0x3c2c);
          uVar35 = (unsigned __int64)uVar57;
          lVar50 = ((unsigned __int64)*(unsigned int *)(iVar21 + 0x14) & 0x7fffffff) << 1;
          fStack_104 = (float)((double)lStack_100 * dVar64);
          if (0 < (int)uVar57) {
            do {
              dataCacheBlockTouch(lVar50 + lVar51);
              lVar50 = lVar50 + 0x80;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          puVar36 = puVar48;
          if (0 < (int)uVar16) {
            puVar36 = puVar48 + -1;
            for (uVar55 = uVar16; uVar55 != 0; uVar55 = uVar55 - 1) {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            }
            puVar36 = puVar48 + uVar16;
          }
          puVar43 = (unsigned int *)0x83232048;
          lVar50 = 0x10;
          do {
            puVar43 = puVar43 + 4;
            *puVar43 = uVar52;
            lVar50 = lVar50 + -1;
          } while (lVar50 != 0);
          iVar41 = 0x800 - uVar52;
          uVar55 = iVar32 >> 4;
          lVar50 = (__int64)(int)uVar55;
          iVar37 = iVar32 + (uVar55 & 0xfffffff) * -0x10;
          iVar46 = (int)lVar51;
          uVar53 = uVar31;
          if (0 < lVar50) {
            do {
              puVar43 = (unsigned int *)0x8323204c;
              piVar44 = (int *)0x8323214c;
              lVar51 = 4;
              do {
                uVar26 = uVar53 + iVar39;
                pbVar33 = (unsigned char *)(((int)uVar53 >> 0xb) + iVar46);
                uVar19 = uVar53 & 0x7ff;
                uVar20 = uVar26 & 0x7ff;
                bVar4 = pbVar33[1];
                bVar5 = *pbVar33;
                pbVar24 = (unsigned char *)(((int)uVar26 >> 0xb) + iVar46);
                bVar6 = pbVar33[*(int *)(iVar21 + 0x14)];
                uVar26 = uVar26 + iVar39;
                bVar7 = (pbVar33 + *(int *)(iVar21 + 0x14))[1];
                puVar43[2] = uVar19;
                piVar44[2] = (unsigned int)bVar4;
                piVar44[1] = (unsigned int)bVar5;
                uVar29 = uVar26 & 0x7ff;
                piVar44[3] = (unsigned int)bVar6;
                puVar43[4] = uVar19;
                uVar53 = uVar26 + iVar39;
                puVar43[1] = iVar41 - uVar19;
                piVar44[4] = (((unsigned int)bVar7 - (unsigned int)bVar6) - (unsigned int)bVar4) + (unsigned int)bVar5;
                bVar4 = pbVar24[1];
                uVar19 = uVar53 & 0x7ff;
                bVar5 = *pbVar24;
                bVar6 = pbVar24[*(int *)(iVar21 + 0x14)];
                iVar22 = ((int)uVar26 >> 0xb) + iVar46;
                bVar7 = (pbVar24 + *(int *)(iVar21 + 0x14))[1];
                piVar44[6] = (unsigned int)bVar4;
                piVar44[5] = (unsigned int)bVar5;
                piVar44[7] = (unsigned int)bVar6;
                puVar43[6] = uVar20;
                piVar44[8] = (((unsigned int)bVar7 - (unsigned int)bVar6) - (unsigned int)bVar4) + (unsigned int)bVar5;
                puVar43[8] = uVar20;
                puVar43[5] = iVar41 - uVar20;
                bVar4 = *(unsigned char *)(iVar22 + 1);
                bVar7 = *(unsigned char *)(((int)uVar26 >> 0xb) + iVar46);
                pbVar24 = (unsigned char *)(iVar22 + *(int *)(iVar21 + 0x14));
                bVar5 = *pbVar24;
                iVar22 = ((int)uVar53 >> 0xb) + iVar46;
                bVar6 = pbVar24[1];
                piVar44[9] = (unsigned int)bVar7;
                piVar44[0xb] = (unsigned int)bVar5;
                piVar44[10] = (unsigned int)bVar4;
                puVar43[10] = uVar29;
                piVar44[0xc] = (((unsigned int)bVar6 - (unsigned int)bVar5) - (unsigned int)bVar4) + (unsigned int)bVar7;
                puVar43[0xc] = uVar29;
                puVar43[9] = iVar41 - uVar29;
                bVar7 = *(unsigned char *)(((int)uVar53 >> 0xb) + iVar46);
                bVar4 = *(unsigned char *)(iVar22 + 1);
                pbVar24 = (unsigned char *)(iVar22 + *(int *)(iVar21 + 0x14));
                bVar5 = *pbVar24;
                bVar6 = pbVar24[1];
                piVar44[0xf] = (unsigned int)bVar5;
                piVar44[0xe] = (unsigned int)bVar4;
                piVar44[0xd] = (unsigned int)bVar7;
                puVar43[0xd] = iVar41 - uVar19;
                piVar44 = piVar44 + 0x10;
                *piVar44 = (((unsigned int)bVar6 - (unsigned int)bVar5) - (unsigned int)bVar4) + (unsigned int)bVar7;
                puVar43[0xe] = uVar19;
                uVar53 = uVar53 + iVar39;
                puVar43 = puVar43 + 0x10;
                *puVar43 = uVar19;
                lVar51 = lVar51 + -1;
              } while (lVar51 != 0);
              iVar22 = fn_82C6B350(puVar36,&lbl_83232150,&lbl_83232050);
              lVar50 = lVar50 + -1;
              puVar36 = (unsigned char *)(iVar22 + 0x10);
            } while (lVar50 != 0);
            uVar25 = (unsigned __int64)uStack_15c;
          }
          if (0 < iVar37) {
            do {
              uVar19 = uVar53 & 0x7ff;
              pbVar24 = (unsigned char *)(((int)uVar53 >> 0xb) + iVar46);
              uVar53 = uVar53 + iVar39;
              bVar4 = pbVar24[*(int *)(iVar21 + 0x14)];
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)
                                 ((int)(((int)(((((unsigned int)(pbVar24 + *(int *)(iVar21 + 0x14))[1] -
                                                 (unsigned int)bVar4) - (unsigned int)pbVar24[1]) + (unsigned int)*pbVar24)
                                               * uVar19 * uVar52) >> 0xb) +
                                        ((0x800 - uVar19) - uVar52) * (unsigned int)*pbVar24 +
                                        pbVar24[1] * uVar19 + bVar4 * uVar52) >> 0xb) *
                                (__int64)iVar3) >> 8);
              puVar36 = puVar36 + 1;
              iVar37 = iVar37 + -1;
            } while (iVar37 != 0);
          }
          if ((int)uVar17 < iVar34) {
            lVar50 = uVar18 - uVar17;
            do {
              iVar41 = (int)uVar53 >> 0xb;
              uVar53 = uVar53 + iVar39;
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)(int)(unsigned int)*(unsigned char *)(iVar41 + iVar46) * (__int64)iVar3)
                               >> 8);
              puVar36 = puVar36 + 1;
              lVar50 = lVar50 + -1;
            } while (lVar50 != 0);
          }
          if (iVar34 < *(int *)(iVar21 + 0x3c20)) {
            puVar36 = puVar36 + -1;
            uVar35 = uVar18;
            do {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              uVar35 = uVar35 + 1;
            } while ((int)uVar35 < *(int *)(iVar21 + 0x3c20));
          }
          uVar35 = (unsigned __int64)uVar56;
          lVar51 = (__int64)((int)uVar25 >> 0xc) * (__int64)iVar47;
          uVar52 = (int)uVar25 >> 1 & 0x7ff;
          lVar50 = lVar51 + iVar47;
          if (0 < (int)uVar56) {
            do {
              dataCacheBlockTouch(lVar50 + (unsigned __int64)uVar8);
              dataCacheBlockTouch(lVar50 + (unsigned __int64)uVar9);
              lVar50 = lVar50 + 0x80;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          uVar35 = (unsigned __int64)uVar11;
          pcVar42 = pcStack_174;
          pcVar38 = pcStack_178;
          if (0 < (int)uVar11) {
            do {
              *pcVar42 = -0x80;
              pcVar42 = pcVar42 + 1;
              *pcVar38 = -0x80;
              pcVar38 = pcVar38 + 1;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          puVar43 = (unsigned int *)0x83232048;
          lVar50 = 0x10;
          do {
            puVar43 = puVar43 + 4;
            *puVar43 = uVar52;
            lVar50 = lVar50 + -1;
          } while (lVar50 != 0);
          iVar46 = 0x800 - uVar52;
          uVar53 = (int)(iVar12 - uVar11) >> 4;
          lVar50 = (__int64)(int)uVar53;
          lVar30 = (unsigned __int64)(iVar12 - uVar11) + ((unsigned __int64)uVar53 & 0xfffffff) * -0x10;
          iVar41 = (int)lVar51;
          uVar53 = uVar31;
          if (0 < lVar50) {
            iVar37 = iVar41 + uVar8;
            iVar22 = iVar41 + uVar9;
            do {
              puVar43 = (unsigned int *)0x83232044;
              puVar45 = (unsigned int *)0x83232148;
              lVar51 = 4;
              do {
                iVar13 = (int)uVar53 >> 0xc;
                uVar19 = (int)uVar53 >> 1 & 0x7ff;
                iVar27 = uVar53 + iVar2;
                bVar5 = *(unsigned char *)(iVar37 + iVar13);
                bVar4 = *(unsigned char *)(iVar37 + iVar13 + 1);
                bVar6 = *(unsigned char *)(iVar37 + iVar13 + iVar47);
                pbVar24 = (unsigned char *)(iVar22 + iVar13);
                puVar43[4] = uVar19;
                iVar13 = iVar27 >> 0xc;
                puVar43[3] = iVar46 - uVar19;
                puVar45[2] = (unsigned int)bVar5;
                iVar28 = iVar27 + iVar2;
                puVar45[3] = (unsigned int)bVar4;
                uVar53 = iVar27 >> 1 & 0x7ff;
                puVar45[4] = (unsigned int)bVar6;
                bVar4 = *pbVar24;
                bVar5 = pbVar24[1];
                puVar45[8] = (unsigned int)pbVar24[iVar47];
                puVar45[7] = (unsigned int)bVar5;
                puVar45[6] = (unsigned int)bVar4;
                bVar5 = *(unsigned char *)(iVar37 + iVar13);
                bVar6 = *(unsigned char *)(iVar37 + iVar13 + iVar47);
                bVar4 = *(unsigned char *)(iVar37 + iVar13 + 1);
                pbVar24 = (unsigned char *)(iVar22 + iVar13);
                puVar43[8] = uVar53;
                iVar13 = iVar28 >> 0xc;
                puVar45[0xc] = (unsigned int)bVar6;
                puVar43[7] = iVar46 - uVar53;
                uVar53 = iVar28 >> 1 & 0x7ff;
                puVar45[0xb] = (unsigned int)bVar4;
                iVar28 = iVar28 + iVar2;
                puVar45[10] = (unsigned int)bVar5;
                bVar5 = pbVar24[iVar47];
                bVar4 = *pbVar24;
                puVar45[0xf] = (unsigned int)pbVar24[1];
                puVar45[0x10] = (unsigned int)bVar5;
                puVar45[0xe] = (unsigned int)bVar4;
                bVar5 = *(unsigned char *)(iVar37 + iVar13 + iVar47);
                bVar6 = *(unsigned char *)(iVar37 + iVar13);
                bVar4 = *(unsigned char *)(iVar37 + iVar13 + 1);
                pbVar24 = (unsigned char *)(iVar22 + iVar13);
                puVar43[0xc] = uVar53;
                iVar13 = iVar28 >> 0xc;
                puVar43[0xb] = iVar46 - uVar53;
                puVar45[0x12] = (unsigned int)bVar6;
                puVar45[0x13] = (unsigned int)bVar4;
                uVar53 = iVar28 >> 1 & 0x7ff;
                puVar45[0x14] = (unsigned int)bVar5;
                bVar5 = pbVar24[iVar47];
                bVar4 = *pbVar24;
                puVar45[0x17] = (unsigned int)pbVar24[1];
                puVar45[0x18] = (unsigned int)bVar5;
                puVar45[0x16] = (unsigned int)bVar4;
                bVar5 = *(unsigned char *)(iVar37 + iVar13 + iVar47);
                bVar6 = *(unsigned char *)(iVar37 + iVar13);
                bVar4 = *(unsigned char *)(iVar37 + iVar13 + 1);
                puVar43[0xf] = iVar46 - uVar53;
                puVar43 = puVar43 + 0x10;
                *puVar43 = uVar53;
                puVar45[0x1b] = (unsigned int)bVar4;
                puVar45[0x1c] = (unsigned int)bVar5;
                puVar45[0x1a] = (unsigned int)bVar6;
                bVar4 = *(unsigned char *)(iVar22 + iVar13 + 1);
                bVar5 = *(unsigned char *)(iVar22 + iVar13 + iVar47);
                puVar45[0x1e] = (unsigned int)*(unsigned char *)(iVar22 + iVar13);
                uVar53 = iVar28 + iVar2;
                puVar45[0x1f] = (unsigned int)bVar4;
                puVar45 = puVar45 + 0x20;
                *puVar45 = (unsigned int)bVar5;
                lVar51 = lVar51 + -1;
              } while (lVar51 != 0);
              fn_82C6BA10(pcVar42,pcVar38,&lbl_83232150,&lbl_83232050);
              lVar50 = lVar50 + -1;
              pcVar42 = pcVar42 + 0x10;
              pcVar38 = pcVar38 + 0x10;
            } while (lVar50 != 0);
          }
          if (0 < (int)lVar30) {
            do {
              iVar46 = (int)uVar53 >> 0xc;
              iVar37 = iVar41 + uVar8 + iVar46;
              uVar19 = (int)uVar53 >> 1 & 0x7ff;
              uVar53 = uVar53 + iVar2;
              iVar22 = (0x800 - uVar19) - uVar52;
              pbVar24 = (unsigned char *)(iVar41 + uVar9 + iVar46);
              *pcVar42 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)(*(unsigned char *)(iVar37 + iVar47) * uVar52 +
                                         *(unsigned char *)(iVar37 + 1) * uVar19 +
                                        (unsigned int)*(unsigned char *)(iVar41 + uVar8 + iVar46) * iVar22) >> 0xb) +
                                 -0x80) * (__int64)iVar3) >> 8) + -0x80;
              pcVar42 = pcVar42 + 1;
              *pcVar38 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)(pbVar24[iVar47] * uVar52 + pbVar24[1] * uVar19 +
                                        (unsigned int)*pbVar24 * iVar22) >> 0xb) + -0x80) * (__int64)iVar3)
                               >> 8) + -0x80;
              pcVar38 = pcVar38 + 1;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
          if (iVar12 < iVar23) {
            iVar46 = iVar23 - iVar12;
            do {
              iVar37 = (int)uVar53 >> 0xc;
              uVar53 = uVar53 + iVar2;
              *pcVar42 = (char)((unsigned __int64)
                                ((__int64)(int)(*(unsigned char *)(iVar41 + uVar8 + iVar37) - 0x80) *
                                (__int64)iVar3) >> 8) + -0x80;
              pcVar42 = pcVar42 + 1;
              *pcVar38 = (char)((unsigned __int64)
                                ((__int64)(int)(*(unsigned char *)(iVar41 + uVar9 + iVar37) - 0x80) *
                                (__int64)iVar3) >> 8) + -0x80;
              pcVar38 = pcVar38 + 1;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          if (iVar23 < iVar10) {
            iVar46 = iVar10 - iVar23;
            iVar41 = iVar23;
            do {
              pcVar42[iVar41 - iVar23] = -0x80;
              pcVar38[iVar41 - iVar23] = -0x80;
              iVar41 = iVar41 + 1;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          puVar48 = puVar48 + *(int *)(iVar21 + 0x3c20);
          pcStack_174 = pcStack_174 + iVar10;
          pcStack_178 = pcStack_178 + iVar10;
          uVar25 = ((uVar25 + uVar1 & 0xffffffff) >> 0x1f) - 1 & uVar25 + uVar1;
          uVar52 = (unsigned int)uVar25;
          uVar53 = uVar52 & 0x7ff;
          iVar41 = (int)uVar52 >> 0xb;
          lStack_f0 = (__int64)(int)uVar53;
          fStack_104 = (float)((double)lStack_f0 * dVar64);
          if (*(int *)(iVar21 + 0x3c1c) <= iVar41) {
            iVar41 = *(int *)(iVar21 + 0x3c1c) + -1;
          }
          iVar41 = iVar41 * *(int *)(iVar21 + 0x14) + *(int *)(iVar21 + 0x3c2c);
          puVar36 = puVar48;
          if (0 < (int)uVar16) {
            puVar36 = puVar48 + -1;
            for (uVar52 = uVar16; uVar52 != 0; uVar52 = uVar52 - 1) {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            }
            puVar36 = puVar48 + uVar16;
          }
          puVar43 = (unsigned int *)0x83232048;
          lVar50 = 0x10;
          do {
            puVar43 = puVar43 + 4;
            *puVar43 = uVar53;
            lVar50 = lVar50 + -1;
          } while (lVar50 != 0);
          iVar46 = 0x800 - uVar53;
          lVar50 = (__int64)(int)uVar55;
          iVar37 = iVar32 + (uVar55 & 0xfffffff) * -0x10;
          uVar52 = uVar31;
          if (0 < lVar50) {
            do {
              puVar43 = (unsigned int *)0x8323204c;
              piVar44 = (int *)0x8323214c;
              lVar51 = 4;
              do {
                uVar55 = uVar52 & 0x7ff;
                pbVar24 = (unsigned char *)(((int)uVar52 >> 0xb) + iVar41);
                uVar52 = uVar52 + iVar39;
                bVar4 = pbVar24[1];
                bVar5 = *pbVar24;
                uVar19 = uVar52 & 0x7ff;
                bVar6 = pbVar24[*(int *)(iVar21 + 0x14)];
                pbVar33 = (unsigned char *)(((int)uVar52 >> 0xb) + iVar41);
                bVar7 = (pbVar24 + *(int *)(iVar21 + 0x14))[1];
                puVar43[2] = uVar55;
                uVar52 = uVar52 + iVar39;
                puVar43[4] = uVar55;
                piVar44[2] = (unsigned int)bVar4;
                piVar44[3] = (unsigned int)bVar6;
                puVar43[1] = iVar46 - uVar55;
                uVar55 = uVar52 & 0x7ff;
                piVar44[1] = (unsigned int)bVar5;
                uVar29 = uVar52 + iVar39;
                piVar44[4] = (((unsigned int)bVar7 - (unsigned int)bVar6) - (unsigned int)bVar4) + (unsigned int)bVar5;
                uVar20 = uVar29 & 0x7ff;
                bVar4 = *pbVar33;
                bVar5 = pbVar33[1];
                bVar6 = pbVar33[*(int *)(iVar21 + 0x14)];
                bVar7 = (pbVar33 + *(int *)(iVar21 + 0x14))[1];
                piVar44[7] = (unsigned int)bVar6;
                iVar22 = ((int)uVar52 >> 0xb) + iVar41;
                puVar43[6] = uVar19;
                puVar43[8] = uVar19;
                piVar44[8] = (((unsigned int)bVar7 - (unsigned int)bVar6) - (unsigned int)bVar5) + (unsigned int)bVar4;
                puVar43[5] = iVar46 - uVar19;
                piVar44[6] = (unsigned int)bVar5;
                piVar44[5] = (unsigned int)bVar4;
                bVar7 = *(unsigned char *)(((int)uVar52 >> 0xb) + iVar41);
                pbVar24 = (unsigned char *)(iVar22 + *(int *)(iVar21 + 0x14));
                bVar4 = *(unsigned char *)(iVar22 + 1);
                bVar5 = *pbVar24;
                bVar6 = pbVar24[1];
                piVar44[10] = (unsigned int)bVar4;
                piVar44[0xb] = (unsigned int)bVar5;
                piVar44[9] = (unsigned int)bVar7;
                iVar22 = ((int)uVar29 >> 0xb) + iVar41;
                puVar43[10] = uVar55;
                puVar43[0xc] = uVar55;
                piVar44[0xc] = (((unsigned int)bVar6 - (unsigned int)bVar5) - (unsigned int)bVar4) + (unsigned int)bVar7;
                puVar43[9] = iVar46 - uVar55;
                bVar4 = *(unsigned char *)(iVar22 + 1);
                pbVar24 = (unsigned char *)(iVar22 + *(int *)(iVar21 + 0x14));
                bVar5 = *pbVar24;
                bVar6 = pbVar24[1];
                bVar7 = *(unsigned char *)(((int)uVar29 >> 0xb) + iVar41);
                piVar44[0xd] = (unsigned int)bVar7;
                piVar44[0xe] = (unsigned int)bVar4;
                piVar44[0xf] = (unsigned int)bVar5;
                puVar43[0xd] = iVar46 - uVar20;
                uVar52 = uVar29 + iVar39;
                puVar43[0xe] = uVar20;
                piVar44 = piVar44 + 0x10;
                *piVar44 = (((unsigned int)bVar6 - (unsigned int)bVar5) - (unsigned int)bVar4) + (unsigned int)bVar7;
                puVar43 = puVar43 + 0x10;
                *puVar43 = uVar20;
                lVar51 = lVar51 + -1;
              } while (lVar51 != 0);
              iVar22 = fn_82C6B350(puVar36,&lbl_83232150,&lbl_83232050);
              lVar50 = lVar50 + -1;
              puVar36 = (unsigned char *)(iVar22 + 0x10);
            } while (lVar50 != 0);
          }
          if (0 < iVar37) {
            do {
              uVar55 = uVar52 & 0x7ff;
              pbVar24 = (unsigned char *)(((int)uVar52 >> 0xb) + iVar41);
              uVar52 = uVar52 + iVar39;
              bVar4 = pbVar24[*(int *)(iVar21 + 0x14)];
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)
                                 ((int)(((int)(((((unsigned int)(pbVar24 + *(int *)(iVar21 + 0x14))[1] -
                                                 (unsigned int)bVar4) - (unsigned int)pbVar24[1]) + (unsigned int)*pbVar24)
                                               * uVar55 * uVar53) >> 0xb) +
                                        ((0x800 - uVar55) - uVar53) * (unsigned int)*pbVar24 +
                                        pbVar24[1] * uVar55 + bVar4 * uVar53) >> 0xb) *
                                (__int64)iVar3) >> 8);
              puVar36 = puVar36 + 1;
              iVar37 = iVar37 + -1;
            } while (iVar37 != 0);
          }
          if ((int)uVar17 < iVar34) {
            lVar50 = uVar18 - uVar17;
            do {
              iVar46 = (int)uVar52 >> 0xb;
              uVar52 = uVar52 + iVar39;
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)(int)(unsigned int)*(unsigned char *)(iVar46 + iVar41) * (__int64)iVar3)
                               >> 8);
              puVar36 = puVar36 + 1;
              lVar50 = lVar50 + -1;
            } while (lVar50 != 0);
          }
          iVar41 = *(int *)(iVar21 + 0x3c20);
          if (iVar34 < iVar41) {
            puVar36 = puVar36 + -1;
            uVar35 = uVar18;
            do {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              uVar35 = uVar35 + 1;
              iVar41 = *(int *)(iVar21 + 0x3c20);
            } while ((int)uVar35 < iVar41);
          }
          uVar49 = uVar49 + 2;
          puVar48 = puVar48 + iVar41;
          uVar25 = uVar25 + uVar1;
          uVar25 = ((uVar25 & 0xffffffff) >> 0x1f) - 1 & uVar25;
          uStack_15c = (unsigned int)uVar25;
        } while ((int)uVar49 < (int)(uStack_130 - 2));
      }
      iVar23 = uStack_130 - 2;
      iVar34 = (int)uVar25 >> 0xb;
      if (*(int *)(iVar21 + 0x3c1c) <= iVar34) {
        iVar34 = *(int *)(iVar21 + 0x3c1c) + -1;
      }
      uVar57 = uVar31;
      if ((int)(uVar15 + 2) <= (int)uStack_130) {
        for (; iVar23 < (int)uStack_130; iVar23 = iVar23 + 2) {
          puVar36 = puVar48;
          if (0 < (int)uVar16) {
            puVar36 = puVar48 + -1;
            for (uVar56 = uVar16; uVar56 != 0; uVar56 = uVar56 - 1) {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            }
            puVar36 = puVar48 + uVar16;
          }
          iVar32 = *(int *)(iVar21 + 0x14);
          iVar41 = *(int *)(iVar21 + 0x3c2c);
          if ((int)uVar16 < (int)uVar17) {
            iVar46 = uVar17 - uVar16;
            do {
              iVar37 = (int)uVar57 >> 0xb;
              uVar57 = uVar57 + iVar39;
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)(int)(unsigned int)*(unsigned char *)(iVar37 + iVar34 * iVar32 + iVar41) *
                                (__int64)iVar3) >> 8);
              puVar36 = puVar36 + 1;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          if ((int)uVar17 < *(int *)(iVar21 + 0x3c20)) {
            puVar36 = puVar36 + -1;
            uVar57 = uVar17;
            do {
              uVar57 = uVar57 + 1;
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            } while ((int)uVar57 < *(int *)(iVar21 + 0x3c20));
          }
          pcVar42 = pcStack_174;
          pcVar38 = pcStack_178;
          uVar57 = uVar11;
          if (0 < (int)uVar11) {
            do {
              *pcVar42 = -0x80;
              pcVar42 = pcVar42 + 1;
              *pcVar38 = -0x80;
              pcVar38 = pcVar38 + 1;
              uVar57 = uVar57 - 1;
            } while (uVar57 != 0);
          }
          iVar34 = (int)uVar25 >> 0xc;
          iVar32 = *(int *)(iVar21 + 0x3c1c) >> 1;
          if (iVar32 <= iVar34) {
            iVar34 = iVar32 + -1;
          }
          if ((int)uVar11 < iVar12) {
            iVar32 = iVar12 - uVar11;
            uVar57 = uVar31;
            do {
              iVar41 = (int)uVar57 >> 0xc;
              uVar57 = uVar57 + iVar2;
              *pcVar42 = (char)((unsigned __int64)
                                ((__int64)(int)(*(unsigned char *)(iVar34 * iVar47 + uVar8 + iVar41) - 0x80)
                                * (__int64)iVar3) >> 8) + -0x80;
              pcVar42 = pcVar42 + 1;
              *pcVar38 = (char)((unsigned __int64)
                                ((__int64)(int)(*(unsigned char *)(iVar34 * iVar47 + uVar9 + iVar41) - 0x80)
                                * (__int64)iVar3) >> 8) + -0x80;
              pcVar38 = pcVar38 + 1;
              iVar32 = iVar32 + -1;
            } while (iVar32 != 0);
          }
          if (iVar12 < iVar10) {
            iVar32 = iVar10 - iVar12;
            iVar34 = iVar12;
            do {
              pcVar42[iVar34 - iVar12] = -0x80;
              pcVar38[iVar34 - iVar12] = -0x80;
              iVar34 = iVar34 + 1;
              iVar32 = iVar32 + -1;
            } while (iVar32 != 0);
          }
          pcStack_174 = pcStack_174 + iVar10;
          pcStack_178 = pcStack_178 + iVar10;
          puVar48 = puVar48 + *(int *)(iVar21 + 0x3c20);
          uVar25 = ((uVar25 + uVar1 & 0xffffffff) >> 0x1f) - 1 & uVar25 + uVar1;
          iVar34 = (int)uVar25 >> 0xb;
          if (*(int *)(iVar21 + 0x3c1c) <= iVar34) {
            iVar34 = *(int *)(iVar21 + 0x3c1c) + -1;
          }
          puVar36 = puVar48;
          if (0 < (int)uVar16) {
            puVar36 = puVar48 + -1;
            for (uVar57 = uVar16; uVar57 != 0; uVar57 = uVar57 - 1) {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
            }
            puVar36 = puVar48 + uVar16;
          }
          iVar32 = *(int *)(iVar21 + 0x14);
          iVar41 = *(int *)(iVar21 + 0x3c2c);
          uVar57 = uVar31;
          if ((int)uVar16 < (int)uVar17) {
            iVar46 = uVar17 - uVar16;
            do {
              iVar37 = (int)uVar57 >> 0xb;
              uVar57 = uVar57 + iVar39;
              *puVar36 = (char)((unsigned __int64)
                                ((__int64)(int)(unsigned int)*(unsigned char *)(iVar37 + iVar34 * iVar32 + iVar41) *
                                (__int64)iVar3) >> 8);
              puVar36 = puVar36 + 1;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          iVar32 = *(int *)(iVar21 + 0x3c20);
          if ((int)uVar17 < iVar32) {
            puVar36 = puVar36 + -1;
            uVar56 = uVar17;
            do {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              uVar56 = uVar56 + 1;
              iVar32 = *(int *)(iVar21 + 0x3c20);
            } while ((int)uVar56 < iVar32);
          }
          puVar48 = puVar48 + iVar32;
        }
      }
      if ((int)uStack_130 < *(int *)(iVar21 + 0x3c24)) {
        do {
          iVar34 = 0;
          if (0 < *(int *)(iVar21 + 0x3c20)) {
            puVar36 = puVar48 + -1;
            do {
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              iVar34 = iVar34 + 1;
            } while (iVar34 < *(int *)(iVar21 + 0x3c20));
          }
          if (0 < iVar10) {
            iVar34 = iVar10;
            pcVar42 = pcStack_178;
            do {
              pcVar42[(int)pcStack_174 - (int)pcStack_178] = -0x80;
              *pcVar42 = -0x80;
              pcVar42 = pcVar42 + 1;
              iVar34 = iVar34 + -1;
            } while (iVar34 != 0);
          }
          iVar34 = *(int *)(iVar21 + 0x3c20);
          pcStack_174 = pcStack_174 + iVar10;
          pcStack_178 = pcStack_178 + iVar10;
          iVar39 = 0;
          iVar47 = iVar34;
          if (0 < iVar34) {
            puVar36 = puVar48 + iVar34 + -1;
            do {
              iVar39 = iVar39 + 1;
              puVar36 = puVar36 + 1;
              *puVar36 = 0;
              iVar47 = *(int *)(iVar21 + 0x3c20);
            } while (iVar39 < iVar47);
          }
          uStack_130 = uStack_130 + 2;
          puVar48 = puVar48 + iVar47 + iVar34;
        } while ((int)uStack_130 < *(int *)(iVar21 + 0x3c24));
      }
    }
    fn_82F6A580(0);
  }
  return;
}

