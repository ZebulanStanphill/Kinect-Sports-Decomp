#define TBLr 0
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DAED38();
extern int fn_82DB6508();
extern int fn_82DB6A90();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


void fn_82DB84E0(int param_1,unsigned __int64 *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "TtCollide";
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) - 1;
    if (-1 < lVar10) {
      lVar11 = lVar10 * 0x70;
      do {
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) + lVar11;
        iVar9 = (int)lVar8;
        iVar2 = *(int *)(iVar9 + 0xc);
        if (*(char *)(iVar2 + 0xe8) == '\x05') {
          iVar2 = *(int *)(iVar9 + 0x10);
        }
        (**(int (***)())(**(int **)(iVar9 + 0x14) + 0x20))
                  (*(int **)(iVar9 + 0x14),*(unsigned int *)(iVar2 + 0xcc),lVar8 + 0x18);
        lVar10 = lVar10 + -1;
        lVar11 = lVar11 + -0x70;
      } while (-1 < lVar10);
    }
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar9 = 0;
  *(unsigned __int64 *)(iVar2 + 0x1d0) = *param_2;
  *(unsigned __int64 *)(iVar2 + 0x1d8) = param_2[1];
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x78);
  *(unsigned __int64 *)(iVar2 + 0x50) = *param_2;
  *(unsigned __int64 *)(iVar2 + 0x58) = param_2[1];
  iVar2 = *(int *)(param_1 + 0xc);
  *(float *)(iVar2 + 0x2ec) = *(float *)(iVar2 + 0x300) * *(float *)(param_2 + 1);
  *(float *)(iVar2 + 0x2f0) =
       (float)(__int64)*(int *)(iVar2 + 0x2f4) * *(float *)((int)param_2 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar2 + 0x2c)) {
    iVar7 = 0;
    do {
      iVar3 = *(int *)(iVar7 + *(int *)(iVar2 + 0x28));
      fn_82DB6508(param_1,*(unsigned int *)(iVar3 + 0x48),*(unsigned int *)(iVar3 + 0x4c),
                    *(unsigned int *)(param_1 + 0xc),0);
      if (lbl_8323B520 == 1) {
        iVar6 = *(int *)(param_1 + 0xc);
        lVar10 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x94) - 1;
        *(int *)(iVar6 + 0x94) = (int)lVar10;
        if ((lVar10 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
          if (*(int *)(iVar6 + 0x8c) != 0) {
            fn_82D80C18(iVar6);
          }
          if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
            fn_82D80C30(iVar6);
          }
        }
        iVar6 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar6 + 4);
        if (*(unsigned int **)(iVar6 + 0xc) <= puVar1) {
          return;
        }
        *puVar1 = &lbl_82132BC4;
        uVar5 = TBLr;
        puVar1[1] = (int)uVar5;
        *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
        return;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar9 < *(int *)(iVar2 + 0x2c));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  lVar10 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x94) - 1;
  *(int *)(iVar2 + 0x94) = (int)lVar10;
  if ((lVar10 == 0) && (*(char *)(iVar2 + 0x9c) == '\0')) {
    if (*(int *)(iVar2 + 0x8c) != 0) {
      fn_82D80C18(iVar2);
    }
    if ((*(int *)(iVar2 + 0xa4) == 1) && (*(int *)(iVar2 + 0x90) != 0)) {
      fn_82D80C30(iVar2);
    }
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar2 + 0x2c)) {
    iVar9 = 0;
    do {
      uVar4 = *(unsigned int *)(*(int *)(iVar2 + 0x28) + iVar9);
      fn_82DB6A90(param_1,uVar4,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x78));
      if (lbl_8323B520 == 1) break;
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x19c) != 0) {
        iVar7 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar7 + 4);
        if (puVar1 < *(unsigned int **)(iVar7 + 0xc)) {
          *puVar1 = "TtIslandPostCollideCb";
          uVar5 = TBLr;
          puVar1[1] = (int)uVar5;
          *(unsigned int **)(iVar7 + 4) = puVar1 + 3;
        }
        fn_82DAED38(*(unsigned int *)(param_1 + 0xc),uVar4,param_2);
        iVar7 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar7 + 4);
        if (puVar1 < *(unsigned int **)(iVar7 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar5 = TBLr;
          puVar1[1] = (int)uVar5;
          *(unsigned int **)(iVar7 + 4) = puVar1 + 3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < *(int *)(iVar2 + 0x2c));
  }
  iVar6 = *(int *)(param_1 + 0xc);
  lVar10 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x94) - 1;
  *(int *)(iVar6 + 0x94) = (int)lVar10;
  if ((lVar10 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
    if (*(int *)(iVar6 + 0x8c) != 0) {
      fn_82D80C18(iVar6);
    }
    if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
      fn_82D80C30(iVar6);
    }
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  return;
}

