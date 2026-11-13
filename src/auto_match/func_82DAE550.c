#define TBLr 0
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DAD528();
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DAE550(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  int *piVar9;
  
  piVar9 = (int *)(param_1 + 0x15c);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x160) - 1;
  if (-1 < (__int64)uVar6) {
    lVar8 = (uVar6 & 0x3fffffff) << 2;
    do {
      if (*(int *)((int)lVar8 + *piVar9) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = "TtislActCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
        piVar2 = *(int **)((int)lVar8 + *piVar9);
        (**(int (***)())(*piVar2 + 4))(piVar2,param_2);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(unsigned int **)(iVar4 + 4);
        if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (__int64)uVar6);
  }
  fn_82DAD5A8(piVar9);
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    iVar7 = 0;
    do {
      piVar9 = *(int **)(*(int *)(*(int *)(param_2 + 0x48) + iVar7) + 0x214);
      if (piVar9 != (int *)0x0) {
        uVar6 = (unsigned __int64)*(unsigned short *)(piVar9 + 1) - 1;
        if (-1 < (__int64)uVar6) {
          lVar8 = (uVar6 & 0x3fffffff) << 2;
          do {
            if (*(int *)((int)lVar8 + *piVar9) != 0) {
              iVar5 = KeTlsGetValue(lbl_8323B4A0);
              puVar1 = *(unsigned int **)(iVar5 + 4);
              if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
                *puVar1 = "TtentActCb";
                uVar3 = TBLr;
                puVar1[1] = (int)uVar3;
                *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
              }
              piVar2 = *(int **)((int)lVar8 + *piVar9);
              (**(int (***)())(*piVar2 + 8))(piVar2,*(unsigned int *)(*(int *)(param_2 + 0x48) + iVar7));
              iVar5 = KeTlsGetValue(lbl_8323B4A0);
              puVar1 = *(unsigned int **)(iVar5 + 4);
              if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
                *puVar1 = &lbl_82132BC4;
                uVar3 = TBLr;
                puVar1[1] = (int)uVar3;
                *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
              }
            }
            uVar6 = uVar6 - 1;
            lVar8 = lVar8 + -4;
          } while (-1 < (__int64)uVar6);
        }
        fn_82DAD528(piVar9);
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x4c));
  }
  lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar8;
  if ((lVar8 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82D80C18(param_1);
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      fn_82D80C30(param_1);
    }
  }
  return;
}

