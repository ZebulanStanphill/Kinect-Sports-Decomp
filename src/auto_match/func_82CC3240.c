#define true 1
extern int fn_82CC1AA8();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;


void fn_82CC3240(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                  __int64 param_5,__int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned char uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned char *puVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iVar19;
  int iVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  int iVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  int iVar26;
  __int64 lVar27;
  __int64 lVar28;
  __int64 lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar8 = fn_82F6A538();
  iVar4 = (int)param_2;
  dVar33 = (double)(__int64)in_stack_00000074 * lbl_82110F70;
  dVar37 = (double)(__int64)in_stack_0000006c;
  dVar32 = (double)(__int64)(iVar4 + -1) - dVar33;
  iVar19 = (int)lVar8;
  iVar3 = iVar19 >> 1;
  lVar18 = (__int64)iVar3;
  uVar10 = (unsigned int)((dVar33 - dVar32) - dVar37 * lbl_82110F78);
  uVar16 = (unsigned __int64)uVar10;
  uVar1 = (unsigned int)((dVar33 - dVar32) + dVar37 * lbl_82110F78);
  uVar17 = (unsigned __int64)uVar1;
  if ((int)uVar10 < 0) {
    uVar16 = uVar16 - 1;
  }
  if ((int)uVar1 < 0) {
    uVar17 = uVar17 - 1;
  }
  uVar21 = (unsigned __int64)in_stack_00000054;
  lVar28 = 0;
  dVar38 = lbl_82110F70;
  if (0 < iVar4) {
    lVar27 = 0;
    lVar24 = lVar8 - uVar17;
    uVar25 = uVar21;
    do {
      lVar12 = uVar16 + 1 + lVar28;
      if (iVar19 < (int)lVar12) {
        lVar12 = lVar8;
      }
      if (0 < (int)lVar12) {
        fn_82F68CC0(uVar25,(param_6 - uVar21) + uVar25,lVar12);
      }
      lVar12 = lVar8;
      if ((int)lVar24 <= iVar19) {
        lVar12 = lVar24;
      }
      if (0 < (int)lVar12) {
        uVar13 = lVar28 + uVar17;
        lVar12 = ((((uVar13 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar13 == 0) & uVar13) +
                 lVar27;
        fn_82F68CC0(lVar12 + uVar21,lVar12 + param_3);
      }
      lVar28 = lVar28 + 1;
      lVar24 = lVar24 + -1;
      lVar27 = lVar27 + lVar8;
      uVar25 = uVar25 + lVar8;
    } while ((int)lVar28 < iVar4);
  }
  uVar21 = (unsigned __int64)in_stack_0000005c;
  iVar26 = 0;
  iVar20 = (int)uVar17;
  if (0 < iVar4) {
    uVar25 = uVar17;
    do {
      lVar28 = (__int64)(((int)uVar16 - iVar20) + (int)uVar25 >> 1) + 1;
      if (iVar3 <= (int)lVar28) {
        lVar28 = lVar18;
      }
      if (0 < (int)lVar28) {
        lVar24 = (__int64)(iVar26 >> 1) * (__int64)iVar3;
        fn_82F68CC0(lVar24 + uVar21,lVar24 + (unsigned __int64)param_7,lVar28);
        fn_82F68CC0(lVar24 + (unsigned __int64)in_stack_00000064,lVar24 + param_8,lVar28);
      }
      uVar10 = (int)uVar25 >> 1;
      uVar13 = (unsigned __int64)(int)uVar10;
      lVar28 = lVar18 - uVar13;
      if (iVar3 <= (int)(lVar18 - uVar13)) {
        lVar28 = lVar18;
      }
      if (0 < (int)lVar28) {
        lVar24 = (__int64)(iVar26 >> 1) * (__int64)iVar3 +
                 (((unsigned __int64)(uVar10 >> 0x1f) - 1) + (unsigned __int64)(uVar13 == 0) & uVar13);
        fn_82F68CC0(lVar24 + uVar21,lVar24 + (unsigned __int64)param_4,lVar28);
        fn_82F68CC0(lVar24 + (unsigned __int64)in_stack_00000064,lVar24 + param_5,lVar28);
      }
      iVar26 = iVar26 + 2;
      uVar25 = uVar25 + 2;
    } while (iVar26 < iVar4);
  }
  in_stack_00000054 = in_stack_00000054 - (int)param_3;
  uVar10 = (int)param_6 - (int)param_3;
  lVar28 = lVar18 + 1;
  uVar13 = -(unsigned __int64)(uVar16 + 1 < 0xffffffff80000000) & uVar16 + 1;
  uVar25 = param_3;
  dVar31 = lbl_82110F68;
  dVar34 = lbl_82005730;
  while( true ) {
    iVar26 = iVar20;
    if (iVar19 <= iVar20) {
      iVar26 = iVar19;
    }
    iVar23 = (int)uVar13;
    if (iVar26 <= iVar23) break;
    dVar35 = ((dVar33 - (double)(__int64)iVar23) - dVar32) * dVar38;
    dVar30 = (double)fn_82F65D50(dVar35 / dVar37);
    uVar1 = (unsigned int)((dVar30 * dVar37 - dVar35) * dVar38 + dVar34);
    lVar12 = -(unsigned __int64)uVar1;
    uVar2 = (unsigned int)(((dVar31 - dVar30) * dVar37 - dVar35) * dVar38 + dVar34);
    lVar27 = -(unsigned __int64)uVar2;
    lVar24 = uVar13 + uVar25;
    fn_82CC1AA8(dVar35,lVar24 + (unsigned __int64)in_stack_00000054,
                  (__int64)(int)uVar1 * (__int64)iVar19 + lVar12 + uVar13 + uVar25,
                  (__int64)(int)uVar2 * (__int64)iVar19 + lVar27 + uVar13 + uVar25,lVar24,
                  lVar24 + (unsigned __int64)uVar10,lVar8 + 1,lVar12 + (param_2 & 0xffffffff),
                  -(lVar12 + uVar13));
    if ((uVar13 & 1) == 0) {
      lVar29 = (__int64)(iVar23 >> 1);
      iVar26 = (int)lVar12 >> 1;
      lVar27 = (__int64)(1 - iVar3) * (__int64)((int)lVar27 >> 1) + lVar29;
      uVar25 = (unsigned __int64)param_4;
      lVar12 = (__int64)(1 - iVar3) * (__int64)iVar26 + lVar29;
      lVar24 = lVar18 - lVar29;
      if (iVar4 >> 1 <= (int)(lVar18 - lVar29)) {
        lVar24 = (__int64)(iVar4 >> 1);
      }
      lVar22 = -(iVar26 + lVar29);
      fn_82CC1AA8(dVar35,lVar29 + uVar21,lVar12 + uVar25,lVar27 + uVar25,lVar29 + uVar25,
                    lVar29 + (unsigned __int64)param_7,lVar28,lVar24,lVar22);
      fn_82CC1AA8(dVar35,lVar29 + (unsigned __int64)in_stack_00000064,lVar12 + param_5,lVar27 + param_5,
                    lVar29 + param_5,lVar29 + (param_8 & 0xffffffff),lVar28,param_8 & 0xffffffff,
                    lVar22);
      uVar25 = param_3 & 0xffffffff;
    }
    uVar13 = uVar13 + 1;
  }
  uVar17 = 1 - uVar17;
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  iVar20 = -(int)uVar16;
  param_3 = param_3 & 0xffffffff;
  lVar18 = (__int64)(int)uVar17 * (__int64)iVar19;
  lVar24 = lVar18 + param_3;
  dVar30 = lbl_82005710;
  do {
    iVar26 = iVar20;
    if (iVar4 <= iVar20) {
      iVar26 = iVar4;
    }
    iVar23 = (int)uVar17;
    if (iVar26 <= iVar23) {
      fn_82F6A584();
      return;
    }
    dVar36 = (((double)(__int64)iVar23 + dVar33) - dVar32) * dVar38;
    dVar35 = (double)fn_82F65D50(dVar36 / dVar37);
    uVar1 = (unsigned int)((dVar35 * dVar37 - dVar36) * dVar38 + dVar34);
    uVar2 = (unsigned int)(((dVar31 - dVar35) * dVar37 - dVar36) * dVar38 + dVar34);
    uVar16 = (unsigned __int64)uVar1;
    lVar27 = -uVar16;
    lVar12 = -(unsigned __int64)uVar2;
    fn_82CC1AA8(dVar36,lVar24 + (unsigned __int64)in_stack_00000054,
                  (__int64)(int)uVar1 * (__int64)iVar19 + lVar18 + lVar27 + param_3,
                  (__int64)(int)uVar2 * (__int64)iVar19 + lVar18 + lVar12 + param_3,lVar24,
                  lVar24 + (unsigned __int64)uVar10,lVar8 + 1,(lVar12 - uVar17) + (param_2 & 0xffffffff),
                  uVar16);
    if ((uVar17 & 1) == 0) {
      lVar29 = (__int64)(iVar23 >> 1) * (__int64)iVar3;
      iVar26 = 0;
      if (0 < iVar19) {
        iVar7 = (int)param_5;
        iVar5 = param_4 - iVar7;
        lVar14 = lVar29 + uVar21;
        lVar22 = uVar16 + uVar17;
        lVar11 = (__int64)((int)uVar1 >> 1) * (__int64)iVar3 + (__int64)((int)lVar27 >> 1) +
                 lVar29 + param_5;
        lVar29 = (__int64)((int)uVar2 >> 1) * (__int64)iVar3 + (__int64)((int)lVar12 >> 1) +
                 lVar29 + param_5;
        iVar6 = iVar7 - in_stack_0000005c;
        do {
          if (iVar4 <= (int)(iVar23 + uVar1 + (int)lVar27)) break;
          puVar15 = (unsigned char *)lVar14;
          if (((__int64)(lVar12 + uVar16 + lVar27) < 0) ||
             (iVar4 <= (int)((uVar2 - uVar1) + (int)lVar22))) {
            if (((int)lVar27 < 0) || (iVar4 <= (int)lVar22)) {
              *puVar15 = puVar15[iVar6 + (param_7 - iVar7)];
              uVar9 = puVar15[(int)param_8 - in_stack_0000005c];
            }
            else if (dVar36 < dVar30) {
              *puVar15 = puVar15[iVar5 + iVar6];
              uVar9 = puVar15[iVar6];
            }
            else {
              *puVar15 = ((unsigned char *)lVar11)[iVar5];
              uVar9 = *(unsigned char *)lVar11;
            }
          }
          else {
            *puVar15 = ((unsigned char *)lVar29)[iVar5];
            uVar9 = *(unsigned char *)lVar29;
          }
          iVar26 = iVar26 + 2;
          puVar15[in_stack_00000064 - in_stack_0000005c] = uVar9;
          lVar14 = lVar14 + lVar28;
          lVar11 = lVar11 + lVar28;
          lVar29 = lVar29 + lVar28;
          lVar27 = lVar27 + 2;
          lVar22 = lVar22 + 2;
        } while (iVar26 < iVar19);
      }
    }
    uVar17 = uVar17 + 1;
    lVar18 = lVar18 + lVar8;
    lVar24 = lVar24 + lVar8;
  } while( true );
}

