#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_36c;
extern unsigned int fStack_344;
extern unsigned int fStack_348;
extern unsigned int fStack_34c;
extern unsigned int fStack_350;
extern unsigned int fStack_354;
extern unsigned int fStack_358;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82DE1320();
extern int fn_82DE1848();
extern unsigned int iStack_35c;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorLogicalAnd();
extern V16 vectorMinimumFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DD14E8(int *param_1,unsigned __int64 param_2,unsigned char *param_3,int param_4)

{
  unsigned char bVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  int iVar9;
  unsigned __int64 in_r0;
  unsigned __int64 uVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  int iVar18;
  __int64 lVar17;
  unsigned int uVar19;
  int *piVar20;
  unsigned char *pbVar21;
  __int64 lVar22;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char auVar23 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar24 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar25 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  unsigned int auStack_36c [4];
  int iStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float afStack_340 [4];
  float afStack_330 [4];
  __int64 lStack_320;
  __int64 lStack_318;
  __int64 lStack_310;
  __int64 lStack_308;
  __int64 lStack_300;
  __int64 lStack_2f8;
  __int64 lStack_2f0;
  __int64 lStack_2e8;
  __int64 lStack_2e0;
  __int64 lStack_2d8;
  __int64 lStack_2d0;
  __int64 lStack_2c8;
  __int64 lStack_2c0;
  __int64 lStack_2a8;
  __int64 lStack_2a0;
  __int64 lStack_298;
  __int64 lStack_290;
  __int64 lStack_288;
  
  uVar10 = ZEXT48(&stack0x00000000);
LAB_82dd1528:
  while( true ) {
    bVar1 = *param_3;
    uVar16 = (unsigned __int64)bVar1;
    if (uVar16 < 0x6c) break;
switchD_82dd1548_caseD_8:
    fn_82CEE578(uVar10 - 0x2b8,uVar10 - 0x280,0x200);
    fn_82CEDB38(uVar10 - 0x2b8,0xffffffff82142a88);
    iVar11 = (**(int (***)())(*lbl_8323B464 + 0xc))
                       (lbl_8323B464,3,0x1298fedd,uVar10 - 0x280,0xffffffff82142bf0,0x12d);
    if (iVar11 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(uVar10 - 0x2b8);
  }
  uVar19 = *(unsigned int *)((unsigned int)bVar1 * 4 + -0x7d22eab4);
  in_r0 = (unsigned __int64)uVar19;
  piVar20 = (int *)param_2;
  switch(bVar1) {
  case 0:
    goto switchD_82dd1548_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    auStack_36c[1] = ((unsigned int)param_3[1] << (piVar20[5] & 0x3fU)) + piVar20[2];
    auStack_36c[2] = ((unsigned int)param_3[2] << (piVar20[5] & 0x3fU)) + piVar20[3];
    pbVar21 = param_3 + 3;
    param_3 = param_3 + 4;
    auStack_36c[3] = ((unsigned int)*pbVar21 << (piVar20[5] & 0x3fU)) + piVar20[4];
    iStack_35c = piVar20[5] - (unsigned int)bVar1;
    auStack_36c[0] = piVar20[1];
    param_2 = uVar10 - 0x370;
    goto LAB_82dd1528;
  case 5:
    param_3 = param_3 + param_3[1] + 2;
    goto LAB_82dd1528;
  case 6:
    param_3 = param_3 + (unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2] + 3;
    goto LAB_82dd1528;
  case 7:
    param_3 = param_3 + ((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3] + 4
    ;
    goto LAB_82dd1528;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    goto switchD_82dd1548_caseD_8;
  case 9:
    if ((param_2 & 0xffffffff) != (uVar10 - 0x370 & 0xffffffff)) {
      lVar15 = uVar10 - 0x374;
      lVar17 = param_2 - 4;
      lVar22 = 6;
      do {
        lVar17 = lVar17 + 4;
        lVar15 = lVar15 + 4;
        *(unsigned int *)lVar15 = *(unsigned int *)lVar17;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      param_2 = uVar10 - 0x370;
    }
    param_3 = param_3 + 2;
    goto LAB_82dd1528;
  case 10:
    if ((param_2 & 0xffffffff) != (uVar10 - 0x370 & 0xffffffff)) {
      lVar15 = uVar10 - 0x374;
      lVar17 = param_2 - 4;
      lVar22 = 6;
      do {
        lVar17 = lVar17 + 4;
        lVar15 = lVar15 + 4;
        *(unsigned int *)lVar15 = *(unsigned int *)lVar17;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      param_2 = uVar10 - 0x370;
    }
    param_3 = param_3 + 3;
    goto LAB_82dd1528;
  case 0xb:
    if ((param_2 & 0xffffffff) != (uVar10 - 0x370 & 0xffffffff)) {
      lVar15 = uVar10 - 0x374;
      lVar17 = param_2 - 4;
      lVar22 = 6;
      do {
        lVar17 = lVar17 + 4;
        lVar15 = lVar15 + 4;
        *(unsigned int *)lVar15 = *(unsigned int *)lVar17;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      param_2 = uVar10 - 0x370;
    }
    param_3 = param_3 + 5;
    goto LAB_82dd1528;
  case 0x10:
  case 0x11:
  case 0x12:
    puVar4 = (unsigned int *)(uVar19 + param_4 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    uVar3 = piVar20[5];
    fVar2 = (float)param_1[4];
    iVar12 = (int)((uVar16 - 0xe & 0xffffffff) << 2);
    puVar5 = (unsigned int *)(uVar19 + param_4 + 0x10 & 0xfffffff0);
    uVar29 = *puVar5;
    uVar30 = puVar5[1];
    uVar31 = puVar5[2];
    uVar32 = puVar5[3];
    puVar5 = (unsigned int *)((int)afStack_340 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (unsigned int *)((int)afStack_330 + uVar19 & 0xfffffff0);
    *puVar4 = uVar29;
    puVar4[1] = uVar30;
    puVar4[2] = uVar31;
    puVar4[3] = uVar32;
    bVar1 = param_3[2];
    lStack_2f0 = (__int64)
                 (int)(((unsigned int)param_3[1] << (uVar3 & 0x3f)) + *(int *)(iVar12 + (int)piVar20));
    iVar11 = 0;
    *(float *)((int)((uVar16 - 0xc & 0xffffffff) << 2) + param_4) = (float)lStack_2f0 * fVar2;
    pbVar21 = param_3 + 4;
    lStack_2a0 = (__int64)
                 (int)(((unsigned int)bVar1 << (piVar20[5] & 0x3fU)) + *(int *)(iVar12 + (int)piVar20));
    *(float *)((int)afStack_340 + (int)((uVar16 - 0x10 & 0xffffffff) << 2)) =
         (float)lStack_2a0 * (float)param_1[4];
    uVar19 = (unsigned int)param_3[3];
    goto LAB_82dd1950;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    bVar1 = param_3[3];
    puVar4 = (unsigned int *)(uVar19 + param_4 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (unsigned int *)(param_4 + 0x10U & 0xfffffff0);
    uVar29 = *puVar5;
    uVar30 = puVar5[1];
    uVar31 = puVar5[2];
    uVar32 = puVar5[3];
    puVar5 = (unsigned int *)((int)afStack_340 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (unsigned int *)((int)afStack_330 + uVar19 & 0xfffffff0);
    *puVar4 = uVar29;
    puVar4[1] = uVar30;
    puVar4[2] = uVar31;
    puVar4[3] = uVar32;
    fn_82DD14E8(param_1,param_2,param_3 + 4,uVar10 - 0x340);
    param_3 = param_3 + 4 + bVar1;
    goto LAB_82dd1528;
  case 0x20:
  case 0x21:
  case 0x22:
    puVar4 = (unsigned int *)(uVar19 + param_4 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    uVar3 = piVar20[5];
    fVar2 = (float)param_1[4];
    puVar5 = (unsigned int *)((int)afStack_340 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (unsigned int *)(uVar19 + param_4 + 0x10 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (unsigned int *)((int)afStack_330 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    iVar11 = *(int *)((int)((uVar16 - 0x1e & 0xffffffff) << 2) + (int)piVar20);
    lStack_310 = (__int64)(int)((param_3[1] + 1 << (uVar3 & 0x3f)) + iVar11);
    lStack_290 = (__int64)(int)(((unsigned int)param_3[1] << (uVar3 & 0x3f)) + iVar11);
    iVar11 = 0;
    pbVar21 = param_3 + 3;
    *(float *)((int)afStack_340 + (int)((uVar16 - 0x20 & 0xffffffff) << 2)) =
         (float)lStack_290 * fVar2;
    *(float *)((int)((uVar16 - 0x1c & 0xffffffff) << 2) + param_4) = (float)lStack_310 * fVar2;
    uVar19 = (unsigned int)param_3[2];
    goto LAB_82dd1950;
  case 0x23:
  case 0x24:
  case 0x25:
    puVar4 = (unsigned int *)(uVar19 + param_4 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    uVar3 = piVar20[5];
    fVar2 = (float)param_1[4];
    puVar5 = (unsigned int *)((int)afStack_340 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    iVar11 = (int)((uVar16 - 0x21 & 0xffffffff) << 2);
    puVar4 = (unsigned int *)(uVar19 + param_4 + 0x10 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (unsigned int *)((int)afStack_330 + uVar19 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    bVar1 = param_3[2];
    lStack_288 = (__int64)
                 (int)(((unsigned int)param_3[1] << (uVar3 & 0x3f)) + *(int *)(iVar11 + (int)piVar20));
    *(float *)((int)((uVar16 - 0x1f & 0xffffffff) << 2) + param_4) = (float)lStack_288 * fVar2;
    pbVar21 = param_3 + 7;
    lStack_300 = (__int64)
                 (int)(((unsigned int)bVar1 << (piVar20[5] & 0x3fU)) + *(int *)(iVar11 + (int)piVar20));
    *(float *)((int)afStack_340 + (int)((uVar16 - 0x23 & 0xffffffff) << 2)) =
         (float)lStack_300 * (float)param_1[4];
    iVar11 = (unsigned int)param_3[3] * 0x100 + (unsigned int)param_3[4];
    uVar19 = (unsigned int)param_3[5] * 0x100 + (unsigned int)param_3[6];
LAB_82dd1950:
    bVar1 = pbVar21[iVar11];
    while ((param_3 = pbVar21 + iVar11, 0x25 < bVar1 && (uVar16 = (unsigned __int64)bVar1, bVar1 < 0x2c)))
    {
      if (bVar1 < 0x29) {
        iVar9 = (int)((uVar16 - 0x24 & 0xffffffff) << 2);
        iVar12 = (int)((uVar16 - 0x22 & 0xffffffff) << 2);
        iVar18 = iVar11 + 3;
        lStack_298 = (__int64)
                     (int)(((unsigned int)pbVar21[iVar11 + 1] << (piVar20[5] & 0x3fU)) +
                          *(int *)(iVar9 + (int)piVar20));
        *(float *)((int)((uVar16 - 0x26 & 0xffffffff) << 2) + param_4) =
             (float)lStack_298 * (float)param_1[4];
        lVar17 = (__int64)
                 (int)(((unsigned int)pbVar21[iVar11 + 2] << (piVar20[5] & 0x3fU)) +
                      *(int *)(iVar9 + (int)piVar20));
        lStack_2e0 = lVar17;
      }
      else {
        iVar12 = (int)((uVar16 - 0x25 & 0xffffffff) << 2);
        iVar18 = iVar11 + 7;
        lStack_2c0 = (__int64)
                     (int)(((unsigned int)pbVar21[iVar11 + 1] * 0x100 + (unsigned int)pbVar21[iVar11 + 2]) * 0x100 +
                          (unsigned int)pbVar21[iVar11 + 3]);
        *(float *)((int)((uVar16 - 0x29 & 0xffffffff) << 2) + param_4) =
             (float)lStack_2c0 * (float)param_1[4];
        lVar17 = (__int64)
                 (int)(((unsigned int)pbVar21[iVar11 + 4] * 0x100 + (unsigned int)pbVar21[iVar11 + 5]) * 0x100 +
                      (unsigned int)pbVar21[iVar11 + 6]);
        lStack_320 = lVar17;
      }
      *(float *)(iVar12 + param_4) = (float)lVar17 * (float)param_1[4];
      iVar11 = iVar18;
      bVar1 = pbVar21[iVar18];
    }
    bVar1 = pbVar21[uVar19];
    while ((pbVar6 = pbVar21 + uVar19, 0x25 < bVar1 && (uVar16 = (unsigned __int64)bVar1, bVar1 < 0x2c))) {
      fVar2 = (float)param_1[4];
      if (bVar1 < 0x29) {
        uVar3 = piVar20[5];
        iVar12 = (int)((uVar16 - 0x26 & 0xffffffff) << 2);
        iVar11 = *(int *)((int)((uVar16 - 0x24 & 0xffffffff) << 2) + (int)piVar20);
        uVar14 = uVar19 + 3;
        lStack_318 = (__int64)(int)(((unsigned int)pbVar21[uVar19 + 1] << (uVar3 & 0x3f)) + iVar11);
        *(float *)((int)afStack_340 + iVar12) = (float)lStack_318 * fVar2;
        lStack_308 = (__int64)(int)(((unsigned int)pbVar21[uVar19 + 2] << (uVar3 & 0x3f)) + iVar11);
        *(float *)((int)afStack_330 + iVar12) = (float)lStack_308 * fVar2;
      }
      else {
        iVar11 = (int)((uVar16 - 0x29 & 0xffffffff) << 2);
        uVar14 = uVar19 + 7;
        lStack_2a8 = (__int64)
                     (int)(((unsigned int)pbVar21[uVar19 + 2] + (unsigned int)pbVar21[uVar19 + 1] * 0x100) * 0x100 +
                          (unsigned int)pbVar21[uVar19 + 3]);
        *(float *)((int)afStack_340 + iVar11) = (float)lStack_2a8 * fVar2;
        lStack_2d0 = (__int64)
                     (int)(((unsigned int)pbVar21[uVar19 + 5] + (unsigned int)pbVar21[uVar19 + 4] * 0x100) * 0x100 +
                          (unsigned int)pbVar21[uVar19 + 6]);
        *(float *)((int)afStack_330 + iVar11) = (float)lStack_2d0 * fVar2;
      }
      uVar19 = uVar14;
      bVar1 = pbVar21[uVar14];
    }
    piVar20 = param_1 + 8;{ V16 _vt0 = vectorAddFloatingPoint(in_vs44,in_vs32); memcpy(auVar24, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs32,in_vs44); memcpy(auVar25, &_vt1, 16); }{ V16 _vt2 = vectorSubtractFloatingPoint(auVar24,in_vs42); memcpy(auVar24, &_vt2, 16); }{ V16 _vt3 = vectorLogicalAnd(auVar24,in_vs45); memcpy(auVar24, &_vt3, 16); }{ V16 _vt4 = vectorMinimumFloatingPoint(auVar24,auVar25); memcpy(auVar23, &_vt4, 16); }
    vectorSubtractFloatingPoint(auVar23,auVar24);
    uVar26 = storeVectorElementWordIndexed(in_vs38,0,uVar10 - 0x344);
    *(unsigned int *)(uVar10 - 0x344) = uVar26;
    fVar2 = (float)param_1[0xf] * (float)param_1[0xf];
    if (fStack_344 <= fVar2) {{ V16 _vt5 = vectorAddFloatingPoint(auVar24,auVar25); memcpy(auVar24, &_vt5, 16); }
      uVar26 = storeVectorElementWordIndexed(auVar25,0,uVar10 - 0x348);
      *(unsigned int *)(uVar10 - 0x348) = uVar26;
      if (fVar2 <= fStack_348) {
        iVar11 = 2;
      }
      else {
        fn_82DE1848(piVar20,param_2,pbVar6);
        fn_82DE1320(piVar20,param_2,pbVar6);
        iVar11 = 1;
      }
    }
    else {
      iVar11 = 0;
    }{ V16 _vt6 = vectorAddFloatingPoint(auVar24,auVar25); memcpy(auVar23, &_vt6, 16); }{ V16 _vt7 = vectorSubtractFloatingPoint(auVar25,auVar24); memcpy(in_vs44, &_vt7, 16); }{ V16 _vt8 = vectorSubtractFloatingPoint(auVar23,in_vs42); memcpy(auVar24, &_vt8, 16); }{ V16 _vt9 = vectorLogicalAnd(auVar24,in_vs45); memcpy(in_vs32, &_vt9, 16); }{ V16 _vt10 = vectorMinimumFloatingPoint(in_vs32,in_vs44); memcpy(auVar24, &_vt10, 16); }
    vectorSubtractFloatingPoint(auVar24,in_vs32);
    uVar26 = storeVectorElementWordIndexed(in_vs38,0,uVar10 - 0x34c);
    *(unsigned int *)(uVar10 - 0x34c) = uVar26;
    fVar2 = (float)param_1[0xf] * (float)param_1[0xf];
    if (fStack_34c <= fVar2) {{ V16 _vt11 = vectorAddFloatingPoint(in_vs32,in_vs44); memcpy(in_vs32, &_vt11, 16); }
      uVar26 = storeVectorElementWordIndexed(in_vs45,0,uVar10 - 0x358);
      *(unsigned int *)(uVar10 - 0x358) = uVar26;
      if (fVar2 <= fStack_358) {
        iVar12 = 2;
      }
      else {
        fn_82DE1848(piVar20,param_2,param_3);
        fn_82DE1320(piVar20,param_2,param_3);
        iVar12 = 1;
      }
    }
    else {
      iVar12 = 0;
    }
    if (iVar11 == 2) {
      if (iVar12 == 2) {
        fn_82DD14E8(param_1,param_2,pbVar6,uVar10 - 0x340);
      }
      else {
        iVar11 = (int)in_r0;
        puVar4 = (unsigned int *)((int)afStack_340 + iVar11 & 0xfffffff0);
        uVar26 = puVar4[1];
        uVar27 = puVar4[2];
        uVar28 = puVar4[3];
        puVar5 = (unsigned int *)((int)afStack_330 + iVar11 & 0xfffffff0);
        uVar29 = *puVar5;
        uVar30 = puVar5[1];
        uVar31 = puVar5[2];
        uVar32 = puVar5[3];
        puVar5 = (unsigned int *)(iVar11 + param_4 & 0xfffffff0);
        *puVar5 = *puVar4;
        puVar5[1] = uVar26;
        puVar5[2] = uVar27;
        puVar5[3] = uVar28;
        puVar4 = (unsigned int *)(iVar11 + param_4 + 0x10 & 0xfffffff0);
        *puVar4 = uVar29;
        puVar4[1] = uVar30;
        puVar4[2] = uVar31;
        puVar4[3] = uVar32;
        param_3 = pbVar6;
      }
    }
    else if (iVar12 != 2) {
      return;
    }
    goto LAB_82dd1528;
  case 0x26:
  case 0x27:
  case 0x28:
    iVar11 = (int)((uVar16 - 0x24 & 0xffffffff) << 2);
    uVar13 = uVar16 - 0x22;
    lStack_2d8 = (__int64)
                 (int)(((unsigned int)param_3[1] << (piVar20[5] & 0x3fU)) + *(int *)(iVar11 + (int)piVar20))
    ;
    *(float *)((int)((uVar16 - 0x26 & 0xffffffff) << 2) + param_4) =
         (float)lStack_2d8 * (float)param_1[4];
    pbVar21 = param_3 + 3;
    lVar17 = (__int64)
             (int)(((unsigned int)param_3[2] << (piVar20[5] & 0x3fU)) + *(int *)(iVar11 + (int)piVar20));
    lStack_2c8 = lVar17;
    goto LAB_82dd1e58;
  case 0x29:
  case 0x2a:
  case 0x2b:
    uVar13 = uVar16 - 0x25;
    lStack_2f8 = (__int64)
                 (int)(((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3]);
    *(float *)((int)((uVar16 - 0x29 & 0xffffffff) << 2) + param_4) =
         (float)lStack_2f8 * (float)param_1[4];
    pbVar21 = param_3 + 7;
    lVar17 = (__int64)
             (int)(((unsigned int)param_3[5] + (unsigned int)param_3[4] * 0x100) * 0x100 + (unsigned int)param_3[6]);
    lStack_2e8 = lVar17;
LAB_82dd1e58:
    *(float *)((int)((uVar13 & 0xffffffff) << 2) + param_4) = (float)lVar17 * (float)param_1[4];
    param_3 = pbVar21;
    if ((*pbVar21 < 0x26) || (0x2b < *pbVar21)) {{ V16 _vt12 = vectorAddFloatingPoint(in_vs45,in_vs44); memcpy(auVar24, &_vt12, 16); }{ V16 _vt13 = vectorSubtractFloatingPoint(in_vs44,in_vs45); memcpy(in_vs45, &_vt13, 16); }{ V16 _vt14 = vectorSubtractFloatingPoint(auVar24,in_vs42); memcpy(auVar24, &_vt14, 16); }{ V16 _vt15 = vectorLogicalAnd(auVar24,in_vs32); memcpy(auVar24, &_vt15, 16); }{ V16 _vt16 = vectorMinimumFloatingPoint(auVar24,in_vs45); memcpy(auVar23, &_vt16, 16); }
      vectorSubtractFloatingPoint(auVar23,auVar24);
      uVar26 = storeVectorElementWordIndexed(in_vs38,0,uVar10 - 0x354);
      *(unsigned int *)(uVar10 - 0x354) = uVar26;
      fVar2 = (float)param_1[0xf] * (float)param_1[0xf];
      if (fVar2 < fStack_354) {
        return;
      }{ V16 _vt17 = vectorAddFloatingPoint(auVar24,in_vs45); memcpy(in_vs32, &_vt17, 16); }
      uVar26 = storeVectorElementWordIndexed(in_vs45,0,uVar10 - 0x350);
      *(unsigned int *)(uVar10 - 0x350) = uVar26;
      if (fStack_350 < fVar2) {
        fn_82DE1848(param_1 + 8,param_2,pbVar21);
        fn_82DE1320(param_1 + 8,param_2,pbVar21);
        return;
      }
    }
    goto LAB_82dd1528;
  default:
    uVar19 = bVar1 - 0x30;
    break;
  case 0x50:
    uVar19 = (unsigned int)param_3[1];
    break;
  case 0x51:
    uVar19 = (unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2];
    break;
  case 0x52:
    uVar19 = ((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3];
    break;
  case 0x53:
    uVar19 = (((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3]) * 0x100 +
             (unsigned int)param_3[4];
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar21 = param_3 + 1;
    param_3 = param_3 + 2;
    *(unsigned int *)((int)auStack_36c + (int)((uVar16 - 0x60 & 0xffffffff) << 2)) = (unsigned int)*pbVar21;
    goto LAB_82dd214c;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    pbVar21 = param_3 + 1;
    pbVar6 = param_3 + 2;
    param_3 = param_3 + 3;
    *(unsigned int *)((int)auStack_36c + (int)((uVar16 - 100 & 0xffffffff) << 2)) =
         (unsigned int)*pbVar21 * 0x100 + (unsigned int)*pbVar6;
    goto LAB_82dd214c;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    pbVar21 = param_3 + 1;
    pbVar6 = param_3 + 2;
    pbVar7 = param_3 + 3;
    pbVar8 = param_3 + 4;
    param_3 = param_3 + 5;
    *(unsigned int *)((int)auStack_36c + (int)((uVar16 - 0x68 & 0xffffffff) << 2)) =
         (((unsigned int)*pbVar21 * 0x100 + (unsigned int)*pbVar6) * 0x100 + (unsigned int)*pbVar7) * 0x100 + (unsigned int)*pbVar8;
LAB_82dd214c:
    if ((param_2 & 0xffffffff) != (uVar10 - 0x370 & 0xffffffff)) {
      lVar15 = uVar10 - 0x374;
      lVar17 = param_2 - 4;
      lVar22 = 6;
      do {
        lVar17 = lVar17 + 4;
        lVar15 = lVar15 + 4;
        *(unsigned int *)lVar15 = *(unsigned int *)lVar17;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      param_2 = uVar10 - 0x370;
    }
    goto LAB_82dd1528;
  }
  iVar11 = *piVar20;
  param_1 = (int *)*param_1;
  iVar12 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    fn_82CE63B0(*(unsigned int *)(iVar12 + 0x10),param_1,4);
  }
  iVar12 = param_1[1];
  param_1[1] = iVar12 + 1;
  *(unsigned int *)(iVar12 * 4 + *param_1) = iVar11 + uVar19;
switchD_82dd1548_caseD_0:
  return;
}

