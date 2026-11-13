extern int fn_829664A0();
extern int fn_82969030();
extern int fn_8296BD78();
extern int fn_8296C2D8();
extern int fn_8296C4F8();
extern int fn_8296CF68();


unsigned __int64 fn_82971B58(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  __int64 lVar8;
  int iVar11;
  __int64 lVar10;
  int iVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  
  fn_8296CF68();
  uVar9 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar11 = 0;
    do {
      iVar17 = *(int *)(iVar11 + *(int *)(param_1 + 0x14));
      iVar12 = *(int *)(*(int *)(iVar17 + 4) * 4 + *(int *)(param_1 + 0x10));
      *(unsigned int *)(iVar17 + 0x40) = 0;
      if ((*(unsigned int *)(iVar12 + 4) & 0x40) == 0) {
        *(unsigned int *)(iVar17 + 0xc) = 0xffffffff;
        *(unsigned int *)(iVar17 + 0x10) = 0xffffffff;
      }
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 8));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar11 = 0;
    do {
      uVar9 = uVar9 + 1;
      *(unsigned int *)(*(int *)(iVar11 + *(int *)(param_1 + 0x18)) + 0x24) = 0;
      piVar5 = (int *)(iVar11 + *(int *)(param_1 + 0x18));
      iVar11 = iVar11 + 4;
      *(unsigned int *)(*piVar5 + 0x28) = 0;
    } while (uVar9 < *(unsigned int *)(param_1 + 0xc));
  }
  fn_8296CF68(param_1);
  uVar9 = *(unsigned int *)(param_1 + 0xc);
  uVar14 = (unsigned __int64)uVar9;
  if (uVar14 != 0) {
    iVar11 = uVar9 << 2;
    uVar15 = uVar14;
    do {
      iVar11 = iVar11 + -4;
      uVar15 = uVar15 - 1;
      uVar13 = **(unsigned int **)(iVar11 + *(int *)(param_1 + 0x18));
      if ((uVar13 & 0xfff00000) != 0) {
        uVar1 = *(unsigned int *)(param_1 + 0xc);
        if (((uVar13 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar13 & 0xf0000000))) {
          if ((uVar13 & 0xfff00000) == 0x50000000) {
            uVar7 = fn_829664A0();
          }
          else {
            uVar7 = fn_8296C2D8(param_1);
          }
        }
        else {
          uVar7 = fn_8296BD78(param_1);
        }
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        uVar13 = *(unsigned int *)(param_1 + 0xc);
        if (uVar1 < uVar13) {
          iVar17 = uVar1 << 2;
          uVar16 = uVar1;
          do {
            uVar7 = fn_8296C4F8(param_1,*(unsigned int *)(iVar17 + *(int *)(param_1 + 0x18)));
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            uVar16 = uVar16 + 1;
            iVar17 = iVar17 + 4;
          } while (uVar16 < uVar13);
        }
        uVar18 = (unsigned __int64)(uVar13 - uVar1 >> 1);
        if (uVar18 != 0) {
          iVar17 = uVar1 << 2;
          iVar12 = uVar13 << 2;
          do {
            iVar2 = *(int *)(param_1 + 0x18);
            uVar3 = *(unsigned int *)(iVar17 + iVar2);
            *(unsigned int *)(iVar17 + iVar2) = *(unsigned int *)(iVar12 + iVar2 + -4);
            iVar17 = iVar17 + 4;
            iVar2 = iVar12 + *(int *)(param_1 + 0x18);
            iVar12 = iVar12 + -4;
            *(unsigned int *)(iVar2 + -4) = uVar3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
    } while ((uVar15 & 0xffffffff) != 0);
  }
  lVar10 = 0;
  uVar15 = (*(unsigned int *)(param_1 + 0xc) - uVar14 & 0xffffffff) >> 1;
  if (uVar15 != 0) {
    iVar11 = uVar9 << 2;
    do {
      iVar17 = *(int *)(param_1 + 0x18);
      uVar3 = *(unsigned int *)(iVar17 + iVar11);
      *(unsigned int *)(iVar17 + iVar11) =
           *(unsigned int *)
            ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0xc) - lVar10) - 1 & 0xffffffff) << 2) + iVar17)
      ;
      iVar11 = iVar11 + 4;
      lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - lVar10;
      lVar10 = lVar10 + 1;
      *(unsigned int *)((int)((lVar8 - 1U & 0xffffffff) << 2) + *(int *)(param_1 + 0x18)) = uVar3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (uVar14 != 0) {
    iVar11 = 0;
    do {
      puVar6 = (unsigned int *)(*(int *)(param_1 + 0x18) + iVar11);
      iVar11 = iVar11 + 4;
      *(unsigned int *)*puVar6 = 0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar7 = fn_82969030(param_1);
  if (((int)uVar7 == 0) || (-1 < (int)uVar7)) {
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar11 = 0;
      do {
        iVar17 = *(int *)(*(int *)(param_1 + 0x10) + iVar11);
        if ((*(unsigned int *)(iVar17 + 4) & 0x40) == 0) {
          *(unsigned int *)(iVar17 + 0x10) = 0;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar9 < *(unsigned int *)(param_1 + 4));
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar11 = 0;
      do {
        puVar4 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar11);
        if ((((*puVar4 & 0xfff00000) != 0) && (puVar4[3] != 0)) &&
           (iVar17 = *(int *)(*(int *)(*(int *)(*(int *)puVar4[4] * 4 + *(int *)(param_1 + 0x14)) +
                                      4) * 4 + *(int *)(param_1 + 0x10)),
           (*(unsigned int *)(iVar17 + 4) & 0x40) == 0)) {
          uVar13 = 0;
          if (puVar4[3] != 0) {
            iVar12 = 0;
            do {
              uVar3 = *(unsigned int *)(iVar17 + 0x10);
              piVar5 = (int *)(iVar12 + puVar4[4]);
              iVar12 = iVar12 + 4;
              iVar2 = *(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14));
              *(unsigned int *)(iVar2 + 0x10) = uVar13;
              uVar13 = uVar13 + 1;
              *(unsigned int *)(iVar2 + 0xc) = uVar3;
            } while (uVar13 < puVar4[3]);
          }
          *(int *)(iVar17 + 0x10) = *(int *)(iVar17 + 0x10) + 1;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar9 < *(unsigned int *)(param_1 + 0xc));
    }
    uVar7 = 0;
  }
  return uVar7;
}

