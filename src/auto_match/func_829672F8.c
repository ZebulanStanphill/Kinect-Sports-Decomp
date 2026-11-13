extern unsigned int *auStack_5c;
extern int fn_82965280();
extern int fn_82967218();
extern unsigned int uStack_60;


unsigned __int64 fn_829672F8(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int uStack_60;
  unsigned int auStack_5c [23];
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x18));
  if (*(int *)(iVar2 + 0x24) == 0) {
    uVar12 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar13 = 0;
      do {
        uStack_60 = 0;
        iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x18) + iVar13) * 4 + *(int *)(param_1 + 0x18));
        auStack_5c[0] = 0;
        fn_82967218(param_1,iVar3,auStack_5c,&uStack_60,
                      *(unsigned int *)(*(int *)(iVar2 + 0x18) + iVar13));
        uVar12 = uVar12 + 1;
        uVar8 = (unsigned __int64)auStack_5c[0] + 1;
        *(int *)(iVar3 + 0x30) = (int)uStack_60 / (int)uVar8;
        trapWord(6,uVar8,0);
        iVar13 = iVar13 + 4;
        trapWord(5,uVar8 & ~((((unsigned __int64)uStack_60 & 0x7fffffff) << 1 |
                             (unsigned __int64)(uStack_60 >> 0x1f)) - 1),0xffff);
      } while (uVar12 < *(unsigned int *)(iVar2 + 0x14));
    }
    fn_82965280(0xffffffff82964e10,*(unsigned int *)(iVar2 + 0x18),*(unsigned int *)(iVar2 + 0x14),
                  param_1);
    uVar12 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar13 = 0;
      do {
        uVar6 = fn_829672F8(param_1,*(unsigned int *)(*(int *)(iVar2 + 0x18) + iVar13),param_3,
                              param_4);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar12 < *(unsigned int *)(iVar2 + 0x14));
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
      uVar12 = 0;
      *(unsigned int *)(iVar2 + 0x24) = 1;
      *(int *)(*param_4 * 4 + param_3) = param_2;
      *param_4 = *param_4 + 1;
      if (*(int *)(iVar2 + 0x14) != 0) {
        iVar13 = 0;
        do {
          uVar7 = 0xffffffff;
          iVar3 = *(int *)(param_1 + 0x18);
          uVar9 = 0;
          iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x18) + iVar13) * 4 + iVar3);
          uVar1 = *(unsigned int *)(iVar4 + 0x1c);
          if (uVar1 != 0) {
            iVar4 = *(int *)(iVar4 + 0x20);
            iVar10 = 0;
            do {
              uVar5 = uVar7;
              if ((*(int *)(*(int *)(*(int *)(iVar10 + iVar4) * 4 + iVar3) + 0x24) == 0) &&
                 (uVar5 = uVar9, uVar7 != 0xffffffff)) goto LAB_829674c0;
              uVar7 = uVar5;
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 4;
            } while (uVar9 < uVar1);
            if (uVar7 != 0xffffffff) {
LAB_829674c0:
              if (uVar9 == uVar1) {
                uVar9 = 0;
                iVar4 = *(int *)(uVar7 * 4 + iVar4);
                iVar10 = *(int *)(iVar4 * 4 + iVar3);
                uVar1 = *(unsigned int *)(iVar10 + 0x14);
                if (uVar1 != 0) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(*(int *)(*(int *)(iVar11 + *(int *)(iVar10 + 0x18)) * 4 + iVar3) +
                                0x24) == 0) break;
                    uVar9 = uVar9 + 1;
                    iVar11 = iVar11 + 4;
                  } while (uVar9 < uVar1);
                }
                if ((uVar1 <= uVar9) &&
                   (uVar6 = fn_829672F8(param_1,iVar4,param_3,param_4), (int)uVar6 < 0)) {
                  return uVar6;
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar12 < *(unsigned int *)(iVar2 + 0x14));
      }
    }
  }
  return 0;
}

