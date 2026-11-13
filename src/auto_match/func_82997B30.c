extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


unsigned __int64 fn_82997B30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  iVar4 = fn_82963998(0x74);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_829632A0();
  }
  if (iVar4 == 0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    uVar3 = fn_82963A30(iVar4,0x10000004,4,4,0);
    if (-1 < (int)uVar3) {
      uVar12 = 0;
      uVar10 = 0xffffffff;
      if (*(int *)(param_1 + 8) != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 4) == *(int *)(param_1 + 0x84))
          {
            *(unsigned int *)(*(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 0x10) * 4 +
                     *(int *)(iVar4 + 8)) = uVar12;
            *(unsigned int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 4) =
                 *(unsigned int *)(param_1 + 0x88);
            *(unsigned int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 0xc) = 0xffffffff;
            uVar10 = *(unsigned int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 0x6c);
          }
          uVar12 = uVar12 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar12 < *(unsigned int *)(param_1 + 8));
      }
      lVar11 = 0;
      uVar12 = 0;
      uVar3 = lbl_82005710;
      do {
        uVar5 = fn_82964628(uVar3,param_1,*(unsigned int *)(param_1 + 0x84),0,lVar11);
        *(unsigned int *)(uVar12 + *(int *)(iVar4 + 0x10)) = uVar5;
        if (*(int *)(uVar12 + *(int *)(iVar4 + 0x10)) == -1) {
          uVar3 = 0xffffffff8007000e;
          goto LAB_82997ba4;
        }
        lVar11 = lVar11 + 1;
        piVar2 = (int *)(uVar12 + *(int *)(iVar4 + 0x10));
        uVar12 = uVar12 + 4;
        iVar7 = *(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14));
        *(unsigned int *)(iVar7 + 0x3c) = 0;
        *(unsigned int *)(iVar7 + 0x6c) = uVar10;
      } while (uVar12 < 0x10);
      uVar3 = fn_829644B8(param_1,iVar4);
      if (-1 < (int)uVar3) {
        if (uVar9 != 0) {
          iVar7 = 0;
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar7);
            if ((((iVar1 != 0) && (uVar12 = *(unsigned int *)(iVar1 + 0xc), uVar12 != 0)) &&
                (*(int *)(*(int *)(**(int **)(iVar1 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 4) ==
                 *(int *)(param_1 + 0x84))) && (uVar6 = 0, uVar12 != 0)) {
              do {
                iVar8 = 0;
                lVar11 = 4;
                do {
                  if (*(int *)(*(int *)(iVar1 + 0x10) + uVar6 * 4) ==
                      *(int *)(iVar8 + *(int *)(iVar4 + 0x10))) {
                    *(unsigned int *)(*(int *)(iVar1 + 0x10) + uVar6 * 4) =
                         *(unsigned int *)(*(int *)(iVar4 + 8) + iVar8);
                  }
                  iVar8 = iVar8 + 4;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar12);
            }
            uVar9 = uVar9 - 1;
            iVar7 = iVar7 + 4;
          } while (uVar9 != 0);
        }
        return 0;
      }
    }
LAB_82997ba4:
    fn_82BA02A8(iVar4);
    fn_829639F0(iVar4);
  }
  return uVar3;
}

