#define TBLr 0
extern int fn_82D7DB70();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DA4850();
extern int fn_82DAED38();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


void fn_82DA4CD0(int param_1,unsigned __int64 *param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  int iVar9;
  unsigned __int64 uVar8;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtCollide";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  *(unsigned __int64 *)(iVar4 + 0x1d0) = *param_2;
  *(unsigned __int64 *)(iVar4 + 0x1d8) = param_2[1];
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x78);
  *(unsigned __int64 *)(iVar4 + 0x50) = *param_2;
  *(unsigned __int64 *)(iVar4 + 0x58) = param_2[1];
  iVar4 = *(int *)(param_1 + 0xc);
  *(float *)(iVar4 + 0x2ec) = *(float *)(iVar4 + 0x300) * *(float *)(param_2 + 1);
  *(float *)(iVar4 + 0x2f0) =
       (float)(__int64)*(int *)(iVar4 + 0x2f4) * *(float *)((int)param_2 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar4 + 0x2c)) {
    iVar9 = 0;
    do {
      iVar5 = *(int *)(iVar9 + *(int *)(iVar4 + 0x28));
      fn_82DA4850(*(unsigned int *)(iVar5 + 0x48),*(unsigned int *)(iVar5 + 0x4c),
                    *(unsigned int *)(param_1 + 0xc));
      if (lbl_8323B520 == 1) {
        iVar4 = *(int *)(param_1 + 0xc);
        lVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x94) - 1;
        *(int *)(iVar4 + 0x94) = (int)lVar6;
        if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
          if (*(int *)(iVar4 + 0x8c) != 0) {
            fn_82D80C18(iVar4);
          }
          if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
            fn_82D80C30(iVar4);
          }
        }
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (*(unsigned int **)(iVar4 + 0xc) <= puVar1) {
          return;
        }
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < *(int *)(iVar4 + 0x2c));
  }
  iVar4 = *(int *)(param_1 + 0xc);
  lVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x94) - 1;
  *(int *)(iVar4 + 0x94) = (int)lVar6;
  if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
    if (*(int *)(iVar4 + 0x8c) != 0) {
      fn_82D80C18(iVar4);
    }
    if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
      fn_82D80C30(iVar4);
    }
  }
  iVar7 = 0;
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar4 + 0x2c)) {
    iVar9 = 0;
    do {
      uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x28) + iVar9);
      piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x78);
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar5 + 4);
      if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
        *puVar1 = "TtNarrowPhase";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
      }
      piVar2[5] = 0;
      piVar2[0x18] = *piVar2 + 0x1c60;
      fn_82D7DB70(uVar8,uVar8 + 0x58,piVar2);
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(unsigned int **)(iVar5 + 4);
      if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
      }
      if (lbl_8323B520 == 1) break;
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x19c) != 0) {
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar5 + 4);
        if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
          *puVar1 = "TtIslandPostCollideCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
        }
        fn_82DAED38(*(unsigned int *)(param_1 + 0xc),uVar8,param_2);
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar5 + 4);
        if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < *(int *)(iVar4 + 0x2c));
  }
  iVar4 = *(int *)(param_1 + 0xc);
  lVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x94) - 1;
  *(int *)(iVar4 + 0x94) = (int)lVar6;
  if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
    if (*(int *)(iVar4 + 0x8c) != 0) {
      fn_82D80C18(iVar4);
    }
    if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
      fn_82D80C30(iVar4);
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

