typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABE2E0();
extern int fn_82AD34E8();
extern int fn_82AF04D0();
extern int fn_82B1A590();
extern int fn_82B25248();
extern int fn_82B89810();
extern int fn_82B8AC10();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


unsigned __int64 fn_82B25E80(int param_1,unsigned int param_2,unsigned int param_3,char param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  bool bVar8;
  int *piVar9;
  char cVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int iVar18;
  int *piVar19;
  __int64 lVar20;
  
  if ((((*(unsigned int *)(param_2 + 0x30) & 0x10000000) == 0) &&
      ((*(unsigned int *)(param_3 + 0x30) & 0x10000000) == 0)) &&
     (((*(unsigned int *)(param_2 + 0x44) & 0x80000000) == 0 ||
      ((*(unsigned int *)(param_3 + 0x44) & 0x80000000) == 0)))) {
    if (((*(unsigned int *)(param_3 + 0x4c) ^ *(unsigned int *)(param_2 + 0x4c)) & 0x7ffff) == 0) {
      if ((param_4 != '\0') && ((*(unsigned int *)(param_1 + 0x28) & 0x100) != 0)) {
        uVar16 = *(unsigned int *)(param_2 + 0x4c) >> 0x16 & 1;
        if (uVar16 != (*(unsigned int *)(param_3 + 0x4c) >> 0x16 & 1)) {
          return 0;
        }
        uVar1 = param_2;
        if (uVar16 != 0) {
          do {
            uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
            if ((uVar1 & 1) != 0) {
              return 0;
            }
            if (uVar1 == 0) {
              return 0;
            }
            if (uVar1 == param_3) {
              if (uVar1 == 0) {
                return 0;
              }
              break;
            }
            if ((*(unsigned int *)(uVar1 + 0x4c) >> 0x16 & 1) == 0) {
              return 0;
            }
            if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
              uVar16 = *(unsigned int *)(uVar1 + 0x1c);
              iVar18 = uVar1 + 0x18;
            }
            else {
              uVar16 = *(unsigned int *)(uVar1 + 0x24);
              iVar18 = uVar1 + 0x20;
            }
            uVar16 = -(unsigned int)((uVar16 & 1) == 0) & uVar16;
            while (uVar16 != 0) {
              do {
                cVar10 = fn_82ABDA10(uVar16);
                if (cVar10 != '\0') {
                  return 0;
                }
                uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 0x28);
              } while (((uVar16 & 1) == 0) && (uVar16 != 0));
              if ((iVar18 == uVar1 + 0x20) ||
                 (uVar16 = *(unsigned int *)(uVar1 + 0x24), iVar18 = uVar1 + 0x20, (uVar16 & 1) != 0))
              break;
            }
          } while( true );
        }
      }
      if ((*(unsigned int *)(param_2 + 0x24) & 1) == 0) {
        if ((*(unsigned int *)(param_2 + 0x24) & 1) == 0) {
          iVar18 = (*(unsigned int *)(param_2 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar18 = 0;
        }
        if ((*(unsigned int *)(iVar18 + 8) & 0x3f80) == 0x2c80) {
          fn_82B8AC10(param_1,iVar18,0,1);
        }
        if ((*(unsigned int *)(param_2 + 0x24) & 1) == 0) {
          return 0;
        }
      }
      piVar19 = (int *)0x0;
      piVar2 = *(int **)(param_3 + 0x14);
joined_r0x82b2603c:
      piVar9 = piVar2;
      if (((unsigned int)piVar9 & 1) == 0) {
        do {
          if (piVar9 == (int *)0x0) break;
          if ((piVar9[2] & 0x3f80U) != 0x3800) {
            return 0;
          }
          fn_82AF04D0(piVar9,param_1);
          cVar10 = fn_82ABE2E0(piVar9);
          if (cVar10 == '\0') {
            uVar16 = *(unsigned int *)*piVar9;
            if (*(unsigned int *)(((unsigned int *)*piVar9)[3] + 0x1c) == param_2) {
              for (puVar15 = (unsigned int *)piVar9[1]; puVar15 != (unsigned int *)0x0; puVar15 = (unsigned int *)puVar15[2]
                  ) {
                if (puVar15[4] != 0) {
                  uVar1 = *puVar15;
                  if ((((uVar16 & 0x18) == 0) || ((uVar1 & 0x18) == 0)) &&
                     (((uVar16 & 2) == 0 || ((uVar1 & 1) == 0)))) {
                    if (((uVar16 & 4) == 0) || (bVar8 = false, (uVar1 & 1) == 0)) {
                      bVar8 = true;
                    }
                  }
                  else {
                    bVar8 = false;
                  }
                  if (!bVar8) {
                    return 0;
                  }
                }
              }
            }
          }
          else {
            fn_82B8AC10(param_1,piVar9,0,1);
          }
          if (piVar19 == (int *)0x0) {
            piVar2 = *(int **)(param_3 + 0x14);
            if (piVar9 != (int *)(-(unsigned int)(((unsigned int)piVar2 & 1) == 0) & (unsigned int)piVar2))
            goto joined_r0x82b2603c;
LAB_82b26164:
            piVar2 = *(int **)(((unsigned int)piVar9 & 0xfffffffe) + 0x28);
            piVar19 = piVar9;
          }
          else {
            piVar2 = *(int **)(((unsigned int)piVar19 & 0xfffffffe) + 0x28);
            if (piVar9 == (int *)(-(unsigned int)(((unsigned int)piVar2 & 1) == 0) & (unsigned int)piVar2))
            goto LAB_82b26164;
          }
          piVar9 = piVar2;
          if (((unsigned int)piVar9 & 1) != 0) break;
        } while( true );
      }
      piVar2 = *(int **)(param_3 + 0x14);
      piVar19 = (int *)0x0;
joined_r0x82b2619c:
      piVar9 = piVar2;
      if (((unsigned int)piVar2 & 1) == 0) {
        do {
          if (piVar9 == (int *)0x0) break;
          uVar16 = ((unsigned int *)*piVar9)[3];
          uVar1 = *(unsigned int *)*piVar9;
          uVar17 = uVar1 >> 5 & 0xff;
          uVar6 = uVar1 & 0x1f;
          if (*(unsigned int *)(uVar16 + 0x1c) == param_2) {
            puVar15 = (unsigned int *)(piVar9 + 1);
            while (puVar3 = (unsigned int *)*puVar15, puVar3 != (unsigned int *)0x0) {
              if (puVar3[4] != 0) {
                puVar13 = (unsigned int *)(puVar3[3] + 4);
                for (puVar4 = (unsigned int *)*puVar13; puVar4 != puVar3; puVar4 = (unsigned int *)puVar4[2]) {
                  puVar13 = puVar4 + 2;
                }
                *puVar13 = puVar3[2];
                puVar3[2] = *(unsigned int *)(uVar16 + 4);
                *(unsigned int **)(uVar16 + 4) = puVar3;
                uVar14 = *puVar3 & 0x1f;
                puVar3[3] = uVar16;
                uVar12 = uVar6;
                if (((uVar1 & 4) != 0) && ((*puVar3 & 2) != 0)) {
                  uVar12 = uVar6 - 4;
                }
                if ((uVar12 & uVar14 & 4) != 0) {
                  uVar12 = uVar12 - 4;
                  uVar14 = uVar14 - 4;
                }
                if (((uVar12 & 1) != 0) && ((uVar14 & 2) != 0)) {
                  uVar14 = uVar14 - 2;
                }
                piVar2 = (int *)puVar3[4];
                uVar7 = (unsigned int)((unsigned __int64)*puVar3 & 0xffffffe0);
                *puVar3 = ((((uVar17 >> (uVar7 >> 10 & 6) & 3) << 2 | uVar17 >> (uVar7 >> 8 & 6) & 3
                            ) << 2 | uVar17 >> (uVar7 >> 6 & 6) & 3) << 2 |
                          uVar17 >> ((unsigned int)(((unsigned __int64)*puVar3 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
                          uVar7 & 0xffffe01f | (uVar12 | uVar14) & 0x1f;
                if ((piVar2[2] & 0x3f80U) == 0x3800) {
                  if ((*piVar2 == 0) || (bVar8 = true, *(int *)(*piVar2 + 4) == 0)) {
                    bVar8 = false;
                  }
                  if (bVar8) {
                    uVar14 = *(unsigned int *)(uVar16 + 8) >> 7 & 0x7f;
                    if ((uVar14 == 0x7d) || (bVar8 = false, uVar14 == 0x7c)) {
                      bVar8 = true;
                    }
                    if (bVar8) {
                      fn_82B89810(param_1,param_2,param_2 + 0x18 | 3,puVar3);
                    }
                  }
                }
                if (*(int *)(param_1 + 0x28c) != 0) {
                  fn_82B25248(param_1,piVar2);
                }
              }
              if ((unsigned int *)*puVar15 == puVar3) {
                puVar15 = puVar3 + 2;
              }
            }
            fn_82B8AC10(param_1,piVar9,0,1);
          }
          else {
            uVar16 = (unsigned int)piVar9 & 0xfffffffe;
            puVar15 = (unsigned int *)(uVar16 + 0x24);
            *(unsigned int *)((*(unsigned int *)(uVar16 + 0x28) & 0xfffffffe) + 0x24) = *puVar15;
            *(unsigned int *)(*puVar15 & 0xfffffffe) = *(unsigned int *)(uVar16 + 0x28);
            *puVar15 = *(unsigned int *)(param_2 + 0x10);
            *(unsigned int *)(*(unsigned int *)(param_2 + 0x10) & 0xfffffffe) = uVar16;
            *(unsigned int *)(uVar16 + 0x28) = param_2 - 0x14 | 1;
            *(unsigned int *)(param_2 + 0x10) = uVar16 + 0x28;
            piVar9[7] = param_2;
          }
          if (piVar19 == (int *)0x0) {
            piVar2 = *(int **)(param_3 + 0x14);
            if (piVar9 != (int *)(-(unsigned int)(((unsigned int)piVar2 & 1) == 0) & (unsigned int)piVar2))
            goto joined_r0x82b2619c;
LAB_82b263f8:
            piVar2 = *(int **)(((unsigned int)piVar9 & 0xfffffffe) + 0x28);
            piVar19 = piVar9;
          }
          else {
            piVar2 = *(int **)(((unsigned int)piVar19 & 0xfffffffe) + 0x28);
            if (piVar9 == (int *)(-(unsigned int)(((unsigned int)piVar2 & 1) == 0) & (unsigned int)piVar2))
            goto LAB_82b263f8;
          }
          piVar9 = piVar2;
          if (((unsigned int)piVar2 & 1) != 0) break;
        } while( true );
      }
      lVar20 = 0;
      do {
        fn_82B1A590(param_2,lVar20,param_3,param_1);
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < 4);
      for (uVar16 = *(unsigned int *)(param_3 + 0x1c); ((uVar16 & 1) == 0 && (uVar16 != 0));
          uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 0x28)) {
        *(unsigned int *)(uVar16 + 0x1c) = param_2;
      }
      fn_82AD34E8(param_2 + 0x18,param_3 + 0x18);
      *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_3 + 0x30) & 0x2000000 | *(unsigned int *)(param_2 + 0x30);
      uVar16 = param_3;
      if ((*(unsigned int *)(param_3 + 0x30) >> 0x14 & 1) != 0) {
        do {
          if ((*(unsigned int *)(uVar16 + 0x30) & 0x80000) != 0) break;
          uVar16 = *(unsigned int *)(uVar16 + 0x34);
        } while (uVar16 != 0);
        if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(unsigned int *)(*(int *)(param_3 & 0xfffff000) + 0x94),0x12c0);
        }
        puVar15 = (unsigned int *)(*(int *)(uVar16 + 0x74) + 0x10);
        while (*puVar15 != param_3) {
          puVar15 = (unsigned int *)puVar15[1];
          if (puVar15 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
        }
        *puVar15 = param_2;
        *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x30) | 0x100000;
        *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(param_3 + 0x30) & 0xffefffff;
      }
      for (uVar16 = *(unsigned int *)(param_3 + 0x24); ((uVar16 & 1) == 0 && (uVar16 != 0));
          uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 0x28)) {
        *(unsigned int *)(uVar16 + 0x1c) = param_2;
      }
      fn_82AD34E8(param_2 + 0x20,param_3 + 0x20);
      for (puVar5 = *(unsigned int **)(param_3 + 0xc); puVar5 != (unsigned int *)0x0;
          puVar5 = (unsigned int *)puVar5[2]) {
        fn_82B8F328(param_2,*puVar5,param_1);
      }
      while (*(int *)(param_3 + 0xc) != 0) {
        uVar11 = 0;
        if (*(unsigned int **)(param_3 + 0xc) != (unsigned int *)0x0) {
          uVar11 = **(unsigned int **)(param_3 + 0xc);
        }
        fn_82B8F1B0(param_3,uVar11,param_1);
      }
      fn_82B8F1B0(param_2,param_3,param_1);
      uVar16 = *(unsigned int *)(param_2 + 0x30);
      uVar1 = *(unsigned int *)(param_2 + 0x44);
      uVar6 = *(unsigned int *)(param_3 + 0x30) & 0x4000000;
      *(unsigned int *)(param_2 + 0x30) = uVar16 & 0xfbffffff | uVar6;
      *(unsigned int *)(param_2 + 0x30) =
           uVar16 & 0xf3ffffff | uVar6 | *(unsigned int *)(param_3 + 0x30) & 0x8000000;
      *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_3 + 0x44) & 0x80000000 | uVar1;
      uVar16 = *(unsigned int *)(param_3 + 0x44) & 0xfffffff;
      if (uVar16 < (uVar1 & 0xfffffff)) {
        uVar16 = *(unsigned int *)(param_2 + 0x44) & 0xfffffff;
      }
      puVar15 = (unsigned int *)(param_3 & 0xfffffffe);
      *(unsigned int *)(param_2 + 0x44) = uVar16 | *(unsigned int *)(param_2 + 0x44) & 0xf0000000;
      *(unsigned int *)(puVar15[1] & 0xfffffffe) = *puVar15;
      *(unsigned int *)(*puVar15 & 0xfffffffe) = puVar15[1];
      *(unsigned int *)(param_3 + 0x50) = param_2;
      *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(param_3 + 0x30) | 0x400000;
      return 1;
    }
  }
  return 0;
}

