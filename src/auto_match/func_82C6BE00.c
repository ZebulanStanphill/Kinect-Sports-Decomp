typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_120;
extern unsigned int fStack_114;
extern int fn_82C6B0F0();
extern int fn_82C6B5F0();
extern int fn_82F68918();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82F6B2A8();
extern unsigned int iStack_108;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8208DE50;
extern unsigned int lbl_820FC378;
extern unsigned int lbl_820FC380;
extern unsigned int lbl_820FC388;
extern unsigned int lbl_83231E50;
extern unsigned int lbl_83232350;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_140;
extern unsigned int uStack_148;


void fn_82C6BE00(unsigned __int64 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int iVar18;
  int in_r0;
  int iVar19;
  int iVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  int iVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  __int64 lVar29;
  unsigned char *pbVar30;
  int iVar31;
  unsigned int uVar33;
  unsigned int uVar34;
  unsigned __int64 uVar32;
  unsigned char *puVar35;
  int iVar36;
  int iVar39;
  unsigned char *puVar40;
  __int64 lVar37;
  unsigned __int64 uVar38;
  unsigned int *puVar41;
  int *piVar42;
  int iVar43;
  int iVar44;
  unsigned int uVar45;
  __int64 lVar46;
  __int64 lVar47;
  int iVar48;
  unsigned int uVar49;
  bool bVar50;
  unsigned int uVar51;
  double dVar52;
  double dVar53;
  double extraout_f1;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_000103f0;
  unsigned char *puStack_174;
  unsigned char *puStack_170;
  unsigned char *puStack_16c;
  unsigned int uStack_148;
  unsigned int uStack_140;
  unsigned int auStack_120 [3];
  float fStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  int iStack_108;
  unsigned __int64 uStack_100;
  __int64 lStack_f8;
  __int64 lStack_f0;
  __int64 lStack_e8;
  
  iVar19 = fn_82F6A538();
  dVar57 = lbl_82005710;
  if (iVar19 == 0) {
    fn_82F6A584(0xfffffffffffffffd);
  }
  else {
    iVar31 = *(int *)(iVar19 + 0x14);
    uVar6 = *(unsigned int *)(iVar19 + 0x3c30);
    uVar7 = *(unsigned int *)(iVar19 + 0x3c34);
    iVar44 = iVar31 >> 1;
    iVar8 = *(int *)(iVar19 + 0x3c20) >> 1;
    auStack_120[0] = lbl_82002AE0;
    uVar21 = iVar31 >> 5;
    lVar47 = (__int64)(int)uVar21;
    altv207_13(in_vs32,in_vs42);
    uVar27 = iVar31 >> 6;
    lVar46 = (__int64)(int)uVar27;
    bVar50 = extraout_f1 != lbl_82005710;
    puVar12 = (unsigned int *)((int)auStack_120 + in_r0 & 0xfffffff0);
    *puVar12 = in_register_000103f0;
    puVar12[1] = in_register_000103f0;
    puVar12[2] = in_register_000103f0;
    puVar12[3] = in_register_000103f0;
    uStack_110 = uVar27;
    uStack_10c = uVar21;
    if ((bVar50) && (param_3 != dVar57)) {
      dVar58 = ((double)(__int64)iVar31 - param_2) / extraout_f1;
      dVar52 = (lbl_8200E890 / extraout_f1) * param_2;
      dVar54 = dVar52;
      if (dVar58 < dVar52) {
        dVar54 = dVar58;
        dVar58 = dVar52;
      }
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar52 = extraout_f1;
      dVar59 = lbl_8200E890;
      dVar54 = (double)fn_82F6B2A8(dVar54);
      if ((double)(__int64)*(int *)(iVar19 + 0x3c20) < dVar54) {
        dVar54 = (double)(__int64)*(int *)(iVar19 + 0x3c20);
      }
      dVar55 = (double)fn_82F68918(dVar54);
      dVar54 = dVar58 + lbl_820FC388;
      if ((double)(__int64)*(int *)(iVar19 + 0x3c20) < dVar58 + lbl_820FC388) {
        dVar54 = (double)(__int64)*(int *)(iVar19 + 0x3c20);
      }
      dVar54 = (double)fn_82F68918(dVar54);
      dVar53 = (double)(__int64)*(int *)(iVar19 + 0x3c20);
      if (dVar58 <= (double)(__int64)*(int *)(iVar19 + 0x3c20)) {
        dVar53 = dVar58;
      }
      dVar58 = (double)fn_82F68918(dVar53);
      if (dVar58 < 0.0) {
        dVar58 = dVar57;
      }
      dVar58 = (double)fn_82F6B2A8(dVar58);
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar56 = (double)fn_82F6B2A8(dVar54);
      dVar53 = (dVar59 / param_3) * param_4;
      dVar59 = ((double)(__int64)*(int *)(iVar19 + 0x3c1c) - param_4) / param_3 + lbl_82005758;
      dVar54 = dVar53;
      if (dVar59 < dVar53) {
        dVar54 = dVar59;
        dVar59 = dVar53;
      }
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar54 = (double)fn_82F6B2A8(dVar54);
      if ((double)(__int64)*(int *)(iVar19 + 0x3c24) < dVar54) {
        dVar54 = (double)(__int64)*(int *)(iVar19 + 0x3c24);
      }
      dVar53 = (double)fn_82F68918(dVar54);
      uStack_100 = (unsigned __int64)(int)dVar53;
      dVar54 = (double)(__int64)*(int *)(iVar19 + 0x3c24);
      if (dVar59 <= (double)(__int64)*(int *)(iVar19 + 0x3c24)) {
        dVar54 = dVar59;
      }
      dVar54 = (double)fn_82F68918(dVar54);
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      uVar33 = (int)dVar53 + 1;
      uVar14 = (int)dVar55 + 1U & 0xfffffffe;
      uVar45 = uVar33 & 0xfffffffe;
      uVar15 = (int)dVar58 & 0xfffffffe;
      uVar16 = (int)dVar56 & 0xfffffffe;
      uStack_100 = CONCAT44(uVar33,(((unsigned __int64)(uStack_100) >> 32) & 0xFFFFFFFF)) & 0xfffffffeffffffff;
      dVar57 = (double)fn_82F6B2A8(dVar54);
      uStack_148 = (int)dVar57 & 0xfffffffe;
      if ((int)uStack_148 < 2) {
        uStack_148 = 2;
      }
      puStack_16c = *(unsigned char **)(iVar19 + 0x3c38);
      puStack_174 = *(unsigned char **)(iVar19 + 0x3c3c);
      uVar9 = (int)((int)dVar55 + 1U) >> 1;
      puStack_170 = *(unsigned char **)(iVar19 + 0x3c40);
      iVar10 = (int)dVar58 >> 1;
      iStack_108 = (int)dVar56 >> 1;
      iVar43 = 0;
      iVar36 = (int)(dVar52 * lbl_820FC380);
      uVar33 = (unsigned int)(param_3 * lbl_820FC380);
      iVar1 = (int)(dVar52 * lbl_820FC380 * lbl_82002C40);
      uVar22 = (__int64)(int)uVar33 * (__int64)(int)uVar45 -
               (unsigned __int64)(unsigned int)(int)(param_4 * lbl_820FC378);
      uVar34 = iVar36 * uVar14 - (int)(param_2 * lbl_820FC378);
      uVar22 = ((uVar22 & 0xffffffff) >> 0x1f) - 1 & uVar22;
      uVar34 = -((int)uVar34 >> 0x1f) - 1U & uVar34;
      uStack_140 = (unsigned int)uVar22;
      if (0 < (int)uVar45) {
        do {
          iVar39 = 0;
          if (0 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puStack_16c + -1;
            do {
              iVar39 = iVar39 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            } while (iVar39 < *(int *)(iVar19 + 0x3c20));
          }
          if (0 < iVar8) {
            puVar40 = puStack_170;
            iVar39 = iVar8;
            do {
              puVar40[(int)puStack_174 - (int)puStack_170] = 0x80;
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          iVar39 = *(int *)(iVar19 + 0x3c20);
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          iVar20 = 0;
          iVar48 = iVar39;
          if (0 < iVar39) {
            puVar40 = puStack_16c + iVar39 + -1;
            do {
              iVar20 = iVar20 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar48 = *(int *)(iVar19 + 0x3c20);
            } while (iVar20 < iVar48);
          }
          iVar43 = iVar43 + 2;
          puStack_16c = puStack_16c + iVar48 + iVar39;
        } while (iVar43 < (int)uVar45);
      }
      lVar37 = 0;
      lVar29 = (__int64)((int)uStack_140 >> 0xb) * (__int64)(int)*(unsigned int *)(iVar19 + 0x14) +
               (unsigned __int64)*(unsigned int *)(iVar19 + 0x3c2c);
      if (0 < (int)uVar21) {
        do {
          dataCacheBlockTouch(lVar37 + lVar29);
          dataCacheBlockTouch(lVar37 + (unsigned __int64)*(unsigned int *)(iVar19 + 0x14) + lVar29);
          lVar37 = lVar37 + 0x80;
          lVar47 = lVar47 + -1;
        } while (lVar47 != 0);
      }
      lVar47 = (__int64)((int)uStack_140 >> 0xc) * (__int64)iVar44;
      if (0 < (int)uVar27) {
        do {
          dataCacheBlockTouch(lVar47 + (unsigned __int64)uVar6);
          dataCacheBlockTouch(lVar47 + (unsigned __int64)uVar7);
          lVar47 = lVar47 + 0x80;
          lVar46 = lVar46 + -1;
        } while (lVar46 != 0);
      }
      if ((int)uVar45 < (int)(uStack_148 - 2)) {
        uVar21 = uVar15 - uVar14;
        dVar57 = (double)lbl_8208DE50;
        do {
          uVar27 = (unsigned int)uVar22 & 0x7ff;
          uVar38 = (unsigned __int64)*(unsigned int *)(iVar19 + 0x14);
          lStack_f8 = (__int64)(int)uVar27;
          lVar46 = (__int64)((int)(unsigned int)uVar22 >> 0xb) * (__int64)(int)*(unsigned int *)(iVar19 + 0x14) +
                   (unsigned __int64)*(unsigned int *)(iVar19 + 0x3c2c);
          uVar32 = (unsigned __int64)uStack_10c;
          fStack_114 = (float)((double)lStack_f8 * dVar57);
          if (0 < (int)uStack_10c) {
            do {
              dataCacheBlockTouch(uVar38 + lVar46);
              uVar38 = uVar38 + 0x80;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar51 = uVar14; uVar51 != 0; uVar51 = uVar51 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          lVar47 = 0x10;
          puVar41 = (unsigned int *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar27;
            lVar47 = lVar47 + -1;
          } while (lVar47 != 0);
          iVar43 = 0x800 - uVar27;
          uVar51 = (int)uVar21 >> 4;
          lVar47 = (__int64)(int)uVar51;
          lVar29 = (unsigned __int64)uVar21 + ((unsigned __int64)uVar51 & 0xfffffff) * -0x10;
          iVar39 = (int)lVar46;
          uVar49 = uVar34;
          if (0 < lVar47) {
            iVar48 = iVar31 + 1;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (unsigned int *)0x8323234c;
              lVar46 = 4;
              do {
                uVar23 = uVar49 + iVar36;
                pbVar30 = (unsigned char *)(((int)uVar49 >> 0xb) + iVar39);
                uVar49 = uVar49 & 0x7ff;
                uVar17 = uVar23 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                uVar24 = uVar23 + iVar36;
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                pbVar30 = (unsigned char *)(((int)uVar23 >> 0xb) + iVar39);
                puVar41[2] = uVar49;
                puVar41[4] = uVar49;
                piVar42[3] = (unsigned int)bVar4;
                uVar23 = uVar24 & 0x7ff;
                piVar42[2] = (unsigned int)bVar2;
                piVar42[1] = (unsigned int)bVar3;
                uVar25 = uVar24 + iVar36;
                piVar42[4] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                puVar41[1] = iVar43 - uVar49;
                uVar28 = uVar25 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                uVar49 = uVar25 + iVar36;
                bVar3 = *pbVar30;
                iVar20 = ((int)uVar24 >> 0xb) + iVar39;
                piVar42[7] = (unsigned int)bVar4;
                piVar42[5] = (unsigned int)bVar3;
                puVar41[6] = uVar17;
                puVar41[8] = uVar17;
                piVar42[6] = (unsigned int)bVar2;
                piVar42[8] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                puVar41[5] = iVar43 - uVar17;
                bVar2 = *(unsigned char *)(iVar20 + 1);
                bVar3 = *(unsigned char *)(iVar20 + iVar31);
                bVar4 = *(unsigned char *)(iVar48 + iVar20);
                bVar5 = *(unsigned char *)(((int)uVar24 >> 0xb) + iVar39);
                iVar20 = ((int)uVar25 >> 0xb) + iVar39;
                piVar42[9] = (unsigned int)bVar5;
                puVar41[10] = uVar23;
                puVar41[0xc] = uVar23;
                piVar42[0xb] = (unsigned int)bVar3;
                piVar42[10] = (unsigned int)bVar2;
                piVar42[0xc] = (((unsigned int)bVar4 - (unsigned int)bVar3) - (unsigned int)bVar2) + (unsigned int)bVar5;
                puVar41[9] = iVar43 - uVar23;
                bVar3 = *(unsigned char *)(iVar20 + iVar31);
                bVar4 = *(unsigned char *)(iVar48 + iVar20);
                bVar2 = *(unsigned char *)(iVar20 + 1);
                bVar5 = *(unsigned char *)(((int)uVar25 >> 0xb) + iVar39);
                puVar41[0xd] = iVar43 - uVar28;
                piVar42[0xf] = (unsigned int)bVar3;
                puVar41[0xe] = uVar28;
                piVar42[0xe] = (unsigned int)bVar2;
                piVar42[0xd] = (unsigned int)bVar5;
                piVar42 = piVar42 + 0x10;
                *piVar42 = (((unsigned int)bVar4 - (unsigned int)bVar3) - (unsigned int)bVar2) + (unsigned int)bVar5;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar28;
                lVar46 = lVar46 + -1;
              } while (lVar46 != 0);
              iVar20 = fn_82C6B0F0(puVar40,&lbl_83231E50,&lbl_83232350);
              lVar47 = lVar47 + -1;
              puVar40 = (unsigned char *)(iVar20 + 0x10);
            } while (lVar47 != 0);
            uVar22 = (unsigned __int64)uStack_140;
          }
          if (0 < (int)lVar29) {
            do {
              uVar17 = uVar49 & 0x7ff;
              pbVar30 = (unsigned char *)(((int)uVar49 >> 0xb) + iVar39);
              uVar49 = uVar49 + iVar36;
              *puVar40 = (char)((int)(((int)(((((unsigned int)pbVar30[iVar31 + 1] - (unsigned int)pbVar30[iVar31]) -
                                              (unsigned int)pbVar30[1]) + (unsigned int)*pbVar30) * uVar17 * uVar27)
                                      >> 0xb) + ((0x800 - uVar17) - uVar27) * (unsigned int)*pbVar30 +
                                      pbVar30[1] * uVar17 + pbVar30[iVar31] * uVar27) >> 0xb);
              puVar40 = puVar40 + 1;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          uVar32 = (unsigned __int64)uVar16;
          if ((int)uVar15 < (int)uVar16) {
            lVar46 = uVar32 - uVar15;
            do {
              iVar43 = (int)uVar49 >> 0xb;
              uVar49 = uVar49 + iVar36;
              *puVar40 = *(unsigned char *)(iVar43 + iVar39);
              puVar40 = puVar40 + 1;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          if ((int)uVar16 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puVar40 + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              uVar32 = uVar32 + 1;
            } while ((int)uVar32 < *(int *)(iVar19 + 0x3c20));
          }
          uVar32 = (unsigned __int64)uStack_110;
          lVar47 = (__int64)((int)uVar22 >> 0xc) * (__int64)iVar44;
          uVar27 = (int)uVar22 >> 1 & 0x7ff;
          lVar46 = lVar47 + iVar44;
          lStack_e8 = (__int64)(int)uVar27;
          fStack_114 = (float)((double)lStack_e8 * dVar57);
          if (0 < (int)uStack_110) {
            do {
              dataCacheBlockTouch(lVar46 + (unsigned __int64)uVar6);
              dataCacheBlockTouch(lVar46 + (unsigned __int64)uVar7);
              lVar46 = lVar46 + 0x80;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          uVar32 = (unsigned __int64)uVar9;
          puVar40 = puStack_174;
          puVar35 = puStack_170;
          if (0 < (int)uVar9) {
            do {
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              *puVar35 = 0x80;
              puVar35 = puVar35 + 1;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          lVar46 = 0x10;
          puVar41 = (unsigned int *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar27;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
          iVar39 = 0x800 - uVar27;
          uVar49 = (int)(iVar10 - uVar9) >> 4;
          lVar46 = (__int64)(int)uVar49;
          lVar29 = (unsigned __int64)(iVar10 - uVar9) + ((unsigned __int64)uVar49 & 0xfffffff) * -0x10;
          iVar43 = (int)lVar47;
          uVar49 = uVar34;
          if (0 < lVar46) {
            iVar48 = iVar44 + 1;
            iVar20 = iVar43 + uVar6;
            iVar18 = iVar43 + uVar7;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (unsigned int *)0x8323234c;
              lVar47 = 4;
              do {
                iVar11 = (int)uVar49 >> 0xc;
                iVar13 = iVar20 + iVar11;
                uVar17 = (int)uVar49 >> 1 & 0x7ff;
                iVar26 = uVar49 + iVar1;
                bVar3 = *(unsigned char *)(iVar20 + iVar11);
                bVar4 = *(unsigned char *)(iVar13 + iVar44);
                bVar2 = *(unsigned char *)(iVar13 + 1);
                bVar5 = *(unsigned char *)(iVar48 + iVar13);
                pbVar30 = (unsigned char *)(iVar18 + iVar11);
                piVar42[1] = (unsigned int)bVar3;
                iVar11 = iVar26 >> 0xc;
                puVar41[2] = uVar17;
                piVar42[3] = (unsigned int)bVar4;
                puVar41[4] = uVar17;
                puVar41[1] = iVar39 - uVar17;
                piVar42[2] = (unsigned int)bVar2;
                uVar49 = iVar26 >> 1 & 0x7ff;
                piVar42[4] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                iVar26 = iVar26 + iVar1;
                bVar4 = pbVar30[iVar44];
                bVar2 = pbVar30[1];
                bVar5 = pbVar30[iVar48];
                bVar3 = *pbVar30;
                piVar42[7] = (unsigned int)bVar4;
                iVar13 = iVar20 + iVar11;
                piVar42[6] = (unsigned int)bVar2;
                piVar42[5] = (unsigned int)bVar3;
                piVar42[8] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                bVar3 = *(unsigned char *)(iVar13 + iVar44);
                bVar4 = *(unsigned char *)(iVar48 + iVar13);
                bVar2 = *(unsigned char *)(iVar13 + 1);
                bVar5 = *(unsigned char *)(iVar20 + iVar11);
                pbVar30 = (unsigned char *)(iVar18 + iVar11);
                piVar42[9] = (unsigned int)bVar5;
                piVar42[0xc] = (((unsigned int)bVar4 - (unsigned int)bVar3) - (unsigned int)bVar2) + (unsigned int)bVar5;
                iVar11 = iVar26 >> 0xc;
                puVar41[6] = uVar49;
                puVar41[8] = uVar49;
                piVar42[0xb] = (unsigned int)bVar3;
                uVar17 = iVar26 >> 1 & 0x7ff;
                piVar42[10] = (unsigned int)bVar2;
                puVar41[5] = iVar39 - uVar49;
                bVar4 = pbVar30[iVar44];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                bVar5 = pbVar30[iVar48];
                piVar42[0xd] = (unsigned int)bVar3;
                iVar13 = iVar20 + iVar11;
                piVar42[0xe] = (unsigned int)bVar2;
                piVar42[0xf] = (unsigned int)bVar4;
                piVar42[0x10] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                bVar3 = *(unsigned char *)(iVar13 + iVar44);
                bVar4 = *(unsigned char *)(iVar48 + iVar13);
                bVar2 = *(unsigned char *)(iVar13 + 1);
                bVar5 = *(unsigned char *)(iVar20 + iVar11);
                puVar41[9] = iVar39 - uVar17;
                piVar42[0x13] = (unsigned int)bVar3;
                piVar42[0x12] = (unsigned int)bVar2;
                piVar42[0x11] = (unsigned int)bVar5;
                piVar42[0x14] = (((unsigned int)bVar4 - (unsigned int)bVar3) - (unsigned int)bVar2) + (unsigned int)bVar5;
                puVar41[10] = uVar17;
                pbVar30 = (unsigned char *)(iVar18 + iVar11);
                puVar41[0xc] = uVar17;
                iVar26 = iVar26 + iVar1;
                iVar11 = iVar26 >> 0xc;
                bVar4 = pbVar30[iVar48];
                uVar49 = iVar26 + iVar1;
                bVar2 = pbVar30[1];
                uVar17 = iVar26 >> 1 & 0x7ff;
                bVar3 = *pbVar30;
                bVar5 = pbVar30[iVar44];
                iVar13 = iVar20 + iVar11;
                piVar42[0x15] = (unsigned int)bVar3;
                piVar42[0x16] = (unsigned int)bVar2;
                piVar42[0x17] = (unsigned int)bVar5;
                piVar42[0x18] = (((unsigned int)bVar4 - (unsigned int)bVar5) - (unsigned int)bVar2) + (unsigned int)bVar3;
                bVar2 = *(unsigned char *)(iVar13 + 1);
                bVar3 = *(unsigned char *)(iVar13 + iVar44);
                bVar4 = *(unsigned char *)(iVar20 + iVar11);
                bVar5 = *(unsigned char *)(iVar48 + iVar13);
                pbVar30 = (unsigned char *)(iVar18 + iVar11);
                piVar42[0x19] = (unsigned int)bVar4;
                puVar41[0xd] = iVar39 - uVar17;
                puVar41[0xe] = uVar17;
                piVar42[0x1b] = (unsigned int)bVar3;
                piVar42[0x1a] = (unsigned int)bVar2;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar17;
                piVar42[0x1c] = (((unsigned int)bVar5 - (unsigned int)bVar3) - (unsigned int)bVar2) + (unsigned int)bVar4;
                bVar4 = pbVar30[iVar44];
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                piVar42[0x1e] = (unsigned int)bVar2;
                piVar42[0x1d] = (unsigned int)bVar3;
                piVar42[0x1f] = (unsigned int)bVar4;
                piVar42 = piVar42 + 0x20;
                *piVar42 = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                lVar47 = lVar47 + -1;
              } while (lVar47 != 0);
              fn_82C6B5F0(puVar40,puVar35,&lbl_83231E50,&lbl_83232350);
              lVar46 = lVar46 + -1;
              puVar40 = puVar40 + 0x10;
              puVar35 = puVar35 + 0x10;
            } while (lVar46 != 0);
            uVar22 = (unsigned __int64)uStack_140;
          }
          if (0 < (int)lVar29) {
            do {
              iVar39 = (int)uVar49 >> 0xc;
              iVar48 = iVar43 + uVar6 + iVar39;
              uVar17 = (int)uVar49 >> 1 & 0x7ff;
              uVar49 = uVar49 + iVar1;
              iVar20 = (0x800 - uVar17) - uVar27;
              bVar2 = *(unsigned char *)(iVar43 + uVar6 + iVar39);
              pbVar30 = (unsigned char *)(iVar43 + uVar7 + iVar39);
              *puVar40 = (char)((int)(((int)(((((unsigned int)*(unsigned char *)(iVar44 + 1 + iVar48) -
                                               (unsigned int)*(unsigned char *)(iVar48 + iVar44)) -
                                              (unsigned int)*(unsigned char *)(iVar48 + 1)) + (unsigned int)bVar2) * uVar17 *
                                            uVar27) >> 0xb) + *(unsigned char *)(iVar48 + 1) * uVar17 +
                                      *(unsigned char *)(iVar48 + iVar44) * uVar27 + iVar20 * (unsigned int)bVar2) >>
                               0xb);
              puVar40 = puVar40 + 1;
              *puVar35 = (char)((int)(((int)(((((unsigned int)pbVar30[iVar44 + 1] - (unsigned int)pbVar30[iVar44]) -
                                              (unsigned int)pbVar30[1]) + (unsigned int)*pbVar30) * uVar17 * uVar27)
                                      >> 0xb) + pbVar30[1] * uVar17 + pbVar30[iVar44] * uVar27 +
                                     iVar20 * (unsigned int)*pbVar30) >> 0xb);
              puVar35 = puVar35 + 1;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          if (iVar10 < iStack_108) {
            iVar39 = iStack_108 - iVar10;
            do {
              iVar48 = (int)uVar49 >> 0xc;
              uVar49 = uVar49 + iVar1;
              *puVar40 = *(unsigned char *)(iVar43 + uVar6 + iVar48);
              puVar40 = puVar40 + 1;
              *puVar35 = *(unsigned char *)(iVar43 + uVar7 + iVar48);
              puVar35 = puVar35 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          if (iStack_108 < iVar8) {
            iVar39 = iVar8 - iStack_108;
            iVar43 = iStack_108;
            do {
              puVar40[iVar43 - iStack_108] = 0x80;
              puVar35[iVar43 - iStack_108] = 0x80;
              iVar43 = iVar43 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          puStack_16c = puStack_16c + *(int *)(iVar19 + 0x3c20);
          uVar22 = ((uVar22 + uVar33 & 0xffffffff) >> 0x1f) - 1 & uVar22 + uVar33;
          uVar27 = (unsigned int)uVar22;
          uVar49 = uVar27 & 0x7ff;
          lStack_f0 = (__int64)(int)uVar49;
          iVar43 = ((int)uVar27 >> 0xb) * *(int *)(iVar19 + 0x14) + *(int *)(iVar19 + 0x3c2c);
          fStack_114 = (float)((double)lStack_f0 * dVar57);
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar27 = uVar14; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          lVar46 = 0x10;
          puVar41 = (unsigned int *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar49;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
          iVar39 = 0x800 - uVar49;
          lVar46 = (__int64)(int)uVar51;
          lVar47 = (unsigned __int64)uVar21 + ((unsigned __int64)uVar51 & 0xfffffff) * -0x10;
          uVar27 = uVar34;
          if (0 < lVar46) {
            iVar48 = iVar31 + 1;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (unsigned int *)0x8323234c;
              lVar29 = 4;
              do {
                uVar51 = uVar27 & 0x7ff;
                pbVar30 = (unsigned char *)(((int)uVar27 >> 0xb) + iVar43);
                uVar27 = uVar27 + iVar36;
                uVar17 = uVar27 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                uVar28 = uVar27 + iVar36;
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                uVar23 = uVar28 & 0x7ff;
                bVar3 = *pbVar30;
                pbVar30 = (unsigned char *)(((int)uVar27 >> 0xb) + iVar43);
                puVar41[2] = uVar51;
                piVar42[3] = (unsigned int)bVar4;
                puVar41[1] = iVar39 - uVar51;
                piVar42[2] = (unsigned int)bVar2;
                piVar42[1] = (unsigned int)bVar3;
                uVar24 = uVar28 + iVar36;
                piVar42[4] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar3;
                puVar41[4] = uVar51;
                uVar51 = uVar24 & 0x7ff;
                uVar27 = uVar24 + iVar36;
                bVar4 = pbVar30[iVar31];
                bVar2 = *pbVar30;
                bVar5 = pbVar30[iVar48];
                bVar3 = pbVar30[1];
                puVar41[6] = uVar17;
                puVar41[8] = uVar17;
                iVar20 = ((int)uVar28 >> 0xb) + iVar43;
                piVar42[5] = (unsigned int)bVar2;
                piVar42[8] = (((unsigned int)bVar5 - (unsigned int)bVar4) - (unsigned int)bVar3) + (unsigned int)bVar2;
                piVar42[7] = (unsigned int)bVar4;
                puVar41[5] = iVar39 - uVar17;
                piVar42[6] = (unsigned int)bVar3;
                bVar2 = *(unsigned char *)(iVar20 + 1);
                bVar3 = *(unsigned char *)(iVar48 + iVar20);
                bVar4 = *(unsigned char *)(iVar20 + iVar31);
                iVar20 = ((int)uVar24 >> 0xb) + iVar43;
                bVar5 = *(unsigned char *)(((int)uVar28 >> 0xb) + iVar43);
                puVar41[10] = uVar23;
                piVar42[9] = (unsigned int)bVar5;
                puVar41[0xc] = uVar23;
                piVar42[0xb] = (unsigned int)bVar4;
                piVar42[0xc] = (((unsigned int)bVar3 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar5;
                piVar42[10] = (unsigned int)bVar2;
                puVar41[9] = iVar39 - uVar23;
                bVar2 = *(unsigned char *)(iVar20 + 1);
                bVar3 = *(unsigned char *)(iVar48 + iVar20);
                bVar4 = *(unsigned char *)(iVar20 + iVar31);
                bVar5 = *(unsigned char *)(((int)uVar24 >> 0xb) + iVar43);
                puVar41[0xd] = iVar39 - uVar51;
                piVar42[0xf] = (unsigned int)bVar4;
                puVar41[0xe] = uVar51;
                piVar42[0xe] = (unsigned int)bVar2;
                piVar42[0xd] = (unsigned int)bVar5;
                piVar42 = piVar42 + 0x10;
                *piVar42 = (((unsigned int)bVar3 - (unsigned int)bVar4) - (unsigned int)bVar2) + (unsigned int)bVar5;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar51;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              iVar20 = fn_82C6B0F0(puVar40,&lbl_83231E50,&lbl_83232350);
              lVar46 = lVar46 + -1;
              puVar40 = (unsigned char *)(iVar20 + 0x10);
            } while (lVar46 != 0);
          }
          if (0 < (int)lVar47) {
            do {
              uVar51 = uVar27 & 0x7ff;
              pbVar30 = (unsigned char *)(((int)uVar27 >> 0xb) + iVar43);
              uVar27 = uVar27 + iVar36;
              *puVar40 = (char)((int)(((int)(((((unsigned int)pbVar30[iVar31 + 1] - (unsigned int)pbVar30[iVar31]) -
                                              (unsigned int)pbVar30[1]) + (unsigned int)*pbVar30) * uVar51 * uVar49)
                                      >> 0xb) + ((0x800 - uVar51) - uVar49) * (unsigned int)*pbVar30 +
                                      pbVar30[1] * uVar51 + pbVar30[iVar31] * uVar49) >> 0xb);
              puVar40 = puVar40 + 1;
              lVar47 = lVar47 + -1;
            } while (lVar47 != 0);
          }
          uVar32 = (unsigned __int64)uVar16;
          if ((int)uVar15 < (int)uVar16) {
            lVar46 = uVar32 - uVar15;
            do {
              iVar39 = (int)uVar27 >> 0xb;
              uVar27 = uVar27 + iVar36;
              *puVar40 = *(unsigned char *)(iVar39 + iVar43);
              puVar40 = puVar40 + 1;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          iVar43 = *(int *)(iVar19 + 0x3c20);
          if ((int)uVar16 < iVar43) {
            puVar40 = puVar40 + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              uVar32 = uVar32 + 1;
              iVar43 = *(int *)(iVar19 + 0x3c20);
            } while ((int)uVar32 < iVar43);
          }
          puStack_16c = puStack_16c + iVar43;
          uVar22 = uVar22 + uVar33;
          uVar45 = uVar45 + 2;
          uVar22 = ((uVar22 & 0xffffffff) >> 0x1f) - 1 & uVar22;
          uStack_140 = (unsigned int)uVar22;
        } while ((int)uVar45 < (int)(uStack_148 - 2));
      }
      iVar43 = uStack_148 - 2;
      iVar31 = (int)uVar22 >> 0xb;
      if (*(int *)(iVar19 + 0x3c1c) <= iVar31) {
        iVar31 = *(int *)(iVar19 + 0x3c1c) + -1;
      }
      uVar21 = uVar34;
      if ((((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF) + 2 <= (int)uStack_148) {
        for (; iVar43 < (int)uStack_148; iVar43 = iVar43 + 2) {
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar27 = uVar14; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          iVar39 = *(int *)(iVar19 + 0x14);
          iVar48 = *(int *)(iVar19 + 0x3c2c);
          if ((int)uVar14 < (int)uVar15) {
            iVar20 = uVar15 - uVar14;
            do {
              iVar18 = (int)uVar21 >> 0xb;
              uVar21 = uVar21 + iVar36;
              *puVar40 = *(unsigned char *)(iVar18 + iVar39 * iVar31 + iVar48);
              puVar40 = puVar40 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          if ((int)uVar15 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puVar40 + -1;
            uVar21 = uVar15;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < *(int *)(iVar19 + 0x3c20));
          }
          puVar40 = puStack_174;
          puVar35 = puStack_170;
          uVar21 = uVar9;
          if (0 < (int)uVar9) {
            do {
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              *puVar35 = 0x80;
              puVar35 = puVar35 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          iVar31 = (int)uVar22 >> 0xc;
          iVar39 = *(int *)(iVar19 + 0x3c1c) >> 1;
          if (iVar39 <= iVar31) {
            iVar31 = iVar39 + -1;
          }
          if ((int)uVar9 < iVar10) {
            iVar39 = iVar10 - uVar9;
            uVar21 = uVar34;
            do {
              iVar48 = (int)uVar21 >> 0xc;
              uVar21 = uVar21 + iVar1;
              *puVar40 = *(unsigned char *)(iVar31 * iVar44 + uVar6 + iVar48);
              puVar40 = puVar40 + 1;
              *puVar35 = *(unsigned char *)(iVar31 * iVar44 + uVar7 + iVar48);
              puVar35 = puVar35 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          if (iVar10 < iVar8) {
            iVar39 = iVar8 - iVar10;
            iVar31 = iVar10;
            do {
              puVar40[iVar31 - iVar10] = 0x80;
              puVar35[iVar31 - iVar10] = 0x80;
              iVar31 = iVar31 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          puStack_16c = puStack_16c + *(int *)(iVar19 + 0x3c20);
          uVar22 = ((uVar22 + uVar33 & 0xffffffff) >> 0x1f) - 1 & uVar22 + uVar33;
          iVar31 = (int)uVar22 >> 0xb;
          if (*(int *)(iVar19 + 0x3c1c) <= iVar31) {
            iVar31 = *(int *)(iVar19 + 0x3c1c) + -1;
          }
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar21 = uVar14; uVar21 != 0; uVar21 = uVar21 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          iVar39 = *(int *)(iVar19 + 0x14);
          iVar48 = *(int *)(iVar19 + 0x3c2c);
          uVar21 = uVar34;
          if ((int)uVar14 < (int)uVar15) {
            iVar20 = uVar15 - uVar14;
            do {
              iVar18 = (int)uVar21 >> 0xb;
              uVar21 = uVar21 + iVar36;
              *puVar40 = *(unsigned char *)(iVar18 + iVar39 * iVar31 + iVar48);
              puVar40 = puVar40 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          iVar39 = *(int *)(iVar19 + 0x3c20);
          if ((int)uVar15 < iVar39) {
            puVar40 = puVar40 + -1;
            uVar27 = uVar15;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              uVar27 = uVar27 + 1;
              iVar39 = *(int *)(iVar19 + 0x3c20);
            } while ((int)uVar27 < iVar39);
          }
          puStack_16c = puStack_16c + iVar39;
        }
      }
      if ((int)uStack_148 < *(int *)(iVar19 + 0x3c24)) {
        do {
          iVar31 = 0;
          if (0 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puStack_16c + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar31 = iVar31 + 1;
            } while (iVar31 < *(int *)(iVar19 + 0x3c20));
          }
          if (0 < iVar8) {
            iVar31 = iVar8;
            puVar40 = puStack_170;
            do {
              puVar40[(int)puStack_174 - (int)puStack_170] = 0x80;
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              iVar31 = iVar31 + -1;
            } while (iVar31 != 0);
          }
          iVar31 = *(int *)(iVar19 + 0x3c20);
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          iVar36 = 0;
          iVar44 = iVar31;
          if (0 < iVar31) {
            puVar40 = puStack_16c + iVar31 + -1;
            do {
              iVar36 = iVar36 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar44 = *(int *)(iVar19 + 0x3c20);
            } while (iVar36 < iVar44);
          }
          uStack_148 = uStack_148 + 2;
          puStack_16c = puStack_16c + iVar44 + iVar31;
        } while ((int)uStack_148 < *(int *)(iVar19 + 0x3c24));
      }
    }
    fn_82F6A584(0);
  }
  return;
}

