typedef unsigned char bool;
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82FC8FD0();
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216E490;
extern unsigned int lbl_8216E7E0;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642D0;
extern unsigned int uStack_ca;


void fn_82FDDD60(unsigned __int64 param_1,unsigned int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float *pfVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  float fVar17;
  unsigned __int64 in_r0;
  int iVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned int *puVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  __int64 lVar25;
  unsigned int uVar26;
  float *pfVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  unsigned int uVar32;
  float *pfVar33;
  unsigned __int64 uVar31;
  unsigned __int64 uVar34;
  __int64 lVar35;
  unsigned __int64 uVar36;
  __int64 lVar37;
  float *pfVar39;
  unsigned __int64 uVar38;
  __int64 lVar40;
  int iVar41;
  __int64 lVar42;
  int iVar43;
  __int64 lVar44;
  int iVar45;
  __int64 lVar46;
  int iVar47;
  __int64 lVar48;
  int iVar49;
  unsigned __int64 uVar50;
  unsigned __int64 uVar51;
  __int64 lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs54 [16];
  float in_register_00010310;
  float in_register_00010314;
  float in_register_00010318;
  float in_vr49;
  float in_register_00010320;
  float in_register_00010380;
  float in_register_00010384;
  float in_register_00010388;
  float in_vr56;
  float in_register_00010390;
  float in_register_00010394;
  float in_register_00010398;
  float in_vr57;
  float in_register_000103a0;
  float in_register_000103a4;
  float in_register_000103a8;
  float in_vr58;
  float in_register_000103b0;
  float in_register_000103b4;
  float in_register_000103b8;
  float in_vr59;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  unsigned short uStack_ca;
  
  iVar18 = fn_82F6A548();
  uVar34 = (unsigned __int64)*(unsigned short *)(param_2 + 3);
  uVar28 = (unsigned __int64)*param_2;
  uVar10 = *(unsigned int *)(iVar18 + 0x144);
  uVar50 = (unsigned __int64)uVar10;
  uVar11 = *(unsigned int *)(iVar18 + 0x148);
  uVar51 = (unsigned __int64)uVar11;
  lVar52 = 8;
  puVar22 = (unsigned int *)(iVar18 + 0x5c);
  lVar48 = uVar34 * 4 + uVar28;
  lVar46 = uVar34 * 8 + uVar28;
  lVar44 = uVar34 * 0xc + uVar28;
  lVar42 = uVar34 * 0x10 + uVar28;
  lVar40 = uVar34 * 0x14 + uVar28;
  uVar34 = ((unsigned __int64)*(unsigned int *)(iVar18 + 0xc) & 0x3fffffff) << 2;
  do {
    uVar20 = (unsigned __int64)*puVar22;
    uVar23 = uVar34;
    if (0x3ff < uVar34) {
      uVar23 = 0x400;
    }
    uVar29 = puVar22[-8] - uVar20;
    if (uVar23 <= (uVar29 & 0xffffffff)) {
      uVar29 = uVar23;
    }
    lVar35 = 0;
    if ((uVar29 & 0xffffffff) != 0) {
      lVar24 = ((uVar29 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar35 + uVar20);
        lVar35 = lVar35 + 0x80;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    if ((uVar29 & 0xffffffff) < uVar23) {
      uVar36 = (unsigned __int64)puVar22[-8] - (unsigned __int64)puVar22[-0x10];
      if ((uVar23 - uVar29 & 0xffffffff) <= (uVar36 & 0xffffffff)) {
        uVar36 = uVar23 - uVar29;
      }
      lVar35 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        lVar24 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar35 + uVar20);
          lVar35 = lVar35 + 0x80;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    lVar52 = lVar52 + -1;
    puVar22 = puVar22 + 1;
  } while (lVar52 != 0);
  puVar22 = (unsigned int *)(iVar18 + 0x114);
  lVar52 = 4;
  uVar34 = ((unsigned __int64)*(unsigned int *)(iVar18 + 0xc) & 0x1fffffff) << 3;
  do {
    uVar20 = (unsigned __int64)*puVar22;
    uVar23 = uVar34;
    if (0x3ff < uVar34) {
      uVar23 = 0x400;
    }
    uVar29 = puVar22[-4] - uVar20;
    if (uVar23 <= (uVar29 & 0xffffffff)) {
      uVar29 = uVar23;
    }
    lVar35 = 0;
    if ((uVar29 & 0xffffffff) != 0) {
      lVar24 = ((uVar29 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar35 + uVar20);
        lVar35 = lVar35 + 0x80;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    if ((uVar29 & 0xffffffff) < uVar23) {
      uVar36 = (unsigned __int64)puVar22[-4] - (unsigned __int64)puVar22[-8];
      if ((uVar23 - uVar29 & 0xffffffff) <= (uVar36 & 0xffffffff)) {
        uVar36 = uVar23 - uVar29;
      }
      lVar35 = 0;
      if ((uVar36 & 0xffffffff) != 0) {
        lVar24 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar35 + uVar20);
          lVar35 = lVar35 + 0x80;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    lVar52 = lVar52 + -1;
    puVar22 = puVar22 + 1;
  } while (lVar52 != 0);
  fVar1 = *(float *)(iVar18 + 0x158);
  fVar2 = *(float *)(*(int *)(iVar18 + 8) + 0x10);
  *(unsigned int *)(iVar18 + 0x168) = 0;
  fVar4 = lbl_821AAD20;
  fVar3 = fVar2 - *(float *)(iVar18 + 0x164);
  *(float *)(iVar18 + 0x160) = fVar2;
  *(int *)(iVar18 + 0x16c) = (int)(__int64)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar18 + 0x15c) = fVar1;
  fVar1 = *(float *)(*(int *)(iVar18 + 8) + 4);
  fVar3 = fVar1 - *(float *)(iVar18 + 0x17c);
  fVar2 = *(float *)(iVar18 + 0x170);
  *(float *)(iVar18 + 0x178) = fVar1;
  *(unsigned int *)(iVar18 + 0x180) = 0;
  *(int *)(iVar18 + 0x184) = (int)(__int64)(ABS(fVar3) / fVar2);
  if (fVar3 <= fVar4) {
    fVar2 = -fVar2;
  }
  *(float *)(iVar18 + 0x174) = fVar2;
  fVar1 = *(float *)(iVar18 + 0x188);
  fVar2 = *(float *)(*(int *)(iVar18 + 8) + 0xc);
  *(unsigned int *)(iVar18 + 0x198) = 0;
  fVar3 = fVar2 - *(float *)(iVar18 + 0x194);
  *(float *)(iVar18 + 400) = fVar2;
  *(int *)(iVar18 + 0x19c) = (int)(__int64)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar18 + 0x18c) = fVar1;
  uVar12 = param_2[2];
  uStack_ca = *(unsigned short *)((int)param_2 + 0xe);
  uVar34 = (unsigned __int64)uStack_ca;
  if (uVar12 == 0x11) {
    fVar1 = *(float *)(*(int *)(iVar18 + 8) + 8);
    if ((fVar1 != *(float *)(iVar18 + 0x1a4)) || (*(char *)(iVar18 + 0x1a8) == '\0')) {
      *(float *)(iVar18 + 0x1a4) = fVar1;
      *(int *)(iVar18 + 0x1a0) = (int)(__int64)((float)*(unsigned int *)(iVar18 + 0x14c) * fVar1);
    }
    uVar23 = (unsigned __int64)*(unsigned int *)(iVar18 + 0x1a0);
    if ((*(unsigned short *)(param_2 + 3) - uVar34 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(iVar18 + 0x1a0)) {
      uVar23 = *(unsigned short *)(param_2 + 3) - uVar34;
    }
    lVar35 = (uVar23 & 0x3fffffff) << 2;
    lVar52 = uVar34 * 4;
    fn_82A1EFC0(lVar52 + uVar28,0,lVar35);
    fn_82A1EFC0(lVar52 + lVar48,0,lVar35);
    fn_82A1EFC0(lVar52 + lVar46,0,lVar35);
    fn_82A1EFC0(lVar52 + lVar44,0,lVar35);
    fn_82A1EFC0(lVar52 + lVar42,0,lVar35);
    fn_82A1EFC0(lVar52 + lVar40,0,lVar35);
    uVar34 = uVar23 + uVar34;
    lVar52 = *(unsigned int *)(iVar18 + 0x1a0) - uVar23;
    uStack_ca = (unsigned short)uVar34;
    *(int *)(iVar18 + 0x1a0) = (int)lVar52;
    if (lVar52 != 0) {
      param_2[2] = 0x2d;
    }
  }
  if ((uVar34 & 0xffffffff) != 0) {
    dVar54 = (double)lbl_8216E7E0;
    dVar55 = (double)lbl_82057B54;
    dVar53 = (double)lbl_8216E490;
    do {
      iVar49 = (int)uVar28;
      iVar47 = (int)lVar46;
      iVar45 = (int)lVar44;
      iVar43 = (int)lVar42;
      iVar41 = (int)lVar40;
      uVar23 = uVar34;
      if (0x1f < (uVar34 & 0xffffffff)) {
        uVar23 = 0x20;
      }
      uVar20 = (uVar23 & 0xffffffff) >> 2;
      altv207_13(in_vs32,in_vs54);
      pfVar39 = (float *)((unsigned int)(&lbl_832642D0 + (int)in_r0) & 0xfffffff0);
      *pfVar39 = in_register_000103f0;
      pfVar39[1] = in_register_000103f4;
      pfVar39[2] = in_register_000103f8;
      pfVar39[3] = in_vr63;
      uVar34 = uVar34 - uVar23;
      uVar21 = uVar23 - (uVar23 & 0xfffffffc);
      uVar26 = uVar10;
      uVar29 = uVar50;
      lVar52 = lVar40;
      lVar35 = lVar42;
      lVar24 = lVar44;
      lVar25 = lVar46;
      lVar37 = lVar48;
      uVar30 = uVar28;
      for (uVar36 = uVar20; uVar36 != 0; uVar36 = uVar36 - 1) {
        altv207_13(in_vs32,in_vs42);
        uVar30 = uVar30 + 0x10;
        iVar49 = (int)uVar30;
        altv207_13(in_vs32,in_vs43);
        lVar37 = lVar37 + 0x10;
        altv207_13(in_vs32,in_vs41);
        altv207_13(in_vs32,in_vs40);
        lVar25 = lVar25 + 0x10;
        iVar47 = (int)lVar25;
        altv207_13(in_vs32,in_vs39);
        lVar24 = lVar24 + 0x10;
        iVar45 = (int)lVar24;
        altv207_13(in_vs32,in_vs38);
        lVar35 = lVar35 + 0x10;
        iVar43 = (int)lVar35;
        lVar52 = lVar52 + 0x10;
        iVar41 = (int)lVar52;
        pfVar39 = (float *)((int)in_r0 + (int)uVar29 & 0xfffffff0);
        *pfVar39 = (in_register_00010380 +
                   in_register_00010390 +
                   in_register_000103a0 +
                   in_register_000103b0 + in_register_000103d0 + in_register_000103e0) *
                   in_register_000103f0;
        pfVar39[1] = (in_register_00010384 +
                     in_register_00010394 +
                     in_register_000103a4 +
                     in_register_000103b4 + in_register_000103d4 + in_register_000103e4) *
                     in_register_000103f4;
        pfVar39[2] = (in_register_00010388 +
                     in_register_00010398 +
                     in_register_000103a8 +
                     in_register_000103b8 + in_register_000103d8 + in_register_000103e8) *
                     in_register_000103f8;
        pfVar39[3] = (in_vr56 + in_vr57 + in_vr58 + in_vr59 + in_vr61 + in_vr62) * in_vr63;
        uVar29 = uVar29 + 0x10;
        uVar26 = (unsigned int)uVar29;
      }
      if ((uVar21 & 0xffffffff) != 0) {
        iVar16 = (int)lVar37;
        do {
          pfVar39 = (float *)lVar37;
          *(float *)((uVar26 - iVar16) + (int)pfVar39) =
               (float)((double)(*(float *)((iVar41 - iVar16) + (int)pfVar39) +
                                *(float *)((iVar43 - iVar16) + (int)pfVar39) +
                                *(float *)((iVar45 - iVar16) + (int)pfVar39) +
                                *(float *)((iVar47 - iVar16) + (int)pfVar39) +
                                *(float *)((iVar49 - iVar16) + (int)pfVar39) + *pfVar39) * dVar53);
          lVar37 = lVar37 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      lVar52 = (uVar23 & 0x3fffffff) * 4;
      fVar1 = *(float *)(iVar18 + 0x138);
      fVar2 = *(float *)(iVar18 + 0x13c);
      uVar29 = lVar52 + uVar50;
      fVar3 = *(float *)(iVar18 + 0x140);
      if (uVar50 < (uVar29 & 0xffffffff)) {
        uVar26 = ((int)uVar29 - uVar10) + 3;
        uVar36 = uVar50;
        if (3 < (int)(((int)uVar26 >> 2) + (unsigned int)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
          do {
            pfVar39 = (float *)uVar36;
            fVar4 = *pfVar39;
            fVar7 = fVar4 - fVar1;
            fVar5 = pfVar39[1];
            fVar6 = pfVar39[2];
            fVar1 = pfVar39[3];
            fVar7 = fVar3 * fVar2 + fVar7;
            *pfVar39 = fVar7;
            fVar2 = fVar3 * fVar7 + (fVar5 - fVar4);
            pfVar39[1] = fVar2;
            fVar2 = fVar3 * fVar2 + (fVar6 - fVar5);
            pfVar39[2] = fVar2;
            fVar2 = fVar3 * fVar2 + (fVar1 - fVar6);
            pfVar39[3] = fVar2;
            uVar36 = uVar36 + 0x10;
          } while ((int)uVar36 < (int)uVar29 + -0xc);
        }
        if ((uVar36 & 0xffffffff) < (uVar29 & 0xffffffff)) {
          lVar35 = uVar36 - 4;
          lVar24 = (((uVar29 - uVar36) - 1 & 0xffffffff) >> 2) + 1;
          fVar4 = fVar1;
          do {
            fVar1 = *(float *)((int)lVar35 + 4);
            fVar2 = fVar3 * fVar2 + (fVar1 - fVar4);
            lVar35 = lVar35 + 4;
            *(float *)lVar35 = fVar2;
            lVar24 = lVar24 + -1;
            fVar4 = fVar1;
          } while (lVar24 != 0);
        }
      }
      *(float *)(iVar18 + 0x138) = fVar1;
      *(float *)(iVar18 + 0x13c) = fVar2;
      bVar15 = (int)uVar34 != 0;
      if (bVar15) {
        puVar22 = (unsigned int *)(iVar18 + 0x3c);
        lVar35 = 8;
        uVar29 = ((unsigned __int64)*(unsigned int *)(iVar18 + 0x10) & 0x3fffffff) * 4;
        do {
          uVar30 = (unsigned __int64)*puVar22;
          uVar36 = puVar22[8] + uVar29;
          if (uVar30 <= (uVar36 & 0xffffffff)) {
            uVar36 = (unsigned __int64)puVar22[-8];
          }
          uVar21 = uVar29;
          if (0x3ff < uVar29) {
            uVar21 = 0x400;
          }
          uVar31 = uVar30 - uVar36;
          if (uVar21 <= (uVar30 - uVar36 & 0xffffffff)) {
            uVar31 = uVar21;
          }
          lVar24 = 0;
          if ((uVar31 & 0xffffffff) != 0) {
            lVar25 = ((uVar31 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar24 + uVar36);
              lVar24 = lVar24 + 0x80;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if ((uVar31 & 0xffffffff) < uVar21) {
            uVar38 = uVar30 - puVar22[-8];
            if ((uVar21 - uVar31 & 0xffffffff) <= (uVar30 - puVar22[-8] & 0xffffffff)) {
              uVar38 = uVar21 - uVar31;
            }
            lVar24 = 0;
            if ((uVar38 & 0xffffffff) != 0) {
              lVar25 = ((uVar38 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar24 + uVar36);
                lVar24 = lVar24 + 0x80;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
          }
          lVar35 = lVar35 + -1;
          puVar22 = puVar22 + 1;
        } while (lVar35 != 0);
      }
      pfVar39 = *(float **)(iVar18 + 0x5c);
      fVar1 = *(float *)(iVar18 + 0x9c);
      pfVar33 = *(float **)(iVar18 + 0x3c);
      fVar2 = *(float *)(iVar18 + 0xbc);
      uVar26 = (int)pfVar33 - (int)pfVar39 >> 2;
      uVar36 = (unsigned __int64)(int)uVar26;
      uVar29 = uVar23;
      if (((unsigned __int64)uVar26 < (uVar23 & 0xffffffff)) &&
         (uVar29 = uVar36, (unsigned __int64)uVar26 != (uVar23 & 0xffffffff))) {
        uVar21 = 0;
        uVar29 = uVar50;
        uVar30 = uVar51;
        if (3 < (int)uVar26) {
          do {
            pfVar13 = (float *)uVar30;
            pfVar27 = (float *)uVar29;
            fVar3 = pfVar27[2];
            fVar4 = pfVar27[3];
            fVar5 = pfVar39[2];
            uVar21 = uVar21 + 4;
            fVar6 = pfVar39[3];
            uVar29 = uVar29 + 0x10;
            fVar7 = *(float *)((int)pfVar13 + (uVar10 - uVar11) + 4);
            fVar8 = fVar1 * *pfVar27 + *pfVar39 * fVar2;
            *pfVar39 = fVar8;
            fVar7 = fVar7 * fVar1 + pfVar39[1] * fVar2;
            *pfVar13 = fVar8;
            fVar5 = fVar5 * fVar2 + fVar3 * fVar1;
            pfVar39[1] = fVar7;
            fVar3 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar13[1] = fVar7;
            pfVar39[2] = fVar5;
            pfVar13[2] = fVar5;
            pfVar39[3] = fVar3;
            pfVar39 = pfVar39 + 4;
            pfVar13[3] = fVar3;
            uVar30 = uVar30 + 0x10;
          } while ((uVar21 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
        }
        if ((uVar21 & 0xffffffff) < (unsigned __int64)uVar26) {
          lVar35 = uVar36 - uVar21;
          do {
            pfVar27 = (float *)uVar29;
            uVar29 = uVar29 + 4;
            fVar3 = fVar1 * *pfVar27 + *pfVar39 * fVar2;
            *pfVar39 = fVar3;
            *(float *)uVar30 = fVar3;
            uVar30 = uVar30 + 4;
            pfVar39 = pfVar39 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
        iVar41 = (int)uVar29;
        if (pfVar33 <= pfVar39) {
          pfVar39 = *(float **)(iVar18 + 0x1c);
        }
        uVar26 = (int)pfVar33 - (int)pfVar39 >> 2;
        uVar21 = (__int64)(int)uVar26;
        if ((uVar23 - uVar36 & 0xffffffff) <= (unsigned __int64)uVar26) {
          uVar21 = uVar23 - uVar36;
        }
        uVar36 = 0;
        if (3 < (int)uVar21) {
          do {
            uVar36 = uVar36 + 4;
            pfVar33 = (float *)uVar29;
            fVar3 = pfVar33[1];
            fVar4 = pfVar33[2];
            fVar5 = pfVar33[3];
            fVar6 = pfVar39[2];
            uVar29 = uVar29 + 0x10;
            iVar41 = (int)uVar29;
            fVar7 = pfVar39[3];
            fVar8 = fVar1 * *pfVar33 + *pfVar39 * fVar2;
            *pfVar39 = fVar8;
            fVar9 = pfVar39[1] * fVar2 + fVar3 * fVar1;
            pfVar33 = (float *)uVar30;
            *pfVar33 = fVar8;
            fVar4 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar39[1] = fVar9;
            fVar3 = fVar7 * fVar2 + fVar5 * fVar1;
            pfVar33[1] = fVar9;
            pfVar39[2] = fVar4;
            pfVar33[2] = fVar4;
            pfVar39[3] = fVar3;
            pfVar39 = pfVar39 + 4;
            pfVar33[3] = fVar3;
            uVar30 = uVar30 + 0x10;
          } while ((uVar36 & 0xffffffff) < (uVar21 - 3 & 0xffffffff));
        }
        if ((uVar36 & 0xffffffff) < (uVar21 & 0xffffffff)) {
          lVar35 = uVar21 - uVar36;
          iVar43 = (int)uVar30;
          do {
            fVar3 = *(float *)((iVar41 - iVar43) + (int)(float *)uVar30) * fVar1 + *pfVar39 * fVar2;
            *pfVar39 = fVar3;
            *(float *)uVar30 = fVar3;
            uVar30 = uVar30 + 4;
            pfVar39 = pfVar39 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      else {
        uVar36 = 0;
        uVar26 = uVar10;
        uVar32 = uVar11;
        if (3 < (int)uVar29) {
          uVar30 = uVar50;
          uVar21 = uVar51;
          do {
            pfVar27 = (float *)uVar21;
            pfVar33 = (float *)uVar30;
            fVar3 = pfVar33[2];
            fVar4 = pfVar33[3];
            fVar5 = pfVar39[2];
            uVar36 = uVar36 + 4;
            fVar6 = pfVar39[3];
            uVar30 = uVar30 + 0x10;
            uVar26 = (unsigned int)uVar30;
            fVar7 = *(float *)((int)pfVar27 + (uVar10 - uVar11) + 4);
            fVar8 = fVar1 * *pfVar33 + *pfVar39 * fVar2;
            *pfVar39 = fVar8;
            fVar7 = fVar7 * fVar1 + pfVar39[1] * fVar2;
            *pfVar27 = fVar8;
            fVar5 = fVar5 * fVar2 + fVar3 * fVar1;
            pfVar39[1] = fVar7;
            fVar3 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar27[1] = fVar7;
            pfVar39[2] = fVar5;
            pfVar27[2] = fVar5;
            pfVar39[3] = fVar3;
            pfVar39 = pfVar39 + 4;
            pfVar27[3] = fVar3;
            uVar21 = uVar21 + 0x10;
            uVar32 = (unsigned int)uVar21;
          } while ((uVar36 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
        }
        if ((uVar36 & 0xffffffff) < (uVar29 & 0xffffffff)) {
          lVar35 = uVar29 - uVar36;
          iVar41 = uVar26 - (int)pfVar39;
          iVar43 = uVar32 - (int)pfVar39;
          do {
            fVar3 = *(float *)((int)pfVar39 + iVar41) * fVar1 + *pfVar39 * fVar2;
            *pfVar39 = fVar3;
            *(float *)((int)pfVar39 + iVar43) = fVar3;
            pfVar39 = pfVar39 + 1;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      *(float **)(iVar18 + 0x5c) = pfVar39;
      puVar19 = (unsigned int *)(iVar18 + 0x40);
      lVar35 = 7;
      do {
        pfVar39 = (float *)puVar19[8];
        fVar1 = (float)puVar19[0x18];
        pfVar33 = (float *)*puVar19;
        fVar2 = (float)puVar19[0x20];
        uVar26 = (int)pfVar33 - (int)pfVar39 >> 2;
        uVar36 = (unsigned __int64)(int)uVar26;
        uVar29 = uVar23;
        if (((unsigned __int64)uVar26 < (uVar23 & 0xffffffff)) &&
           (uVar29 = uVar36, (unsigned __int64)uVar26 != (uVar23 & 0xffffffff))) {
          uVar21 = 0;
          uVar29 = uVar50;
          uVar30 = uVar51;
          if (3 < (int)uVar26) {
            do {
              pfVar13 = (float *)uVar30;
              pfVar27 = (float *)uVar29;
              fVar3 = pfVar27[2];
              fVar4 = pfVar27[3];
              uVar21 = uVar21 + 4;
              uVar29 = uVar29 + 0x10;
              fVar5 = *pfVar13;
              fVar6 = pfVar13[1];
              fVar7 = pfVar13[2];
              fVar14 = *pfVar27 * fVar1 + *pfVar39 * fVar2;
              fVar8 = pfVar13[3];
              fVar9 = *(float *)((int)pfVar13 + (uVar10 - uVar11) + 4) * fVar1 + pfVar39[1] * fVar2;
              *pfVar39 = fVar14;
              fVar17 = pfVar39[2] * fVar2 + fVar3 * fVar1;
              pfVar39[1] = fVar9;
              fVar3 = pfVar39[3] * fVar2 + fVar4 * fVar1;
              pfVar39[2] = fVar17;
              pfVar39[3] = fVar3;
              pfVar39 = pfVar39 + 4;
              *pfVar13 = fVar14 + fVar5;
              pfVar13[1] = fVar6 + fVar9;
              pfVar13[2] = fVar7 + fVar17;
              pfVar13[3] = fVar8 + fVar3;
              uVar30 = uVar30 + 0x10;
            } while ((uVar21 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
          }
          if ((uVar21 & 0xffffffff) < (unsigned __int64)uVar26) {
            lVar24 = uVar36 - uVar21;
            do {
              pfVar27 = (float *)uVar29;
              fVar3 = *(float *)uVar30;
              uVar29 = uVar29 + 4;
              fVar4 = *pfVar27 * fVar1 + *pfVar39 * fVar2;
              *pfVar39 = fVar4;
              pfVar39 = pfVar39 + 1;
              *(float *)uVar30 = fVar4 + fVar3;
              uVar30 = uVar30 + 4;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          iVar41 = (int)uVar29;
          if (pfVar33 <= pfVar39) {
            pfVar39 = (float *)puVar19[-8];
          }
          uVar26 = (int)pfVar33 - (int)pfVar39 >> 2;
          uVar21 = (__int64)(int)uVar26;
          if ((uVar23 - uVar36 & 0xffffffff) <= (unsigned __int64)uVar26) {
            uVar21 = uVar23 - uVar36;
          }
          uVar36 = 0;
          if (3 < (int)uVar21) {
            do {
              uVar36 = uVar36 + 4;
              pfVar33 = (float *)uVar29;
              fVar3 = pfVar33[2];
              fVar4 = pfVar33[3];
              uVar29 = uVar29 + 0x10;
              iVar41 = (int)uVar29;
              pfVar27 = (float *)uVar30;
              fVar5 = *pfVar27;
              fVar6 = pfVar27[1];
              fVar7 = pfVar27[2];
              fVar9 = *pfVar33 * fVar1 + *pfVar39 * fVar2;
              fVar8 = pfVar27[3];
              fVar17 = pfVar39[1] * fVar2 + pfVar33[1] * fVar1;
              *pfVar39 = fVar9;
              fVar14 = pfVar39[2] * fVar2 + fVar3 * fVar1;
              pfVar39[1] = fVar17;
              fVar3 = pfVar39[3] * fVar2 + fVar4 * fVar1;
              pfVar39[2] = fVar14;
              pfVar39[3] = fVar3;
              pfVar39 = pfVar39 + 4;
              *pfVar27 = fVar9 + fVar5;
              pfVar27[1] = fVar6 + fVar17;
              pfVar27[2] = fVar7 + fVar14;
              pfVar27[3] = fVar8 + fVar3;
              uVar30 = uVar30 + 0x10;
            } while ((uVar36 & 0xffffffff) < (uVar21 - 3 & 0xffffffff));
          }
          if ((uVar36 & 0xffffffff) < (uVar21 & 0xffffffff)) {
            lVar24 = uVar21 - uVar36;
            iVar43 = (int)uVar30;
            do {
              pfVar33 = (float *)uVar30;
              fVar3 = *pfVar33;
              fVar4 = *(float *)((iVar41 - iVar43) + (int)pfVar33) * fVar1 + *pfVar39 * fVar2;
              *pfVar39 = fVar4;
              pfVar39 = pfVar39 + 1;
              *pfVar33 = fVar4 + fVar3;
              uVar30 = uVar30 + 4;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        else {
          uVar36 = 0;
          uVar26 = uVar10;
          uVar32 = uVar11;
          if (3 < (int)uVar29) {
            uVar30 = uVar50;
            uVar21 = uVar51;
            do {
              pfVar27 = (float *)uVar21;
              pfVar33 = (float *)uVar30;
              fVar3 = pfVar33[2];
              fVar4 = pfVar33[3];
              uVar36 = uVar36 + 4;
              uVar30 = uVar30 + 0x10;
              uVar26 = (unsigned int)uVar30;
              fVar5 = *pfVar27;
              fVar6 = pfVar27[1];
              fVar7 = pfVar27[2];
              fVar14 = *pfVar33 * fVar1 + *pfVar39 * fVar2;
              fVar8 = pfVar27[3];
              fVar9 = *(float *)((int)pfVar27 + (uVar10 - uVar11) + 4) * fVar1 + pfVar39[1] * fVar2;
              *pfVar39 = fVar14;
              fVar17 = pfVar39[2] * fVar2 + fVar3 * fVar1;
              pfVar39[1] = fVar9;
              fVar3 = pfVar39[3] * fVar2 + fVar4 * fVar1;
              pfVar39[2] = fVar17;
              pfVar39[3] = fVar3;
              pfVar39 = pfVar39 + 4;
              *pfVar27 = fVar14 + fVar5;
              pfVar27[1] = fVar6 + fVar9;
              pfVar27[2] = fVar7 + fVar17;
              pfVar27[3] = fVar8 + fVar3;
              uVar21 = uVar21 + 0x10;
              uVar32 = (unsigned int)uVar21;
            } while ((uVar36 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
          }
          if ((uVar36 & 0xffffffff) < (uVar29 & 0xffffffff)) {
            lVar24 = uVar29 - uVar36;
            iVar41 = uVar26 - (int)pfVar39;
            iVar43 = uVar32 - (int)pfVar39;
            do {
              fVar3 = *(float *)((int)pfVar39 + iVar43);
              fVar4 = *(float *)((int)pfVar39 + iVar41) * fVar1 + *pfVar39 * fVar2;
              *pfVar39 = fVar4;
              *(float *)((int)pfVar39 + iVar43) = fVar4 + fVar3;
              pfVar39 = pfVar39 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        puVar19[8] = pfVar39;
        lVar35 = lVar35 + -1;
        puVar19 = puVar19 + 1;
      } while (lVar35 != 0);
      if (bVar15) {
        puVar22 = (unsigned int *)(iVar18 + 0x104);
        lVar35 = 4;
        uVar29 = ((unsigned __int64)*(unsigned int *)(iVar18 + 0x10) & 0x1fffffff) * 8;
        do {
          uVar30 = (unsigned __int64)*puVar22;
          uVar36 = uVar29 + puVar22[4];
          if (uVar30 <= (uVar36 & 0xffffffff)) {
            uVar36 = (unsigned __int64)puVar22[-4];
          }
          uVar21 = uVar29;
          if (0x3ff < uVar29) {
            uVar21 = 0x400;
          }
          uVar31 = uVar30 - uVar36;
          if (uVar21 <= (uVar30 - uVar36 & 0xffffffff)) {
            uVar31 = uVar21;
          }
          lVar24 = 0;
          if ((uVar31 & 0xffffffff) != 0) {
            lVar25 = ((uVar31 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar24 + uVar36);
              lVar24 = lVar24 + 0x80;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if ((uVar31 & 0xffffffff) < uVar21) {
            uVar38 = uVar30 - puVar22[-4];
            if ((uVar21 - uVar31 & 0xffffffff) <= (uVar30 - puVar22[-4] & 0xffffffff)) {
              uVar38 = uVar21 - uVar31;
            }
            lVar24 = 0;
            if ((uVar38 & 0xffffffff) != 0) {
              lVar25 = ((uVar38 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar24 + uVar36);
                lVar24 = lVar24 + 0x80;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
          }
          lVar35 = lVar35 + -1;
          puVar22 = puVar22 + 1;
        } while (lVar35 != 0);
      }
      pfVar39 = *(float **)(iVar18 + 0x104);
      pfVar33 = *(float **)(iVar18 + 0x114);
      uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
      uVar36 = uVar23;
      if ((uVar29 < (uVar23 & 0xffffffff)) && (uVar36 = uVar29, uVar29 != (uVar23 & 0xffffffff))) {
        uVar36 = 0;
        if ((uVar23 & 0xffffffff) != 0) {
          lVar35 = uVar51 - 4;
          do {
            uVar30 = 0;
            if (3 < (int)uVar29) {
              do {
                iVar41 = (int)lVar35;
                fVar2 = *(float *)(iVar41 + 8);
                uVar30 = uVar30 + 4;
                fVar3 = *(float *)(iVar41 + 4);
                fVar4 = *(float *)(iVar41 + 0xc);
                fVar5 = *(float *)(iVar41 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
                *(float *)(iVar41 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
                *(float *)(iVar41 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar41 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar41 + 0x10) = fVar2;
                lVar35 = lVar35 + 0x10;
              } while ((uVar30 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
            }
            if ((uVar30 & 0xffffffff) < (uVar29 & 0xffffffff)) {
              lVar24 = uVar29 - uVar30;
              do {
                fVar1 = *(float *)((int)lVar35 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar35 = lVar35 + 4;
                *(float *)lVar35 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (pfVar39 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0xf4);
            }
            uVar36 = uVar36 + uVar29;
            uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
            if ((uVar23 - uVar36 & 0xffffffff) <= uVar29) {
              uVar29 = uVar23 - uVar36;
            }
          } while ((uVar36 & 0xffffffff) < (uVar23 & 0xffffffff));
        }
      }
      else {
        uVar30 = 0;
        uVar29 = uVar51;
        if (3 < (int)uVar36) {
          do {
            pfVar39 = (float *)uVar29;
            fVar2 = pfVar39[1];
            uVar30 = uVar30 + 4;
            fVar3 = *pfVar39;
            fVar4 = pfVar39[2];
            fVar5 = pfVar39[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
            *pfVar39 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
            pfVar39[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar39[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar39[3] = fVar2;
            uVar29 = uVar29 + 0x10;
          } while ((uVar30 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
        }
        if ((uVar30 & 0xffffffff) < (uVar36 & 0xffffffff)) {
          lVar24 = uVar36 - uVar30;
          lVar35 = uVar29 - 4;
          do {
            fVar1 = *(float *)((int)lVar35 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar35 = lVar35 + 4;
            *(float *)lVar35 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      *(float **)(iVar18 + 0x114) = pfVar33;
      pfVar39 = *(float **)(iVar18 + 0x108);
      pfVar33 = *(float **)(iVar18 + 0x118);
      uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
      uVar36 = uVar23;
      if ((uVar29 < (uVar23 & 0xffffffff)) && (uVar36 = uVar29, uVar29 != (uVar23 & 0xffffffff))) {
        uVar36 = 0;
        if ((uVar23 & 0xffffffff) != 0) {
          lVar35 = uVar51 - 4;
          do {
            uVar30 = 0;
            if (3 < (int)uVar29) {
              do {
                iVar41 = (int)lVar35;
                fVar2 = *(float *)(iVar41 + 8);
                uVar30 = uVar30 + 4;
                fVar3 = *(float *)(iVar41 + 4);
                fVar4 = *(float *)(iVar41 + 0xc);
                fVar5 = *(float *)(iVar41 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
                *(float *)(iVar41 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
                *(float *)(iVar41 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar41 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar41 + 0x10) = fVar2;
                lVar35 = lVar35 + 0x10;
              } while ((uVar30 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
            }
            if ((uVar30 & 0xffffffff) < (uVar29 & 0xffffffff)) {
              lVar24 = uVar29 - uVar30;
              do {
                fVar1 = *(float *)((int)lVar35 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar35 = lVar35 + 4;
                *(float *)lVar35 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (pfVar39 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0xf8);
            }
            uVar36 = uVar36 + uVar29;
            uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
            if ((uVar23 - uVar36 & 0xffffffff) <= uVar29) {
              uVar29 = uVar23 - uVar36;
            }
          } while ((uVar36 & 0xffffffff) < (uVar23 & 0xffffffff));
        }
      }
      else {
        uVar30 = 0;
        uVar29 = uVar51;
        if (3 < (int)uVar36) {
          do {
            pfVar39 = (float *)uVar29;
            fVar2 = pfVar39[1];
            uVar30 = uVar30 + 4;
            fVar3 = *pfVar39;
            fVar4 = pfVar39[2];
            fVar5 = pfVar39[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
            *pfVar39 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
            pfVar39[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar39[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar39[3] = fVar2;
            uVar29 = uVar29 + 0x10;
          } while ((uVar30 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
        }
        if ((uVar30 & 0xffffffff) < (uVar36 & 0xffffffff)) {
          lVar24 = uVar36 - uVar30;
          lVar35 = uVar29 - 4;
          do {
            fVar1 = *(float *)((int)lVar35 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar35 = lVar35 + 4;
            *(float *)lVar35 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      *(float **)(iVar18 + 0x118) = pfVar33;
      pfVar39 = *(float **)(iVar18 + 0x10c);
      pfVar33 = *(float **)(iVar18 + 0x11c);
      uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
      uVar36 = uVar23;
      if ((uVar29 < (uVar23 & 0xffffffff)) && (uVar36 = uVar29, uVar29 != (uVar23 & 0xffffffff))) {
        uVar36 = 0;
        if ((uVar23 & 0xffffffff) != 0) {
          lVar35 = uVar51 - 4;
          do {
            uVar30 = 0;
            if (3 < (int)uVar29) {
              do {
                iVar41 = (int)lVar35;
                fVar2 = *(float *)(iVar41 + 8);
                uVar30 = uVar30 + 4;
                fVar3 = *(float *)(iVar41 + 4);
                fVar4 = *(float *)(iVar41 + 0xc);
                fVar5 = *(float *)(iVar41 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
                *(float *)(iVar41 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
                *(float *)(iVar41 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar41 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar41 + 0x10) = fVar2;
                lVar35 = lVar35 + 0x10;
              } while ((uVar30 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
            }
            if ((uVar30 & 0xffffffff) < (uVar29 & 0xffffffff)) {
              lVar24 = uVar29 - uVar30;
              do {
                fVar1 = *(float *)((int)lVar35 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar35 = lVar35 + 4;
                *(float *)lVar35 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (pfVar39 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0xfc);
            }
            uVar36 = uVar36 + uVar29;
            uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
            if ((uVar23 - uVar36 & 0xffffffff) <= uVar29) {
              uVar29 = uVar23 - uVar36;
            }
          } while ((uVar36 & 0xffffffff) < (uVar23 & 0xffffffff));
        }
      }
      else {
        uVar30 = 0;
        uVar29 = uVar51;
        if (3 < (int)uVar36) {
          do {
            pfVar39 = (float *)uVar29;
            fVar2 = pfVar39[1];
            uVar30 = uVar30 + 4;
            fVar3 = *pfVar39;
            fVar4 = pfVar39[2];
            fVar5 = pfVar39[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
            *pfVar39 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
            pfVar39[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar39[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar39[3] = fVar2;
            uVar29 = uVar29 + 0x10;
          } while ((uVar30 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
        }
        if ((uVar30 & 0xffffffff) < (uVar36 & 0xffffffff)) {
          lVar24 = uVar36 - uVar30;
          lVar35 = uVar29 - 4;
          do {
            fVar1 = *(float *)((int)lVar35 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar35 = lVar35 + 4;
            *(float *)lVar35 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      *(float **)(iVar18 + 0x11c) = pfVar33;
      pfVar39 = *(float **)(iVar18 + 0x110);
      pfVar33 = *(float **)(iVar18 + 0x120);
      uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
      uVar36 = uVar23;
      if ((uVar29 < (uVar23 & 0xffffffff)) && (uVar36 = uVar29, uVar29 != (uVar23 & 0xffffffff))) {
        uVar36 = 0;
        if ((uVar23 & 0xffffffff) != 0) {
          lVar35 = uVar51 - 4;
          do {
            uVar30 = 0;
            if (3 < (int)uVar29) {
              do {
                iVar41 = (int)lVar35;
                fVar2 = *(float *)(iVar41 + 8);
                uVar30 = uVar30 + 4;
                fVar3 = *(float *)(iVar41 + 4);
                fVar4 = *(float *)(iVar41 + 0xc);
                fVar5 = *(float *)(iVar41 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
                *(float *)(iVar41 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
                *(float *)(iVar41 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar41 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar41 + 0x10) = fVar2;
                lVar35 = lVar35 + 0x10;
              } while ((uVar30 & 0xffffffff) < (uVar29 - 3 & 0xffffffff));
            }
            if ((uVar30 & 0xffffffff) < (uVar29 & 0xffffffff)) {
              lVar24 = uVar29 - uVar30;
              do {
                fVar1 = *(float *)((int)lVar35 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar35 = lVar35 + 4;
                *(float *)lVar35 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (pfVar39 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0x100);
            }
            uVar36 = uVar36 + uVar29;
            uVar29 = (unsigned __int64)((unsigned int)((int)pfVar39 - (int)pfVar33 >> 2) >> 1);
            if ((uVar23 - uVar36 & 0xffffffff) <= uVar29) {
              uVar29 = uVar23 - uVar36;
            }
          } while ((uVar36 & 0xffffffff) < (uVar23 & 0xffffffff));
        }
      }
      else {
        uVar30 = 0;
        uVar29 = uVar51;
        if (3 < (int)uVar36) {
          do {
            pfVar39 = (float *)uVar29;
            fVar2 = pfVar39[1];
            uVar30 = uVar30 + 4;
            fVar3 = *pfVar39;
            fVar4 = pfVar39[2];
            fVar5 = pfVar39[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar55 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar55 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar55 + (double)fVar8);
            *pfVar39 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar55 + (double)fVar9);
            pfVar39[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar39[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar39[3] = fVar2;
            uVar29 = uVar29 + 0x10;
          } while ((uVar30 & 0xffffffff) < (uVar36 - 3 & 0xffffffff));
        }
        if ((uVar30 & 0xffffffff) < (uVar36 & 0xffffffff)) {
          lVar24 = uVar36 - uVar30;
          lVar35 = uVar29 - 4;
          do {
            fVar1 = *(float *)((int)lVar35 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar55 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar35 = lVar35 + 4;
            *(float *)lVar35 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      *(float **)(iVar18 + 0x120) = pfVar33;
      if (*(unsigned int *)(iVar18 + 0x198) < *(unsigned int *)(iVar18 + 0x19c)) {
        *(float *)(iVar18 + 0x194) = *(float *)(iVar18 + 0x18c) + *(float *)(iVar18 + 0x194);
        *(unsigned int *)(iVar18 + 0x198) = *(unsigned int *)(iVar18 + 0x198) + 1;
      }
      else {
        *(unsigned int *)(iVar18 + 0x194) = *(unsigned int *)(iVar18 + 400);
      }
      dVar56 = (double)*(float *)(iVar18 + 0x194);
      in_register_000103f0 = in_register_00010320;
      if (dVar56 != (double)*(float *)(iVar18 + 0x154)) {
        fn_82FC8FD0(dVar56,iVar18 + 0x124);
        *(float *)(iVar18 + 0x154) = (float)dVar56;
      }
      uVar29 = lVar52 + uVar51;
      fVar1 = *(float *)(iVar18 + 300);
      fVar2 = *(float *)(iVar18 + 0x130);
      fVar3 = *(float *)(iVar18 + 0x128);
      if (uVar51 < (uVar29 & 0xffffffff)) {
        uVar26 = ((int)uVar29 - uVar11) + 3;
        uVar36 = uVar51;
        if (3 < (int)(((int)uVar26 >> 2) + (unsigned int)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
          do {
            pfVar39 = (float *)uVar36;
            fVar3 = fVar1 * *pfVar39 + fVar2 * fVar3;
            *pfVar39 = fVar3;
            fVar3 = pfVar39[1] * fVar1 + fVar3 * fVar2;
            pfVar39[1] = fVar3;
            fVar3 = pfVar39[2] * fVar1 + fVar3 * fVar2;
            pfVar39[2] = fVar3;
            fVar3 = pfVar39[3] * fVar1 + fVar3 * fVar2;
            pfVar39[3] = fVar3;
            uVar36 = uVar36 + 0x10;
          } while ((int)uVar36 < (int)uVar29 + -0xc);
        }
        if ((uVar36 & 0xffffffff) < (uVar29 & 0xffffffff)) {
          lVar52 = uVar36 - 4;
          lVar35 = (((uVar29 - uVar36) - 1 & 0xffffffff) >> 2) + 1;
          do {
            fVar3 = *(float *)((int)lVar52 + 4) * fVar1 + fVar2 * fVar3;
            lVar52 = lVar52 + 4;
            *(float *)lVar52 = fVar3;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
        }
      }
      *(float *)(iVar18 + 0x128) = fVar3;
      if (*(unsigned int *)(iVar18 + 0x168) < *(unsigned int *)(iVar18 + 0x16c)) {
        *(float *)(iVar18 + 0x164) = *(float *)(iVar18 + 0x15c) + *(float *)(iVar18 + 0x164);
        *(unsigned int *)(iVar18 + 0x168) = *(unsigned int *)(iVar18 + 0x168) + 1;
      }
      else {
        *(unsigned int *)(iVar18 + 0x164) = *(unsigned int *)(iVar18 + 0x160);
      }
      fVar1 = *(float *)(iVar18 + 0x164);
      if (*(unsigned int *)(iVar18 + 0x180) < *(unsigned int *)(iVar18 + 0x184)) {
        *(float *)(iVar18 + 0x17c) = *(float *)(iVar18 + 0x174) + *(float *)(iVar18 + 0x17c);
        *(unsigned int *)(iVar18 + 0x180) = *(unsigned int *)(iVar18 + 0x180) + 1;
      }
      else {
        *(unsigned int *)(iVar18 + 0x17c) = *(unsigned int *)(iVar18 + 0x178);
      }
      fVar2 = *(float *)(iVar18 + 0x17c);
      uVar23 = uVar23 + uVar20 * -4;
      altv300_21(in_vs32,in_vs41);
      uVar29 = uVar51;
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        altv207_13(in_vs32,in_vs43);
        uVar29 = uVar29 + 0x10;
        fVar3 = in_register_00010310 * in_register_000103f0;
        fVar4 = in_register_00010314 * in_register_000103f0;
        fVar5 = in_register_00010318 * in_register_000103f0;
        fVar6 = in_vr49 * in_register_000103f0;
        iVar41 = (int)in_r0;
        pfVar39 = (float *)(iVar41 + (int)uVar28 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        uVar28 = uVar28 + 0x10;
        pfVar39 = (float *)(iVar41 + (int)lVar48 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        lVar48 = lVar48 + 0x10;
        pfVar39 = (float *)(iVar41 + (int)lVar46 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        lVar46 = lVar46 + 0x10;
        pfVar39 = (float *)(iVar41 + (int)lVar44 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        lVar44 = lVar44 + 0x10;
        pfVar39 = (float *)(iVar41 + (int)lVar42 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        lVar42 = lVar42 + 0x10;
        pfVar39 = (float *)(iVar41 + (int)lVar40 & 0xfffffff0);
        *pfVar39 = fVar3;
        pfVar39[1] = fVar4;
        pfVar39[2] = fVar5;
        pfVar39[3] = fVar6;
        lVar40 = lVar40 + 0x10;
      }
      if ((uVar23 & 0xffffffff) != 0) {
        lVar52 = uVar29 - 4;
        do {
          lVar52 = lVar52 + 4;
          fVar3 = *(float *)lVar52 * (float)((double)fVar2 * dVar54) * fVar1;
          *(float *)uVar28 = fVar3;
          *(float *)lVar48 = fVar3;
          uVar28 = uVar28 + 4;
          *(float *)lVar46 = fVar3;
          lVar48 = lVar48 + 4;
          *(float *)lVar44 = fVar3;
          lVar46 = lVar46 + 4;
          *(float *)lVar42 = fVar3;
          lVar44 = lVar44 + 4;
          *(float *)lVar40 = fVar3;
          lVar42 = lVar42 + 4;
          lVar40 = lVar40 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      in_register_000103f4 = in_register_000103f0;
      in_register_000103f8 = in_register_000103f0;
      in_vr63 = in_register_000103f0;
      in_register_00010320 = in_register_000103f0;
    } while ((uVar34 & 0xffffffff) != 0);
  }
  fVar1 = lbl_8217BA98;
  *(float *)(iVar18 + 0x128) = (*(float *)(iVar18 + 0x128) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar18 + 0x13c) = (*(float *)(iVar18 + 0x13c) + fVar1) - fVar1;
  *(unsigned short *)((int)param_2 + 0xe) = uStack_ca;
  *(bool *)(iVar18 + 0x1a8) = uVar12 == 0x11;
  fn_82F6A594();
  return;
}

