typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829646C8();
extern int fn_829647E8();


unsigned __int64 fn_8294BB48(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  int iVar15;
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar7 = (unsigned __int64)uVar1 & 0xfffff;
  if ((uVar1 & 0xfff00000) == 0x20800000) {
    bVar6 = false;
    uVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        iVar10 = 0;
        do {
          iVar15 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar10) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar2 = *(int *)(*(int *)((int)((lVar12 + uVar9 & 0xffffffff) << 2) +
                                   *(int *)(*(int *)(param_1 + 0x104) + 8)) * 4 +
                          *(int *)(param_1 + 0x14));
          if ((((*(int *)(iVar2 + 4) != *(int *)(iVar15 + 4)) ||
               (*(int *)(iVar2 + 8) != *(int *)(iVar15 + 8))) ||
              (*(int *)(iVar2 + 0xc) != *(int *)(iVar15 + 0xc))) ||
             (*(int *)(iVar2 + 0x10) != *(int *)(iVar15 + 0x10))) break;
          uVar9 = uVar9 + 1;
          iVar10 = iVar10 + 4;
        } while ((uVar9 & 0xffffffff) < uVar7);
      }
      if ((uVar9 & 0xffffffff) != uVar7) {
        uVar9 = fn_829646C8(param_1,uVar7 | 0x10000000,uVar7,uVar7);
        if ((int)uVar9 == -1) {
          return 0xffffffff8007000e;
        }
        lVar13 = (uVar9 & 0x3fffffff) << 2;
        uVar14 = 0;
        iVar10 = *(int *)((int)lVar13 + *(int *)(param_1 + 0x18));
        if ((uVar1 & 0xfffff) != 0) {
          iVar15 = 0;
          do {
            iVar2 = (int)((lVar12 + uVar14 & 0xffffffff) << 2);
            *(unsigned int *)(iVar15 + *(int *)(iVar10 + 8)) =
                 *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar2);
            uVar8 = fn_829647E8(param_1,*(unsigned int *)
                                               (*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10)
                                                        + iVar15) * 4 + *(int *)(param_1 + 0x14)));
            *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar2) = uVar8;
            *(unsigned int *)(*(int *)(iVar10 + 0x10) + iVar15) = uVar8;
            if (*(int *)(*(int *)(iVar10 + 0x10) + iVar15) == -1) {
              return 0xffffffff8007000e;
            }
            uVar14 = uVar14 + 1;
            *(unsigned int *)
             (*(int *)(*(int *)(*(int *)(iVar10 + 0x10) + iVar15) * 4 + *(int *)(param_1 + 0x14)) +
             0x14) = *(unsigned int *)
                      (*(int *)(*(int *)(iVar15 + *(int *)(iVar10 + 8)) * 4 +
                               *(int *)(param_1 + 0x14)) + 0x14);
            piVar3 = (int *)(*(int *)(iVar10 + 0x10) + iVar15);
            piVar4 = (int *)(iVar15 + *(int *)(iVar10 + 8));
            iVar15 = iVar15 + 4;
            *(unsigned int *)(*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
                 *(unsigned int *)(*(int *)(*piVar4 * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          } while ((uVar14 & 0xffffffff) < uVar7);
        }
        while (((unsigned __int64)*(unsigned int *)(param_1 + 0x100) < (uVar9 & 0xffffffff) ||
               (((uVar9 & 0xffffffff) != 0 &&
                ((**(unsigned int **)((int)lVar13 + *(int *)(param_1 + 0x18) + -4) & 0xfff00000) ==
                 0x20800000))))) {
          uVar9 = uVar9 - 1;
          puVar5 = (unsigned int *)((int)lVar13 + *(int *)(param_1 + 0x18));
          lVar13 = lVar13 + -4;
          *puVar5 = puVar5[-1];
        }
        bVar6 = true;
        *(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18)) = iVar10;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + uVar7;
    } while (uVar11 < 2);
    uVar7 = (unsigned __int64)!bVar6;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

