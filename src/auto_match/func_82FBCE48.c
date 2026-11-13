typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82A1EFC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216DDB4;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_11c;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82FBCE48(int param_1,unsigned int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  bool bVar14;
  int in_r0;
  unsigned __int64 uVar15;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar22;
  unsigned int *puVar23;
  unsigned __int64 uVar21;
  __int64 lVar24;
  unsigned int *puVar25;
  unsigned int *puVar26;
  float *pfVar27;
  int iVar28;
  unsigned __int64 uVar29;
  unsigned int *puVar31;
  float *pfVar32;
  float *pfVar33;
  int iVar34;
  unsigned __int64 uVar30;
  __int64 lVar35;
  unsigned __int64 uVar36;
  float *pfVar38;
  float *pfVar39;
  unsigned __int64 uVar37;
  int iVar40;
  __int64 lVar41;
  unsigned __int64 uVar42;
  float *pfVar43;
  unsigned __int64 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  unsigned char in_vs32 [16];
  unsigned char auVar48 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs56 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float in_register_000103f0;
  unsigned int *puStack0000001c;
  unsigned int uStack_11c;
  float *apfStack_f0 [4];
  float *pfStack_e0;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  
  uVar15 = ZEXT48(&stack0x00000000);
  puVar17 = *(unsigned int **)(param_1 + 8);
  lVar41 = 8;
  puVar16 = puVar17 + 0x14;
  uVar42 = ((unsigned __int64)*puVar17 & 0x3fffffff) << 2;
  do {
    uVar18 = (unsigned __int64)*puVar16;
    uVar20 = uVar42;
    if (0x3ff < uVar42) {
      uVar20 = 0x400;
    }
    uVar29 = puVar16[-8] - uVar18;
    if (uVar20 <= (uVar29 & 0xffffffff)) {
      uVar29 = uVar20;
    }
    lVar35 = 0;
    if ((uVar29 & 0xffffffff) != 0) {
      lVar24 = ((uVar29 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar35 + uVar18);
        lVar35 = lVar35 + 0x80;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    if ((uVar29 & 0xffffffff) < uVar20) {
      uVar36 = (unsigned __int64)puVar16[-8] - (unsigned __int64)puVar16[-0x10];
      if ((uVar20 - uVar29 & 0xffffffff) <= (uVar36 & 0xffffffff)) {
        uVar36 = uVar20 - uVar29;
      }
      lVar35 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        lVar24 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar35 + uVar18);
          lVar35 = lVar35 + 0x80;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    lVar41 = lVar41 + -1;
    puVar16 = puVar16 + 1;
  } while (lVar41 != 0);
  puVar16 = puVar17 + 0x42;
  lVar41 = 4;
  uVar42 = ((unsigned __int64)*puVar17 & 0x1fffffff) << 3;
  do {
    uVar18 = (unsigned __int64)*puVar16;
    uVar20 = uVar42;
    if (0x3ff < uVar42) {
      uVar20 = 0x400;
    }
    uVar29 = puVar16[-4] - uVar18;
    if (uVar20 <= (uVar29 & 0xffffffff)) {
      uVar29 = uVar20;
    }
    lVar35 = 0;
    if ((uVar29 & 0xffffffff) != 0) {
      lVar24 = ((uVar29 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar35 + uVar18);
        lVar35 = lVar35 + 0x80;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    if ((uVar29 & 0xffffffff) < uVar20) {
      uVar36 = (unsigned __int64)puVar16[-4] - (unsigned __int64)puVar16[-8];
      if ((uVar20 - uVar29 & 0xffffffff) <= (uVar36 & 0xffffffff)) {
        uVar36 = uVar20 - uVar29;
      }
      lVar35 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        lVar24 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar35 + uVar18);
          lVar35 = lVar35 + 0x80;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    lVar41 = lVar41 + -1;
    puVar16 = puVar16 + 1;
  } while (lVar41 != 0);
  dVar45 = (double)*(float *)(param_1 + 0x6c);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x24);
  *(unsigned int *)(param_1 + 0x7c) = 0;
  dVar46 = (double)(fVar1 - *(float *)(param_1 + 0x78));
  dVar47 = (double)lbl_821AAD20;
  *(float *)(param_1 + 0x74) = fVar1;
  *(int *)(param_1 + 0x80) = (int)(__int64)(ABS(dVar46) / dVar45);
  if (dVar46 <= dVar47) {
    dVar45 = -dVar45;
  }
  *(float *)(param_1 + 0x70) = (float)dVar45;
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 4);
  dVar46 = (double)(fVar1 - *(float *)(param_1 + 0x90));
  dVar45 = (double)*(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x8c) = fVar1;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(int *)(param_1 + 0x98) = (int)(__int64)(ABS(dVar46) / dVar45);
  if (dVar46 <= dVar47) {
    dVar45 = -dVar45;
  }
  *(float *)(param_1 + 0x88) = (float)dVar45;
  dVar45 = (double)*(float *)(param_1 + 0x9c);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 0xc);
  *(unsigned int *)(param_1 + 0xac) = 0;
  dVar46 = (double)(fVar1 - *(float *)(param_1 + 0xa8));
  *(float *)(param_1 + 0xa4) = fVar1;
  *(int *)(param_1 + 0xb0) = (int)(__int64)(ABS(dVar46) / dVar45);
  if (dVar46 <= dVar47) {
    dVar45 = -dVar45;
  }
  *(float *)(param_1 + 0xa0) = (float)dVar45;
  dVar45 = (double)*(float *)(param_1 + 0xb4);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 8);
  dVar46 = (double)(fVar1 - *(float *)(param_1 + 0xc0));
  *(float *)(param_1 + 0xbc) = fVar1;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(int *)(param_1 + 200) = (int)(__int64)(ABS(dVar46) / dVar45);
  if (dVar46 <= dVar47) {
    dVar45 = -dVar45;
  }
  *(float *)(param_1 + 0xb8) = (float)dVar45;
  dVar45 = (double)*(float *)(param_1 + 0xe4);
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x1c);
  *(unsigned int *)(param_1 + 0xf4) = 0;
  dVar46 = (double)(fVar1 - *(float *)(param_1 + 0xf0));
  *(float *)(param_1 + 0xec) = fVar1;
  *(int *)(param_1 + 0xf8) = (int)(__int64)(ABS(dVar46) / dVar45);
  if (dVar46 <= dVar47) {
    dVar45 = -dVar45;
  }
  *(float *)(param_1 + 0xe8) = (float)dVar45;
  uVar12 = param_2[2];
  uVar18 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe);
  uVar22 = *param_2;
  uVar20 = (unsigned __int64)uVar22;
  uStack_11c = (unsigned int)*(unsigned short *)((int)param_2 + 0xe);
  puStack0000001c = param_2;
  if (uVar12 == 0x11) {
    iVar28 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar28 + 0x18);
    if ((fVar1 != *(float *)(param_1 + 0x10c)) || (*(char *)(param_1 + 0x110) == '\0')) {
      fVar2 = *(float *)(iVar28 + 0x14);
      fVar3 = *(float *)(iVar28 + 0x10);
      *(float *)(param_1 + 0x10c) = fVar1;
      *(int *)(param_1 + 0x108) =
           (int)(__int64)((fVar2 + fVar3 + fVar1) * (float)*(unsigned int *)(param_1 + 0xfc));
    }
    uVar29 = (unsigned __int64)*(unsigned int *)(param_1 + 0x108);
    if ((*(unsigned short *)(param_2 + 3) - uVar18 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x108)) {
      uVar29 = *(unsigned short *)(param_2 + 3) - uVar18;
    }
    uVar42 = fn_82A1EFC0(uVar18 * 4 + uVar20,0,(uVar29 & 0x3fffffff) << 2);
    uVar18 = uVar29 + uVar18;
    lVar41 = *(unsigned int *)(param_1 + 0x108) - uVar29;
    uStack_11c = (unsigned int)uVar18;
    *(int *)(param_1 + 0x108) = (int)lVar41;
    if (lVar41 != 0) {
      param_2[2] = 0x2d;
    }
  }
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x18);
  uVar29 = (uVar18 & 0x3fffffff) * 4 + uVar20;
  fVar3 = *(float *)(param_1 + 0x1c);
  if (uVar20 < (uVar29 & 0xffffffff)) {
    uVar22 = ((int)uVar29 - uVar22) + 3;
    uVar36 = uVar20;
    if (3 < (int)(((int)uVar22 >> 2) + (unsigned int)((int)uVar22 < 0 && (uVar22 & 3) != 0))) {
      do {
        pfVar38 = (float *)uVar36;
        fVar4 = *pfVar38;
        fVar8 = fVar4 - fVar2;
        fVar5 = pfVar38[1];
        fVar6 = pfVar38[2];
        fVar2 = pfVar38[3];
        fVar8 = fVar1 * fVar3 + fVar8;
        *pfVar38 = fVar8;
        fVar3 = fVar1 * fVar8 + (fVar5 - fVar4);
        pfVar38[1] = fVar3;
        fVar3 = fVar1 * fVar3 + (fVar6 - fVar5);
        pfVar38[2] = fVar3;
        fVar3 = fVar1 * fVar3 + (fVar2 - fVar6);
        pfVar38[3] = fVar3;
        uVar36 = uVar36 + 0x10;
      } while ((int)uVar36 < (int)uVar29 + -0xc);
    }
    if ((uVar36 & 0xffffffff) < (uVar29 & 0xffffffff)) {
      lVar41 = uVar36 - 4;
      lVar35 = (((uVar29 - uVar36) - 1 & 0xffffffff) >> 2) + 1;
      fVar4 = fVar2;
      do {
        fVar2 = *(float *)((int)lVar41 + 4);
        fVar3 = fVar1 * fVar3 + (fVar2 - fVar4);
        lVar41 = lVar41 + 4;
        *(float *)lVar41 = fVar3;
        lVar35 = lVar35 + -1;
        fVar4 = fVar2;
      } while (lVar35 != 0);
    }
  }
  *(float *)(param_1 + 0x18) = fVar2;
  *(float *)(param_1 + 0x1c) = fVar3;
  fVar6 = lbl_8216DDB4;
  fVar5 = lbl_82057B54;
  fVar4 = lbl_82005748;
  fVar3 = lbl_82005344;
  fVar2 = lbl_82002C5C;
  fVar1 = lbl_82002AE0;
  uVar29 = uVar18;
  while ((uVar18 & 0xffffffff) != 0) {
    uVar36 = uVar18;
    if (0x1f < (uVar18 & 0xffffffff)) {
      uVar36 = 0x20;
    }
    iVar28 = *(int *)(param_1 + 0x28);
    uVar18 = uVar18 - uVar36;
    puVar25 = *(unsigned int **)(iVar28 + 8);
    puVar31 = *(unsigned int **)(iVar28 + 0xc);
    uVar22 = (int)puVar31 - (int)puVar25 >> 2;
    uVar42 = (unsigned __int64)(int)uVar22;
    if ((unsigned __int64)uVar22 < (uVar36 & 0xffffffff)) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        lVar41 = uVar20 - 4;
        puVar23 = (unsigned int *)(*(int *)(param_1 + 0x30) + -4);
        uVar44 = uVar42;
        do {
          uVar21 = uVar44 & 0xffffffff;
          while (uVar21 != 0) {
            uVar7 = *puVar25;
            lVar41 = lVar41 + 4;
            *puVar25 = *(unsigned int *)lVar41;
            puVar25 = puVar25 + 1;
            puVar23 = puVar23 + 1;
            *puVar23 = uVar7;
            uVar44 = uVar44 - 1;
            uVar21 = uVar44;
          }
          if (puVar25 == puVar31) {
            puVar25 = *(unsigned int **)(iVar28 + 4);
          }
          uVar19 = uVar19 + uVar42;
          uVar22 = (int)puVar31 - (int)puVar25 >> 2;
          uVar42 = (unsigned __int64)(int)uVar22;
          uVar44 = uVar36 - uVar19;
          if ((unsigned __int64)uVar22 < (uVar36 - uVar19 & 0xffffffff)) {
            uVar44 = uVar42;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      iVar40 = (int)uVar20 - (int)puVar25;
      puVar31 = (unsigned int *)(*(int *)(param_1 + 0x30) + -4);
      uVar42 = uVar36;
      do {
        uVar7 = *puVar25;
        *puVar25 = *(unsigned int *)((int)puVar25 + iVar40);
        puVar25 = puVar25 + 1;
        puVar31 = puVar31 + 1;
        *puVar31 = uVar7;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    *(unsigned int **)(iVar28 + 8) = puVar25;
    lVar41 = uVar15 - 0xd4;
    iVar28 = *(int *)(param_1 + 0x30);
    iVar40 = *(int *)(param_1 + 0x2c);
    puVar25 = (unsigned int *)0x831bc6d0;
    lVar35 = 5;
    do {
      puVar25 = puVar25 + 1;
      lVar41 = lVar41 + 4;
      *(unsigned int *)lVar41 = *puVar25;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    lVar41 = uVar15 - 0xf4;
    puVar25 = (unsigned int *)(iVar40 + -4);
    lVar35 = 5;
    do {
      puVar25 = puVar25 + 1;
      lVar41 = lVar41 + 4;
      *(unsigned int *)lVar41 = *puVar25;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    uVar42 = (unsigned __int64)*(unsigned int *)(iVar40 + 0x34);
    if ((uVar36 & 0xffffffff) < uVar42) {
      pfVar38 = (float *)(iVar28 + -4);
      pfVar43 = (float *)(iVar28 + -4);
      uVar42 = uVar36;
      do {
        fVar8 = *apfStack_f0[0];
        pfVar38 = pfVar38 + 1;
        *apfStack_f0[0] = *pfVar38;
        apfStack_f0[0] = apfStack_f0[0] + 1;
        fVar9 = *apfStack_f0[2];
        apfStack_f0[2] = apfStack_f0[2] + 1;
        fVar10 = *pfStack_e0;
        pfStack_e0 = pfStack_e0 + 1;
        fVar11 = *apfStack_f0[3];
        fVar49 = *apfStack_f0[1];
        apfStack_f0[3] = apfStack_f0[3] + 1;
        apfStack_f0[1] = apfStack_f0[1] + 1;
        pfVar43 = pfVar43 + 1;
        *pfVar43 = fVar9 * fStack_cc + fStack_d0 * fVar49 + fStack_c8 * fVar11 + fVar10 * fStack_c4
                   + fVar8 * fStack_c0;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
      *(int *)(iVar40 + 0x34) = *(int *)(iVar40 + 0x34) - (int)uVar36;
    }
    else {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        pfVar38 = (float *)(iVar28 + -4);
        pfVar43 = (float *)(iVar28 + -4);
        uVar44 = uVar42;
        do {
          do {
            fVar8 = *apfStack_f0[0];
            pfVar38 = pfVar38 + 1;
            *apfStack_f0[0] = *pfVar38;
            apfStack_f0[0] = apfStack_f0[0] + 1;
            fVar9 = *apfStack_f0[1];
            apfStack_f0[1] = apfStack_f0[1] + 1;
            fVar10 = *apfStack_f0[2];
            apfStack_f0[2] = apfStack_f0[2] + 1;
            fVar11 = *pfStack_e0;
            fVar49 = *apfStack_f0[3];
            apfStack_f0[3] = apfStack_f0[3] + 1;
            pfStack_e0 = pfStack_e0 + 1;
            pfVar43 = pfVar43 + 1;
            *pfVar43 = fVar10 * fStack_cc + fStack_d0 * fVar9 + fStack_c8 * fVar49 +
                       fVar11 * fStack_c4 + fVar8 * fStack_c0;
            uVar42 = uVar42 - 1;
          } while (uVar42 != 0);
          uVar19 = uVar44 + uVar19;
          lVar41 = *(unsigned int *)(iVar40 + 0x34) - uVar44;
          *(int *)(iVar40 + 0x34) = (int)lVar41;
          if (lVar41 == 0) {
            iVar28 = *(int *)(iVar40 + 0x38);
            apfStack_f0[iVar28] = *(float **)(iVar40 + 0x18);
            uVar7 = *(unsigned int *)((iVar28 + 8) * 4 + iVar40);
            *(int *)(iVar40 + 0x38) = iVar28 + 1;
            *(unsigned int *)(iVar40 + 0x34) = uVar7;
            if (iVar28 + 1 == 5) {
              *(unsigned int *)(iVar40 + 0x38) = 0;
            }
          }
          uVar42 = (unsigned __int64)*(unsigned int *)(iVar40 + 0x34);
          if ((uVar36 - uVar19 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(iVar40 + 0x34)) {
            uVar42 = uVar36 - uVar19;
          }
          uVar44 = uVar42;
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    lVar41 = uVar15 - 0xf4;
    puVar25 = (unsigned int *)(iVar40 + -4);
    lVar35 = 5;
    do {
      lVar41 = lVar41 + 4;
      puVar25 = puVar25 + 1;
      *puVar25 = *(unsigned int *)lVar41;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    iVar28 = *(int *)(param_1 + 0x24);
    puVar25 = *(unsigned int **)(iVar28 + 0xc);
    puVar31 = *(unsigned int **)(iVar28 + 8);
    uVar22 = (int)puVar25 - (int)puVar31 >> 2;
    uVar42 = (unsigned __int64)(int)uVar22;
    if ((unsigned __int64)uVar22 < (uVar36 & 0xffffffff)) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        puVar23 = (unsigned int *)(*(int *)(param_1 + 0x30) + -4);
        puVar26 = (unsigned int *)(*(int *)(param_1 + 0x34) + -4);
        uVar44 = uVar42;
        do {
          uVar21 = 0;
          if (3 < (int)uVar44) {
            do {
              uVar21 = uVar21 + 4;
              uVar7 = *puVar31;
              *puVar31 = puVar23[1];
              puVar26[1] = uVar7;
              uVar7 = puVar31[1];
              puVar31[1] = puVar23[2];
              puVar26[2] = uVar7;
              uVar7 = puVar31[2];
              puVar31[2] = puVar23[3];
              puVar26[3] = uVar7;
              uVar7 = puVar31[3];
              puVar13 = puVar23 + 4;
              puVar23 = puVar23 + 4;
              puVar31[3] = *puVar13;
              puVar31 = puVar31 + 4;
              puVar26[4] = uVar7;
              puVar26 = puVar26 + 4;
            } while ((uVar21 & 0xffffffff) < (uVar44 - 3 & 0xffffffff));
          }
          if ((uVar21 & 0xffffffff) < (uVar44 & 0xffffffff)) {
            lVar41 = uVar44 - uVar21;
            do {
              uVar7 = *puVar31;
              puVar23 = puVar23 + 1;
              *puVar31 = *puVar23;
              puVar31 = puVar31 + 1;
              puVar26 = puVar26 + 1;
              *puVar26 = uVar7;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
          }
          if (puVar31 == puVar25) {
            puVar31 = *(unsigned int **)(iVar28 + 4);
          }
          uVar19 = uVar19 + uVar42;
          uVar22 = (int)puVar25 - (int)puVar31 >> 2;
          uVar42 = (unsigned __int64)(int)uVar22;
          uVar44 = uVar42;
          if ((uVar36 - uVar19 & 0xffffffff) <= (unsigned __int64)uVar22) {
            uVar44 = uVar36 - uVar19;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      puVar25 = (unsigned int *)(*(int *)(param_1 + 0x30) + -4);
      puVar23 = (unsigned int *)(*(int *)(param_1 + 0x34) + -4);
      uVar42 = uVar36;
      do {
        uVar7 = *puVar31;
        puVar25 = puVar25 + 1;
        *puVar31 = *puVar25;
        puVar31 = puVar31 + 1;
        puVar23 = puVar23 + 1;
        *puVar23 = uVar7;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    *(unsigned int **)(iVar28 + 8) = puVar31;
    pfVar43 = *(float **)(param_1 + 0x34);
    bVar14 = (int)uVar18 != 0;
    pfVar38 = *(float **)(param_1 + 0x38);
    iVar28 = *(int *)(param_1 + 8);
    if (bVar14) {
      puVar17 = (unsigned int *)(iVar28 + 0x30);
      lVar41 = 8;
      uVar42 = ((unsigned __int64)*(unsigned int *)(iVar28 + 4) & 0x3fffffff) * 4;
      do {
        uVar44 = (unsigned __int64)*puVar17;
        uVar19 = puVar17[8] + uVar42;
        if (uVar44 <= (uVar19 & 0xffffffff)) {
          uVar19 = (unsigned __int64)puVar17[-8];
        }
        uVar21 = uVar42;
        if (0x3ff < uVar42) {
          uVar21 = 0x400;
        }
        uVar30 = uVar44 - uVar19;
        if (uVar21 <= (uVar44 - uVar19 & 0xffffffff)) {
          uVar30 = uVar21;
        }
        lVar35 = 0;
        if ((uVar30 & 0xffffffff) != 0) {
          lVar24 = ((uVar30 - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockTouch(lVar35 + uVar19);
            lVar35 = lVar35 + 0x80;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if ((uVar30 & 0xffffffff) < uVar21) {
          uVar37 = uVar44 - puVar17[-8];
          if ((uVar21 - uVar30 & 0xffffffff) <= (uVar44 - puVar17[-8] & 0xffffffff)) {
            uVar37 = uVar21 - uVar30;
          }
          lVar35 = 0;
          if ((uVar37 & 0xffffffff) != 0) {
            lVar24 = ((uVar37 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar35 + uVar19);
              lVar35 = lVar35 + 0x80;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        lVar41 = lVar41 + -1;
        puVar17 = puVar17 + 1;
      } while (lVar41 != 0);
    }
    pfVar39 = *(float **)(iVar28 + 0x50);
    fVar8 = *(float *)(iVar28 + 0x90);
    pfVar32 = *(float **)(iVar28 + 0x30);
    fVar9 = *(float *)(iVar28 + 0xb0);
    uVar22 = (int)pfVar32 - (int)pfVar39 >> 2;
    uVar19 = (unsigned __int64)(int)uVar22;
    uVar42 = uVar36;
    if (((unsigned __int64)uVar22 < (uVar36 & 0xffffffff)) &&
       (uVar42 = uVar19, (unsigned __int64)uVar22 != (uVar36 & 0xffffffff))) {
      uVar42 = 0;
      pfVar33 = pfVar38;
      pfVar27 = pfVar43;
      if (3 < (int)uVar22) {
        do {
          uVar42 = uVar42 + 4;
          fVar10 = fVar8 * *pfVar27 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *pfVar33 = fVar10;
          fVar10 = *(float *)((int)pfVar33 + (int)pfVar43 + (4 - (int)pfVar38)) * fVar8 +
                   pfVar39[1] * fVar9;
          pfVar39[1] = fVar10;
          pfVar33[1] = fVar10;
          fVar10 = pfVar39[2] * fVar9 + pfVar27[2] * fVar8;
          pfVar39[2] = fVar10;
          pfVar33[2] = fVar10;
          fVar10 = pfVar39[3] * fVar9 + pfVar27[3] * fVar8;
          pfVar39[3] = fVar10;
          pfVar33[3] = fVar10;
          pfVar27 = pfVar27 + 4;
          pfVar33 = pfVar33 + 4;
          pfVar39 = pfVar39 + 4;
        } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
      }
      if ((uVar42 & 0xffffffff) < (unsigned __int64)uVar22) {
        lVar41 = uVar19 - uVar42;
        do {
          fVar10 = *pfVar27;
          pfVar27 = pfVar27 + 1;
          fVar10 = fVar8 * fVar10 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *pfVar33 = fVar10;
          pfVar33 = pfVar33 + 1;
          pfVar39 = pfVar39 + 1;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
      if (pfVar32 <= pfVar39) {
        pfVar39 = *(float **)(iVar28 + 0x10);
      }
      uVar22 = (int)pfVar32 - (int)pfVar39 >> 2;
      uVar42 = (__int64)(int)uVar22;
      if ((uVar36 - uVar19 & 0xffffffff) <= (unsigned __int64)uVar22) {
        uVar42 = uVar36 - uVar19;
      }
      uVar19 = 0;
      if (3 < (int)uVar42) {
        do {
          uVar19 = uVar19 + 4;
          fVar10 = fVar8 * *pfVar27 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *pfVar33 = fVar10;
          fVar10 = pfVar39[1] * fVar9 + pfVar27[1] * fVar8;
          pfVar39[1] = fVar10;
          pfVar33[1] = fVar10;
          fVar10 = pfVar39[2] * fVar9 + pfVar27[2] * fVar8;
          pfVar39[2] = fVar10;
          pfVar33[2] = fVar10;
          pfVar32 = pfVar27 + 3;
          pfVar27 = pfVar27 + 4;
          fVar10 = pfVar39[3] * fVar9 + *pfVar32 * fVar8;
          pfVar39[3] = fVar10;
          pfVar33[3] = fVar10;
          pfVar33 = pfVar33 + 4;
          pfVar39 = pfVar39 + 4;
        } while ((uVar19 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
      }
      if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
        lVar41 = uVar42 - uVar19;
        iVar40 = (int)pfVar27 - (int)pfVar33;
        do {
          fVar10 = *(float *)((int)pfVar33 + iVar40) * fVar8 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *pfVar33 = fVar10;
          pfVar33 = pfVar33 + 1;
          pfVar39 = pfVar39 + 1;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    else {
      uVar19 = 0;
      pfVar32 = pfVar38;
      pfVar33 = pfVar43;
      if (3 < (int)uVar42) {
        do {
          uVar19 = uVar19 + 4;
          fVar10 = fVar8 * *pfVar33 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *pfVar32 = fVar10;
          fVar10 = *(float *)((int)pfVar32 + (int)pfVar43 + (4 - (int)pfVar38)) * fVar8 +
                   pfVar39[1] * fVar9;
          pfVar39[1] = fVar10;
          pfVar32[1] = fVar10;
          fVar10 = pfVar39[2] * fVar9 + pfVar33[2] * fVar8;
          pfVar39[2] = fVar10;
          pfVar32[2] = fVar10;
          fVar10 = pfVar39[3] * fVar9 + pfVar33[3] * fVar8;
          pfVar39[3] = fVar10;
          pfVar32[3] = fVar10;
          pfVar32 = pfVar32 + 4;
          pfVar33 = pfVar33 + 4;
          pfVar39 = pfVar39 + 4;
        } while ((uVar19 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
      }
      if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
        lVar41 = uVar42 - uVar19;
        iVar40 = (int)pfVar33 - (int)pfVar39;
        iVar34 = (int)pfVar32 - (int)pfVar39;
        do {
          fVar10 = *(float *)(iVar40 + (int)pfVar39) * fVar8 + *pfVar39 * fVar9;
          *pfVar39 = fVar10;
          *(float *)(iVar34 + (int)pfVar39) = fVar10;
          pfVar39 = pfVar39 + 1;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    *(float **)(iVar28 + 0x50) = pfVar39;
    puVar25 = (unsigned int *)(iVar28 + 0x34);
    lVar41 = 7;
    do {
      pfVar39 = (float *)puVar25[8];
      fVar8 = (float)puVar25[0x18];
      pfVar32 = (float *)*puVar25;
      fVar9 = (float)puVar25[0x20];
      uVar22 = (int)pfVar32 - (int)pfVar39 >> 2;
      uVar19 = (unsigned __int64)(int)uVar22;
      uVar42 = uVar36;
      if (((unsigned __int64)uVar22 < (uVar36 & 0xffffffff)) &&
         (uVar42 = uVar19, (unsigned __int64)uVar22 != (uVar36 & 0xffffffff))) {
        uVar42 = 0;
        pfVar33 = pfVar38;
        pfVar27 = pfVar43;
        if (3 < (int)uVar22) {
          do {
            uVar42 = uVar42 + 4;
            fVar10 = fVar8 * *pfVar27 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            *pfVar33 = fVar10 + *pfVar33;
            fVar10 = *(float *)((int)pfVar33 + (int)pfVar43 + (4 - (int)pfVar38)) * fVar8 +
                     pfVar39[1] * fVar9;
            pfVar39[1] = fVar10;
            pfVar33[1] = pfVar33[1] + fVar10;
            fVar10 = pfVar39[2] * fVar9 + pfVar27[2] * fVar8;
            pfVar39[2] = fVar10;
            pfVar33[2] = pfVar33[2] + fVar10;
            fVar10 = pfVar39[3] * fVar9 + pfVar27[3] * fVar8;
            pfVar39[3] = fVar10;
            pfVar27 = pfVar27 + 4;
            pfVar39 = pfVar39 + 4;
            pfVar33[3] = pfVar33[3] + fVar10;
            pfVar33 = pfVar33 + 4;
          } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
          uVar29 = (unsigned __int64)uStack_11c;
        }
        if ((uVar42 & 0xffffffff) < (unsigned __int64)uVar22) {
          lVar35 = uVar19 - uVar42;
          do {
            fVar10 = *pfVar27;
            pfVar27 = pfVar27 + 1;
            fVar10 = fVar8 * fVar10 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            pfVar39 = pfVar39 + 1;
            *pfVar33 = fVar10 + *pfVar33;
            pfVar33 = pfVar33 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        if (pfVar32 <= pfVar39) {
          pfVar39 = (float *)puVar25[-8];
        }
        uVar22 = (int)pfVar32 - (int)pfVar39 >> 2;
        uVar42 = (__int64)(int)uVar22;
        if ((uVar36 - uVar19 & 0xffffffff) <= (unsigned __int64)uVar22) {
          uVar42 = uVar36 - uVar19;
        }
        uVar19 = 0;
        if (3 < (int)uVar42) {
          do {
            uVar19 = uVar19 + 4;
            fVar10 = fVar8 * *pfVar27 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            *pfVar33 = fVar10 + *pfVar33;
            fVar10 = pfVar39[1] * fVar9 + pfVar27[1] * fVar8;
            pfVar39[1] = fVar10;
            pfVar33[1] = pfVar33[1] + fVar10;
            fVar10 = pfVar39[2] * fVar9 + pfVar27[2] * fVar8;
            pfVar39[2] = fVar10;
            pfVar33[2] = pfVar33[2] + fVar10;
            pfVar32 = pfVar27 + 3;
            pfVar27 = pfVar27 + 4;
            fVar10 = pfVar39[3] * fVar9 + *pfVar32 * fVar8;
            pfVar39[3] = fVar10;
            pfVar33[3] = pfVar33[3] + fVar10;
            pfVar39 = pfVar39 + 4;
            pfVar33 = pfVar33 + 4;
          } while ((uVar19 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar35 = uVar42 - uVar19;
          iVar40 = (int)pfVar27 - (int)pfVar33;
          do {
            fVar10 = *(float *)((int)pfVar33 + iVar40) * fVar8 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            pfVar39 = pfVar39 + 1;
            *pfVar33 = fVar10 + *pfVar33;
            pfVar33 = pfVar33 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      else {
        uVar19 = 0;
        pfVar32 = pfVar38;
        pfVar33 = pfVar43;
        if (3 < (int)uVar42) {
          do {
            uVar19 = uVar19 + 4;
            fVar10 = fVar8 * *pfVar33 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            *pfVar32 = fVar10 + *pfVar32;
            fVar10 = *(float *)((int)pfVar32 + (int)pfVar43 + (4 - (int)pfVar38)) * fVar8 +
                     pfVar39[1] * fVar9;
            pfVar39[1] = fVar10;
            pfVar32[1] = pfVar32[1] + fVar10;
            fVar10 = pfVar39[2] * fVar9 + pfVar33[2] * fVar8;
            pfVar39[2] = fVar10;
            pfVar32[2] = pfVar32[2] + fVar10;
            fVar10 = pfVar39[3] * fVar9 + pfVar33[3] * fVar8;
            pfVar39[3] = fVar10;
            pfVar33 = pfVar33 + 4;
            pfVar39 = pfVar39 + 4;
            pfVar32[3] = pfVar32[3] + fVar10;
            pfVar32 = pfVar32 + 4;
          } while ((uVar19 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar35 = uVar42 - uVar19;
          iVar40 = (int)pfVar33 - (int)pfVar39;
          iVar34 = (int)pfVar32 - (int)pfVar39;
          do {
            fVar10 = *(float *)(iVar40 + (int)pfVar39) * fVar8 + fVar9 * *pfVar39;
            *pfVar39 = fVar10;
            *(float *)(iVar34 + (int)pfVar39) = fVar10 + *(float *)(iVar34 + (int)pfVar39);
            pfVar39 = pfVar39 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      puVar25[8] = pfVar39;
      lVar41 = lVar41 + -1;
      puVar25 = puVar25 + 1;
    } while (lVar41 != 0);
    if (bVar14) {
      puVar17 = (unsigned int *)(iVar28 + 0xf8);
      lVar41 = 4;
      uVar42 = ((unsigned __int64)*(unsigned int *)(iVar28 + 4) & 0x1fffffff) * 8;
      do {
        uVar44 = (unsigned __int64)*puVar17;
        uVar19 = uVar42 + puVar17[4];
        if (uVar44 <= (uVar19 & 0xffffffff)) {
          uVar19 = (unsigned __int64)puVar17[-4];
        }
        uVar21 = uVar42;
        if (0x3ff < uVar42) {
          uVar21 = 0x400;
        }
        uVar30 = uVar44 - uVar19;
        if (uVar21 <= (uVar44 - uVar19 & 0xffffffff)) {
          uVar30 = uVar21;
        }
        lVar35 = 0;
        if ((uVar30 & 0xffffffff) != 0) {
          lVar24 = ((uVar30 - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockTouch(lVar35 + uVar19);
            lVar35 = lVar35 + 0x80;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if ((uVar30 & 0xffffffff) < uVar21) {
          uVar37 = uVar44 - puVar17[-4];
          if ((uVar21 - uVar30 & 0xffffffff) <= (uVar44 - puVar17[-4] & 0xffffffff)) {
            uVar37 = uVar21 - uVar30;
          }
          lVar35 = 0;
          if ((uVar37 & 0xffffffff) != 0) {
            lVar24 = ((uVar37 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar35 + uVar19);
              lVar35 = lVar35 + 0x80;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        lVar41 = lVar41 + -1;
        puVar17 = puVar17 + 1;
      } while (lVar41 != 0);
    }
    pfVar43 = *(float **)(iVar28 + 0xf8);
    pfVar39 = *(float **)(iVar28 + 0x108);
    uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
    uVar19 = uVar36;
    if ((uVar42 < (uVar36 & 0xffffffff)) && (uVar19 = uVar42, uVar42 != (uVar36 & 0xffffffff))) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        pfVar32 = pfVar38 + -1;
        do {
          uVar44 = 0;
          if (3 < (int)uVar42) {
            do {
              fVar8 = pfVar32[1];
              uVar44 = uVar44 + 4;
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32[1] = fVar9;
              fVar8 = pfVar32[2];
              fVar9 = pfVar39[2];
              pfVar39[2] = fVar8;
              fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
              pfVar39[3] = fVar9;
              pfVar32[2] = fVar9;
              fVar8 = pfVar32[3];
              fVar9 = pfVar39[4];
              pfVar39[4] = fVar8;
              fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
              pfVar39[5] = fVar9;
              pfVar32[3] = fVar9;
              fVar8 = pfVar32[4];
              fVar9 = pfVar39[6];
              pfVar39[6] = fVar8;
              fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
              pfVar39[7] = fVar9;
              pfVar32[4] = fVar9;
              pfVar39 = pfVar39 + 8;
              pfVar32 = pfVar32 + 4;
            } while ((uVar44 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
          }
          if ((uVar44 & 0xffffffff) < (uVar42 & 0xffffffff)) {
            lVar41 = uVar42 - uVar44;
            do {
              fVar8 = pfVar32[1];
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32 = pfVar32 + 1;
              *pfVar32 = fVar9;
              pfVar39 = pfVar39 + 2;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
          }
          if (pfVar43 <= pfVar39) {
            pfVar39 = *(float **)(iVar28 + 0xe8);
          }
          uVar19 = uVar19 + uVar42;
          uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
          if ((uVar36 - uVar19 & 0xffffffff) <= uVar42) {
            uVar42 = uVar36 - uVar19;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      uVar42 = 0;
      pfVar43 = pfVar38;
      if (3 < (int)uVar19) {
        do {
          fVar8 = *pfVar43;
          uVar42 = uVar42 + 4;
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          *pfVar43 = fVar9;
          fVar8 = (pfVar43[1] - pfVar39[3]) * fVar5 + pfVar39[2];
          pfVar39[2] = pfVar43[1];
          pfVar39[3] = fVar8;
          pfVar43[1] = fVar8;
          fVar8 = pfVar43[2];
          fVar9 = pfVar39[4];
          pfVar39[4] = fVar8;
          fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
          pfVar39[5] = fVar9;
          pfVar43[2] = fVar9;
          fVar8 = pfVar43[3];
          fVar9 = pfVar39[6];
          pfVar39[6] = fVar8;
          fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
          pfVar39[7] = fVar9;
          pfVar43[3] = fVar9;
          pfVar39 = pfVar39 + 8;
          pfVar43 = pfVar43 + 4;
        } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
      }
      if ((uVar42 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        lVar41 = uVar19 - uVar42;
        pfVar43 = pfVar43 + -1;
        do {
          fVar8 = pfVar43[1];
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          pfVar43 = pfVar43 + 1;
          *pfVar43 = fVar9;
          pfVar39 = pfVar39 + 2;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    *(float **)(iVar28 + 0x108) = pfVar39;
    pfVar43 = *(float **)(iVar28 + 0xfc);
    pfVar39 = *(float **)(iVar28 + 0x10c);
    uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
    uVar19 = uVar36;
    if ((uVar42 < (uVar36 & 0xffffffff)) && (uVar19 = uVar42, uVar42 != (uVar36 & 0xffffffff))) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        pfVar32 = pfVar38 + -1;
        do {
          uVar44 = 0;
          if (3 < (int)uVar42) {
            do {
              fVar8 = pfVar32[1];
              uVar44 = uVar44 + 4;
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32[1] = fVar9;
              fVar8 = pfVar32[2];
              fVar9 = pfVar39[2];
              pfVar39[2] = fVar8;
              fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
              pfVar39[3] = fVar9;
              pfVar32[2] = fVar9;
              fVar8 = pfVar32[3];
              fVar9 = pfVar39[4];
              pfVar39[4] = fVar8;
              fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
              pfVar39[5] = fVar9;
              pfVar32[3] = fVar9;
              fVar8 = pfVar32[4];
              fVar9 = pfVar39[6];
              pfVar39[6] = fVar8;
              fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
              pfVar39[7] = fVar9;
              pfVar32[4] = fVar9;
              pfVar32 = pfVar32 + 4;
              pfVar39 = pfVar39 + 8;
            } while ((uVar44 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
          }
          if ((uVar44 & 0xffffffff) < (uVar42 & 0xffffffff)) {
            lVar41 = uVar42 - uVar44;
            do {
              fVar8 = pfVar32[1];
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32 = pfVar32 + 1;
              *pfVar32 = fVar9;
              pfVar39 = pfVar39 + 2;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
          }
          if (pfVar43 <= pfVar39) {
            pfVar39 = *(float **)(iVar28 + 0xec);
          }
          uVar19 = uVar19 + uVar42;
          uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
          if ((uVar36 - uVar19 & 0xffffffff) <= uVar42) {
            uVar42 = uVar36 - uVar19;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      uVar42 = 0;
      pfVar43 = pfVar38;
      if (3 < (int)uVar19) {
        do {
          fVar8 = *pfVar43;
          uVar42 = uVar42 + 4;
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          *pfVar43 = fVar9;
          fVar8 = (pfVar43[1] - pfVar39[3]) * fVar5 + pfVar39[2];
          pfVar39[2] = pfVar43[1];
          pfVar39[3] = fVar8;
          pfVar43[1] = fVar8;
          fVar8 = pfVar43[2];
          fVar9 = pfVar39[4];
          pfVar39[4] = fVar8;
          fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
          pfVar39[5] = fVar9;
          pfVar43[2] = fVar9;
          fVar8 = pfVar39[6];
          fVar9 = pfVar43[3];
          pfVar39[6] = fVar9;
          fVar8 = (fVar9 - pfVar39[7]) * fVar5 + fVar8;
          pfVar39[7] = fVar8;
          pfVar43[3] = fVar8;
          pfVar43 = pfVar43 + 4;
          pfVar39 = pfVar39 + 8;
        } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
      }
      if ((uVar42 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        lVar41 = uVar19 - uVar42;
        pfVar43 = pfVar43 + -1;
        do {
          fVar8 = pfVar43[1];
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          pfVar43 = pfVar43 + 1;
          *pfVar43 = fVar9;
          pfVar39 = pfVar39 + 2;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    *(float **)(iVar28 + 0x10c) = pfVar39;
    pfVar43 = *(float **)(iVar28 + 0x100);
    pfVar39 = *(float **)(iVar28 + 0x110);
    uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
    uVar19 = uVar36;
    if ((uVar42 < (uVar36 & 0xffffffff)) && (uVar19 = uVar42, uVar42 != (uVar36 & 0xffffffff))) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        pfVar32 = pfVar38 + -1;
        do {
          uVar44 = 0;
          if (3 < (int)uVar42) {
            do {
              fVar8 = pfVar32[1];
              uVar44 = uVar44 + 4;
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32[1] = fVar9;
              fVar8 = pfVar32[2];
              fVar9 = pfVar39[2];
              pfVar39[2] = fVar8;
              fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
              pfVar39[3] = fVar9;
              pfVar32[2] = fVar9;
              fVar8 = pfVar32[3];
              fVar9 = pfVar39[4];
              pfVar39[4] = fVar8;
              fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
              pfVar39[5] = fVar9;
              pfVar32[3] = fVar9;
              fVar8 = pfVar32[4];
              fVar9 = pfVar39[6];
              pfVar39[6] = fVar8;
              fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
              pfVar39[7] = fVar9;
              pfVar32[4] = fVar9;
              pfVar32 = pfVar32 + 4;
              pfVar39 = pfVar39 + 8;
            } while ((uVar44 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
          }
          if ((uVar44 & 0xffffffff) < (uVar42 & 0xffffffff)) {
            lVar41 = uVar42 - uVar44;
            do {
              fVar8 = pfVar32[1];
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar32 = pfVar32 + 1;
              *pfVar32 = fVar9;
              pfVar39 = pfVar39 + 2;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
          }
          if (pfVar43 <= pfVar39) {
            pfVar39 = *(float **)(iVar28 + 0xf0);
          }
          uVar19 = uVar19 + uVar42;
          uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
          if ((uVar36 - uVar19 & 0xffffffff) <= uVar42) {
            uVar42 = uVar36 - uVar19;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      uVar42 = 0;
      pfVar43 = pfVar38;
      if (3 < (int)uVar19) {
        do {
          fVar8 = *pfVar43;
          uVar42 = uVar42 + 4;
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          *pfVar43 = fVar9;
          fVar8 = pfVar43[1];
          fVar9 = pfVar39[2];
          pfVar39[2] = fVar8;
          fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
          pfVar39[3] = fVar9;
          pfVar43[1] = fVar9;
          fVar8 = pfVar43[2];
          fVar9 = pfVar39[4];
          pfVar39[4] = fVar8;
          fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
          pfVar39[5] = fVar9;
          pfVar43[2] = fVar9;
          fVar8 = pfVar43[3];
          fVar9 = pfVar39[6];
          pfVar39[6] = fVar8;
          fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
          pfVar39[7] = fVar9;
          pfVar43[3] = fVar9;
          pfVar43 = pfVar43 + 4;
          pfVar39 = pfVar39 + 8;
        } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
      }
      if ((uVar42 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        lVar41 = uVar19 - uVar42;
        pfVar43 = pfVar43 + -1;
        do {
          fVar8 = pfVar43[1];
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          pfVar43 = pfVar43 + 1;
          *pfVar43 = fVar9;
          pfVar39 = pfVar39 + 2;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    *(float **)(iVar28 + 0x110) = pfVar39;
    pfVar43 = *(float **)(iVar28 + 0x104);
    pfVar39 = *(float **)(iVar28 + 0x114);
    uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
    uVar19 = uVar36;
    if ((uVar42 < (uVar36 & 0xffffffff)) && (uVar19 = uVar42, uVar42 != (uVar36 & 0xffffffff))) {
      uVar19 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        pfVar38 = pfVar38 + -1;
        do {
          uVar44 = 0;
          if (3 < (int)uVar42) {
            do {
              fVar8 = pfVar38[1];
              uVar44 = uVar44 + 4;
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar38[1] = fVar9;
              fVar8 = pfVar38[2];
              fVar9 = pfVar39[2];
              pfVar39[2] = fVar8;
              fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
              pfVar39[3] = fVar9;
              pfVar38[2] = fVar9;
              fVar8 = pfVar38[3];
              fVar9 = pfVar39[4];
              pfVar39[4] = fVar8;
              fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
              pfVar39[5] = fVar9;
              pfVar38[3] = fVar9;
              fVar8 = pfVar38[4];
              fVar9 = pfVar39[6];
              pfVar39[6] = fVar8;
              fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
              pfVar39[7] = fVar9;
              pfVar38[4] = fVar9;
              pfVar38 = pfVar38 + 4;
              pfVar39 = pfVar39 + 8;
            } while ((uVar44 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
          }
          if ((uVar44 & 0xffffffff) < (uVar42 & 0xffffffff)) {
            lVar41 = uVar42 - uVar44;
            do {
              fVar8 = pfVar38[1];
              fVar9 = *pfVar39;
              *pfVar39 = fVar8;
              fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
              pfVar39[1] = fVar9;
              pfVar38 = pfVar38 + 1;
              *pfVar38 = fVar9;
              pfVar39 = pfVar39 + 2;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
          }
          if (pfVar43 <= pfVar39) {
            pfVar39 = *(float **)(iVar28 + 0xf4);
          }
          uVar19 = uVar19 + uVar42;
          uVar42 = (unsigned __int64)((unsigned int)((int)pfVar43 - (int)pfVar39 >> 2) >> 1);
          if ((uVar36 - uVar19 & 0xffffffff) <= uVar42) {
            uVar42 = uVar36 - uVar19;
          }
        } while ((uVar19 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
    }
    else {
      uVar42 = 0;
      if (3 < (int)uVar19) {
        do {
          fVar8 = *pfVar38;
          uVar42 = uVar42 + 4;
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          *pfVar38 = fVar9;
          fVar8 = pfVar38[1];
          fVar9 = pfVar39[2];
          pfVar39[2] = fVar8;
          fVar9 = (fVar8 - pfVar39[3]) * fVar5 + fVar9;
          pfVar39[3] = fVar9;
          pfVar38[1] = fVar9;
          fVar8 = pfVar38[2];
          fVar9 = pfVar39[4];
          pfVar39[4] = fVar8;
          fVar9 = (fVar8 - pfVar39[5]) * fVar5 + fVar9;
          pfVar39[5] = fVar9;
          pfVar38[2] = fVar9;
          fVar8 = pfVar38[3];
          fVar9 = pfVar39[6];
          pfVar39[6] = fVar8;
          fVar9 = (fVar8 - pfVar39[7]) * fVar5 + fVar9;
          pfVar39[7] = fVar9;
          pfVar38[3] = fVar9;
          pfVar38 = pfVar38 + 4;
          pfVar39 = pfVar39 + 8;
        } while ((uVar42 & 0xffffffff) < (uVar19 - 3 & 0xffffffff));
      }
      if ((uVar42 & 0xffffffff) < (uVar19 & 0xffffffff)) {
        lVar41 = uVar19 - uVar42;
        pfVar38 = pfVar38 + -1;
        do {
          fVar8 = pfVar38[1];
          fVar9 = *pfVar39;
          *pfVar39 = fVar8;
          fVar9 = (fVar8 - pfVar39[1]) * fVar5 + fVar9;
          pfVar39[1] = fVar9;
          pfVar38 = pfVar38 + 1;
          *pfVar38 = fVar9;
          pfVar39 = pfVar39 + 2;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
      }
    }
    *(float **)(iVar28 + 0x114) = pfVar39;
    if (*(unsigned int *)(param_1 + 0xf4) < *(unsigned int *)(param_1 + 0xf8)) {
      *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xf0);
      *(unsigned int *)(param_1 + 0xf4) = *(unsigned int *)(param_1 + 0xf4) + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0xf0) = *(unsigned int *)(param_1 + 0xec);
    }
    fVar8 = *(float *)(param_1 + 0xf0);
    if (fVar8 != *(float *)(param_1 + 100)) {
      uVar22 = 0;
      if (*(int *)(param_1 + 0x104) != 0) {
        iVar28 = 0;
        do {
          fVar9 = lbl_8217BA98;
          puVar17 = (unsigned int *)(*(int *)(param_1 + 0x10) + iVar28);
          if ((float)*puVar17 * fVar2 <= fVar8) {
            puVar17[2] = (unsigned int)fVar1;
            puVar17[3] = (unsigned int)(float)dVar47;
          }
          else {
            fVar10 = fVar1 - (fVar8 * fVar3) / (float)*puVar17;
            fVar10 = fVar10 * fVar10;
            puVar17[3] = (unsigned int)fVar10;
            fVar10 = fVar1 - fVar10;
            puVar17[2] = (unsigned int)fVar10;
            puVar17[2] = (unsigned int)((fVar10 + fVar9) - fVar9);
            puVar17[3] = (unsigned int)(((float)puVar17[3] + fVar9) - fVar9);
          }
          uVar22 = uVar22 + 1;
          iVar28 = iVar28 + 0x10;
        } while (uVar22 < *(unsigned int *)(param_1 + 0x104));
      }
      *(float *)(param_1 + 100) = fVar8;
    }
    iVar28 = *(int *)(param_1 + 0x10);
    lVar41 = (uVar36 & 0x3fffffff) * 4;
    uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
    uVar42 = uVar19 + lVar41;
    fVar8 = *(float *)(iVar28 + 8);
    fVar9 = *(float *)(iVar28 + 0xc);
    fVar10 = *(float *)(iVar28 + 4);
    if (uVar19 < (uVar42 & 0xffffffff)) {
      uVar22 = ((int)uVar42 - *(unsigned int *)(param_1 + 0x38)) + 3;
      if (3 < (int)(((int)uVar22 >> 2) + (unsigned int)((int)uVar22 < 0 && (uVar22 & 3) != 0))) {
        do {
          pfVar38 = (float *)uVar19;
          fVar10 = fVar8 * *pfVar38 + fVar9 * fVar10;
          *pfVar38 = fVar10;
          fVar10 = pfVar38[1] * fVar8 + fVar10 * fVar9;
          pfVar38[1] = fVar10;
          fVar10 = pfVar38[2] * fVar8 + fVar10 * fVar9;
          pfVar38[2] = fVar10;
          fVar10 = pfVar38[3] * fVar8 + fVar10 * fVar9;
          pfVar38[3] = fVar10;
          uVar19 = uVar19 + 0x10;
        } while ((int)uVar19 < (int)uVar42 + -0xc);
      }
      if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
        lVar35 = uVar19 - 4;
        lVar24 = (((uVar42 - uVar19) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar10 = fVar8 * *(float *)((int)lVar35 + 4) + fVar9 * fVar10;
          lVar35 = lVar35 + 4;
          *(float *)lVar35 = fVar10;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    *(float *)(iVar28 + 4) = fVar10;
    iVar28 = *(int *)(param_1 + 0x10);
    uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
    uVar42 = uVar19 + lVar41;
    fVar8 = *(float *)(iVar28 + 0x18);
    fVar9 = *(float *)(iVar28 + 0x1c);
    fVar10 = *(float *)(iVar28 + 0x14);
    if (uVar19 < (uVar42 & 0xffffffff)) {
      uVar22 = ((int)uVar42 - *(unsigned int *)(param_1 + 0x38)) + 3;
      if (3 < (int)(((int)uVar22 >> 2) + (unsigned int)((int)uVar22 < 0 && (uVar22 & 3) != 0))) {
        do {
          pfVar38 = (float *)uVar19;
          fVar10 = fVar8 * *pfVar38 + fVar9 * fVar10;
          *pfVar38 = fVar10;
          fVar10 = pfVar38[1] * fVar8 + fVar10 * fVar9;
          pfVar38[1] = fVar10;
          fVar10 = pfVar38[2] * fVar8 + fVar10 * fVar9;
          pfVar38[2] = fVar10;
          fVar10 = pfVar38[3] * fVar8 + fVar10 * fVar9;
          pfVar38[3] = fVar10;
          uVar19 = uVar19 + 0x10;
        } while ((int)uVar19 < (int)uVar42 + -0xc);
      }
      if ((uVar19 & 0xffffffff) < (uVar42 & 0xffffffff)) {
        lVar41 = uVar19 - 4;
        lVar35 = (((uVar42 - uVar19) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar10 = fVar8 * *(float *)((int)lVar41 + 4) + fVar9 * fVar10;
          lVar41 = lVar41 + 4;
          *(float *)lVar41 = fVar10;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
      }
    }
    *(float *)(iVar28 + 0x14) = fVar10;
    if (*(unsigned int *)(param_1 + 0x7c) < *(unsigned int *)(param_1 + 0x80)) {
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x78);
      *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x7c) + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x74);
    }
    fVar8 = *(float *)(param_1 + 0x78);
    if (*(unsigned int *)(param_1 + 0x94) < *(unsigned int *)(param_1 + 0x98)) {
      *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x90);
      *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x94) + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(param_1 + 0x8c);
    }
    if (*(unsigned int *)(param_1 + 0xc4) < *(unsigned int *)(param_1 + 200)) {
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xc0);
      *(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)(param_1 + 0xc4) + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0xc0) = *(unsigned int *)(param_1 + 0xbc);
    }
    fVar9 = *(float *)(param_1 + 0xc0);
    if (*(unsigned int *)(param_1 + 0xac) < *(unsigned int *)(param_1 + 0xb0)) {
      *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa8);
      *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(param_1 + 0xac) + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)(param_1 + 0xa4);
    }
    fVar10 = *(float *)(param_1 + 0xa8);
    pfVar38 = *(float **)(param_1 + 0x30);
    iVar28 = *(int *)(param_1 + 0x38);
    uVar42 = uVar15 - 0x10c;
    uVar19 = (uVar36 & 0xffffffff) >> 2;
    altv300_21(in_vs32,in_vs38);
    altv300_21(in_vs32,in_vs37);
    uVar36 = uVar36 - (uVar36 & 0xfffffffc);
    fVar11 = (fVar4 - *(float *)(param_1 + 0x90)) * fVar6;
    altv300_21(in_vs32,in_vs36);
    altv300_21(in_vs32,in_vs39);
    altv300_21(in_vs32,in_vs35);
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      altv207_13(in_vs32,in_vs43);
      pfVar38 = pfVar38 + 4;
      altv207_13(in_vs32,in_vs56);
      pfVar43 = (float *)(in_r0 + iVar28 & 0xfffffff0);
      fVar49 = pfVar43[1];
      fVar50 = pfVar43[2];
      fVar51 = pfVar43[3];
      iVar28 = iVar28 + 0x10;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs43,in_vs45); memcpy(auVar48, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(auVar48,in_vs42,in_vs44); memcpy(in_vs32, &_vt1, 16); }
      pfVar39 = (float *)(in_r0 + (int)uVar20 & 0xfffffff0);
      *pfVar39 = *pfVar43 * in_register_000103f0;
      pfVar39[1] = fVar49 * in_register_000103f0;
      pfVar39[2] = fVar50 * in_register_000103f0;
      pfVar39[3] = fVar51 * in_register_000103f0;
      uVar20 = uVar20 + 0x10;
    }
    if ((uVar36 & 0xffffffff) != 0) {
      iVar28 = iVar28 - (int)pfVar38;
      do {
        fVar49 = *pfVar38;
        pfVar43 = (float *)((int)pfVar38 + iVar28);
        pfVar38 = pfVar38 + 1;
        *(float *)uVar20 =
             ((*pfVar43 * fVar10 + fVar49 * fVar9) * (fVar1 - fVar11) + *(float *)uVar20 * fVar11) *
             fVar8;
        uVar20 = uVar20 + 4;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
  }
  uVar22 = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar28 = 0;
    do {
      uVar22 = uVar22 + 1;
      iVar40 = iVar28 + *(int *)(param_1 + 0x10);
      iVar28 = iVar28 + 0x10;
      *(float *)(iVar40 + 4) = (*(float *)(iVar40 + 4) + lbl_8217BA98) - lbl_8217BA98;
    } while (uVar22 < *(unsigned int *)(param_1 + 0x104));
  }
  *(float *)(param_1 + 0x1c) = (*(float *)(param_1 + 0x1c) + lbl_8217BA98) - lbl_8217BA98;
  *(short *)((int)puStack0000001c + 0xe) = (short)uVar29;
  *(bool *)(param_1 + 0x110) = uVar12 == 0x11;
  return uVar42;
}

