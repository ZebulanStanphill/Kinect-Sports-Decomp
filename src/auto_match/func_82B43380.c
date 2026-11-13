typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82ABDD90();
extern int fn_82B41E50();
extern int fn_82B41F20();
extern int fn_82B426A8();
extern int fn_82B42A78();
extern int fn_82B85298();


void fn_82B43380(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  bool bVar7;
  bool bVar8;
  char cVar12;
  unsigned int uVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned int *puVar20;
  unsigned __int64 *puVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  unsigned char auStack_60 [1];
  
  uVar18 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar17 = 0;
    iVar10 = 0;
    do {
      iVar16 = iVar10 + *(int *)(param_1 + 0xc);
      if (((*(unsigned int *)(iVar16 + 4) & 2) != 0) && ((*(unsigned int *)(iVar16 + 8) & 0x380000) == 0)) {
        for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
            uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
          if (((*(unsigned int *)(uVar1 + 0x30) >> 0x13 & 1) != 0) &&
             ((uVar19 = *(unsigned int *)(param_1 + 4), (uVar19 & 1) == 0 && (uVar19 != 0)))) {
            do {
              uVar22 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x30) & 0x7ffff;
              if ((*(unsigned int *)(((int)(uVar22 >> 5) + 1) * 4 + *(int *)(uVar19 + 0x28)) &
                  1 << ((unsigned int)uVar22 & 0x1f)) != 0) {
                if (*(int *)(uVar19 + 0x50) == 0) {
                  puVar21 = (unsigned __int64 *)0x0;
                }
                else {
                  puVar21 = *(unsigned __int64 **)(iVar17 + *(int *)(uVar19 + 0x50));
                }
                if (puVar21 != (unsigned __int64 *)0x0) {
                  bVar7 = false;
                  uVar22 = 0;
                  uVar9 = *(unsigned int *)(iVar10 + *(int *)(param_1 + 0xc)) >> 3;
                  if ((uVar9 & 0x3fff) != 0) {
                    do {
                      cVar12 = fn_82B41F20(param_1,*puVar21,uVar18,uVar22,uVar19,0);
                      if (cVar12 != '\0') {
                        fn_82B42A78(param_1,uVar1,uVar18,uVar22);
                        bVar7 = true;
                      }
                      uVar22 = uVar22 + 1;
                      puVar21 = puVar21 + 1;
                    } while ((uVar22 & 0xffffffff) < ((unsigned __int64)uVar9 & 0x3fff));
                  }
                  if (bVar7) break;
                }
              }
              uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4);
              if (((uVar19 & 1) != 0) || (uVar19 == 0)) break;
            } while( true );
          }
        }
      }
      uVar18 = uVar18 + 1;
      iVar10 = iVar10 + 0x28;
      iVar17 = iVar17 + 4;
    } while ((uVar18 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x10));
  }
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    uVar18 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar10 = 0;
      iVar17 = 0;
      do {
        if (*(int *)(uVar1 + 0x50) == 0) {
          puVar21 = (unsigned __int64 *)0x0;
        }
        else {
          puVar21 = *(unsigned __int64 **)(iVar17 + *(int *)(uVar1 + 0x50));
        }
        if (puVar21 != (unsigned __int64 *)0x0) {
          uVar22 = 0;
          uVar19 = *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar10) >> 3;
          if ((uVar19 & 0x3fff) != 0) {
            do {
              cVar12 = fn_82B41F20(param_1,*puVar21,uVar18,uVar22,uVar1,0);
              if (cVar12 != '\0') {
                puVar20 = (unsigned int *)(uVar1 + 0x54);
                iVar16 = 0;
                do {
                  uVar9 = fn_82B41E50(puVar20,iVar16);
                  while( true ) {
                    if ((~*puVar20 & 1) == 0) {
                      iVar16 = 0x1f;
                    }
                    else {
                      iVar16 = *(int *)*puVar20 * 0x20 + -1;
                    }
                    if (iVar16 - 1U < uVar9) goto LAB_82b43644;
                    fn_82B85298(auStack_60,param_1,
                                      *(unsigned int *)(uVar9 * 4 + *(int *)(param_1 + 0x60) + -4),
                                      uVar18,uVar22);
                    if ((~*puVar20 & 1) == 0) {
                      iVar16 = 0x1f;
                    }
                    else {
                      iVar16 = *(int *)*puVar20 * 0x20 + -1;
                    }
                    if (uVar9 != iVar16 - 1U) break;
                    uVar9 = 0xffffffff;
                  }
                  iVar16 = uVar9 + 1;
                } while( true );
              }
LAB_82b43644:
              uVar22 = uVar22 + 1;
              puVar21 = puVar21 + 1;
            } while ((uVar22 & 0xffffffff) < ((unsigned __int64)uVar19 & 0x3fff));
          }
        }
        uVar18 = uVar18 + 1;
        iVar17 = iVar17 + 4;
        iVar10 = iVar10 + 0x28;
      } while ((uVar18 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x14));
    }
  }
  iVar17 = *(int *)(param_1 + 100);
  if (iVar17 != 0) {
    iVar10 = fn_82ABDD90(param_1,0x70,0,1);
    do {
      fn_82B426A8(param_1,iVar17);
      iVar17 = *(int *)(iVar10 + -4 + iVar17);
    } while (iVar17 != 0);
  }
  uVar1 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) + 0x14);
  while( true ) {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    uVar19 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
    if ((uVar19 == 0x7d) || (bVar7 = false, uVar19 == 0x7c)) {
      bVar7 = true;
    }
    if (bVar7) break;
LAB_82b438e0:
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
  }
