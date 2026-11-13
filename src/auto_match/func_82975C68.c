typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82963370();
extern int fn_82968730();
extern int fn_82975B00();


unsigned __int64 fn_82975C68(int param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  
  bVar2 = false;
  uVar11 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = 0;
    do {
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)(iVar8 + *(int *)(param_1 + 0x10));
      iVar8 = iVar8 + 4;
      *(unsigned int *)(iVar7 + 0x28) = 0xffffffff;
      *(unsigned int *)(iVar7 + 0x24) = 0xffffffff;
    } while (uVar11 < *(unsigned int *)(param_1 + 4));
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
      iVar8 = iVar8 + 4;
      *(unsigned int *)(iVar7 + 0x54) = 0xffffffff;
      *(unsigned int *)(iVar7 + 0x48) = 0xffffffff;
    } while (uVar11 < *(unsigned int *)(param_1 + 8));
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar8 = 0;
    do {
      puVar1 = *(unsigned int **)(iVar8 + *(int *)(param_1 + 0x18));
      if ((*puVar1 & 0xfff00000) != 0) {
        uVar6 = 0;
        if (puVar1[1] != 0) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(*(int *)(iVar7 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
            if (uVar11 < *(unsigned int *)(iVar4 + 0x54)) {
              *(unsigned int *)(iVar4 + 0x54) = uVar11;
            }
            piVar9 = (int *)(iVar4 + 8);
            iVar3 = *piVar9;
            iVar10 = iVar4;
            while (iVar3 != -1) {
              iVar3 = *(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10));
              if (uVar11 < *(unsigned int *)(iVar3 + 0x28)) {
                *(unsigned int *)(iVar3 + 0x28) = uVar11;
              }
              iVar10 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(unsigned int *)(iVar10 + 0x54)) {
                *(unsigned int *)(iVar10 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar10 + 8);
              iVar3 = *(int *)(iVar10 + 8);
            }
            piVar9 = (int *)(iVar4 + 0x14);
            iVar4 = *(int *)(iVar4 + 0x14);
            while (iVar4 != -1) {
              iVar4 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(unsigned int *)(iVar4 + 0x54)) {
                *(unsigned int *)(iVar4 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar4 + 0x14);
              iVar4 = *piVar9;
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 < puVar1[1]);
        }
        uVar6 = 0;
        if (puVar1[3] != 0) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(*(int *)(iVar7 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
            if (uVar11 < *(unsigned int *)(iVar4 + 0x48)) {
              *(unsigned int *)(iVar4 + 0x48) = uVar11;
            }
            iVar3 = iVar4;
            if (*(int *)(iVar4 + 8) == -1) goto LAB_82975eb0;
            iVar3 = *(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10));
            if (uVar11 < *(unsigned int *)(iVar3 + 0x24)) {
              *(unsigned int *)(iVar3 + 0x24) = uVar11;
            }
            iVar3 = *(int *)(iVar4 + 8);
            while( true ) {
              iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(unsigned int *)(iVar3 + 0x54)) {
                *(unsigned int *)(iVar3 + 0x54) = uVar11;
              }
LAB_82975eb0:
              if (*(int *)(iVar3 + 8) == -1) break;
              iVar10 = *(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10));
              if (uVar11 < *(unsigned int *)(iVar10 + 0x28)) {
                *(unsigned int *)(iVar10 + 0x28) = uVar11;
              }
              iVar3 = *(int *)(iVar3 + 8);
            }
            piVar9 = (int *)(iVar4 + 0x14);
            iVar4 = *(int *)(iVar4 + 0x14);
            while (iVar4 != -1) {
              iVar4 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(unsigned int *)(iVar4 + 0x54)) {
                *(unsigned int *)(iVar4 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar4 + 0x14);
              iVar4 = *piVar9;
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 < puVar1[3]);
        }
      }
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar11 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_82968730(param_1);
  uVar13 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    uVar12 = 0xffffffff82038830;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar8);
      iVar4 = *(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10));
      if (*(unsigned int *)(iVar4 + 0x28) < *(unsigned int *)(iVar7 + 0x54)) {
        *(unsigned int *)(iVar7 + 0x54) = *(unsigned int *)(iVar4 + 0x28);
      }
      if (*(unsigned int *)(iVar4 + 0x24) < *(unsigned int *)(iVar7 + 0x48)) {
        *(unsigned int *)(iVar7 + 0x48) = *(unsigned int *)(iVar4 + 0x24);
      }
      uVar11 = *(unsigned int *)(iVar4 + 4);
      if ((((uVar11 & 0x10) == 0) && (uVar6 = *(unsigned int *)(iVar7 + 0x54), uVar6 != 0xffffffff)) &&
         (uVar6 <= *(unsigned int *)(iVar7 + 0x48))) {
        iVar7 = *(int *)(iVar7 + 0x60);
        uVar5 = uVar12;
        if (((iVar7 == 0) || (*(int *)(iVar7 + 4) != 6)) ||
           ((iVar4 = *(int *)(iVar7 + 0x14), iVar4 == 0 || (*(int *)(iVar4 + 4) != 3)))) {
LAB_8297612c:
          fn_82975B00(param_1,0,0,uVar5,uVar13);
        }
        else if (*(int *)(iVar7 + 0x2c) == 0) {
          fn_82975B00(param_1,*(unsigned int *)
                                 (*(int *)(uVar6 * 4 + *(int *)(param_1 + 0x18)) + 0x3c),4000,
                        0xffffffff820387f0,*(unsigned int *)(iVar4 + 0x18));
          *(unsigned int *)(iVar7 + 0x2c) = 1;
        }
LAB_8297615c:
        bVar2 = true;
      }
      else {
        if (((uVar11 & 0x20) != 0) && (uVar5 = 0xffffffff8203887c, *(int *)(iVar7 + 0x48) == -1))
        goto LAB_82976148;
        if (((uVar11 & 2) == 0) && (*(int *)(iVar7 + 0x48) != -1)) {
          uVar5 = 0xffffffff820388b8;
          goto LAB_8297612c;
        }
        if (((uVar11 & 0xd) == 0) && (*(int *)(iVar7 + 0x54) != -1)) {
          uVar5 = 0xffffffff820388f4;
LAB_82976148:
          fn_82975B00(param_1,0,0,uVar5,uVar13);
          goto LAB_8297615c;
        }
        if ((((*(int *)(param_1 + 0xd8) != 0) && ((uVar11 & 0x10320) == 0)) &&
            (*(int *)(iVar7 + 0x54) == -1)) &&
           (((uVar11 & 0x10) != 0 ||
            (((*(int *)(iVar7 + 0x48) != -1 &&
              (iVar4 = fn_82963370(*(unsigned int *)
                                     (*(int *)(iVar7 + 0x48) * 4 + *(int *)(param_1 + 0x18))),
              iVar4 == 0)) &&
             ((**(unsigned int **)(*(int *)(iVar7 + 0x48) * 4 + *(int *)(param_1 + 0x18)) & 0xfff00000) !=
              0x20900000)))))) {
          if (*(int *)(iVar7 + 0x48) != -1) {
            uVar5 = 0xffffffff8203892c;
            goto LAB_8297612c;
          }
          uVar5 = 0xffffffff82038960;
          goto LAB_82976148;
        }
      }
      uVar13 = uVar13 + 1;
      iVar8 = iVar8 + 4;
    } while ((uVar13 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 8));
    if (bVar2) {
      return 0xffffffff80004005;
    }
  }
  return 0;
}

