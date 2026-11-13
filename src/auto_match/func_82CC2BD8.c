#define true 1
extern int fn_82CC1AA8();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int lbl_82110F70;
extern unsigned int lbl_82110F78;
extern unsigned int lbl_82110F80;


void fn_82CC2BD8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5,unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar12;
  __int64 lVar15;
  int iVar16;
  int iVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar4 = fn_82F6A53C();
  dVar28 = (double)(__int64)in_stack_0000006c;
  iVar5 = (int)param_2;
  uVar10 = (unsigned __int64)in_stack_00000054;
  uVar8 = (unsigned int)lVar4;
  iVar3 = (int)uVar8 >> 1;
  lVar9 = (__int64)iVar3;
  dVar25 = (double)(__int64)in_stack_00000074 * lbl_82110F70;
  uVar1 = (unsigned int)(dVar25 * lbl_82002C40 - dVar28 * lbl_82110F78);
  uVar2 = (unsigned int)(dVar25 * lbl_82002C40 + dVar28 * lbl_82110F78);
  dVar26 = lbl_82110F70;
  if (0 < iVar5) {
    lVar15 = lVar4 - (unsigned __int64)uVar2;
    lVar18 = (unsigned __int64)uVar1 + 1;
    uVar11 = param_2;
    uVar19 = uVar10;
    do {
      lVar6 = lVar18;
      if ((int)uVar8 <= (int)lVar18) {
        lVar6 = lVar4;
      }
      if (0 < (int)lVar6) {
        fn_82F68CC0(uVar19,uVar19 + (param_6 - uVar10));
      }
      lVar6 = lVar15;
      if ((int)uVar8 <= (int)lVar15) {
        lVar6 = lVar4;
      }
      if (0 < (int)lVar6) {
        lVar6 = (uVar19 - lVar6) + (lVar4 - uVar10);
        fn_82F68CC0(lVar6 + uVar10,lVar6 + param_3);
      }
      uVar11 = uVar11 - 1;
      lVar18 = lVar18 + -1;
      uVar19 = uVar19 + lVar4;
      lVar15 = lVar15 + 1;
    } while (uVar11 != 0);
    param_2 = param_2 & 0xffffffff;
  }
  iVar7 = 0;
  if (0 < (int)param_2) {
    uVar13 = uVar2;
    do {
      lVar15 = (__int64)((int)((uVar1 - uVar2) + uVar13) >> 1) + 1;
      if (iVar3 <= (int)lVar15) {
        lVar15 = lVar9;
      }
      if (0 < (int)lVar15) {
        lVar18 = (__int64)(iVar7 >> 1) * (__int64)iVar3;
        fn_82F68CC0(lVar18 + (unsigned __int64)in_stack_0000005c,lVar18 + (unsigned __int64)param_7,lVar15);
        fn_82F68CC0(lVar18 + (unsigned __int64)in_stack_00000064,lVar18 + param_8);
      }
      lVar15 = lVar9 - ((int)uVar13 >> 1);
      if (iVar3 <= (int)lVar15) {
        lVar15 = lVar9;
      }
      if (0 < (int)lVar15) {
        lVar18 = (__int64)((iVar7 >> 1) + 1) * (__int64)iVar3 - lVar15;
        fn_82F68CC0(lVar18 + (unsigned __int64)in_stack_0000005c,lVar18 + param_4,lVar15);
        fn_82F68CC0(lVar18 + (unsigned __int64)in_stack_00000064,lVar18 + param_5);
      }
      iVar7 = iVar7 + 2;
      uVar13 = uVar13 - 2;
    } while (iVar7 < iVar5);
  }
  lVar15 = lVar4 + -1;
  uVar19 = -(unsigned __int64)((unsigned __int64)uVar1 + 1 < 0xffffffff80000000) & (unsigned __int64)uVar1 + 1;
  lVar9 = lVar9 + -1;
  uVar11 = param_3;
  dVar22 = lbl_82110F68;
  dVar23 = lbl_82110F80;
  dVar24 = lbl_82005730;
  while( true ) {
    uVar13 = uVar2;
    if ((int)uVar8 <= (int)uVar2) {
      uVar13 = uVar8;
    }
    iVar7 = (int)uVar19;
    if ((int)uVar13 <= iVar7) break;
    dVar27 = (((double)(__int64)iVar7 - dVar25) - dVar25) * dVar23;
    dVar21 = (double)fn_82F65D50(dVar27 / dVar28);
    lVar18 = uVar19 + uVar11;
    iVar17 = (int)((dVar21 * dVar28 - dVar27) * dVar26 + dVar24);
    iVar16 = -iVar17;
    lVar6 = -(unsigned __int64)(unsigned int)(int)(((dVar22 - dVar21) * dVar28 - dVar27) * dVar26 + dVar24);
    iVar14 = (int)lVar6;
    fn_82CC1AA8(dVar27,lVar18 + (uVar10 - param_3),
                  (__int64)(int)(uVar8 + 1) * (__int64)iVar16 + uVar19 + uVar11,
                  (__int64)(int)(uVar8 + 1) * (__int64)iVar14 + uVar19 + uVar11,lVar18,
                  lVar18 + ((param_6 & 0xffffffff) - param_3),lVar15,lVar6 + uVar19 + 1,iVar17);
    if ((uVar19 & 1) == 0) {
      lVar20 = (__int64)(iVar7 >> 1);
      iVar16 = iVar16 >> 1;
      lVar12 = (__int64)(iVar3 + 1) * (__int64)iVar16 + lVar20;
      lVar6 = (__int64)(iVar3 + 1) * (__int64)(iVar14 >> 1) + lVar20;
      lVar18 = -(__int64)iVar16;
      fn_82CC1AA8(dVar27,lVar20 + (unsigned __int64)in_stack_0000005c,lVar12 + param_4,lVar6 + param_4,
                    lVar20 + param_4,lVar20 + (unsigned __int64)param_7,lVar9,iVar16 + lVar20,lVar18);
      fn_82CC1AA8(dVar27,lVar20 + (unsigned __int64)in_stack_00000064,lVar12 + param_5,lVar6 + param_5,
                    lVar20 + param_5,lVar20 + (param_8 & 0xffffffff),lVar9,param_8 & 0xffffffff,
                    lVar18);
      uVar11 = param_3 & 0xffffffff;
    }
    uVar19 = uVar19 + 1;
  }
  uVar10 = ((unsigned __int64)uVar1 - lVar4) + 2;
  if ((int)uVar10 < 1) {
    uVar10 = 1;
  }
  lVar18 = (__int64)(int)uVar10 * (__int64)(int)uVar8;
  iVar7 = (uVar2 - uVar8) + 2;
  while( true ) {
    iVar17 = iVar5;
    if (iVar7 <= iVar5) {
      iVar17 = iVar7;
    }
    iVar16 = (int)uVar10;
    if (iVar17 <= iVar16) break;
    lVar12 = lVar18 + lVar15;
    dVar27 = (((double)(__int64)((int)lVar15 + iVar16) - dVar25) - dVar25) * dVar23;
    dVar21 = (double)fn_82F65D50(dVar27 / dVar28);
    lVar6 = -(unsigned __int64)(unsigned int)(int)((dVar21 * dVar28 - dVar27) * dVar26 + dVar24);
    iVar14 = -(int)(((dVar22 - dVar21) * dVar28 - dVar27) * dVar26 + dVar24);
    iVar17 = (int)lVar6;
    lVar6 = lVar6 + uVar10;
    fn_82CC1AA8(dVar27,lVar12 + (unsigned __int64)in_stack_00000054,
                  (__int64)(int)(uVar8 + 1) * (__int64)iVar17 + lVar12 + uVar11,
                  (__int64)(int)(uVar8 + 1) * (__int64)iVar14 + lVar12 + uVar11,lVar12 + uVar11,
                  lVar12 + (param_6 & 0xffffffff),lVar15,lVar6,-lVar6);
    if ((uVar10 & 1) != 0) {
      iVar17 = iVar17 >> 1;
      iVar14 = iVar14 >> 1;
      iVar16 = iVar16 + 1 >> 1;
      lVar20 = (__int64)iVar16 * (__int64)iVar3 + (__int64)((int)(uVar8 - 2) >> 1);
      lVar12 = (__int64)(iVar3 + 1) * (__int64)iVar17 + lVar20;
      lVar6 = (__int64)(iVar3 + 1) * (__int64)iVar14 + lVar20;
      fn_82CC1AA8(dVar27,lVar20 + (unsigned __int64)in_stack_0000005c,lVar12 + param_4,lVar6 + param_4,
                    lVar20 + param_4,lVar20 + (unsigned __int64)param_7,lVar9,iVar14,
                    -((__int64)iVar17 + (__int64)iVar16));
      fn_82CC1AA8(dVar27,lVar20 + (unsigned __int64)in_stack_00000064,lVar12 + param_5,lVar6 + param_5,
                    lVar20 + param_5,lVar20 + (param_8 & 0xffffffff),lVar9);
      uVar11 = param_3 & 0xffffffff;
    }
    uVar10 = uVar10 + 1;
    lVar18 = lVar18 + lVar4;
  }
  fn_82F6A588();
  return;
}

