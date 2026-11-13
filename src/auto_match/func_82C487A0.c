extern int fn_82A1E968();
extern int fn_82A1F2F8();
extern int fn_82C44AC0();
extern int fn_82C44B20();
extern int fn_82C751C0();
extern int fn_82C75408();
extern int fn_82C83B78();
extern unsigned int lbl_820FBAF8;
extern unsigned int lbl_820FBB0C;


void fn_82C487A0(__int64 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 alStack_50 [10];
  
  iVar4 = (int)param_1;
  iVar10 = *(int *)(iVar4 + 0x5030) + 1;
  iVar7 = (*(int *)(iVar4 + 0x3d04) << 0x1c) >> 0x1c;
  *(int *)(iVar4 + 0x5030) = iVar10;
  uVar5 = 0;
  iVar13 = (-(unsigned int)(*(int *)(iVar4 + 0xf8c) != 0) & 0xfffffffe) + 4;
  if (((-1 < iVar7) && (iVar7 < 5)) || (iVar7 == -2)) {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (iVar13 < iVar7) {
      iVar7 = iVar13;
    }
    if (iVar7 != *(int *)(iVar4 + 0x3cfc)) {
      if (iVar7 < *(int *)(iVar4 + 0x3cfc)) {
        *(int *)(iVar4 + 0x503c) = *(int *)(iVar4 + 0x5038) * 0xda >> 8;
        *(int *)(iVar4 + 0x5038) = *(int *)(iVar4 + 0x5038) * 0xf3 >> 8;
      }
      *(int *)(iVar4 + 0x3cfc) = iVar7;
    }
    if (*(int *)(iVar4 + 0x4ff8) != 0) {
      fn_82A1E968(alStack_50);
      *(unsigned int *)(iVar4 + 0x4ff8) = 0;
      *(__int64 *)(iVar4 + 0x4fe0) = *(__int64 *)(iVar4 + 0x4fe0) + alStack_50[0];
    }
    *(unsigned __int64 *)(iVar4 + 0x4fe8) = 0;
    *(unsigned __int64 *)(iVar4 + 0x4fe0) = 0;
    *(unsigned int *)(iVar4 + 0xd84) = 0;
    if (*(int *)(iVar4 + 0x4ff8) != 0) {
      return;
    }
    fn_82A1E968(alStack_50);
    *(unsigned int *)(iVar4 + 0x4ff8) = 1;
    *(__int64 *)(iVar4 + 0x4fe0) = *(__int64 *)(iVar4 + 0x4fe0) - alStack_50[0];
    return;
  }
  if (iVar10 < 5) {
    fn_82C44B20(param_1);
    *(unsigned __int64 *)(iVar4 + 0x4fe0) = 0;
    *(unsigned __int64 *)(iVar4 + 0x4fe8) = 0;
    *(unsigned int *)(iVar4 + 0xd84) = 0;
    if (*(int *)(iVar4 + 0x5030) < 2) {
      uVar5 = fn_82A1F2F8();
      *(unsigned int *)(iVar4 + 0x509c) = uVar5;
      fn_82C44AC0(param_1);
      return;
    }
    goto LAB_82c48d24;
  }
  uVar6 = fn_82A1F2F8();
  if (*(int *)(iVar4 + 0x50a0) + 8000U < uVar6) {
    *(unsigned int *)(iVar4 + 0x50a0) = uVar6;
    iVar7 = fn_82C75408(0,0x72,0);
    uVar8 = fn_82C75408(5,0x72,0);
    *(unsigned int *)(iVar4 + 0x4fd4) = uVar8;
    if ((-1 < iVar7) && (iVar7 < 5)) {
      *(int *)(iVar4 + 0x3cfc) = iVar7;
      *(unsigned int *)(iVar4 + 0x3cf8) = 1;
      fn_82C751C0(param_1);
      *(unsigned int *)(iVar4 + 0x4fcc) = (unsigned int)LZCOUNT(*(int *)(iVar4 + 0x4fd4) + -2) >> 5;
    }
  }
  if (*(int *)(iVar4 + 0x4fcc) == 0) {
    return;
  }
  fn_82C44B20(param_1);
  uVar9 = *(unsigned int *)(iVar4 + 0x4fd0);
  if ((int)uVar9 < 1) {
    uVar9 = *(unsigned int *)(iVar4 + 0x3cfc);
  }
  uVar14 = (unsigned __int64)uVar9;
  iVar7 = (*(int *)(iVar4 + 0x5024) + 0x1400) * 4;
  iVar10 = (int)*(unsigned __int64 *)(iVar4 + 0x4fe0);
  *(int *)(iVar4 + 0x5020) = (*(int *)(iVar4 + 0x5020) - *(int *)(iVar7 + iVar4)) + iVar10;
  *(int *)(iVar7 + iVar4) = iVar10;
  iVar7 = *(int *)(iVar4 + 0x5020) >> 3;
  *(unsigned int *)(iVar4 + 0x5024) = *(int *)(iVar4 + 0x5024) + 1U & 7;
  if ((0 < *(int *)(iVar4 + 0xd84)) ||
     (0x2fffffff < (int)((*(unsigned int *)(iVar4 + 0x3d04) & 0xf000) << 0x10))) {
    *(int *)(iVar4 + 0x5034) = *(int *)(iVar4 + 0xd84) + *(int *)(iVar4 + 0x5034);
    if ((int)uVar9 < 1) {
      *(unsigned int *)(iVar4 + 0x509c) = uVar6;
      *(unsigned int *)(iVar4 + 0x5094) = 0;
    }
    else {
      uVar15 = uVar14 - 1;
      if (0 < (__int64)uVar15) {
        uVar15 = uVar14 - 2;
      }
      iVar3 = *(int *)(iVar4 + 0x5038) * 0xe6 >> 8;
      *(int *)(iVar4 + 0x5038) = iVar3;
      *(int *)(iVar4 + 0x503c) = iVar3 * 0xe6 >> 8;
      uVar14 = uVar15;
    }
    if ((0 < (int)uVar14) &&
       (*(int *)((int)((uVar14 + 0x1410 & 0xffffffff) << 2) + iVar4) ==
        *(int *)((int)((uVar14 + 0x1411 & 0xffffffff) << 2) + iVar4))) {
      uVar14 = uVar14 - 1;
    }
    *(unsigned int *)(iVar4 + 0xd84) = 0;
  }
  uVar9 = *(unsigned int *)(iVar4 + 0x3d04);
  iVar3 = (int)(uVar9 << 0x10 | uVar9 >> 0x10) >> 0x1c;
  if ((iVar3 == 2) &&
     ((int)uVar9 >> 0x10 < -((*(int *)(iVar4 + 0x502c) >> 1) + *(int *)(iVar4 + 0x502c)))) {
    if (0 < (int)uVar14) {
      uVar14 = uVar14 - 1;
    }
    *(unsigned int *)(iVar4 + 0x509c) = uVar6;
  }
  if (0 < (int)uVar14) {
    iVar1 = *(int *)(iVar4 + 0x5038);
    lVar11 = (uVar14 + 0x1410 & 0x3fffffff) * 4 + param_1;
    do {
      iVar12 = *(int *)lVar11 + iVar10;
      if (iVar12 <= iVar1) break;
      if ((*(int *)(iVar4 + 0x5028) < 8) || (*(int *)lVar11 + iVar7 <= iVar1)) {
        if (iVar12 <= iVar1 << 1) break;
        uVar5 = 0;
        if (*(int *)(iVar4 + 0x4fd0) < 1) {
          uVar5 = *(unsigned int *)(iVar4 + 0x3cfc);
        }
      }
      uVar14 = uVar14 - 1;
      lVar11 = lVar11 + -4;
    } while (0 < (int)uVar14);
  }
  iVar1 = *(int *)(iVar4 + 0x3cfc);
  if ((((int)uVar14 == iVar1) && ((int)uVar14 < iVar13)) &&
     ((iVar3 < 2 || ((iVar3 == 2 && (-(*(int *)(iVar4 + 0x502c) >> 1) < (int)uVar9 >> 0x10)))))) {
    iVar3 = *(int *)(iVar4 + 0x5094);
    uVar9 = uVar6 - *(int *)(iVar4 + 0x509c);
    if (iVar1 < iVar3) {
      iVar12 = *(int *)(iVar4 + 0x5038);
    }
    else {
      iVar12 = *(int *)(iVar4 + 0x503c);
    }
    uVar15 = uVar14 + 1;
    iVar2 = *(int *)((int)((uVar14 + 0x1411 & 0xffffffff) << 2) + iVar4);
    if ((iVar2 + iVar10 < iVar12) && (iVar2 + iVar7 < iVar12)) {
      if ((uVar9 <= *(unsigned int *)(&lbl_820FBAF8 + (int)((uVar14 & 0xffffffff) << 2))) &&
         (iVar3 <= iVar1)) goto LAB_82c48c08;
      uVar14 = uVar15;
      if (*(unsigned int *)(&lbl_820FBAF8 + iVar13 * 4) < uVar9) {
        *(unsigned int *)(iVar4 + 0x509c) = uVar6 - 500;
      }
    }
    if (iVar1 < iVar3) {
      *(int *)(iVar4 + 0x5094) = iVar3 + -1;
    }
  }
LAB_82c48c08:
  if (((0 < *(__int64 *)(iVar4 + 0x4fe8)) && (0 < iVar1)) && (iVar1 <= iVar13)) {
    iVar7 = (iVar1 + 0xa0b) * 8;
    *(__int64 *)(iVar7 + iVar4) =
         (__int64)(int)*(__int64 *)(iVar4 + 0x4fe8) + *(__int64 *)(iVar7 + iVar4);
    iVar7 = (*(int *)(iVar4 + 0x3cfc) + 0x1420) * 4;
    *(int *)(iVar7 + iVar4) = *(int *)(iVar7 + iVar4) + 1;
  }
  iVar7 = (int)uVar14;
  if ((iVar7 == *(int *)(iVar4 + 0x3cfc)) && (*(int *)(iVar4 + 0x4fd0) < 1)) {
    *(int *)(iVar4 + 0x5028) = *(int *)(iVar4 + 0x5028) + 1;
  }
  else {
    iVar10 = (int)((uVar14 & 0x3fffffff) << 2);
    *(unsigned int *)(iVar4 + 0x3cd4) = *(unsigned int *)(&lbl_820FBB0C + iVar10) & 1;
    *(unsigned int *)(iVar4 + 0x3cd8) = *(unsigned int *)(&lbl_820FBB0C + iVar10) >> 1 & 1;
    if (((*(unsigned int *)(&lbl_820FBB0C + *(int *)(iVar4 + 0x3cfc) * 4) ^
         *(unsigned int *)(&lbl_820FBB0C + iVar10)) & 4) != 0) {
      fn_82C83B78(*(unsigned int *)(&lbl_820FBB0C + iVar10) >> 2 & 1,*(unsigned int *)(iVar4 + 0xf8c));
    }
    iVar13 = *(int *)(iVar4 + 0x3cfc);
    if (iVar7 < iVar13) {
      *(unsigned int *)(iVar4 + 0x509c) = uVar6;
      if (0 < iVar7) {
        *(unsigned int *)(iVar4 + 0x509c) =
             (*(int *)(&lbl_820FBAF8 + iVar10) - *(int *)(&lbl_820FBAF8 + iVar13 * 4)) + uVar6;
      }
      if (*(int *)(iVar4 + 0x5094) < iVar13 << 2) {
        *(int *)(iVar4 + 0x5094) = iVar13 << 2;
      }
    }
    *(int *)(iVar4 + 0x3cfc) = iVar7;
    *(int *)(iVar4 + 0xe74) = iVar7;
    *(unsigned int *)(iVar4 + 0x4fd0) = uVar5;
    *(unsigned int *)(iVar4 + 0x5028) = 0;
  }
  *(unsigned __int64 *)(iVar4 + 0x4fe0) = 0;
  *(unsigned __int64 *)(iVar4 + 0x4fe8) = 0;
LAB_82c48d24:
  fn_82C44AC0(param_1);
  return;
}

