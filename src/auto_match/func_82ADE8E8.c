#define true 1
extern unsigned int *auStack_a0;
extern int fn_82AC8910();
extern int fn_82ADD198();
extern int fn_82F68CC0();
extern unsigned int uStack_a4;


void fn_82ADE8E8(int param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 *puVar10;
  __int64 lVar11;
  unsigned __int64 *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uStack_a4;
  unsigned int auStack_a0 [40];
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if (param_4 == '\0') {
      *(unsigned int *)(uVar1 + 0x54) = *(unsigned int *)(uVar1 + 0x58);
    }
    fn_82F68CC0(param_2,*(unsigned int *)(uVar1 + 0x58),param_3);
    uVar6 = fn_82AC8910(param_2,0,*(unsigned int *)(param_1 + 0x2a0));
    if ((uVar6 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x29c) - 1)) {
      do {
        uVar13 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
        uVar19 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
        if (uVar13 < uVar19) {
          puVar12 = (unsigned __int64 *)(uVar13 - 8);
          puVar10 = (unsigned __int64 *)(param_2 + -8);
          lVar11 = (unsigned __int64)((uVar19 - uVar13) - 1 >> 3) + 1;
          do {
            puVar3 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar3 | *puVar10;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar19 = (unsigned int)((uVar6 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
        *(__int64 *)(uVar19 + iVar4) = *(__int64 *)(uVar19 + iVar4) - (1L << (uVar6 & 0x3f));
        uVar19 = *(int *)(param_1 + 0x29c) - 1;
        if ((uVar6 & 0xffffffff) == (unsigned __int64)uVar19) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = fn_82AC8910(param_2,uVar6 + 1,*(unsigned int *)(param_1 + 0x2a0));
        }
      } while ((uVar6 & 0xffffffff) <= (unsigned __int64)uVar19);
    }
    if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
      uVar19 = *(unsigned int *)(uVar1 + 0x18);
      do {
        uVar19 = uVar19 & 0xfffffffe;
        if ((int *)(uVar19 - 0x28) == (int *)0x0) break;
        if ((*(unsigned int *)(uVar19 - 0x20) >> 0x17 & 1) != 0) {
          uVar13 = *(unsigned int *)(uVar19 - 0x20) >> 1 & 0xf;
          while( true ) {
            if (uVar13 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = ((unsigned __int64)*(unsigned short *)(uVar19 - 0x16) - LZCOUNT(uVar13 & ~(uVar13 - 1))) +
                      0x1f;
            }
            if ((uVar6 & 0xffffffff) == 0) break;
            uVar7 = fn_82ADD198(param_1,uVar6);
            uVar14 = (unsigned int)((uVar7 & 0xffffffff) >> 3) & 0x1ffffff8;
            uVar15 = 1L << (uVar7 & 0x3f);
            *(unsigned __int64 *)(uVar14 + param_2) = *(unsigned __int64 *)(uVar14 + param_2) & ~uVar15;
            uVar16 = *(unsigned int *)(uVar19 - 0x20) >> 1 & 0xf;
            while( true ) {
              if (uVar16 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = ((unsigned __int64)*(unsigned short *)(uVar19 - 0x16) - LZCOUNT(uVar16 & ~(uVar16 - 1))) +
                        0x1f;
              }
              if ((uVar9 & 0xffffffff) == 0) break;
              if ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) {
                uVar9 = fn_82ADD198(param_1);
                uVar5 = (unsigned int)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar7 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(uVar5 + iVar4) = 1L << (uVar9 & 0x3f) | *(unsigned __int64 *)(uVar5 + iVar4)
                ;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar9 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(uVar14 + iVar4) = uVar15 | *(unsigned __int64 *)(uVar14 + iVar4);
              }
              uVar16 = uVar16 - (uVar16 & ~(uVar16 - 1));
            }
            uVar6 = fn_82AC8910(param_2,0,*(unsigned int *)(param_1 + 0x2a0));
            if ((uVar6 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x29c) - 1)) {
              do {
                uVar16 = (unsigned int)((uVar6 & 0xffffffff) >> 3) & 0x1ffffff8;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar7 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(uVar16 + iVar4) =
                     1L << (uVar6 & 0x3f) | *(unsigned __int64 *)(uVar16 + iVar4);
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(uVar14 + iVar4) = uVar15 | *(unsigned __int64 *)(uVar14 + iVar4);
                uVar16 = *(int *)(param_1 + 0x29c) - 1;
                if ((uVar6 & 0xffffffff) == (unsigned __int64)uVar16) {
                  uVar6 = 0xffffffffffffffff;
                }
                else {
                  uVar6 = fn_82AC8910(param_2,uVar6 + 1,*(unsigned int *)(param_1 + 0x2a0));
                }
              } while ((uVar6 & 0xffffffff) <= (unsigned __int64)uVar16);
            }
            uVar13 = uVar13 - (uVar13 & ~(uVar13 - 1));
          }
        }
        for (puVar2 = *(unsigned int **)(uVar19 - 0x28); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[1])
        {
          if (((*puVar2 & 0xe000000) != 0) && ((*(unsigned int *)(puVar2[3] + 8) >> 0x17 & 1) != 0)) {
            uVar13 = *(unsigned int *)(puVar2[3] + 0x10);
            uVar6 = (unsigned __int64)uVar13 & 0xffff;
            uVar7 = ((unsigned __int64)(uVar13 >> 0x10) & 7) + uVar6;
            if (uVar6 < uVar7) {
              puVar17 = &uStack_a4;
              do {
                uVar8 = fn_82ADD198(param_1,uVar6);
                uVar6 = uVar6 + 1;
                puVar17 = puVar17 + 1;
                *puVar17 = uVar8;
              } while ((uVar6 & 0xffffffff) < uVar7);
            }
            uVar13 = *puVar2;
            uVar14 = uVar13 >> 0x19;
            uVar6 = (unsigned __int64)uVar14 & 7;
            if ((uVar14 & 7) != 0) {
              uVar14 = 0;
              do {
                uVar16 = auStack_a0[(uVar13 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3];
                uVar5 = uVar16 >> 3 & 0x1ffffff8;
                uVar7 = 1L << ((unsigned __int64)uVar16 & 0x3f);
                if ((*(unsigned __int64 *)(uVar5 + param_2) & uVar7) == 0) {
                  uVar15 = fn_82AC8910(param_2,0,*(unsigned int *)(param_1 + 0x2a0));
                  if ((uVar15 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x29c) - 1)) {
                    do {
                      uVar18 = (unsigned int)((uVar15 & 0xffffffff) >> 3) & 0x1ffffff8;
                      iVar4 = *(int *)(param_1 + 0x2a0) * uVar16 * 8 + *(int *)(param_1 + 0x2ac);
                      *(unsigned __int64 *)(uVar18 + iVar4) =
                           1L << (uVar15 & 0x3f) | *(unsigned __int64 *)(uVar18 + iVar4);
                      iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar15 * 8 +
                              *(int *)(param_1 + 0x2ac);
                      *(unsigned __int64 *)(iVar4 + uVar5) = *(unsigned __int64 *)(iVar4 + uVar5) | uVar7;
                      uVar18 = *(int *)(param_1 + 0x29c) - 1;
                      if ((uVar15 & 0xffffffff) == (unsigned __int64)uVar18) {
                        uVar15 = 0xffffffffffffffff;
                      }
                      else {
                        uVar15 = fn_82AC8910(param_2,uVar15 + 1,*(unsigned int *)(param_1 + 0x2a0));
                      }
                    } while ((uVar15 & 0xffffffff) <= (unsigned __int64)uVar18);
                  }
                  *(unsigned __int64 *)(uVar5 + param_2) = *(unsigned __int64 *)(uVar5 + param_2) | uVar7;
                }
                uVar6 = uVar6 - 1;
                uVar14 = uVar14 + 2;
              } while (uVar6 != 0);
            }
          }
        }
        uVar19 = *(unsigned int *)(uVar19 - 4);
      } while ((uVar19 & 1) == 0);
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

