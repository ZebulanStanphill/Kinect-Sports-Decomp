typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_829576E0();
extern int fn_829640A0();
extern unsigned int uStack00000034;


unsigned __int64
fn_82959138(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,int param_6,int param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  bool bVar11;
  int iVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned int uVar15;
  int *piVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  int *piVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uStack00000034;
  int aiStack_120 [4];
  int aiStack_110 [4];
  int aiStack_100 [4];
  unsigned int auStack_f0 [4];
  unsigned int auStack_e0 [4];
  unsigned int auStack_d0 [4];
  unsigned int auStack_c0 [4];
  unsigned int auStack_b0 [44];
  
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x104);
  }
  iVar20 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x88) == *(int *)(*(int *)(**(int **)(param_6 + 0x10) * 4 + iVar20) + 4)) {
    puVar1 = *(unsigned int **)(param_1 + 0x104);
    bVar11 = false;
    if ((*puVar1 & 0xfffff) == puVar1[3]) {
      uVar18 = 0;
      if (puVar1[3] != 0) {
        iVar19 = 0;
        bVar11 = false;
        do {
          iVar12 = *(int *)(*(int *)(iVar19 + param_4) * 4 + iVar20);
          if ((((*(unsigned int *)(param_1 + 0x6c) & 0x2000) != 0) &&
              ((*(unsigned int *)(iVar12 + 0x3c) & 0x200) != 0)) && (param_2 == 0x80000)) {
            bVar11 = true;
          }
          if (((*(unsigned int *)(iVar12 + 0x3c) & 0x1f0000) != 0) &&
             ((*(unsigned int *)(iVar12 + 0x3c) & ~param_3 & 0x1f0000) != 0)) {
            if (param_2 != 0x80000) {
              return 1;
            }
            bVar11 = true;
          }
          if ((*(unsigned int *)(*(int *)(*(int *)((int)*(int **)(param_6 + 0x10) + iVar19) * 4 + iVar20) +
                        0x3c) & 0xfe00) != 0) {
            return 1;
          }
          if (((*(unsigned int *)(param_1 + 0x6c) & 0x4000000) != 0) &&
             ((*(unsigned int *)(*(int *)(*(int *)(iVar12 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x200)
              != 0)) {
            if ((*puVar1 & 0xfff00000) != 0x10100000) {
              return 1;
            }
            bVar11 = true;
          }
          uVar18 = uVar18 + 1;
          iVar19 = iVar19 + 4;
        } while (uVar18 < *(unsigned int *)(*(int *)(param_1 + 0x104) + 0xc));
      }
      uVar13 = 0;
      uVar18 = 0;
      if (*(int *)(param_6 + 0xc) != 0) {
        iVar20 = 0;
        do {
          iVar19 = *(int *)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar12 = *(int *)(*(int *)((param_4 - (int)aiStack_120) + (int)aiStack_120 + iVar20) * 4 +
                           *(int *)(param_1 + 0x14));
          uVar2 = *(unsigned int *)(iVar19 + 0xc);
          uVar3 = *(unsigned int *)(iVar19 + 0x10);
          uVar4 = *(unsigned int *)(iVar19 + 0x14);
          uVar5 = *(unsigned int *)(iVar19 + 0x18);
          uVar18 = *(unsigned int *)(iVar19 + 0x3c);
          uVar6 = *(unsigned int *)(iVar19 + 0x48);
          uVar7 = *(unsigned int *)(iVar19 + 0x68);
          *(unsigned int *)((int)aiStack_120 + iVar20) = *(unsigned int *)(iVar19 + 8);
          *(unsigned int *)((int)aiStack_110 + iVar20) = uVar2;
          *(unsigned int *)((int)aiStack_100 + iVar20) = uVar3;
          *(unsigned int *)((int)auStack_f0 + iVar20) = uVar4;
          *(unsigned int *)((int)auStack_e0 + iVar20) = uVar5;
          *(unsigned int *)((int)auStack_d0 + iVar20) = uVar18;
          *(unsigned int *)((int)auStack_c0 + iVar20) = uVar6;
          *(unsigned int *)((int)auStack_b0 + iVar20) = uVar7;
          if (bVar11) {
            uVar18 = uVar18 ^ param_5 | ~param_5 & uVar18;
          }
          else {
            *(unsigned int *)(iVar19 + 4) = *(unsigned int *)(iVar12 + 4);
            *(unsigned int *)(iVar19 + 8) = *(unsigned int *)(iVar12 + 8);
            *(unsigned int *)(iVar19 + 0xc) = *(unsigned int *)(iVar12 + 0xc);
            *(unsigned int *)(iVar19 + 0x10) = *(unsigned int *)(iVar12 + 0x10);
            *(unsigned int *)(iVar19 + 0x14) = *(unsigned int *)(iVar12 + 0x14);
            *(unsigned int *)(iVar19 + 0x18) = *(unsigned int *)(iVar12 + 0x18);
            *(unsigned int *)(iVar19 + 0x48) = *(unsigned int *)(iVar12 + 0x48);
            *(unsigned int *)(iVar19 + 0x68) = *(unsigned int *)(iVar12 + 0x68);
            uVar18 = *(unsigned int *)(iVar12 + 0x3c) ^ param_5 | *(unsigned int *)(iVar12 + 0x3c) & ~param_5 |
                     uVar18;
          }
          uVar13 = uVar13 + 1;
          *(unsigned int *)(iVar19 + 0x3c) = uVar18;
          uVar18 = *(unsigned int *)(param_6 + 0xc);
          iVar20 = iVar20 + 4;
        } while (uVar13 < uVar18);
      }
      uVar13 = 0;
      uStack00000034 = param_5;
      if (uVar18 != 0) {
        iVar20 = *(int *)(param_6 + 0x10);
        iVar19 = 0;
        do {
          iVar12 = fn_829576E0(param_1,*(unsigned int *)(iVar20 + iVar19));
          if (iVar12 == 1) goto LAB_82959650;
          uVar13 = uVar13 + 1;
          iVar19 = iVar19 + 4;
        } while (uVar13 < uVar18);
      }
      uVar22 = 0;
      uVar13 = 0xffffffff;
      uVar25 = 0xffffffff;
      uVar23 = 0;
      if (uVar18 != 0) {
        iVar20 = 0;
        do {
          iVar19 = *(int *)(*(int *)(*(int *)(param_6 + 0x10) + iVar20) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar12 = *(int *)(*(int *)((int)aiStack_120 + iVar20 + (param_4 - (int)aiStack_120)) * 4 +
                           *(int *)(param_1 + 0x14));
          if (*(unsigned int *)(iVar19 + 0x54) < uVar13) {
            uVar13 = *(unsigned int *)(iVar19 + 0x54);
          }
          if (uVar22 < *(unsigned int *)(iVar19 + 0x58)) {
            uVar22 = *(unsigned int *)(iVar19 + 0x58);
          }
          if ((((*(int *)(param_1 + 0x88) == *(int *)(iVar12 + 4)) &&
               (*(int *)((int)aiStack_120 + iVar20) == *(int *)(iVar12 + 8))) &&
              (*(int *)((int)aiStack_110 + iVar20) == *(int *)(iVar12 + 0xc))) &&
             (*(int *)((int)aiStack_100 + iVar20) == *(int *)(iVar12 + 0x10))) {
            uVar26 = *(unsigned int *)(iVar19 + 0x50);
          }
          else {
            uVar26 = *(unsigned int *)(iVar12 + 0x50);
          }
          if (uVar26 < uVar25) {
            uVar25 = uVar26;
          }
          uVar23 = uVar23 + 1;
          iVar20 = iVar20 + 4;
        } while (uVar23 < uVar18);
      }
      if (((param_7 != 0) || (uVar22 <= uVar25)) || ((*(unsigned int *)(param_1 + 0x6c) & 4) != 0)) {
        if (bVar11) {
          **(unsigned int **)(param_1 + 0x104) = **(unsigned int **)(param_1 + 0x104) & 0xfffff | 0x10000000;
          return 0;
        }
        if (uVar13 <= uVar22) {
          piVar24 = (int *)(uVar13 * 4 + *(int *)(param_1 + 0x18));
          do {
            puVar1 = (unsigned int *)*piVar24;
            uVar25 = *puVar1;
            if (uVar25 != 0) {
              uVar23 = uVar25 & 0xfffff;
              piVar21 = (int *)puVar1[2];
              bVar11 = false;
              piVar14 = piVar21 + puVar1[1];
              if (piVar21 < piVar14) {
                do {
                  uVar15 = 0;
                  piVar16 = piVar21;
                  uVar26 = uVar23;
                  if ((uVar25 & 0xfffff) != 0) {
                    do {
                      uVar17 = 0;
                      if (uVar18 != 0) {
                        iVar20 = 0;
                        do {
                          if (*(int *)(*(int *)(param_6 + 0x10) + iVar20) == *piVar16) {
                            uVar15 = uVar15 + 1;
                            break;
                          }
                          uVar17 = uVar17 + 1;
                          iVar20 = iVar20 + 4;
                        } while (uVar17 < uVar18);
                      }
                      uVar26 = uVar26 - 1;
                      piVar16 = piVar16 + 1;
                    } while (uVar26 != 0);
                    if (uVar15 != 0) {
                      if (((uVar15 != uVar23) ||
                          (uVar26 = uVar25 & 0xfff00000, uVar26 == 0x70500000)) ||
                         ((uVar26 == 0x70600000 || (uVar26 == 0x70700000)))) goto LAB_82959650;
                      bVar11 = true;
                    }
                  }
                  piVar21 = piVar21 + uVar23;
                } while (piVar21 < piVar14);
                if (((bVar11) &&
                    (((((uVar25 & 0xf0000000) == 0x60000000 ||
                       (uVar25 = uVar25 & 0xfff00000, uVar25 == 0x10d00000)) ||
                      (uVar25 == 0x10e00000)) || (uVar25 == 0x11000000)))) &&
                   ((*(unsigned int *)(param_1 + 0x6c) & 0x80) == 0)) goto LAB_82959650;
              }
            }
            uVar13 = uVar13 + 1;
            piVar24 = piVar24 + 1;
          } while (uVar13 <= uVar22);
        }
        if (*(int *)(param_1 + 0x160) == 0) {
          uVar13 = 0;
          if (uVar18 != 0) {
            iVar20 = 0;
            do {
              puVar1 = *(unsigned int **)(*(unsigned int *)(iVar20 + param_4) * 4 + *(int *)(param_1 + 0x14));
              uVar18 = puVar1[0xe];
              puVar10 = *(unsigned int **)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                                  *(int *)(param_1 + 0x14));
              if (uVar18 == 0xffffffff) {
                puVar10[0xe] = *(unsigned int *)(iVar20 + param_4);
              }
              else {
                puVar10[0xe] = uVar18;
              }
              uVar18 = *puVar1;
              *puVar10 = uVar18;
              if (param_5 == 0x80000) {
                if ((uVar18 & 4) != 0) {
                  *puVar10 = uVar18 & 0xfffffff3 | 8;
                  goto LAB_82959764;
                }
              }
              else {
LAB_82959764:
                if (param_5 == 0x100000) {
                  *puVar10 = *puVar10 | 4;
                }
              }
              fn_829640A0();
              uVar13 = uVar13 + 1;
              iVar20 = iVar20 + 4;
            } while (uVar13 < *(unsigned int *)(param_6 + 0xc));
          }
          **(unsigned int **)(param_1 + 0x104) = 0;
          return 0;
        }
        *(unsigned int *)(param_1 + 0x160) = 2;
      }
LAB_82959650:
      uVar18 = 0;
      if (*(int *)(param_6 + 0xc) != 0) {
        iVar20 = 0;
        do {
          uVar2 = *(unsigned int *)((int)aiStack_120 + iVar20);
          uVar3 = *(unsigned int *)((int)aiStack_110 + iVar20);
          uVar4 = *(unsigned int *)((int)aiStack_100 + iVar20);
          uVar5 = *(unsigned int *)((int)auStack_f0 + iVar20);
          uVar18 = uVar18 + 1;
          uVar6 = *(unsigned int *)((int)auStack_e0 + iVar20);
          uVar7 = *(unsigned int *)((int)auStack_d0 + iVar20);
          iVar19 = *(int *)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          uVar8 = *(unsigned int *)((int)auStack_c0 + iVar20);
          uVar9 = *(unsigned int *)((int)auStack_b0 + iVar20);
          iVar20 = iVar20 + 4;
          *(unsigned int *)(iVar19 + 4) = *(unsigned int *)(param_1 + 0x88);
          *(unsigned int *)(iVar19 + 8) = uVar2;
          *(unsigned int *)(iVar19 + 0xc) = uVar3;
          *(unsigned int *)(iVar19 + 0x10) = uVar4;
          *(unsigned int *)(iVar19 + 0x14) = uVar5;
          *(unsigned int *)(iVar19 + 0x18) = uVar6;
          *(unsigned int *)(iVar19 + 0x3c) = uVar7;
          *(unsigned int *)(iVar19 + 0x48) = uVar8;
          *(unsigned int *)(iVar19 + 0x68) = uVar9;
        } while (uVar18 < *(unsigned int *)(param_6 + 0xc));
      }
    }
  }
  return 1;
}

