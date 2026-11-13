typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82B102D0();
extern int fn_82B41D68();
extern int fn_82B84350();


void fn_82B1EB50(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar10;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  int iVar17;
  unsigned int *puVar18;
  unsigned int *puVar19;
  int iVar20;
  int iVar21;
  unsigned int uVar22;
  unsigned int *puVar23;
  unsigned int uVar24;
  int *piVar25;
  unsigned __int64 uVar26;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      do {
        bVar9 = false;
        uVar1 = *(unsigned int *)(param_1 + 4);
        iVar20 = *(int *)(param_1 + 0x6c) + 1;
        *(int *)(param_1 + 0x6c) = iVar20;
        for (; ((uVar1 & 1) == 0 && (uVar1 != 0)); uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
          if ((*(unsigned int *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
            *(int *)(uVar1 + 0x2c) = iVar20;
            for (piVar4 = *(int **)(uVar1 + 0x14);
                (((unsigned int)piVar4 & 1) == 0 && (piVar4 != (int *)0x0));
                piVar4 = *(int **)(((unsigned int)piVar4 & 0xfffffffe) + 0x28)) {
              if ((piVar4[2] & 0x3f80U) == 0x3800) {
                for (iVar5 = *(int *)(uVar1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
                  iVar6 = *(int *)(iVar5 + 4);
                  iVar21 = iVar6;
                  if (iVar6 != 0) {
                    do {
                      if ((*(unsigned int *)(iVar21 + 0x30) & 0x80000) != 0) break;
                      iVar21 = *(int *)(iVar21 + 0x34);
                    } while (iVar21 != 0);
                    if (iVar21 != 0) {
                      puVar14 = (unsigned int *)fn_82B41D68(param_1,piVar4,iVar6,0,1);
                      uVar15 = *(unsigned int *)(puVar14[3] + 0x1c);
                      if ((uVar15 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) &
                                     *(unsigned int *)(param_1 + 4))) &&
                         (uVar26 = (unsigned __int64)*(unsigned int *)(iVar21 + 0x30) & 0x7ffff,
                         (*(unsigned int *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar15 + 0x28)) &
                         1 << ((unsigned int)uVar26 & 0x1f)) == 0)) {
                        uVar26 = (unsigned __int64)*puVar14 & 0x19;
                        uVar15 = fn_82B102D0(param_1,iVar21,puVar14[3],*puVar14 >> 5 & 3,uVar26);
                        for (iVar7 = *(int *)(uVar1 + 8); piVar25 = piVar4, iVar7 != 0;
                            iVar7 = *(int *)(iVar7 + 0xc)) {
                          iVar8 = *(int *)(iVar7 + 4);
                          if ((iVar6 != iVar8) &&
                             (puVar16 = (unsigned int *)fn_82B41D68(param_1,piVar4,iVar8,0,1),
                             puVar14 == puVar16)) {
                            if (iVar8 != 0) {
                              uVar2 = *puVar14;
                              puVar14 = (unsigned int *)fn_82AD17B0(param_1,uVar15);
                              *puVar14 = *puVar14 & 0xf1ffffff | 0x2000000;
                              fn_82AD1270(puVar14,((unsigned __int64)uVar2 & 0x1f) - uVar26);
                              *puVar14 = *puVar14 & 0xffffe01f | 0x1c80;
                              fn_82AD1978(piVar4,puVar14);
                              goto LAB_82b1f0dc;
                            }
                            break;
                          }
                        }
                        puVar19 = (unsigned int *)(puVar14[3] + 4);
                        for (puVar16 = (unsigned int *)*puVar19; puVar16 != puVar14;
                            puVar16 = (unsigned int *)puVar16[2]) {
                          puVar19 = puVar16 + 2;
                        }
                        *puVar19 = puVar14[2];
                        puVar14[2] = *(unsigned int *)(uVar15 + 4);
                        *(unsigned int **)(uVar15 + 4) = puVar14;
                        puVar14[3] = uVar15;
                        *puVar14 = *puVar14 & 0xffffe000 | 0x1c80 |
                                   (*puVar14 & 0xffffe01f) - (int)uVar26 & 0x1f;
LAB_82b1f0dc:
                        while (iVar6 = *piVar25, iVar6 != 0) {
                          for (iVar7 = *(int *)(uVar1 + 8); iVar7 != 0;
                              iVar7 = *(int *)(iVar7 + 0xc)) {
                            iVar8 = *(int *)(iVar7 + 4);
                            iVar17 = fn_82B41D68(param_1,piVar4,iVar8,0,1);
                            if (iVar17 == iVar6) {
                              if (iVar8 != 0) goto LAB_82b1f138;
                              break;
                            }
                          }
                          fn_82AD20C0(piVar4,iVar6,param_1);
LAB_82b1f138:
                          if (*piVar25 == iVar6) {
                            piVar25 = (int *)(iVar6 + 4);
                          }
                        }
                        if (*(int *)(iVar21 + 0x2c) == iVar20) {
                          bVar9 = true;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (!bVar9) {
          return;
        }
      } while( true );
    }
    if ((*(unsigned int *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
      for (uVar15 = *(unsigned int *)(param_1 + 4); ((uVar15 & 1) == 0 && (uVar15 != 0));
          uVar15 = *(unsigned int *)((uVar15 & 0xfffffffe) + 4)) {
        uVar26 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x30) & 0x7ffff;
        if ((*(unsigned int *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar15 + 0x28)) &
            1 << ((unsigned int)uVar26 & 0x1f)) != 0) {
          if ((*(unsigned int *)(uVar15 + 0x14) & 1) == 0) {
            iVar20 = uVar15 + 0x10;
            puVar14 = (unsigned int *)(-(unsigned int)((*(unsigned int *)(uVar15 + 0x14) & 1) == 0) &
                              *(unsigned int *)(uVar15 + 0x14));
          }
          else {
            if ((*(unsigned int *)(uVar15 + 0x1c) & 1) == 0) {
              uVar2 = *(unsigned int *)(uVar15 + 0x1c);
              iVar20 = uVar15 + 0x18;
            }
            else {
              uVar2 = *(unsigned int *)(uVar15 + 0x24);
              iVar20 = uVar15 + 0x20;
            }
            puVar14 = (unsigned int *)(-(unsigned int)((uVar2 & 1) == 0) & uVar2);
          }
          if (puVar14 != (unsigned int *)0x0) {
            while( true ) {
              do {
                puVar16 = puVar14;
                if (iVar20 != uVar1 + 0x10) {
                  while (puVar19 = (unsigned int *)*puVar16, puVar19 != (unsigned int *)0x0) {
                    uVar2 = puVar19[3];
                    uVar24 = *(unsigned int *)(uVar2 + 0x1c);
                    if (uVar24 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) &
                                  *(unsigned int *)(param_1 + 4))) {
                      if ((uVar24 == uVar1) ||
                         (uVar26 = (unsigned __int64)*(unsigned int *)(uVar24 + 0x30) & 0x7ffff, bVar9 = true,
                         (*(unsigned int *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
                         1 << ((unsigned int)uVar26 & 0x1f)) == 0)) {
                        bVar9 = false;
                      }
                      if (bVar9) {
                        uVar11 = 0;
                        uVar24 = *puVar19 >> 0x19;
                        uVar26 = (unsigned __int64)uVar24 & 7;
                        uVar22 = *puVar19 & 0x19;
                        if (1 < uVar26) {
                          uVar11 = fn_82B84350(param_1,uVar1,0,uVar26);
                          uVar12 = uVar11 & 0xfffffffe;
                          *(unsigned int *)(uVar12 + 0x28) = *(unsigned int *)(uVar1 + 0x1c);
                          *(unsigned int *)((*(unsigned int *)(uVar1 + 0x1c) & 0xfffffffe) + 0x24) = uVar12 + 0x28;
                          *(unsigned int *)(uVar12 + 0x24) = uVar1 + 0x1c | 1;
                          *(unsigned int *)(uVar1 + 0x1c) = uVar12;
                        }
                        if ((uVar24 & 7) != 0) {
                          uVar24 = 0;
                          puVar23 = (unsigned int *)(uVar11 + 0x2c);
                          do {
                            uVar12 = fn_82B102D0(param_1,uVar1,uVar2,
                                                   (*puVar19 >> 5 & 0xff) >> (uVar24 & 0x3f) & 3,
                                                   uVar22);
                            if (uVar11 == 0) {
                              puVar18 = (unsigned int *)(puVar19[3] + 4);
                              for (puVar3 = (unsigned int *)*puVar18; puVar3 != puVar19;
                                  puVar3 = (unsigned int *)puVar3[2]) {
                                puVar18 = puVar3 + 2;
                              }
                              *puVar18 = puVar19[2];
                              puVar19[2] = *(unsigned int *)(uVar12 + 4);
                              *(unsigned int **)(uVar12 + 4) = puVar19;
                              puVar19[3] = uVar12;
                            }
                            else {
                              uVar10 = fn_82AD17B0(param_1);
                              uVar13 = fn_82AD1978(uVar11,uVar10);
                              *puVar23 = uVar13;
                            }
                            uVar26 = uVar26 - 1;
                            puVar23 = puVar23 + 1;
                            uVar24 = uVar24 + 2;
                          } while (uVar26 != 0);
                        }
                        if (uVar11 != 0) {
                          puVar18 = (unsigned int *)(puVar19[3] + 4);
                          for (puVar3 = (unsigned int *)*puVar18; puVar3 != puVar19;
                              puVar3 = (unsigned int *)puVar3[2]) {
                            puVar18 = puVar3 + 2;
                          }
                          *puVar18 = puVar19[2];
                          puVar19[2] = *(unsigned int *)(uVar11 + 4);
                          *(unsigned int **)(uVar11 + 4) = puVar19;
                          puVar19[3] = uVar11;
                        }
                        *puVar19 = *puVar19 & 0xffffe000 | 0x1c80 |
                                   (*puVar19 & 0xffffe01f) - uVar22 & 0x1f;
                      }
                    }
                    if ((unsigned int *)*puVar16 == puVar19) {
                      puVar16 = puVar19 + 1;
                    }
                  }
                }
                puVar14 = *(unsigned int **)(((unsigned int)puVar14 & 0xfffffffe) + 0x28);
              } while ((((unsigned int)puVar14 & 1) == 0) && (puVar14 != (unsigned int *)0x0));
              if (iVar20 == uVar15 + 0x20) break;
              if ((iVar20 == uVar15 + 0x18) || ((*(unsigned int *)(uVar15 + 0x1c) & 1) != 0)) {
                puVar14 = *(unsigned int **)(uVar15 + 0x24);
                iVar20 = uVar15 + 0x20;
              }
              else {
                puVar14 = *(unsigned int **)(uVar15 + 0x1c);
                iVar20 = uVar15 + 0x18;
              }
              if ((((unsigned int)puVar14 & 1) != 0) || (puVar14 == (unsigned int *)0x0)) break;
            }
          }
        }
      }
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

