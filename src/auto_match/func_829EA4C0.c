extern int fn_829E9FF8();


void fn_829EA4C0(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  
  iVar7 = 0;
  iVar2 = (int)param_3;
  if (0 < iVar2) {
    iVar8 = 0;
    lVar9 = param_3;
    do {
      *(unsigned int *)(iVar8 + *(int *)(param_1 + 0x174)) = 0;
      iVar8 = iVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2 != 0) {
    iVar8 = 0;
    iVar3 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar2) {
        uVar6 = param_2;
        do {
          if ((int)uVar6 == *(int *)(*(int *)(param_1 + 0x154) + iVar3)) {
            uVar6 = uVar6 - param_2;
            if ((__int64)uVar6 < 0) {
              uVar6 = *(unsigned int *)(param_1 + 4) + uVar6;
            }
            *(unsigned int *)(*(int *)(param_1 + 0x174) + (int)((uVar6 & 0xffffffff) << 2)) =
                 *(int *)(*(int *)(param_1 + 0x14c) + 0x24) * uVar4 +
                 *(int *)(*(int *)(param_1 + 0x14c) + 0x28);
            break;
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 1;
          uVar6 = (unsigned __int64)(*(unsigned int *)(param_1 + 4) >> 0x1f) -
                  (((uVar6 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar6 < *(unsigned int *)(param_1 + 4))) &
                  uVar6;
        } while (iVar5 < iVar2);
      }
      if (iVar5 == iVar2) {
        *(short *)(*(int *)(param_1 + 0x164) + iVar8) = (short)uVar4;
        iVar8 = iVar8 + 2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (unsigned int)(*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2));
  }
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *(int *)(param_1 + 0x174)) == 0) {
        sVar1 = *(short *)(*(int *)(param_1 + 0x164) + iVar7);
        iVar8 = (int)param_2;
        *(int *)(*(int *)(param_1 + 0x154) + sVar1 * 4) = iVar8;
        *(int *)(iVar2 + *(int *)(param_1 + 0x174)) =
             *(int *)(*(int *)(param_1 + 0x14c) + 0x24) * (int)sVar1 +
             *(int *)(*(int *)(param_1 + 0x14c) + 0x28);
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x174));
        fn_829E9FF8(param_1,(__int64)*(int *)(param_4 + 0x24) * (__int64)iVar8 +
                              (unsigned __int64)*(unsigned int *)(param_4 + 0x28),param_1 + 0x5c,
                      *(unsigned int *)(param_1 + 0x134),*(unsigned int *)(param_1 + 0x130),uVar6);
        lVar9 = ((__int64)*(int *)(param_1 + 0x134) * (__int64)*(int *)(param_1 + 0x20) &
                0x3fffffffU) * 4 + uVar6;
        fn_829E9FF8(param_1,(__int64)*(int *)(param_1 + 0x138) *
                              (__int64)*(int *)(param_4 + 0x1c) +
                              (__int64)*(int *)(param_4 + 0x24) * (__int64)iVar8 +
                              (unsigned __int64)*(unsigned int *)(param_4 + 0x28),param_1 + 0x7c,
                      *(unsigned int *)(param_1 + 0x13c),*(unsigned int *)(param_1 + 0x140),lVar9);
        fn_829E9FF8(param_1,(__int64)*(int *)(param_4 + 0x24) * (__int64)iVar8 +
                              (unsigned __int64)*(unsigned int *)(param_4 + 0x28),param_1 + 0x94,
                      *(unsigned int *)(param_1 + 0x148),*(unsigned int *)(param_1 + 0x144),
                      ((__int64)*(int *)(param_1 + 0x13c) * (__int64)*(int *)(param_1 + 0x20) &
                      0x3fffffffU) * 4 + lVar9);
        iVar7 = iVar7 + 2;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 4;
      param_3 = param_3 + -1;
      param_2 = (unsigned __int64)(*(unsigned int *)(param_1 + 4) >> 0x1f) -
                (((param_2 & 0xffffffff) >> 0x1f) + (unsigned __int64)(param_2 < *(unsigned int *)(param_1 + 4))) &
                param_2;
    } while (param_3 != 0);
  }
  return;
}

