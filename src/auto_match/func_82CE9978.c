typedef unsigned char bool;
#define false 0
#define TBLr 0
extern int fn_82CE82A8();
extern int fn_82CE8758();
extern int fn_82CE98C8();
extern int fn_82CFBAF8();
extern int fn_82CFBB08();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B220;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


unsigned __int64
fn_82CE9978(int param_1,__int64 param_2,__int64 param_3,int param_4,unsigned __int64 param_5)

{
  char cVar1;
  short sVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 *puVar13;
  __int64 lVar12;
  unsigned int uVar14;
  char *pcVar16;
  unsigned __int64 *puVar17;
  int iVar18;
  unsigned __int64 uVar15;
  unsigned __int64 uVar19;
  int iVar20;
  __int64 lVar21;
  unsigned __int64 uStack_d8;
  unsigned char uStack_d0;
  unsigned char bStack_cf;
  
  iVar7 = KeTlsGetValue(lbl_8323B220);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar7 = KeTlsGetValue(lbl_8323B220);
    iVar7 = (int)*(char *)(iVar7 + param_1 + 0xd0);
  }
  pcVar16 = (char *)(iVar7 * 0x11 + param_1 + 0x8c);
  cVar1 = *pcVar16;
  iVar7 = (int)param_3;
  if (-1 < cVar1) {
LAB_82ce99f0:
    uVar19 = (unsigned __int64)cVar1;
    iVar20 = (int)cVar1;
    pcVar16 = pcVar16 + 1;
    lVar11 = (uVar19 + (uVar19 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_3;
    lVar21 = lVar11 + 0x2c;
    iVar8 = (int)lVar11;
    if (*(int *)(iVar8 + 0x3c) == 0) goto code_r0x82ce9a14;
    puVar13 = &uStack_d8;
    lVar11 = 0x10;
    puVar17 = (unsigned __int64 *)(*(int *)(iVar8 + 0x34) * 0x80 + *(int *)lVar21 + -8);
    do {
      puVar17 = puVar17 + 1;
      puVar13 = puVar13 + 1;
      *puVar13 = *puVar17;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar18 = *(int *)(iVar8 + 0x34) + 1;
    *(int *)(iVar8 + 0x34) = iVar18;
    if (iVar18 == *(int *)(iVar8 + 0x30)) {
      *(unsigned int *)(iVar8 + 0x34) = 0;
    }
    *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + -1;
    iVar8 = (**(int (***)())(param_1 + 0x20))(param_1,param_3,&uStack_d0,param_5);
    if (iVar8 == 1) {
      fn_82CE98C8(lVar21,&uStack_d0);
      if ((int)cVar1 < *(int *)(param_1 + 0x88)) {
        iVar8 = (int)((uVar19 + 0x11 & 0xffffffff) << 1);
        sVar2 = *(short *)(iVar8 + iVar7);
        if (sVar2 != 0) {
          *(short *)(iVar8 + iVar7) = sVar2 + -1;
          fn_82CFBB08(*(unsigned int *)((int)((uVar19 + 0x1e & 0xffffffff) << 2) + param_1),1);
          goto LAB_82ce9b54;
        }
      }
      fn_82CE8758(param_1,param_3);
    }
LAB_82ce9b54:
    *(short *)((unsigned int)bStack_cf * 2 + iVar7) = *(short *)((unsigned int)bStack_cf * 2 + iVar7) + 1;
    goto LAB_82ce9a28;
  }
LAB_82ce9a24:
  iVar20 = -1;
LAB_82ce9a28:
  iVar8 = (int)param_2;
  if ((iVar8 != -1) && (iVar8 != iVar20)) {
    if (iVar8 < *(int *)(param_1 + 0x88)) {
      iVar8 = (int)((param_2 + 0x11U & 0xffffffff) << 1);
      sVar2 = *(short *)(iVar8 + iVar7);
      if (sVar2 != 0) {
        *(short *)(iVar8 + iVar7) = sVar2 + -1;
        fn_82CFBB08(*(unsigned int *)((int)((param_2 + 0x1eU & 0xffffffff) << 2) + param_1),1);
        goto LAB_82ce9b78;
      }
    }
    fn_82CE8758(param_1,param_3);
  }
LAB_82ce9b78:
  if (-1 < iVar20) {
    RtlLeaveCriticalSection(param_1);
    return 0;
  }
  uVar9 = *(unsigned int *)(param_1 + 0x50);
  uVar15 = (unsigned __int64)uVar9;
  lVar21 = 0;
  uVar14 = *(unsigned int *)(param_1 + 0x54);
  lVar11 = 0;
  bVar6 = false;
  bVar5 = false;
  uVar19 = 0;
  if ((int)uVar9 < (int)uVar14) {
    if (1 < (int)(uVar14 - uVar9)) {
      lVar10 = (((uVar14 - uVar15) - 2 & 0xffffffff) >> 1) + 1;
      lVar12 = (uVar15 + 2 + (uVar15 + 2 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_3;
      uVar15 = (lVar10 * 2 & 0xfffffffeU) + uVar15;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x28;
        lVar21 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x14) + lVar21;
        lVar11 = (unsigned __int64)*(unsigned int *)lVar12 + lVar11;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if ((int)uVar15 < (int)uVar14) {
      uVar19 = (unsigned __int64)
               *(unsigned int *)((int)((uVar15 + 3 + (uVar15 + 3 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                        iVar7);
    }
    if (lVar21 + lVar11 + uVar19 == 0) goto LAB_82ce9c30;
  }
  else {
LAB_82ce9c30:
    uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
    uVar9 = 0;
    uVar14 = 0;
    lVar11 = param_3;
    if (0 < (int)*(unsigned int *)(param_1 + 0x28)) {
      do {
        if ((0 < *(short *)lVar11) ||
           (iVar8 = 0, *(int *)((*(int *)(param_1 + 0x34) + uVar14 + 3) * 0x14 + iVar7) != 0)) {
          iVar8 = 1;
        }
        uVar9 = iVar8 << (uVar14 & 0x3f) | uVar9;
        uVar14 = uVar14 + 1;
        uVar19 = uVar19 - 1;
        lVar11 = lVar11 + 2;
      } while (uVar19 != 0);
    }
    bVar5 = uVar9 == 0;
    bVar6 = (*(unsigned int *)(iVar7 + 0x18) & uVar9) == 0;
  }
  if (bVar6) {
    iVar8 = KeTlsGetValue(lbl_8323B220);
    if (iVar8 != 0) {
      if (*(short *)((*(char *)(param_1 + 0xd0) + 0x11) * 2 + iVar7) != 0) {
        iVar8 = (*(char *)(param_1 + 0xd0) + 0x11) * 2;
        *(short *)(iVar8 + iVar7) = *(short *)(iVar8 + iVar7) + -1;
        fn_82CFBB08(*(unsigned int *)((*(char *)(param_1 + 0xd0) + 0x1e) * 4 + param_1),1);
      }
      goto LAB_82ce9d50;
    }
    if (!bVar5) goto LAB_82ce9ce8;
  }
  else {
LAB_82ce9d50:
    if ((!bVar5) || (*(int *)(iVar7 + 0x1c) == 1)) {
      if (param_4 == 1) {
        RtlLeaveCriticalSection(param_1);
        return 1;
      }
      iVar8 = KeTlsGetValue(lbl_8323B220);
      lVar11 = (__int64)*(char *)(iVar8 + param_1 + 0xd0);
      iVar8 = (int)((lVar11 + 0x11U & 0xffffffff) << 1);
      *(short *)(iVar8 + iVar7) = *(short *)(iVar8 + iVar7) + 1;
      RtlLeaveCriticalSection(param_1);
      iVar7 = KeTlsGetValue(lbl_8323B4A0);
      puVar3 = *(unsigned int **)(iVar7 + 4);
      if (puVar3 < *(unsigned int **)(iVar7 + 0xc)) {
        *puVar3 = "TtNoJobAvailable";
        uVar4 = TBLr;
        puVar3[1] = (int)uVar4;
        *(unsigned int **)(iVar7 + 4) = puVar3 + 3;
      }
      fn_82CFBAF8(*(unsigned int *)((int)((lVar11 + 0x1eU & 0xffffffff) << 2) + param_1));
      iVar7 = KeTlsGetValue(lbl_8323B4A0);
      puVar3 = *(unsigned int **)(iVar7 + 4);
      if (puVar3 < *(unsigned int **)(iVar7 + 0xc)) {
        *puVar3 = &lbl_82132BC4;
        uVar4 = TBLr;
        puVar3[1] = (int)uVar4;
        *(unsigned int **)(iVar7 + 4) = puVar3 + 3;
      }
      return 0xffffffffffffffff;
    }
  }
  fn_82CE82A8(param_1,param_3);
LAB_82ce9ce8:
  RtlLeaveCriticalSection(param_1);
  return 2;
code_r0x82ce9a14:
  cVar1 = *pcVar16;
  if (cVar1 < '\0') goto LAB_82ce9a24;
  goto LAB_82ce99f0;
}

