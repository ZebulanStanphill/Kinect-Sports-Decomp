#define true 1
extern int fn_8294B508();
extern int fn_82951FC8();
extern int fn_829636A8();
extern int fn_8297AE90();
extern int fn_82F68CC0();


__int64 fn_829579B8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned int param_6,int param_7)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  
  lVar6 = 1;
  if ((param_5 & 0xffffffff) != 0) {
    puVar1 = *(unsigned int **)((int)((param_5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18) + -4);
    iVar2 = fn_829636A8(puVar1);
    if (((iVar2 == 0) && (uVar4 = *puVar1, (uVar4 & 0xf0000000) != 0x60000000)) &&
       ((uVar4 & 0xfff00000) != 0x11000000)) {
      uVar8 = param_5 - 1;
      if ((__int64)uVar8 < 0) {
        return 1;
      }
      lVar7 = (uVar8 & 0x3fffffff) << 2;
      do {
        puVar1 = *(unsigned int **)((int)lVar7 + *(int *)(param_1 + 0x18));
        if ((unsigned __int64)puVar1[9] != (param_5 & 0xffffffff)) {
          uVar4 = *puVar1;
          if ((uVar4 & 0xfff00000) != 0) {
            if ((uVar4 & 0xf0000000) == 0x60000000) {
              return lVar6;
            }
            if ((uVar4 & 0xfff00000) == 0x11000000) {
              return lVar6;
            }
            fn_8294B508(param_1,param_4,puVar1,param_5);
            iVar2 = 0;
            uVar9 = (unsigned int)((*puVar1 & 0xfff00000) == 0x50000000);
            uVar4 = 0;
            if (puVar1[3] != 0) {
              iVar3 = 0;
              do {
                iVar5 = *(int *)(*(int *)(iVar3 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
                if ((int)(*(unsigned int *)(param_1 + 0x6c) << 0x1d | *(unsigned int *)(param_1 + 0x6c) >> 3) < 0) {
                  iVar5 = *(int *)(iVar5 + 0x10);
                }
                else {
                  iVar5 = *(int *)((*(int *)(iVar5 + 0xc) * 4 + *(int *)(iVar5 + 0x10)) * 4 +
                                  *(int *)(param_2 + 0x14));
                }
                if (iVar5 == 3) {
                  iVar2 = 1;
                }
                else {
                  uVar9 = 1;
                }
                uVar4 = uVar4 + 1;
                iVar3 = iVar3 + 4;
              } while (uVar4 < puVar1[3]);
            }
            if ((uVar9 != param_6) && (iVar2 != param_7)) {
              lVar6 = fn_82951FC8(param_1,param_5 - 1,uVar8);
              if (lVar6 < 0) {
                return lVar6;
              }
              if ((*(unsigned int *)(param_1 + 0x6c) & 4) != 0) {
                return 0;
              }
              iVar3 = fn_8297AE90(param_1,param_2,0);
              if (-1 < iVar3) {
                uVar4 = 0;
                if (puVar1[3] != 0) {
                  iVar3 = 0;
                  do {
                    iVar5 = *(int *)(*(int *)(iVar3 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
                    if (*(int *)((*(int *)(iVar5 + 0xc) * 4 + *(int *)(iVar5 + 0x10)) * 4 +
                                *(int *)(param_2 + 0x14)) == 3) {
                      iVar2 = 1;
                    }
                    else {
                      uVar9 = 1;
                    }
                    uVar4 = uVar4 + 1;
                    iVar3 = iVar3 + 4;
                  } while (uVar4 < puVar1[3]);
                }
                if ((uVar9 != param_6) && (iVar2 != param_7)) {
                  return 0;
                }
              }
              fn_82F68CC0(*(unsigned int *)(param_1 + 0x18),param_3,*(int *)(param_1 + 0xc) << 2);
            }
          }
        }
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + -4;
        if ((__int64)uVar8 < 0) {
          return lVar6;
        }
      } while( true );
    }
  }
  return 1;
}

