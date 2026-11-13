unsigned __int64 fn_82C2F3A8(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  __int64 lVar11;
  short sVar13;
  int *piVar12;
  short sVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  
  if (0 < *(short *)(param_1 + 0x244)) {
    iVar16 = 0;
    iVar3 = 0;
    do {
      uVar1 = *(unsigned int *)(param_1 + 0x288);
      uVar5 = (unsigned __int64)uVar1;
      iVar3 = *(short *)(iVar3 + *(int *)(param_1 + 0x248)) * 0x6f0 + *(int *)(param_1 + 0x140);
      sVar14 = *(short *)(iVar3 + 0x76);
      uVar17 = (unsigned __int64)sVar14;
      lVar6 = ((__int64)**(short **)(*(int *)(iVar3 + 0x1a8) + 0xc) & 0x3fffffffU) * 4 +
              (unsigned __int64)*(unsigned int *)(iVar3 + 0x38);
      piVar2 = (int *)lVar6;
      if (uVar1 == 1) {
        *piVar2 = (*(int *)(param_1 + 0x278) * *(int *)(iVar3 + 0x1d4) >>
                  ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + *piVar2;
        if (1 < sVar14) {
          lVar8 = uVar17 - 1;
          do {
            piVar12 = (int *)lVar6;
            lVar6 = lVar6 + 4;
            *(int *)lVar6 =
                 (*piVar12 * *(int *)(param_1 + 0x278) >> ((int)*(short *)(param_1 + 0x246) & 0x3fU)
                 ) + piVar12[1];
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *(unsigned int *)(iVar3 + 0x1d4) =
             *(unsigned int *)((int)piVar2 + (int)((uVar17 & 0xffffffff) << 2) + -4);
      }
      else if (uVar1 == 2) {
        iVar10 = (*(int *)(param_1 + 0x27c) * *(int *)(iVar3 + 0x1d8) +
                  *(int *)(param_1 + 0x278) * *(int *)(iVar3 + 0x1d4) >>
                 ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + *piVar2;
        *piVar2 = iVar10;
        piVar2[1] = (iVar10 * *(int *)(param_1 + 0x278) +
                     *(int *)(param_1 + 0x27c) * *(int *)(iVar3 + 0x1d4) >>
                    ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + piVar2[1];
        if (2 < sVar14) {
          lVar8 = uVar17 - 2;
          lVar6 = lVar6 + 8;
          do {
            piVar12 = (int *)lVar6;
            *piVar12 = (piVar12[-2] * *(int *)(param_1 + 0x27c) +
                        *(int *)(param_1 + 0x278) * piVar12[-1] >>
                       ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + *piVar12;
            lVar6 = lVar6 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *(unsigned int *)(iVar3 + 0x1d4) =
             *(unsigned int *)((int)piVar2 + (int)((uVar17 & 0xffffffff) << 2) + -4);
        *(unsigned int *)(iVar3 + 0x1d8) =
             *(unsigned int *)((int)((uVar17 - 2 & 0xffffffff) << 2) + (int)piVar2);
      }
      else {
        lVar8 = 0;
        if (0 < (int)uVar1) {
          lVar4 = lVar6 + -4;
          do {
            iVar10 = 0;
            if (0 < (int)uVar5) {
              lVar11 = 0;
              iVar10 = 0;
              do {
                uVar15 = lVar11 + 0x9e;
                if ((int)lVar11 < (int)lVar8) {
                  iVar7 = *(int *)((int)(((lVar8 - lVar11) - 1U & 0xffffffff) << 2) + (int)piVar2);
                }
                else {
                  iVar7 = *(int *)((int)(((lVar11 - lVar8) + 0x75U & 0xffffffff) << 2) + iVar3);
                }
                sVar13 = (short)lVar11 + 1;
                lVar11 = (__int64)sVar13;
                iVar10 = iVar7 * *(int *)((int)((uVar15 & 0xffffffff) << 2) + param_1) + iVar10;
              } while ((int)sVar13 < (int)uVar5);
            }
            lVar8 = lVar8 + 1;
            iVar7 = (int)lVar4;
            lVar4 = lVar4 + 4;
            *(int *)lVar4 =
                 (iVar10 >> ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + *(int *)(iVar7 + 4);
            uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x288);
          } while ((int)lVar8 < (int)*(unsigned int *)(param_1 + 0x288));
        }
        if ((int)uVar5 < (int)sVar14) {
          lVar8 = (uVar5 & 0x3fffffff) * 4 + lVar6 + -4;
          do {
            iVar10 = 0;
            if (0 < *(int *)(param_1 + 0x288)) {
              lVar4 = 0;
              iVar10 = 0;
              do {
                lVar11 = uVar5 - lVar4;
                uVar15 = lVar4 + 0x9e;
                sVar13 = (short)lVar4 + 1;
                lVar4 = (__int64)sVar13;
                iVar10 = *(int *)((int)((lVar11 - 1U & 0xffffffff) << 2) + (int)piVar2) *
                         *(int *)((int)((uVar15 & 0xffffffff) << 2) + param_1) + iVar10;
              } while ((int)sVar13 < *(int *)(param_1 + 0x288));
            }
            uVar5 = uVar5 + 1;
            iVar7 = (int)lVar8;
            lVar8 = lVar8 + 4;
            *(int *)lVar8 =
                 (iVar10 >> ((int)*(short *)(param_1 + 0x246) & 0x3fU)) + *(int *)(iVar7 + 4);
          } while ((int)uVar5 < (int)sVar14);
        }
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x288)) {
          puVar9 = (unsigned int *)(iVar3 + 0x1d0);
          lVar6 = (uVar17 & 0x3fffffff) * 4 + lVar6;
          do {
            lVar6 = lVar6 + -4;
            iVar10 = iVar10 + 1;
            puVar9 = puVar9 + 1;
            *puVar9 = *(unsigned int *)lVar6;
          } while (iVar10 < *(int *)(param_1 + 0x288));
        }
      }
      sVar14 = (short)iVar16 + 1;
      iVar16 = (int)sVar14;
      iVar3 = iVar16 << 1;
    } while (sVar14 < *(short *)(param_1 + 0x244));
  }
  return 1;
}

