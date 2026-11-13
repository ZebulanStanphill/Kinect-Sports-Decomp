#define true 1
extern int fn_82A81528();
extern int fn_82C2F308();
extern int fn_82C2F3A8();
extern int fn_82C34E90();
extern int fn_82C35FE8();
extern int fn_82C36300();
extern int memset();


unsigned __int64 fn_82C36898(int *param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar12;
  int iVar13;
  int *piVar14;
  __int64 lVar11;
  short sVar15;
  unsigned __int64 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_1[9];
  iVar2 = *param_1;
  uVar16 = 0;
  do {
    if (iVar19 == 8) {
      return uVar16;
    }
    uVar3 = param_1[9];
    if (((uVar3 < 8) && (uVar3 != 1)) && (uVar3 != 2)) {
      if (uVar3 == 3) {
        if (*(int *)(iVar2 + 0xcc) == 0) {
          if (param_1[5] == 0) {
            return 0xffffffff80040002;
          }
          if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar2 + 0x244)) {
            do {
              iVar19 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) *
                       0x6f0 + *(int *)(iVar2 + 0x140);
              if ((*(int *)(iVar19 + 0x28) != 0) &&
                 (uVar16 = fn_82C36300(iVar2,param_1,iVar19), (int)uVar16 < 0)) {
                return uVar16;
              }
              if (*(short *)(iVar19 + 0x76) < *(short *)(*param_1 + 0xca)) {
                return 0xffffffff80040002;
              }
              param_1[0x12] = 0;
              *(unsigned short *)(param_1 + 0x25) = 0;
              *(unsigned short *)(*param_1 + 0xca) = 0;
              sVar15 = *(short *)((int)param_1 + 0x96) + 1;
              param_1[0x13] = 0;
              param_1[0x32] = 0;
              param_1[0x34] = 0;
              *(short *)((int)param_1 + 0x96) = sVar15;
            } while (sVar15 < *(short *)(iVar2 + 0x244));
          }
          param_1[9] = 6;
          *(unsigned short *)((int)param_1 + 0x96) = 0;
        }
        else {
          if (*(int *)(iVar2 + 0xcc) == 1) {
            if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar2 + 0x244)) {
              do {
                iVar19 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) *
                         0x6f0 + *(int *)(iVar2 + 0x140);
                uVar16 = fn_82C35FE8(iVar2,param_1,iVar19);
                if ((int)uVar16 < 0) {
                  return uVar16;
                }
                if (*(short *)(iVar19 + 0x76) < *(short *)(*param_1 + 0xca)) {
                  return 0xffffffff80040002;
                }
                param_1[0x12] = 0;
                *(unsigned short *)(*param_1 + 0xca) = 0;
                sVar15 = *(short *)((int)param_1 + 0x96) + 1;
                *(short *)((int)param_1 + 0x96) = sVar15;
              } while (sVar15 < *(short *)(iVar2 + 0x244));
            }
            param_1[9] = 7;
          }
          *(unsigned short *)((int)param_1 + 0x96) = 0;
        }
      }
      else if ((uVar3 != 4) && (uVar3 != 5)) {
        if (uVar3 == 6) {
          *(unsigned short *)((int)param_1 + 0x96) = 0;
          sVar15 = *(short *)(iVar2 + 0x244);
          if (0 < sVar15) {
            do {
              iVar19 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) *
                       0x6f0 + *(int *)(iVar2 + 0x140);
              if (*(int *)(iVar19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                memset(((__int64)**(short **)(*(int *)(iVar19 + 0x1a8) + 0xc) & 0x3fffffffU)
                             * 4 + (unsigned __int64)*(unsigned int *)(iVar19 + 0x38),0,
                             ((__int64)*(short *)(iVar19 + 0x76) & 0x3fffffffU) << 2);
              }
              sVar7 = *(short *)((int)param_1 + 0x96) + 1;
              *(short *)((int)param_1 + 0x96) = sVar7;
              sVar15 = *(short *)(iVar2 + 0x244);
            } while (sVar7 < sVar15);
          }
          if (*(int *)(iVar2 + 0x290) == 1) {
            uVar1 = *(unsigned short *)(iVar2 + 0x22);
            iVar19 = *(int *)(iVar2 + 0x16c);
            iVar8 = *(int *)(iVar2 + 0x170);
            if ((int)sVar15 != (unsigned int)uVar1) {
              return 0xffffffff80040002;
            }
            iVar18 = 0;
            iVar17 = (int)*(short *)(**(short **)(iVar2 + 0x248) * 0x6f0 + *(int *)(iVar2 + 0x140) +
                                    0x76);
            if (0 < iVar17) {
              do {
                if (uVar1 != 0) {
                  iVar9 = 0;
                  do {
                    iVar12 = iVar9 * 0x6f0 + *(int *)(iVar2 + 0x140);
                    iVar13 = iVar9 * 4;
                    *(unsigned int *)(iVar13 + iVar19) =
                         *(unsigned int *)
                          ((**(short **)(*(int *)(iVar12 + 0x1a8) + 0xc) + iVar18) * 4 +
                          *(int *)(iVar12 + 0x38));
                    if (*(int *)(iVar12 + 0x28) == 0) {
                      *(unsigned int *)(iVar13 + iVar8) = 0;
                    }
                    else {
                      *(unsigned int *)(iVar13 + iVar8) = 1;
                    }
                    sVar15 = (short)iVar9 + 1;
                    iVar9 = (int)sVar15;
                  } while ((int)sVar15 < (int)(unsigned int)*(unsigned short *)(iVar2 + 0x22));
                }
                (**(int (***)())(iVar2 + 500))(iVar2,iVar2 + 0x298,iVar19,iVar8,1);
                (**(int (***)())(iVar2 + 0x1f8))(iVar2,iVar2 + 0x298,iVar19,iVar8);
                uVar1 = 0;
                if (*(short *)(iVar2 + 0x22) != 0) {
                  iVar13 = 0;
                  iVar9 = 0;
                  do {
                    puVar4 = (unsigned int *)(iVar9 + iVar19);
                    iVar12 = iVar13 * 0x6f0 + *(int *)(iVar2 + 0x140);
                    sVar15 = (short)iVar13 + 1;
                    iVar13 = (int)sVar15;
                    iVar9 = iVar13 << 2;
                    *(unsigned int *)
                     ((**(short **)(*(int *)(iVar12 + 0x1a8) + 0xc) + iVar18) * 4 +
                     *(int *)(iVar12 + 0x38)) = *puVar4;
                    uVar1 = *(unsigned short *)(iVar2 + 0x22);
                  } while ((int)sVar15 < (int)(unsigned int)uVar1);
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar17);
            }
          }
          if ((*(int *)(iVar2 + 0xb8) == 1) && (*(short *)(iVar2 + 0x244) == 2)) {
            iVar8 = **(short **)(iVar2 + 0x248) * 0x6f0 + *(int *)(iVar2 + 0x140);
            iVar19 = (*(short **)(iVar2 + 0x248))[1] * 0x6f0 + *(int *)(iVar2 + 0x140);
            uVar10 = (unsigned __int64)*(short *)(iVar8 + 0x76);
            piVar14 = (int *)(**(short **)(*(int *)(iVar19 + 0x1a8) + 0xc) * 4 +
                             *(int *)(iVar19 + 0x38));
            if ((uVar10 & 0xffffffff) != 0) {
              iVar19 = (**(short **)(*(int *)(iVar8 + 0x1a8) + 0xc) * 4 + *(int *)(iVar8 + 0x38)) -
                       (int)piVar14;
              do {
                iVar8 = *(int *)(iVar19 + (int)piVar14) - (*piVar14 >> 1);
                *(int *)(iVar19 + (int)piVar14) = iVar8;
                *piVar14 = *piVar14 + iVar8;
                piVar14 = piVar14 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          if ((int)*(short *)(iVar2 + 0x244) != (unsigned int)*(unsigned short *)(iVar2 + 0x22)) {
            return 0xffffffff80040002;
          }
          if (*(int *)(iVar2 + 0xb4) == 1) {
            fn_82C2F3A8(iVar2);
          }
          if (*(short *)(iVar2 + 0xd0) != 1) {
            fn_82C2F308(iVar2);
          }
          if (((*(int *)(iVar2 + 0x78) == 1) && (*(int *)(iVar2 + 0xa4) == 1)) &&
             (0 < *(short *)(iVar2 + 0x244))) {
            iVar8 = 0;
            iVar19 = 0;
            do {
              iVar19 = *(short *)(iVar19 + *(int *)(iVar2 + 0x248)) * 0x6f0 +
                       *(int *)(iVar2 + 0x140);
              fn_82A81528(iVar2,*(unsigned int *)(iVar19 + 0x38),iVar19 + 0x650,
                                *(unsigned int *)(iVar19 + 0x38),iVar19 + 0x5b0,
                                *(unsigned short *)(iVar19 + 0x76),*(unsigned short *)(iVar2 + 0xa8));
              sVar15 = (short)iVar8 + 1;
              iVar8 = (int)sVar15;
              iVar19 = iVar8 << 1;
            } while (sVar15 < *(short *)(iVar2 + 0x244));
          }
          param_1[9] = 7;
        }
        else if (uVar3 == 0) {
          uVar16 = fn_82C34E90(param_1);
          if ((int)uVar16 < 0) {
            return uVar16;
          }
          param_1[9] = 3;
          *(unsigned short *)((int)param_1 + 0x96) = 0;
          param_1[0x12] = 0;
          *(unsigned short *)(param_1 + 0x25) = 0;
          *(unsigned short *)(*param_1 + 0xca) = 0;
          param_1[0x13] = 0;
          param_1[0x32] = 0;
          param_1[0x34] = 0;
        }
        else {
          if ((*(char *)(iVar2 + 200) != '\0') && (0 < *(short *)(iVar2 + 0x244))) {
            iVar8 = 0;
            iVar19 = 0;
            do {
              iVar19 = *(short *)(iVar19 + *(int *)(iVar2 + 0x248)) * 0x6f0 +
                       *(int *)(iVar2 + 0x140);
              lVar11 = (__int64)*(short *)(iVar19 + 0x76);
              if (0 < *(short *)(iVar19 + 0x76)) {
                piVar14 = (int *)(**(short **)(*(int *)(iVar19 + 0x1a8) + 0xc) * 4 +
                                  *(int *)(iVar19 + 0x38) + -4);
                do {
                  piVar5 = piVar14 + 1;
                  piVar14 = piVar14 + 1;
                  *piVar14 = *piVar5 << ((int)*(char *)(iVar2 + 200) & 0x3fU);
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              sVar15 = (short)iVar8 + 1;
              iVar8 = (int)sVar15;
              iVar19 = iVar8 << 1;
            } while (sVar15 < *(short *)(iVar2 + 0x244));
          }
          sVar15 = *(short *)(iVar2 + 0x244);
          if (0 < sVar15) {
            iVar8 = 0;
            iVar19 = 0;
            do {
              sVar7 = (short)iVar8 + 1;
              iVar8 = (int)sVar7;
              psVar6 = (short *)(iVar19 + *(int *)(iVar2 + 0x248));
              iVar19 = iVar8 << 1;
              iVar18 = *psVar6 * 0x6f0 + *(int *)(iVar2 + 0x140);
              iVar17 = *(int *)(iVar18 + 0x1a8);
              psVar6 = *(short **)(iVar17 + 0xc);
              *psVar6 = *(short *)(*(short *)(iVar18 + 0x72) * 2 + *(int *)(iVar17 + 8)) + *psVar6;
              sVar15 = *(short *)(iVar2 + 0x244);
            } while (sVar7 < sVar15);
          }
          if ((*(int *)(iVar2 + 0xb0) == 1) && (0 < sVar15)) {
            iVar8 = 0;
            iVar19 = 0;
            do {
              sVar7 = (short)iVar8 + 1;
              iVar8 = (int)sVar7;
              sVar15 = *(short *)(iVar19 + *(int *)(iVar2 + 0x248));
              iVar19 = iVar8 << 1;
              iVar17 = sVar15 * 4;
              *(int *)(iVar17 + *(int *)(iVar2 + 0x164)) =
                   (int)*(short *)(sVar15 * 0x6f0 + *(int *)(iVar2 + 0x140) + 0x76) +
                   *(int *)(iVar17 + *(int *)(iVar2 + 0x164));
            } while (sVar7 < *(short *)(iVar2 + 0x244));
          }
          param_1[9] = 8;
        }
      }
    }
    iVar19 = param_1[9];
  } while( true );
}

