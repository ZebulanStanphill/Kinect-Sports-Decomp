#define true 1
extern int fn_82CC1A78();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;


void fn_82CC1258(unsigned __int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar4 = fn_82F6A540();
  dVar22 = (double)(__int64)in_stack_00000074;
  dVar24 = (double)(__int64)in_stack_0000006c;
  iVar5 = (int)lVar4;
  iVar9 = iVar5 >> 1;
  lVar11 = (__int64)iVar9;
  iVar6 = (int)param_2;
  iVar3 = iVar6 >> 1;
  uVar1 = (unsigned int)(dVar22 - dVar24);
  uVar12 = (unsigned __int64)uVar1;
  uVar2 = (unsigned int)(dVar22 + dVar24);
  if ((dVar22 - dVar24) - (double)(__int64)(int)uVar1 == lbl_82005710) {
    uVar12 = uVar12 - 1;
  }
  uVar10 = (unsigned __int64)in_stack_00000054;
  dVar20 = lbl_82005710;
  if (0 < iVar6) {
    lVar14 = (lVar4 - (unsigned __int64)uVar2) + -1;
    lVar16 = param_2;
    uVar17 = uVar10;
    do {
      lVar8 = uVar12 + 1;
      if (iVar5 <= (int)(uVar12 + 1)) {
        lVar8 = lVar4;
      }
      if (0 < (int)lVar8) {
        fn_82F68CC0(uVar17,(param_6 - uVar10) + uVar17);
      }
      lVar8 = lVar14;
      if (iVar5 <= (int)lVar14) {
        lVar8 = lVar4;
      }
      if (0 < (int)lVar8) {
        lVar8 = ((lVar4 - uVar10) - lVar8) + uVar17;
        fn_82F68CC0(lVar8 + uVar10,lVar8 + param_3);
      }
      lVar16 = lVar16 + -1;
      uVar17 = uVar17 + lVar4;
    } while (lVar16 != 0);
  }
  uVar13 = (unsigned __int64)in_stack_00000064;
  iVar7 = 0;
  uVar17 = (unsigned __int64)in_stack_0000005c;
  if (0 < iVar6) {
    lVar14 = (__int64)((int)uVar12 >> 1) + 1;
    lVar16 = (lVar11 - ((int)uVar2 >> 1)) + -1;
    do {
      lVar8 = lVar14;
      if (iVar9 <= (int)lVar14) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar18 = (__int64)(iVar7 >> 1) * (__int64)iVar9;
        fn_82F68CC0(lVar18 + uVar17,lVar18 + (unsigned __int64)param_7,lVar8);
        fn_82F68CC0(lVar18 + uVar13,lVar18 + (unsigned __int64)param_8,lVar8);
      }
      lVar8 = lVar16;
      if (iVar9 <= (int)lVar16) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar18 = (__int64)((iVar7 >> 1) + 1) * (__int64)iVar9 - lVar8;
        fn_82F68CC0(lVar18 + uVar17,lVar18 + param_4,lVar8);
        fn_82F68CC0(lVar18 + uVar13,lVar18 + param_5,lVar8);
      }
      iVar7 = iVar7 + 2;
    } while (iVar7 < iVar6);
  }
  uVar15 = (unsigned __int64)(__int64)(int)uVar2 >> 0x20;
  uVar12 = -(unsigned __int64)(uVar12 + 1 < 0xffffffff80000000) & uVar12 + 1;
  dVar21 = lbl_82110F68;
  dVar23 = lbl_82005730;
  do {
    iVar9 = uVar2 + 1;
    if (iVar5 <= (int)(uVar2 + 1)) {
      iVar9 = iVar5;
    }
    iVar6 = (int)uVar12;
    if (iVar9 <= iVar6) {
      fn_82F6A58C();
      return;
    }
    dVar25 = dVar22 - (double)(__int64)iVar6;
    dVar19 = (double)fn_82F65D50(dVar25 / dVar24);
    lVar14 = -(unsigned __int64)(unsigned int)(int)((dVar19 * dVar24 - dVar25) + dVar23);
    lVar8 = -(unsigned __int64)(unsigned int)(int)(((dVar21 - dVar19) * dVar24 - dVar25) + dVar23);
    lVar16 = lVar8 + uVar12;
    if (lVar16 < 0) {
      lVar16 = lVar14 + uVar12;
      if (lVar16 < 0) {
        iVar9 = 2;
        lVar16 = (param_6 - uVar10) + uVar12 + uVar10;
      }
      else {
        if (dVar20 < dVar25) {
          iVar7 = (int)lVar14;
          goto LAB_82cc14fc;
        }
        iVar9 = 0;
        lVar16 = (param_3 - param_6) + (param_6 - uVar10) + uVar12 + uVar10;
      }
    }
    else {
      iVar7 = (int)lVar8;
LAB_82cc14fc:
      iVar9 = 1;
      uVar15 = (__int64)(iVar7 >> 1) + (__int64)(iVar6 >> 1);
      lVar16 = lVar16 + param_3;
    }
    fn_82CC1A78(uVar12 + uVar10,lVar16,lVar4,param_2);
    if ((uVar12 & 1) == 0) {
      lVar16 = (__int64)(iVar6 >> 1);
      if (iVar9 == 0) {
        fn_82CC1A78(lVar16 + uVar17,lVar16 + param_4,lVar11,iVar3);
        lVar14 = lVar16 + param_5;
      }
      else if (iVar9 == 1) {
        fn_82CC1A78(lVar16 + uVar17,uVar15 + param_4,lVar11,iVar3);
        lVar14 = uVar15 + param_5;
      }
      else {
        if (iVar9 != 2) goto LAB_82cc15e8;
        fn_82CC1A78(lVar16 + uVar17,lVar16 + (unsigned __int64)param_7,lVar11,iVar3);
        lVar14 = lVar16 + (unsigned __int64)param_8;
      }
      fn_82CC1A78(lVar16 + uVar13,lVar14,lVar11,iVar3);
    }
LAB_82cc15e8:
    uVar12 = uVar12 + 1;
  } while( true );
}

