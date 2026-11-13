extern int fn_829536C8();
extern int fn_82959138();
extern int fn_82964628();
extern int fn_82975BB8();
extern unsigned int lbl_820380A0;


unsigned __int64 fn_829598F0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  double dVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int *piVar9;
  unsigned int uVar10;
  int *piVar11;
  int *piVar12;
  unsigned int uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int aiStack_60 [24];
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  uVar2 = *puVar1;
  if ((uVar2 & 0xfff00000) == 0x20400000) {
    uVar13 = uVar2 & 0xfffff;
    iVar14 = uVar13 * 4;
    piVar11 = (int *)puVar1[2];
    uVar5 = uVar2 & 0xfffff;
    iVar15 = *(int *)(param_1 + 0x14);
    iVar16 = *(int *)(param_1 + 0x10);
    piVar9 = piVar11 + uVar13;
    if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(piVar11[uVar13] * 4 + iVar15) + 4) * 4 + iVar16) + 4)
        & 0x100) == 0) {
      if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*piVar11 * 4 + iVar15) + 4) * 4 + iVar16) + 4) &
          0x100) == 0) {
        return 1;
      }
      iVar17 = 1;
      piVar12 = piVar11;
    }
    else {
      iVar17 = 0;
      piVar12 = piVar9;
      piVar9 = piVar11;
    }
    uVar13 = 0;
    *(unsigned int *)(param_1 + 0x160) = 0;
    dVar6 = lbl_820380A0;
    if ((uVar2 & 0xfffff) != 0) {
      piVar11 = piVar9;
      do {
        if (*(double *)
             (*(int *)(*(int *)(((int)piVar12 - (int)piVar9) + (int)piVar11) * 4 + iVar15) + 0x20)
            != dVar6) {
          return 1;
        }
        puVar3 = *(unsigned int **)(*piVar11 * 4 + iVar15);
        if ((((puVar3[0xf] & 0x200) == 0) && ((*puVar3 & 4) == 0)) &&
           ((*(unsigned int *)(param_1 + 0x6c) & 0x1000) != 0)) {
          *(unsigned int *)(param_1 + 0x160) = 1;
        }
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar13 < uVar5);
    }
    iVar8 = *(int *)(*(int *)(*(int *)puVar1[4] * 4 + iVar15) + 4);
    if (iVar8 == *(int *)(param_1 + 0x88)) {
      uVar7 = fn_82959138(param_1,0x20000,0,piVar9,0x20000,0,0);
      if (*(int *)(param_1 + 0x160) == 2) {
        fn_82975BB8(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x125d,
                          0xffffffff82038060);
        return uVar7;
      }
      return uVar7;
    }
    if (iVar8 == *(int *)(param_1 + 0x84)) {
      uVar7 = fn_829536C8(param_1,uVar5 | 0x20400000,puVar1,aiStack_60,2);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      iVar17 = aiStack_60[iVar17];
      if (iVar17 != 0) {
        uVar13 = 0;
        if ((uVar2 & 0xfffff) != 0) {
          iVar8 = 0;
          do {
            puVar1 = *(unsigned int **)(*(int *)(*(int *)(iVar17 + 8) + iVar8) * 4 + iVar15);
            if ((((puVar1[0xf] & 0x1f0000) != 0) ||
                ((*(unsigned int *)(*(int *)(puVar1[1] * 4 + iVar16) + 4) & 0x200) != 0)) ||
               (((puVar1[0xf] & 0x200) == 0 && ((*puVar1 & 4) == 0)))) break;
            uVar13 = uVar13 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar13 < uVar5);
        }
        uVar10 = 0;
        if (uVar13 != uVar5) {
          uVar13 = 0;
          if ((uVar2 & 0xfffff) != 0) {
            do {
              puVar1 = *(unsigned int **)(*(int *)(*(int *)(iVar17 + 8) + iVar14) * 4 + iVar15);
              if ((((puVar1[0xf] & 0x1f0000) != 0) ||
                  ((*(unsigned int *)(*(int *)(puVar1[1] * 4 + iVar16) + 4) & 0x200) != 0)) ||
                 (((puVar1[0xf] & 0x200) == 0 && ((*puVar1 & 4) == 0)))) break;
              uVar13 = uVar13 + 1;
              iVar14 = iVar14 + 4;
            } while (uVar13 < uVar5);
          }
          uVar10 = uVar5;
          if (uVar13 == uVar5) {
            return 1;
          }
        }
        uVar13 = 0;
        if ((uVar2 & 0xfffff) != 0) {
          iVar15 = 0;
          iVar16 = uVar10 << 2;
          do {
            iVar14 = *(int *)(*(int *)(iVar16 + *(int *)(iVar17 + 8)) * 4 + *(int *)(param_1 + 0x14)
                             );
            iVar8 = fn_82964628(*(unsigned __int64 *)(iVar14 + 0x20),param_1,
                                      *(unsigned int *)(iVar14 + 4),*(unsigned int *)(iVar14 + 0xc),
                                      *(unsigned int *)(iVar14 + 0x10));
            *(int *)((int)aiStack_60 + iVar15) = iVar8;
            if (iVar8 == -1) {
              return 0xffffffff8007000e;
            }
            uVar13 = uVar13 + 1;
            iVar4 = *(int *)(iVar8 * 4 + *(int *)(param_1 + 0x14));
            *(unsigned int *)(iVar4 + 0x38) = *(unsigned int *)(iVar16 + *(int *)(iVar17 + 8));
            *(unsigned int *)(iVar4 + 0x48) = *(unsigned int *)(iVar14 + 0x48);
            *(unsigned int *)(iVar4 + 0x50) = *(unsigned int *)(iVar14 + 0x50);
            *(unsigned int *)(iVar4 + 0x54) = *(unsigned int *)(iVar14 + 0x54);
            *(unsigned int *)(iVar4 + 0x58) = *(unsigned int *)(iVar14 + 0x54);
            *(unsigned int *)(iVar4 + 0x3c) = *(unsigned int *)(iVar14 + 0x3c) | 0x20000;
            *(int *)(iVar16 + *(int *)(iVar17 + 8)) = iVar8;
            iVar16 = iVar16 + 4;
            *(unsigned int *)(*(int *)(iVar17 + 0x10) + iVar15) =
                 *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar15);
            iVar15 = iVar15 + 4;
          } while (uVar13 < uVar5);
        }
        **(unsigned int **)(param_1 + 0x104) = 0;
        return 0;
      }
    }
  }
  return 1;
}

