#define true 1
extern int fn_82AC8910();
extern int fn_82ADD198();
extern int fn_82B8B280();


void fn_82AF8140(int param_1,char param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  char cVar13;
  unsigned __int64 *puVar14;
  __int64 lVar15;
  unsigned int uVar16;
  unsigned __int64 *puVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar21;
  unsigned __int64 uVar20;
  
  uVar3 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar3 & 1) != 0) || (uVar3 == 0)) {
      return;
    }
    if (param_2 == '\0') {
      *(unsigned int *)(uVar3 + 0x54) = *(unsigned int *)(uVar3 + 0x58);
    }
    uVar11 = fn_82AC8910(*(unsigned int *)(uVar3 + 0x58),0,*(unsigned int *)(param_1 + 0x2a0));
    if ((uVar11 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x29c) - 1)) {
      do {
        uVar16 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
        uVar21 = *(int *)(param_1 + 0x2a0) * 8 + uVar16;
        if (uVar16 < uVar21) {
          puVar14 = (unsigned __int64 *)(*(int *)(uVar3 + 0x58) + -8);
          puVar17 = (unsigned __int64 *)(uVar16 - 8);
          lVar15 = (unsigned __int64)((uVar21 - uVar16) - 1 >> 3) + 1;
          do {
            puVar14 = puVar14 + 1;
            puVar4 = puVar17 + 1;
            puVar17 = puVar17 + 1;
            *puVar17 = *puVar14 | *puVar4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        uVar21 = (unsigned int)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar5 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
        *(__int64 *)(uVar21 + iVar5) = *(__int64 *)(uVar21 + iVar5) - (1L << (uVar11 & 0x3f));
        uVar21 = *(int *)(param_1 + 0x29c) - 1;
        if ((uVar11 & 0xffffffff) == (unsigned __int64)uVar21) {
          uVar11 = 0xffffffffffffffff;
        }
        else {
          uVar11 = fn_82AC8910(*(unsigned int *)(uVar3 + 0x58),uVar11 + 1,
                                *(unsigned int *)(param_1 + 0x2a0));
        }
      } while ((uVar11 & 0xffffffff) <= (unsigned __int64)uVar21);
    }
    for (uVar21 = *(unsigned int *)(uVar3 + 0x14); ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(unsigned int *)((uVar21 & 0xfffffffe) + 0x28)) {
      if ((*(unsigned int *)(uVar21 + 8) & 0x3f80) == 0x3800) {
        uVar1 = *(unsigned short *)(uVar21 + 0x12);
        for (uVar16 = *(unsigned int *)(uVar3 + 0x14); ((uVar16 & 1) == 0 && (uVar16 != 0));
            uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 0x28)) {
          if (((*(unsigned int *)(uVar16 + 8) & 0x3f80) == 0x3800) &&
             (uVar2 = *(unsigned short *)(uVar16 + 0x12), uVar1 != uVar2)) {
            uVar6 = uVar2 >> 3 & 0x1ffffff8;
            iVar5 = *(int *)(param_1 + 0x2a0) * (unsigned int)uVar1 * 8 + *(int *)(param_1 + 0x2ac);
            uVar7 = uVar1 >> 3 & 0x1ffffff8;
            *(unsigned __int64 *)(uVar6 + iVar5) = 1L << (uVar2 & 0x3f) | *(unsigned __int64 *)(uVar6 + iVar5);
            iVar5 = *(int *)(param_1 + 0x2a0) * (unsigned int)uVar2 * 8 + *(int *)(param_1 + 0x2ac);
            *(unsigned __int64 *)(uVar7 + iVar5) = 1L << (uVar1 & 0x3f) | *(unsigned __int64 *)(uVar7 + iVar5);
          }
        }
      }
    }
    if ((*(unsigned int *)(uVar3 + 0x1c) & 1) == 0) {
      uVar21 = -(unsigned int)((*(unsigned int *)(uVar3 + 0x1c) & 1) == 0) & *(unsigned int *)(uVar3 + 0x1c);
      iVar5 = uVar3 + 0x18;
    }
    else {
      uVar21 = -(unsigned int)((*(unsigned int *)(uVar3 + 0x24) & 1) == 0) & *(unsigned int *)(uVar3 + 0x24);
      iVar5 = uVar3 + 0x20;
    }
    while (uVar21 != 0) {
      do {
        if ((*(unsigned int *)(uVar21 + 8) >> 0x17 & 1) != 0) {
          uVar10 = (unsigned __int64)*(unsigned int *)(uVar21 + 0x10) & 0xffff;
          uVar19 = uVar10 + ((unsigned __int64)(*(unsigned int *)(uVar21 + 0x10) >> 0x10) & 7);
          uVar18 = uVar10;
          uVar11 = uVar10;
          while (uVar11 < uVar19) {
            uVar11 = fn_82ADD198(param_1,uVar18);
            uVar18 = uVar18 + 1;
            if ((uVar18 & 0xffffffff) < uVar19) {
              uVar16 = (unsigned int)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
              uVar20 = uVar18;
              do {
                uVar12 = fn_82ADD198(param_1,uVar20);
                uVar6 = (unsigned int)((uVar12 & 0xffffffff) >> 3) & 0x1ffffff8;
                uVar20 = uVar20 + 1;
                iVar8 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(uVar6 + iVar8) =
                     1L << (uVar12 & 0x3f) | *(unsigned __int64 *)(uVar6 + iVar8);
                iVar8 = *(int *)(param_1 + 0x2a0) * (int)uVar12 * 8 + *(int *)(param_1 + 0x2ac);
                *(unsigned __int64 *)(iVar8 + uVar16) =
                     *(unsigned __int64 *)(iVar8 + uVar16) | 1L << (uVar11 & 0x3f);
              } while ((uVar20 & 0xffffffff) < uVar19);
            }
            uVar11 = uVar18 & 0xffffffff;
          }
          for (uVar16 = *(unsigned int *)(uVar3 + 0x14); ((uVar16 & 1) == 0 && (uVar16 != 0));
              uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 0x28)) {
            if (((*(unsigned int *)(uVar16 + 8) & 0x3f80) == 0x3800) && (uVar16 != uVar21)) {
              for (iVar8 = *(int *)(uVar16 + 4); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
                uVar6 = *(unsigned int *)(iVar8 + 0x10);
                if ((((uVar6 != 0) && (*(unsigned int *)(uVar6 + 0x1c) == uVar3)) && (uVar6 != uVar21)) &&
                   ((cVar13 = fn_82B8B280(uVar6,uVar21,0,1,param_1), cVar13 != '\0' &&
                    (uVar11 = fn_82ADD198(param_1,*(unsigned short *)(uVar16 + 0x12)), uVar10 < uVar19)
                    ))) {
                  uVar6 = (unsigned int)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
                  uVar18 = uVar10;
                  do {
                    uVar20 = fn_82ADD198(param_1,uVar18);
                    uVar7 = (unsigned int)((uVar20 & 0xffffffff) >> 3) & 0x1ffffff8;
                    uVar18 = uVar18 + 1;
                    iVar9 = *(int *)(param_1 + 0x2a0) * (int)uVar20 * 8 + *(int *)(param_1 + 0x2ac);
                    *(unsigned __int64 *)(uVar6 + iVar9) =
                         1L << (uVar11 & 0x3f) | *(unsigned __int64 *)(uVar6 + iVar9);
                    iVar9 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
                    *(unsigned __int64 *)(uVar7 + iVar9) =
                         1L << (uVar20 & 0x3f) | *(unsigned __int64 *)(uVar7 + iVar9);
                  } while ((uVar18 & 0xffffffff) < uVar19);
                }
              }
            }
          }
        }
        uVar21 = *(unsigned int *)((uVar21 & 0xfffffffe) + 0x28);
      } while (((uVar21 & 1) == 0) && (uVar21 != 0));
      if ((iVar5 == uVar3 + 0x20) ||
         (uVar21 = *(unsigned int *)(uVar3 + 0x24), iVar5 = uVar3 + 0x20, (uVar21 & 1) != 0)) break;
    }
    uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 4);
  } while( true );
}

