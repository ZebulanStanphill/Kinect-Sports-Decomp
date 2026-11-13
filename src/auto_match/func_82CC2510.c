#define true 1
extern int fn_82CC1AA8();
extern int fn_82F65D50();
extern int memcpy();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;


void fn_82CC2510(unsigned __int64 param_1, int param_2, unsigned __int64 param_3, unsigned int param_4, __int64 param_5, __int64 param_6, unsigned int param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned char uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned char *puVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  int iVar21;
  unsigned __int64 uVar22;
  __int64 lVar23;
  int iVar24;
  unsigned __int64 uVar25;
  int iVar26;
  __int64 lVar27;
  __int64 lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;





  
  lVar9 = fn_82F6A538();
  iVar4 = (int)lVar9;
  dVar32 = (double)(__int64)in_stack_00000074 * lbl_82110F70;
  dVar36 = (double)(__int64)in_stack_0000006c;
  dVar31 = (double)(__int64)(iVar4 + -1) - dVar32;
  iVar3 = iVar4 >> 1;
  lVar20 = (__int64)iVar3;
  uVar11 = (unsigned int)((dVar31 - dVar32) - dVar36 * lbl_82110F78);
  uVar18 = (unsigned __int64)uVar11;
  uVar1 = (unsigned int)((dVar31 - dVar32) + dVar36 * lbl_82110F78);
  uVar19 = (unsigned __int64)uVar1;
  if ((int)uVar11 < 0) {
    uVar18 = uVar18 - 1;
  }
  if ((int)uVar1 < 0) {
    uVar19 = uVar19 - 1;
  }
  uVar22 = (unsigned __int64)in_stack_00000054;
  lVar28 = 0;
  dVar37 = lbl_82110F70;
  if (0 < param_2) {
    lVar27 = 0;
    lVar23 = lVar9 - uVar19;
    uVar25 = uVar22;
    do {
      lVar14 = uVar18 + 1 + lVar28;
      if (iVar4 < (int)lVar14) {
        lVar14 = lVar9;
      }
      if (0 < (int)lVar14) {
        memcpy(uVar25,(param_3 - uVar22) + uVar25,lVar14);
      }
      lVar14 = lVar9;
      if ((int)lVar23 <= iVar4) {
        lVar14 = lVar23;
      }
      if (0 < (int)lVar14) {
        uVar15 = lVar28 + uVar19;
        lVar14 = ((((uVar15 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar15 == 0) & uVar15) +
                 lVar27;
        memcpy(lVar14 + uVar22,lVar14 + param_6);
      }
      lVar28 = lVar28 + 1;
      lVar23 = lVar23 + -1;
      lVar27 = lVar27 + lVar9;
      uVar25 = uVar25 + lVar9;
    } while ((int)lVar28 < param_2);
  }
  uVar22 = (unsigned __int64)in_stack_0000005c;
  iVar26 = 0;
  iVar21 = (int)uVar19;
  if (0 < param_2) {
    uVar25 = uVar19;
    do {
      lVar28 = (__int64)(((int)uVar18 - iVar21) + (int)uVar25 >> 1) + 1;
      if (iVar3 <= (int)lVar28) {
        lVar28 = lVar20;
      }
      if (0 < (int)lVar28) {
        lVar23 = (__int64)(iVar26 >> 1) * (__int64)iVar3;
        memcpy(lVar23 + uVar22,lVar23 + (unsigned __int64)param_4,lVar28);
        memcpy(lVar23 + (unsigned __int64)in_stack_00000064,lVar23 + param_5,lVar28);
      }
      uVar11 = (int)uVar25 >> 1;
      uVar15 = (unsigned __int64)(int)uVar11;
      lVar28 = lVar20 - uVar15;
      if (iVar3 <= (int)(lVar20 - uVar15)) {
        lVar28 = lVar20;
      }
      if (0 < (int)lVar28) {
        lVar23 = (__int64)(iVar26 >> 1) * (__int64)iVar3 +
                 (((unsigned __int64)(uVar11 >> 0x1f) - 1) + (unsigned __int64)(uVar15 == 0) & uVar15);
        memcpy(lVar23 + uVar22,lVar23 + (unsigned __int64)param_7,lVar28);
        memcpy(lVar23 + (unsigned __int64)in_stack_00000064,lVar23 + param_8,lVar28);
      }
      iVar26 = iVar26 + 2;
      uVar25 = uVar25 + 2;
    } while (iVar26 < param_2);
  }
  in_stack_00000054 = in_stack_00000054 - (int)param_3;
  uVar11 = (int)param_6 - (int)param_3;
  lVar28 = lVar20 + 1;
  uVar15 = -(unsigned __int64)(uVar18 + 1 < 0xffffffff80000000) & uVar18 + 1;
  uVar25 = param_3;
  dVar30 = lbl_82110F68;
  dVar33 = lbl_82005730;
  while( true ) {
    iVar26 = iVar21;
    if (iVar4 <= iVar21) {
      iVar26 = iVar4;
    }
    iVar24 = (int)uVar15;
    if (iVar26 <= iVar24) break;
    dVar34 = (((double)(__int64)iVar24 - dVar31) + dVar32) * dVar37;
    dVar29 = (double)fn_82F65D50(dVar34 / dVar36);
    uVar1 = (unsigned int)((dVar29 * dVar36 - dVar34) * dVar37 + dVar33);
    iVar26 = (int)(((dVar30 - dVar29) * dVar36 - dVar34) * dVar37 + dVar33);
    lVar23 = uVar15 + uVar25;
    fn_82CC1AA8(dVar34,lVar23 + (unsigned __int64)in_stack_00000054,
                  (__int64)(1 - iVar4) * (__int64)(int)uVar1 + uVar15 + uVar25,
                  (__int64)(1 - iVar4) * (__int64)iVar26 + uVar15 + uVar25,lVar23,
                  lVar23 + (unsigned __int64)uVar11,lVar9 + 1,lVar9 - (unsigned __int64)uVar1,(unsigned __int64)uVar1);
    if ((uVar15 & 1) == 0) {
      lVar14 = (__int64)(iVar24 >> 1);
      iVar26 = iVar26 >> 1;
      lVar23 = (__int64)(1 - iVar3) * (__int64)iVar26 + lVar14;
      uVar25 = (unsigned __int64)param_4;
      lVar27 = (__int64)(1 - iVar3) * (__int64)((int)uVar1 >> 1) + lVar14;
      fn_82CC1AA8(dVar34,lVar14 + uVar22,lVar27 + uVar25,lVar23 + uVar25,lVar14 + uVar25,
                    lVar14 + (unsigned __int64)param_7,lVar28,lVar20 - iVar26,(int)uVar1 >> 1);
      fn_82CC1AA8(dVar34,lVar14 + (unsigned __int64)in_stack_00000064,lVar27 + param_5,lVar23 + param_5,
                    lVar14 + param_5,lVar14 + (param_8 & 0xffffffff),lVar28);
      uVar25 = param_3 & 0xffffffff;
    }
    uVar15 = uVar15 + 1;
  }
  uVar19 = 1 - uVar19;
  if ((int)uVar19 < 2) {
    uVar19 = 1;
  }
  param_3 = param_3 & 0xffffffff;
  lVar20 = (__int64)(int)uVar19 * (__int64)iVar4;
  lVar23 = lVar20 + param_3;
  iVar21 = -(int)uVar18;
  dVar29 = lbl_82005710;
  do {
    iVar26 = iVar21;
    if (param_2 <= iVar21) {
      iVar26 = param_2;
    }
    iVar24 = (int)uVar19;
    if (iVar26 <= iVar24) {
      fn_82F6A584();
      return;
    }
    dVar35 = (dVar32 - ((double)(__int64)iVar24 + dVar31)) * dVar37;
    dVar34 = (double)fn_82F65D50(dVar35 / dVar36);
    uVar1 = (unsigned int)((dVar34 * dVar36 - dVar35) * dVar37 + dVar33);
    uVar18 = (unsigned __int64)uVar1;
    uVar2 = (unsigned int)(((dVar30 - dVar34) * dVar36 - dVar35) * dVar37 + dVar33);
    lVar27 = -(unsigned __int64)uVar2;
    fn_82CC1AA8(dVar35,lVar23 + (unsigned __int64)in_stack_00000054,
                  (__int64)(int)-uVar18 * (__int64)iVar4 + lVar20 + uVar18 + param_3,
                  (__int64)(int)lVar27 * (__int64)iVar4 + lVar20 + (unsigned __int64)uVar2 + param_3,
                  lVar23,lVar23 + (unsigned __int64)uVar11,lVar9 + 1,(unsigned __int64)uVar11,uVar18 - uVar19);
    if ((uVar19 & 1) == 0) {
      lVar14 = (__int64)(iVar24 >> 1) * (__int64)iVar3;
      iVar26 = 0;
      if (0 < iVar4) {
        lVar13 = (__int64)((int)uVar1 >> 1) * (__int64)(1 - iVar3) + lVar14 + param_5;
        lVar27 = lVar27 + uVar18;
        lVar10 = -uVar18 + uVar19;
        iVar8 = (int)param_5;
        iVar6 = param_4 - iVar8;
        lVar16 = lVar14 + uVar22;
        lVar14 = (__int64)((int)uVar2 >> 1) * (__int64)(1 - iVar3) + lVar14 + param_5;
        iVar7 = iVar8 - in_stack_0000005c;
        do {
          iVar5 = (int)uVar18;
          if (param_2 <= (int)((iVar24 - uVar1) + iVar5)) break;
          puVar17 = (unsigned char *)lVar16;
          if (((int)((uVar2 - uVar1) + iVar5) < iVar4) && (-1 < lVar27 + lVar10)) {
            *puVar17 = ((unsigned char *)lVar14)[iVar6];
            uVar12 = *(unsigned char *)lVar14;
          }
          else if ((iVar5 < iVar4) && (-1 < (int)lVar10)) {
            if (dVar35 < dVar29) {
              *puVar17 = puVar17[iVar6 + iVar7];
              uVar12 = puVar17[iVar7];
            }
            else {
              *puVar17 = ((unsigned char *)lVar13)[iVar6];
              uVar12 = *(unsigned char *)lVar13;
            }
          }
          else {
            *puVar17 = puVar17[iVar7 + (param_7 - iVar8)];
            uVar12 = puVar17[(int)param_8 - in_stack_0000005c];
          }
          iVar26 = iVar26 + 2;
          puVar17[in_stack_00000064 - in_stack_0000005c] = uVar12;
          lVar16 = lVar16 + lVar28;
          lVar13 = lVar13 + lVar28;
          lVar14 = lVar14 + lVar28;
          uVar18 = uVar18 + 2;
          lVar10 = lVar10 + 2;
        } while (iVar26 < iVar4);
      }
    }
    uVar19 = uVar19 + 1;
    lVar20 = lVar20 + lVar9;
    lVar23 = lVar23 + lVar9;
  } while( true );
}

