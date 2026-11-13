#define true 1
extern int fn_82CC1A78();
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;


void fn_82CC0E98(unsigned __int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
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
  int iVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar6 = fn_82F6A540();
  iVar5 = (int)lVar6;
  iVar9 = iVar5 >> 1;
  lVar11 = (__int64)iVar9;
  dVar25 = (double)(__int64)in_stack_0000006c;
  dVar23 = (double)(__int64)(iVar5 + -1) - (double)(__int64)in_stack_00000074;
  iVar7 = (int)param_2;
  iVar4 = iVar7 >> 1;
  uVar1 = (unsigned int)(dVar23 - dVar25);
  uVar12 = (unsigned __int64)uVar1;
  uVar2 = (unsigned int)(dVar23 + dVar25);
  if ((dVar23 - dVar25) - (double)(__int64)(int)uVar1 == lbl_82005710) {
    uVar12 = uVar12 - 1;
  }
  uVar10 = (unsigned __int64)in_stack_00000054;
  dVar21 = lbl_82005710;
  if (0 < iVar7) {
    lVar14 = (lVar6 - (unsigned __int64)uVar2) + -1;
    lVar16 = param_2;
    uVar18 = uVar10;
    do {
      lVar8 = uVar12 + 1;
      if (iVar5 <= (int)(uVar12 + 1)) {
        lVar8 = lVar6;
      }
      if (0 < (int)lVar8) {
        fn_82F68CC0(uVar18,(param_3 - uVar10) + uVar18);
      }
      lVar8 = lVar14;
      if (iVar5 <= (int)lVar14) {
        lVar8 = lVar6;
      }
      if (0 < (int)lVar8) {
        lVar8 = ((lVar6 - uVar10) - lVar8) + uVar18;
        fn_82F68CC0(lVar8 + uVar10,lVar8 + param_6);
      }
      lVar16 = lVar16 + -1;
      uVar18 = uVar18 + lVar6;
    } while (lVar16 != 0);
  }
  uVar13 = (unsigned __int64)in_stack_00000064;
  iVar17 = 0;
  uVar18 = (unsigned __int64)in_stack_0000005c;
  if (0 < iVar7) {
    lVar14 = (__int64)((int)uVar12 >> 1) + 1;
    lVar16 = (lVar11 - ((int)uVar2 >> 1)) + -1;
    do {
      lVar8 = lVar14;
      if (iVar9 <= (int)lVar14) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar19 = (__int64)(iVar17 >> 1) * (__int64)iVar9;
        fn_82F68CC0(lVar19 + uVar18,lVar19 + param_4,lVar8);
        fn_82F68CC0(lVar19 + uVar13,lVar19 + param_5,lVar8);
      }
      lVar8 = lVar16;
      if (iVar9 <= (int)lVar16) {
        lVar8 = lVar11;
      }
      if (0 < (int)lVar8) {
        lVar19 = (__int64)((iVar17 >> 1) + 1) * (__int64)iVar9 - lVar8;
        fn_82F68CC0(lVar19 + uVar18,lVar19 + (unsigned __int64)param_7,lVar8);
        fn_82F68CC0(lVar19 + uVar13,lVar19 + (unsigned __int64)param_8,lVar8);
      }
      iVar17 = iVar17 + 2;
    } while (iVar17 < iVar7);
  }
  uVar15 = (unsigned __int64)(__int64)(int)uVar2 >> 0x20;
  uVar12 = -(unsigned __int64)(uVar12 + 1 < 0xffffffff80000000) & uVar12 + 1;
  dVar22 = lbl_82110F68;
  dVar24 = lbl_82005730;
  do {
    iVar9 = uVar2 + 1;
    if (iVar5 <= (int)(uVar2 + 1)) {
      iVar9 = iVar5;
    }
    iVar7 = (int)uVar12;
    if (iVar9 <= iVar7) {
      fn_82F6A58C();
      return;
    }
    dVar26 = (double)(__int64)iVar7 - dVar23;
    dVar20 = (double)fn_82F65D50(dVar26 / dVar25);
    uVar1 = (unsigned int)((dVar20 * dVar25 - dVar26) + dVar24);
    uVar3 = (unsigned int)(((dVar22 - dVar20) * dVar25 - dVar26) + dVar24);
    lVar16 = uVar3 + uVar12;
    if ((int)lVar16 < iVar5) {
LAB_82cc1150:
      iVar9 = 1;
      uVar15 = (__int64)((int)uVar3 >> 1) + (__int64)(iVar7 >> 1);
      lVar16 = lVar16 + param_3;
    }
    else {
      lVar16 = uVar1 + uVar12;
      if ((int)lVar16 < iVar5) {
        uVar3 = uVar1;
        if (dVar21 < dVar26) goto LAB_82cc1150;
        iVar9 = 0;
        lVar16 = (param_6 - uVar10) + (param_3 - param_6) + uVar12 + uVar10;
      }
      else {
        iVar9 = 2;
        lVar16 = (param_6 - uVar10) + uVar12 + uVar10;
      }
    }
    fn_82CC1A78(uVar12 + uVar10,lVar16,lVar6,param_2);
    if ((uVar12 & 1) == 0) {
      lVar16 = (__int64)(iVar7 >> 1);
      if (iVar9 == 0) {
        fn_82CC1A78(lVar16 + uVar18,lVar16 + param_4,lVar11,iVar4);
        lVar14 = lVar16 + param_5;
      }
      else if (iVar9 == 1) {
        fn_82CC1A78(lVar16 + uVar18,uVar15 + param_4,lVar11,iVar4);
        lVar14 = uVar15 + param_5;
      }
      else {
        if (iVar9 != 2) goto LAB_82cc1240;
        fn_82CC1A78(lVar16 + uVar18,lVar16 + (unsigned __int64)param_7,lVar11,iVar4);
        lVar14 = lVar16 + (unsigned __int64)param_8;
      }
      fn_82CC1A78(lVar16 + uVar13,lVar14,lVar11,iVar4);
    }
LAB_82cc1240:
    uVar12 = uVar12 + 1;
  } while( true );
}

