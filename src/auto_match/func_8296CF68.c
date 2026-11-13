#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82968610();
extern int fn_829686B0();
extern int fn_82968730();
extern int fn_82F691F0();


unsigned __int64 fn_8296CF68(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar15;
  
  uVar13 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar11 = 0;
    do {
      uVar13 = uVar13 + 1;
      iVar14 = *(int *)(iVar11 + *(int *)(param_1 + 0x10));
      iVar11 = iVar11 + 4;
      *(unsigned int *)(iVar14 + 0x28) = 0xffffffff;
      *(unsigned int *)(iVar14 + 0x2c) = 0;
      *(unsigned int *)(iVar14 + 0x30) = 0;
      *(unsigned int *)(iVar14 + 0x20) = 0;
    } while (uVar13 < *(unsigned int *)(param_1 + 4));
  }
  uVar13 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar11 = 0;
    do {
      iVar14 = *(int *)(iVar11 + *(int *)(param_1 + 0x14));
      iVar11 = iVar11 + 4;
      *(unsigned int *)(iVar14 + 0x34) = uVar13;
      uVar13 = uVar13 + 1;
      *(unsigned int *)(iVar14 + 0x54) = 0xffffffff;
      *(unsigned int *)(iVar14 + 0x58) = 0;
      *(unsigned int *)(iVar14 + 0x5c) = 0;
      *(unsigned int *)(iVar14 + 0x48) = 0xffffffff;
      *(unsigned int *)(iVar14 + 0x4c) = 0xffffffff;
      *(unsigned int *)(iVar14 + 0x50) = 0xffffffff;
    } while (uVar13 < *(unsigned int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar11 = 0;
      do {
        puVar9 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar11);
        uVar8 = ZEXT48(puVar9);
        if ((uVar8 != 0) && ((*puVar9 & 0xfff00000) != 0)) {
          uVar13 = 0;
          if (puVar9[1] != 0) {
            lVar6 = 0;
            do {
              fn_82968610(param_1,*(unsigned int *)(*(int *)((int)uVar8 + 8) + (int)lVar6));
              uVar13 = uVar13 + 1;
              lVar6 = lVar6 + 4;
            } while (uVar13 < *(unsigned int *)((int)uVar8 + 4));
          }
          puVar9 = (unsigned int *)uVar8;
          uVar12 = 0;
          uVar13 = 0;
          if (puVar9[3] != 0) {
            iVar14 = 0;
            do {
              fn_829686B0(param_1,*(unsigned int *)(iVar14 + *(int *)((int)uVar8 + 0x10)));
              puVar9 = (unsigned int *)uVar8;
              uVar13 = puVar9[3];
              uVar12 = uVar12 + 1;
              iVar14 = iVar14 + 4;
            } while (uVar12 < uVar13);
          }
          if ((((*puVar9 & 0xfff00000) == 0x10000000) && ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0)) &&
             (uVar12 = 0, uVar13 != 0)) {
            iVar14 = 0;
            do {
              iVar3 = *(int *)(*(int *)(iVar14 + puVar9[4]) * 4 + *(int *)(param_1 + 0x14));
              iVar4 = *(int *)(*(int *)(puVar9[2] + iVar14) * 4 + *(int *)(param_1 + 0x14));
              uVar13 = *(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
              if ((uVar13 & 0x1020) == 0) {
                if (((uVar13 & 1) != 0) && (*(int *)(iVar4 + 0x3c) == 0)) {
                  uVar1 = *(unsigned int *)(iVar3 + 0x34);
                  *(unsigned int *)(iVar3 + 0x34) = *(unsigned int *)(iVar4 + 0x34);
                  *(unsigned int *)(iVar4 + 0x34) = uVar1;
                }
              }
              uVar12 = uVar12 + 1;
              iVar14 = iVar14 + 4;
            } while (uVar12 < puVar9[3]);
          }
        }
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + 4;
      } while ((uVar10 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xc));
    }
    uVar12 = 0;
    uVar13 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar11 = 0;
      do {
        iVar14 = *(int *)(*(int *)(param_1 + 0x14) + iVar11);
        iVar3 = *(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10));
        uVar13 = *(unsigned int *)(iVar3 + 0x28);
        if (uVar13 < *(unsigned int *)(iVar14 + 0x54)) {
          *(unsigned int *)(iVar14 + 0x54) = uVar13;
        }
        uVar13 = *(unsigned int *)(iVar3 + 0x2c);
        if (*(unsigned int *)(iVar14 + 0x58) < uVar13) {
          *(unsigned int *)(iVar14 + 0x58) = uVar13;
        }
        uVar13 = *(unsigned int *)(param_1 + 8);
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar12 < uVar13);
    }
    if ((*(int *)(param_1 + 0xdc) != 0) && (uVar12 = 0, uVar13 != 0)) {
      iVar11 = 0;
      do {
        iVar14 = *(int *)(*(int *)(param_1 + 0x14) + iVar11);
        if (*(int *)(iVar14 + 0x4c) == -1) {
          *(unsigned int *)(iVar14 + 0x4c) = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar14 + 0x4c) * 4 + *(int *)(param_1 + 0x14));
          uVar13 = *(unsigned int *)(iVar3 + 0x58);
          *(unsigned int *)(iVar14 + 0x4c) = uVar13;
          uVar2 = *(unsigned int *)(iVar3 + 0x48);
          if (uVar13 <= uVar2) {
            *(unsigned int *)(iVar14 + 0x4c) = uVar2 + 1;
          }
        }
        if (*(int *)(iVar14 + 0x50) == -1) {
          *(unsigned int *)(iVar14 + 0x50) = 0xffffffff;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar14 + 0x50) * 4 + *(int *)(param_1 + 0x14));
          uVar13 = *(unsigned int *)(iVar3 + 0x54);
          *(unsigned int *)(iVar14 + 0x50) = uVar13;
          uVar2 = *(unsigned int *)(iVar3 + 0x48);
          if (uVar2 < uVar13) {
            *(unsigned int *)(iVar14 + 0x50) = uVar2;
          }
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar12 < *(unsigned int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      fn_82968730(param_1);
    }
    fn_8265C990(0,0x24810000);
    uVar7 = 0;
  }
  else {
    uVar13 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar11 = 0;
      do {
        uVar13 = uVar13 + 1;
        piVar5 = (int *)(iVar11 + *(int *)(param_1 + 0x10));
        iVar11 = iVar11 + 4;
        *(unsigned int *)(*piVar5 + 0x10) = 0;
      } while (uVar13 < *(unsigned int *)(param_1 + 4));
    }
    uVar13 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar11 = 0;
      do {
        iVar14 = *(int *)(*(int *)(param_1 + 0x14) + iVar11);
        iVar3 = *(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10));
        if ((((*(unsigned int *)(iVar3 + 4) & 0x40) == 0) && ((*(unsigned int *)(iVar3 + 4) & 2) != 0)) &&
           (uVar12 = *(int *)(iVar14 + 0xc) + 1, *(unsigned int *)(iVar3 + 0x10) < uVar12)) {
          *(unsigned int *)(iVar3 + 0x10) = uVar12;
        }
        uVar13 = uVar13 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar13 < *(unsigned int *)(param_1 + 8));
    }
    uVar10 = 0;
    uVar13 = 0;
    if (*(unsigned int *)(param_1 + 4) != 0) {
      iVar11 = 0;
      do {
        piVar5 = (int *)(*(int *)(param_1 + 0x10) + iVar11);
        uVar13 = uVar13 + 1;
        iVar11 = iVar11 + 4;
        uVar10 = *(unsigned int *)(*piVar5 + 0x10) + uVar10;
      } while (uVar13 < *(unsigned int *)(param_1 + 4));
    }
    lVar15 = (uVar10 & 0xfffffff) << 4;
    lVar6 = fn_8265C940(lVar15,0x24810000);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar6,0xff,lVar15);
    }
    uVar7 = 0xffffffff8007000e;
  }
  return uVar7;
}

