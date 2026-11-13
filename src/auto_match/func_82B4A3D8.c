extern int fn_82AE60E8();
extern int fn_82F65AC0();
extern int fn_82F6A3F0();
extern int fn_82F6B0C0();
extern int fn_82F6DCE0();


unsigned __int64 fn_82B4A3D8(int param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,__int64 param_5,
                       unsigned int param_6,unsigned int param_7)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  char *pcVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int *puVar13;
  char *apcStack_100 [4];
  char acStack_f0 [240];
  
  if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar11 = 3;
    iVar9 = -0x7ce9f1f8;
  }
  else {
    uVar11 = 0x13;
    iVar9 = -0x7ce9f290;
  }
  uVar10 = 0;
  if (uVar11 != 0) {
    puVar13 = (unsigned int *)(iVar9 + 4);
    do {
      if (((param_2 == 0xffffffff) &&
          (iVar5 = fn_82F6B0C0(param_4,puVar13[-1],*puVar13 >> 0x1c), iVar5 == 0)) ||
         (param_2 == (*puVar13 >> 0xc & 0xf))) {
        if (param_4 != 0) {
          lVar4 = fn_82F6A3F0((*puVar13 >> 0x1c) + param_4,apcStack_100,10);
          param_3 = lVar4 + param_5;
          if (*apcStack_100[0] != '\0') {
            if ((*puVar13 & 0x380000) != 0) {
              return 0;
            }
            iVar5 = fn_82F65AC0(apcStack_100[0],0xffffffff820d3a94);
            if (iVar5 != 0) {
              iVar5 = fn_82F65AC0(apcStack_100[0],0xffffffff820d8938);
              if (iVar5 != 0) {
                return 0;
              }
              if (*(int *)(param_1 + 0x38) != 0) {
                *(unsigned int *)(*(int *)(param_1 + 0x38) + 0x1c) = 1;
              }
            }
          }
        }
        uVar3 = *puVar13 >> 0x13;
        uVar6 = (unsigned __int64)(*puVar13 >> 0x16) & 0x3f;
        if ((uVar3 & 7) == 0) {
          iVar5 = *(int *)(param_1 + 0x150);
          uVar11 = 0;
          if (iVar5 != 0) {
            puVar13 = (unsigned int *)(param_1 + 0x7c);
            do {
              if ((((unsigned __int64)(*puVar13 >> 5) & 0xf) == (param_3 & 0xffffffff)) &&
                 (((*(unsigned int *)(uVar10 * 8 + iVar9 + 4) >> 0xc & 0xf ^ *puVar13) & 0x1f) == 0)) {
                return (unsigned __int64)*(unsigned int *)(uVar11 * 0xc + param_1 + 0x80);
              }
              uVar11 = uVar11 + 1;
              puVar13 = puVar13 + 3;
            } while (uVar11 < *(unsigned int *)(param_1 + 0x150));
          }
          uVar6 = (*(unsigned int *)(param_1 + 0x154) + uVar6 & 0xfffffff) << 4 |
                  (unsigned __int64)(unsigned int)(1 << (param_6 & 0x3f)) - 1 & 0xffffffff0000000f;
          *(unsigned int *)(param_1 + 0x154) = *(unsigned int *)(param_1 + 0x154) + 1;
LAB_82b4a620:
          if (iVar5 == 0x12) {
            return 0;
          }
          piVar12 = (int *)(uVar10 * 8 + iVar9);
          if (((piVar12[1] & 0x80U) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
            *(unsigned int *)(*(int *)(param_1 + 0x38) + 0x1c) = 1;
          }
          if ((param_4 == 0) && (param_4 = *piVar12, (param_3 & 0xffffffff) != 0)) {
            fn_82F6DCE0(acStack_f0,100,0xffffffff820d7c44,param_4,param_3);
            pcVar8 = acStack_f0;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            param_4 = fn_82AE60E8(param_1,(unsigned int)(pcVar8 + (3 - (int)acStack_f0)) & 0xfffffffc,
                                        0);
            pcVar8 = acStack_f0;
            do {
              cVar1 = *pcVar8;
              pcVar8[param_4 - (int)acStack_f0] = cVar1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
          }
          *(int *)((*(int *)(param_1 + 0x150) + 10) * 0xc + param_1) = param_4;
          *(int *)(*(int *)(param_1 + 0x150) * 0xc + param_1 + 0x80) = (int)uVar6;
          iVar9 = *(int *)(param_1 + 0x150) * 0xc + param_1;
          *(unsigned int *)(iVar9 + 0x7c) =
               (unsigned int)piVar12[1] >> 0xc & 0xf | *(unsigned int *)(iVar9 + 0x7c) & 0xffffffe0;
          iVar9 = *(int *)(param_1 + 0x150) * 0xc + param_1;
          *(unsigned int *)(iVar9 + 0x7c) =
               (unsigned int)((param_3 & 0xffffffff) << 5) & 0x1e0 | *(unsigned int *)(iVar9 + 0x7c) & 0xfffffe1f;
          iVar9 = *(int *)(param_1 + 0x150) * 0xc + param_1;
          *(unsigned int *)(iVar9 + 0x7c) = (param_7 & 1) << 0x12 | *(unsigned int *)(iVar9 + 0x7c) & 0xfffbffff;
          if ((((*(unsigned int *)(param_1 + 0x2c) & 0x10) != 0) &&
              ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000)) &&
             ((uVar6 & 0xfffffff0) == 0x3e0)) {
            iVar9 = *(int *)(param_1 + 0x150) * 0xc + param_1;
            *(unsigned int *)(iVar9 + 0x7c) = *(unsigned int *)(iVar9 + 0x7c) | 0x40000;
            *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x8000;
          }
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          return uVar6;
        }
        if ((param_3 & 0xffffffff) < ((unsigned __int64)uVar3 & 7)) {
          uVar11 = *(unsigned int *)(uVar10 * 8 + iVar9 + 4);
          uVar7 = (unsigned __int64)(uVar11 >> 8) & 0xf;
          if ((uVar11 >> 8 & 0xf) == 0) {
            uVar7 = (unsigned __int64)(unsigned int)(1 << (param_6 & 0x3f)) - 1;
          }
          else if (param_6 != (uVar11 >> 0x10 & 7)) {
            return (unsigned __int64)(uVar11 >> 0xc) & 0x70;
          }
          iVar5 = *(int *)(param_1 + 0x150);
          uVar11 = 0;
          uVar2 = (uVar6 + param_3 & 0xfffffff) << 4;
          uVar6 = uVar2 | uVar7 & 0xffffffff0000000f;
          if (iVar5 != 0) {
            puVar13 = (unsigned int *)(param_1 + 0x80);
            do {
              if ((unsigned __int64)*puVar13 == (uVar2 | uVar7 & 0xf)) {
                return uVar6;
              }
              uVar11 = uVar11 + 1;
              puVar13 = puVar13 + 3;
            } while (uVar11 < *(unsigned int *)(param_1 + 0x150));
          }
          goto LAB_82b4a620;
        }
      }
      uVar10 = uVar10 + 1;
      puVar13 = puVar13 + 2;
    } while (uVar10 < uVar11);
  }
  return 0;
}

