typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE250();
extern int fn_82AD7788();
extern int fn_82AD7878();
extern int fn_82AD7A50();
extern int fn_82AD7B20();
extern int fn_82B189C0();
extern int fn_82B8F398();


void fn_82AD84B0(int param_1)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int iVar9;
  char cVar12;
  int iVar10;
  int iVar11;
  unsigned int *puVar13;
  int iVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  int *piVar19;
  
  puVar8 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar17 = puVar8 + 1;
  puVar8[1] = (unsigned int)puVar8 | 1;
  *puVar8 = (unsigned int)puVar17 | 1;
  for (uVar18 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) +
                         0x14); ((uVar18 & 1) == 0 && (uVar18 != 0));
      uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar18 + 8) & 0x3f80) == 0x3880) {
      puVar2 = *(unsigned int **)(uVar18 + 4);
      *(unsigned int *)(uVar18 + 8) = *(unsigned int *)(uVar18 + 8) | 0x8000000;
      for (; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
        uVar15 = puVar2[4];
        if (uVar15 != 0) {
          if (((*puVar2 & 0x40000000) != 0) || (bVar5 = false, (*puVar2 & 0xe000000) != 0)) {
            bVar5 = true;
          }
          if ((bVar5) && ((*(unsigned int *)(uVar15 + 8) >> 0x1b & 1) == 0)) {
            fn_82AD7788(param_1,uVar15,puVar8);
          }
        }
      }
    }
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 4) != 0) {
    for (uVar18 = *(unsigned int *)(param_1 + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
        uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4)) {
      if ((*(unsigned int *)(uVar18 + 0x24) & 1) == 0) {
        uVar15 = *(unsigned int *)(uVar18 + 0x20) & 0xfffffffe;
        iVar11 = uVar15 - 0x28;
        if (iVar11 != 0) {
          uVar15 = *(unsigned int *)(uVar15 - 0x20);
          uVar3 = uVar15 >> 7 & 0x7f;
          if (((((uVar3 == 0x56) || (uVar3 == 0x57)) || (uVar3 == 0x59)) ||
              ((uVar3 == 0x5a || (uVar3 == 0x54)))) || (bVar5 = false, uVar3 == 0x55)) {
            bVar5 = true;
          }
          if (((bVar5) && ((uVar15 >> 0x1b & 1) == 0)) &&
             ((iVar9 = fn_82ABE0E8(iVar11,param_1), iVar9 == 3 || (iVar9 == 4)))) {
            fn_82AD7788(param_1,iVar11,puVar8);
          }
        }
      }
    }
  }
  while( true ) {
    while (((*puVar17 & 1) == 0 && (*puVar17 != 0))) {
      puVar2 = (unsigned int *)(*puVar8 & 0xfffffffe);
      puVar13 = puVar2 + -1;
      uVar15 = puVar2[1] - 1;
      uVar18 = puVar13[puVar2[1] + 3];
      puVar2[1] = uVar15;
      if (uVar15 == 0) {
        *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar13;
        *(unsigned int *)(*puVar13 & 0xfffffffe) = *puVar2;
        fn_82AA6648(puVar8,puVar13,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
      }
      iVar11 = *(int *)(uVar18 + 0x1c);
      if (((*(unsigned int **)(iVar11 + 0x28))[1] & 1) == 0) {
        uVar15 = *(unsigned int *)(uVar18 + 8) >> 7 & 0x7f;
        if ((((uVar15 == 0x56) || (uVar15 == 0x57)) || (uVar15 == 0x59)) ||
           (((uVar15 == 0x5a || (uVar15 == 0x54)) || (bVar5 = false, uVar15 == 0x55)))) {
          bVar5 = true;
        }
        if ((bVar5) && ((**(unsigned int **)(iVar11 + 0x28) >> 0x13 & 1) != 0)) {
          for (uVar15 = *(unsigned int *)(param_1 + 4); ((uVar15 & 1) == 0 && (uVar15 != 0));
              uVar15 = *(unsigned int *)((uVar15 & 0xfffffffe) + 4)) {
            if ((*(unsigned int *)(((unsigned int)(((unsigned __int64)**(unsigned int **)(uVar15 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                           0x1ffffffc) +
                           ((int)(((unsigned __int64)*(unsigned int *)(iVar11 + 0x30) & 0x7ffff) >> 5) + 1) * 4 +
                          (int)*(unsigned int **)(uVar15 + 0x28)) & 1 << (*(unsigned int *)(iVar11 + 0x30) & 0x1f))
                != 0) {
              fn_82AD7878(param_1,uVar15,iVar11,puVar8);
            }
          }
        }
        for (puVar2 = *(unsigned int **)(uVar18 + 4); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
          uVar18 = puVar2[4];
          if (uVar18 != 0) {
            if (((*puVar2 & 0x40000000) != 0) || (bVar5 = false, (*puVar2 & 0xe000000) != 0)) {
              bVar5 = true;
            }
            if ((bVar5) && ((*(unsigned int *)(uVar18 + 8) >> 0x1b & 1) == 0)) {
              fn_82AD7788(param_1,uVar18,puVar8);
            }
          }
        }
      }
    }
    if ((*(unsigned int *)(param_1 + 0x28) & 0x100) == 0) break;
    uVar18 = *(unsigned int *)(param_1 + 4);
    if (((uVar18 & 1) == 0) && (uVar18 != 0)) {
LAB_82ad8858:
      if (((*(unsigned int *)(uVar18 + 0x24) & 1) == 0) &&
         (uVar15 = *(unsigned int *)(uVar18 + 0x20) & 0xfffffffe, uVar15 != 0x28)) {
        if (((*(unsigned int *)(uVar15 - 0x20) & 0x3f80) == 0x2980) &&
           (cVar12 = fn_82B189C0(param_1,uVar18), cVar12 != '\0')) {
          for (iVar11 = *(int *)(uVar18 + 0x40); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x40)) {
            if ((*(unsigned int *)(iVar11 + 0x24) & 1) == 0) {
              iVar9 = (*(unsigned int *)(iVar11 + 0x20) & 0xfffffffe) - 0x28;
            }
            else {
              iVar9 = 0;
            }
            uVar3 = *(unsigned int *)(iVar9 + 8);
            if ((uVar3 >> 0x1b & 1) == 0) {
              uVar7 = uVar3 >> 7 & 0x7f;
              if ((((uVar7 == 0x56) || (uVar7 == 0x57)) || (uVar7 == 0x59)) ||
                 (((uVar7 == 0x5a || (uVar7 == 0x54)) || (bVar5 = false, uVar7 == 0x55)))) {
                bVar5 = true;
              }
              if ((bVar5) &&
                 ((iVar10 = fn_82ABE0E8(iVar9,param_1), iVar10 == 8 || (iVar10 == 9)))) break;
              *(unsigned int *)(iVar9 + 8) = uVar3 | 0x8000000;
            }
            if ((*(unsigned int *)(uVar15 - 0x20) >> 0x1b & 1) == 0) {
              *(unsigned int *)(uVar15 - 0x20) = *(unsigned int *)(uVar15 - 0x20) | 0x8000000;
            }
            *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x100;
            fn_82AD7A50(param_1,iVar11,puVar8);
          }
        }
        iVar11 = *(int *)(uVar18 + 8);
        if ((iVar11 == 0) || (bVar5 = true, *(int *)(iVar11 + 0xc) == 0)) {
          bVar5 = false;
        }
        if ((bVar5) && ((*(unsigned int *)(*(int *)(uVar18 + 0x28) + 4) & 1) == 0)) {
          iVar9 = 0;
          bVar6 = false;
          bVar5 = false;
          for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
            iVar10 = *(int *)(*(int *)(iVar11 + 4) + 0x28);
            if ((*(unsigned int *)(iVar10 + 4) & 1) == 0) {
              uVar4 = (unsigned __int64)*(unsigned int *)(uVar18 + 0x30) & 0x7ffff;
              if ((1 << ((unsigned int)uVar4 & 0x1f) & *(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + iVar10)) != 0
                 ) {
                bVar5 = true;
                break;
              }
              bVar1 = iVar9 != 0;
              iVar9 = *(int *)(iVar11 + 4);
              if (bVar1) {
                iVar9 = fn_82B8F398();
              }
            }
          }
          if (!bVar5) {
            iVar11 = *(int *)(uVar18 + 8);
            for (iVar10 = iVar11; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
              iVar16 = *(int *)(iVar10 + 4);
              if ((((*(unsigned int *)(*(int *)(iVar16 + 0x28) + 4) & 1) == 0) && (iVar9 != iVar16)) &&
                 (iVar9 != *(int *)(iVar16 + 0x34))) {
                bVar6 = true;
                break;
              }
            }
            iVar10 = iVar9;
            if (bVar6) {
              do {
                if (((*(unsigned int *)(iVar10 + 0x24) & 1) == 0) &&
                   (uVar15 = *(unsigned int *)(iVar10 + 0x20) & 0xfffffffe, uVar15 != 0x28)) {
                  uVar15 = *(unsigned int *)(uVar15 - 0x20) >> 7 & 0x7f;
                  if ((((uVar15 == 0x56) || ((uVar15 == 0x57 || (uVar15 == 0x59)))) ||
                      (uVar15 == 0x5a)) || ((uVar15 == 0x54 || (bVar5 = false, uVar15 == 0x55)))) {
                    bVar5 = true;
                  }
                  if (bVar5) goto LAB_82ad8af0;
                }
                piVar19 = (int *)(iVar10 + 0x34);
                iVar10 = *piVar19;
                if (*piVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
              } while( true );
            }
          }
        }
      }
      goto LAB_82ad8b74;
    }
LAB_82ad8b90:
    if (((*puVar17 & 1) != 0) || (*puVar17 == 0)) break;
  }
  *puVar8 = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int **)(param_1 + 0x3d0) = puVar8;
LAB_82ad8bb4:
  bVar5 = false;
  uVar18 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  do {
    uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4);
    if (((uVar18 & 1) != 0) || (uVar18 == 0)) goto LAB_82ad8e90;
    if ((*(unsigned int *)(uVar18 + 0x24) & 1) == 0) {
      uVar15 = *(unsigned int *)(uVar18 + 0x24);
      puVar17 = (unsigned int *)(uVar18 + 0x20);
    }
    else if ((*(unsigned int *)(uVar18 + 0x1c) & 1) == 0) {
      uVar15 = *(unsigned int *)(uVar18 + 0x1c);
      puVar17 = (unsigned int *)(uVar18 + 0x18);
    }
    else {
      uVar15 = *(unsigned int *)(uVar18 + 0x14);
      puVar17 = (unsigned int *)(uVar18 + 0x10);
    }
    if ((uVar15 & 1) == 0) {
      piVar19 = (int *)((*puVar17 & 0xfffffffe) - 0x28);
    }
    else {
      piVar19 = (int *)0x0;
    }
    while (piVar19 != (int *)0x0) {
      do {
        if ((piVar19[2] & 0x3f80U) == 0x3080) {
          uVar15 = piVar19[2];
          iVar11 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
          if (((*(unsigned int *)((int)piVar19 + iVar11 + -0x14) & 0x10000000) != 0) &&
             ((*(unsigned int *)((int)piVar19 + iVar11 + -0x10) & 1) == 0)) {
            for (puVar8 = (unsigned int *)*piVar19; puVar8 != (unsigned int *)0x0; puVar8 = (unsigned int *)puVar8[1]) {
              if ((*puVar8 & 0xe000000) != 0) {
                uVar15 = puVar8[3];
                if (((*(unsigned int *)(uVar15 + 8) & 0x10000000) == 0) &&
                   (*(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) | 0x10000000,
                   *(unsigned int *)(uVar15 + 0x1c) !=
                   (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)))) {
                  bVar5 = true;
                }
              }
            }
          }
        }
        if ((piVar19[2] & 0x10000000U) != 0) {
          for (iVar11 = *piVar19; iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
            iVar9 = *(int *)(iVar11 + 0xc);
            if (((*(unsigned int *)(iVar9 + 8) & 0x10000000) == 0) &&
               (*(unsigned int *)(iVar9 + 8) = *(unsigned int *)(iVar9 + 8) | 0x10000000,
               *(unsigned int *)(iVar9 + 0x1c) !=
               (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)))) {
              bVar5 = true;
            }
          }
          for (iVar11 = *(int *)(uVar18 + 0x34); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x34)) {
            if ((((*(unsigned int *)(iVar11 + 0x24) & 1) == 0) &&
                (uVar15 = *(unsigned int *)(iVar11 + 0x20) & 0xfffffffe, uVar15 != 0x28)) &&
               (uVar3 = *(unsigned int *)(uVar15 - 0x20), (uVar3 & 0x10000000) == 0)) {
              uVar7 = uVar3 >> 7 & 0x7f;
              if ((((uVar7 == 0x56) || (uVar7 == 0x57)) ||
                  ((uVar7 == 0x59 || ((uVar7 == 0x5a || (uVar7 == 0x54)))))) ||
                 (bVar6 = false, uVar7 == 0x55)) {
                bVar6 = true;
              }
              if ((bVar6) &&
                 (iVar9 = fn_82ABDD90(param_1,uVar7,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7),
                 uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar9 + (uVar15 - 0x38)) + 0x30) & 0x7ffff,
                 (*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar18 + 0x28)) &
                 1 << ((unsigned int)uVar4 & 0x1f)) == 0)) {
                bVar5 = true;
                *(unsigned int *)(uVar15 - 0x20) = uVar3 | 0x10000000;
              }
            }
          }
        }
      } while (((piVar19[9] & 1U) == 0) &&
              (piVar19 = (int *)((piVar19[9] & 0xfffffffeU) - 0x28), piVar19 != (int *)0x0));
      if (puVar17 == (unsigned int *)(uVar18 + 0x10)) break;
      if ((puVar17 == (unsigned int *)(uVar18 + 0x18)) || ((*(unsigned int *)(uVar18 + 0x1c) & 1) != 0)) {
        uVar15 = *(unsigned int *)(uVar18 + 0x14);
        puVar17 = (unsigned int *)(uVar18 + 0x10);
      }
      else {
        uVar15 = *(unsigned int *)(uVar18 + 0x1c);
        puVar17 = (unsigned int *)(uVar18 + 0x18);
      }
      if ((uVar15 & 1) != 0) break;
      piVar19 = (int *)((*puVar17 & 0xfffffffe) - 0x28);
    }
  } while( true );
LAB_82ad8af0:
  for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
    iVar16 = *(int *)(iVar11 + 4);
    if ((iVar10 != iVar16) && ((*(unsigned int *)(*(int *)(iVar16 + 0x28) + 4) & 1) == 0)) {
      do {
        iVar16 = *(int *)(iVar16 + 0x40);
        if (iVar16 == 0) break;
        if ((*(unsigned int *)(iVar16 + 0x24) & 1) == 0) {
          iVar14 = (*(unsigned int *)(iVar16 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar14 = 0;
        }
        if ((*(unsigned int *)(iVar14 + 8) >> 0x1b & 1) != 0) {
          fn_82AD7B20(param_1,iVar9,uVar18,puVar8);
          goto LAB_82ad8b74;
        }
      } while (iVar16 != iVar10);
    }
  }
LAB_82ad8b74:
  uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4);
  if (((uVar18 & 1) != 0) || (uVar18 == 0)) goto LAB_82ad8b90;
  goto LAB_82ad8858;
LAB_82ad8e90:
  if (!bVar5) {
    return;
  }
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x800000;
  goto LAB_82ad8bb4;
}