LAB_82b43718:
  puVar20 = *(unsigned int **)(uVar1 + 4);
  do {
    if (puVar20 == (unsigned int *)0x0) goto LAB_82b438e0;
    piVar2 = (int *)puVar20[4];
    if ((piVar2 != (int *)0x0) && ((piVar2[2] & 0x3f80U) == 0x3800)) {
      if ((*piVar2 == 0) || (bVar7 = true, *(int *)(*piVar2 + 4) == 0)) {
        bVar7 = false;
      }
      if (!bVar7) {
        uVar19 = *puVar20;
        bVar7 = false;
        puVar11 = (unsigned int *)(piVar2 + 1);
        uVar9 = uVar19 & 0x1f;
        while (puVar3 = (unsigned int *)*puVar11, puVar3 != (unsigned int *)0x0) {
          if (puVar3[4] != 0) {
            uVar4 = *puVar3;
            uVar13 = uVar4 & 0x1f;
            if ((((uVar19 & 0x18) == 0) || ((uVar4 & 0x18) == 0)) &&
               (((uVar19 & 2) == 0 || ((uVar4 & 1) == 0)))) {
              if (((uVar19 & 4) == 0) || (bVar8 = false, (uVar4 & 1) == 0)) {
                bVar8 = true;
              }
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              puVar14 = (unsigned int *)(puVar3[3] + 4);
              for (puVar5 = *(unsigned int **)(puVar3[3] + 4); puVar5 != puVar3; puVar5 = (unsigned int *)puVar5[2])
              {
                puVar14 = puVar5 + 2;
              }
              *puVar14 = puVar3[2];
              puVar3[2] = *(unsigned int *)(uVar1 + 4);
              *(unsigned int **)(uVar1 + 4) = puVar3;
              puVar3[3] = uVar1;
              uVar6 = *puVar3;
              uVar23 = uVar6 >> 5 & 0xff;
              uVar15 = *puVar20 >> 5 & 0xff;
              uVar15 = ((((uVar15 >> (uVar23 >> 5 & 6) & 3) << 2 | uVar15 >> (uVar23 >> 3 & 6) & 3)
                         << 2 | uVar15 >> (uVar23 >> 1 & 6) & 3) << 2 |
                       uVar15 >> ((uVar6 >> 5 & 3) << 1) & 3) << 5;
              *puVar3 = uVar15 | uVar6 & 0xffffe01f;
              uVar23 = uVar9;
              if (((uVar19 & 4) != 0) && ((uVar4 & 2) != 0)) {
                uVar23 = uVar9 - 4;
              }
              if ((uVar23 & uVar13 & 4) != 0) {
                uVar23 = uVar23 - 4;
                uVar13 = uVar13 - 4;
              }
              if (((uVar23 & 1) != 0) && ((uVar13 & 2) != 0)) {
                uVar13 = uVar13 - 2;
              }
              bVar7 = true;
              *puVar3 = uVar15 | uVar6 & 0xffffe000 | (uVar23 | uVar13) & 0x1f;
            }
          }
          if ((unsigned int *)*puVar11 == puVar3) {
            puVar11 = puVar3 + 2;
          }
        }
        if (bVar7) goto LAB_82b43718;
      }
    }
    puVar20 = (unsigned int *)puVar20[2];
  } while( true );
}

