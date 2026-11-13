typedef unsigned char bool;
extern int fn_82C4E5E8();
extern int fn_82C57AF0();
extern int fn_82C57F70();
extern int fn_82C58408();
extern int fn_82C7E4E8();
extern unsigned int uStack_50;


unsigned __int64 fn_82C7F300(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  __int64 *plVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  int iVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned int uStack_50;
  
  iVar2 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x5788) == 0) {
    uVar7 = fn_82C58408();
    return uVar7;
  }
  puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar9 = *puVar3;
  uVar4 = *(unsigned int *)(puVar3 + 1);
  *puVar3 = uVar9 << 1;
  *(int *)(puVar3 + 1) = (int)((unsigned __int64)uVar4 - 1);
  if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
    fn_82C4E5E8();
  }
  puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar16 = 3;
  lVar15 = 0;
  uVar10 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
  uVar12 = uVar10 + 0x10;
  if ((uVar12 & 0xffffffff) < 3) {
    do {
      if ((uVar12 & 0xffffffff) == 0) break;
      uVar16 = uVar16 - uVar12;
      *(int *)(puVar3 + 1) = (int)(uVar10 - uVar12);
      lVar15 = (unsigned __int64)(unsigned int)((int)(*puVar3 >> (0x40 - uVar12 & 0x7f)) << ((unsigned int)uVar16 & 0x3f))
               + lVar15;
      *puVar3 = *puVar3 << (uVar12 & 0x7f);
      if ((__int64)(uVar10 - uVar12) < 0) {
        fn_82C4E5E8(puVar3);
      }
      uVar10 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
      uVar12 = uVar10 + 0x10;
    } while ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff));
  }
  *(int *)(puVar3 + 1) = (int)(uVar10 - uVar16);
  uVar12 = (*puVar3 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar15;
  *puVar3 = *puVar3 << (uVar16 & 0x7f);
  if ((__int64)(uVar10 - uVar16) < 0) {
    fn_82C4E5E8(puVar3);
  }
  if ((uVar12 & 0xffffffff) < 8) {
    bVar1 = (int)uVar12 != 0;
    if (uVar12 == 1 && bVar1) {
      uStack_50 = 1;
      fn_82C57AF0(iVar2,*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_1 + 0x54));
    }
    else {
      if (uVar12 == 2 && bVar1) {
        uStack_50 = 2;
        fn_82C57AF0(iVar2,*(unsigned int *)(param_1 + 0x90),*(unsigned int *)(param_1 + 0x54));
LAB_82c7f464:
        lVar15 = 0;
        puVar13 = *(unsigned int **)(param_1 + 0x110);
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            lVar11 = 0;
            if (0 < *(int *)(param_1 + 0x88)) {
              do {
                if (lVar11 + lVar15 == 0) {
LAB_82c7f764:
                  uVar10 = uVar9 >> 0x3f;
                }
                else if ((int)lVar15 == 0) {
                  uVar10 = (unsigned __int64)(puVar13[-6] >> 0x1f);
                }
                else if ((int)lVar11 == 0) {
                  uVar10 = (unsigned __int64)(puVar13[*(int *)(param_1 + 0x88) * -6] >> 0x1f);
                }
                else {
                  uVar10 = (unsigned __int64)(puVar13[-6] >> 0x1f);
                  if ((unsigned __int64)(puVar13[-6] >> 0x1f) !=
                      (unsigned __int64)(puVar13[*(int *)(param_1 + 0x88) * -6] >> 0x1f))
                  goto LAB_82c7f764;
                }
                lVar11 = lVar11 + 1;
                *puVar13 = *puVar13 & 0x7fffffff | ((unsigned int)(uVar10 << 0x1f) ^ *puVar13) & 0x80000000;
                puVar13 = puVar13 + 6;
              } while ((int)lVar11 < *(int *)(param_1 + 0x88));
            }
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < *(int *)(param_1 + 0x8c));
        }
        goto LAB_82c7f7e4;
      }
      if (uVar12 == 3 && bVar1) {
        uStack_50 = 3;
        uVar7 = fn_82C57F70(param_1);
        iVar8 = (int)uVar7;
joined_r0x82c7f4b4:
        if (iVar8 != 0) {
          return uVar7;
        }
      }
      else {
        if (uVar12 == 4 && bVar1) {
          uStack_50 = 4;
          uVar7 = fn_82C57F70(param_1);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          goto LAB_82c7f464;
        }
        if (uVar12 == 5 && bVar1) {
          uStack_50 = 5;
          iVar8 = 0;
          if (0 < *(int *)(param_1 + 0x8c)) {
            do {
              plVar5 = *(__int64 **)(param_1 + 0x54);
              lVar15 = *plVar5;
              uVar4 = *(unsigned int *)(plVar5 + 1);
              *plVar5 = lVar15 << 1;
              *(int *)(plVar5 + 1) = (int)((unsigned __int64)uVar4 - 1);
              if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (lVar15 < 0) {
                iVar17 = 0;
                if (0 < *(int *)(param_1 + 0x88)) {
                  do {
                    puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
                    uVar10 = *puVar3;
                    uVar4 = *(unsigned int *)(puVar3 + 1);
                    *puVar3 = uVar10 << 1;
                    *(int *)(puVar3 + 1) = (int)((unsigned __int64)uVar4 - 1);
                    if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    iVar14 = *(int *)(param_1 + 0x88) * iVar8 + iVar17;
                    iVar17 = iVar17 + 1;
                    iVar14 = iVar14 * 0x18;
                    *(unsigned int *)(iVar14 + iVar2) =
                         (unsigned int)((uVar10 >> 0x3f) << 0x1f) | *(unsigned int *)(iVar14 + iVar2) & 0x7fffffff;
                  } while (iVar17 < *(int *)(param_1 + 0x88));
                }
              }
              else {
                iVar17 = 0;
                if (0 < *(int *)(param_1 + 0x88)) {
                  do {
                    iVar14 = *(int *)(param_1 + 0x88) * iVar8 + iVar17;
                    iVar17 = iVar17 + 1;
                    iVar14 = iVar14 * 0x18;
                    *(unsigned int *)(iVar14 + iVar2) = *(unsigned int *)(iVar14 + iVar2) & 0x7fffffff;
                  } while (iVar17 < *(int *)(param_1 + 0x88));
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0x8c));
          }
        }
        else if (uVar12 == 6 && bVar1) {
          uStack_50 = 6;
          lVar15 = 0;
          if (0 < *(int *)(param_1 + 0x88)) {
            do {
              plVar5 = *(__int64 **)(param_1 + 0x54);
              lVar11 = *plVar5;
              uVar4 = *(unsigned int *)(plVar5 + 1);
              *plVar5 = lVar11 << 1;
              *(int *)(plVar5 + 1) = (int)((unsigned __int64)uVar4 - 1);
              if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (lVar11 < 0) {
                iVar8 = 0;
                if (0 < *(int *)(param_1 + 0x8c)) {
                  do {
                    puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
                    uVar10 = *puVar3;
                    uVar4 = *(unsigned int *)(puVar3 + 1);
                    *puVar3 = uVar10 << 1;
                    *(int *)(puVar3 + 1) = (int)((unsigned __int64)uVar4 - 1);
                    if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    uVar12 = (__int64)*(int *)(param_1 + 0x88) * (__int64)iVar8 + lVar15;
                    iVar8 = iVar8 + 1;
                    iVar17 = (int)((uVar12 + (uVar12 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                    *(unsigned int *)(iVar17 + iVar2) =
                         (unsigned int)((uVar10 >> 0x3f) << 0x1f) | *(unsigned int *)(iVar17 + iVar2) & 0x7fffffff;
                  } while (iVar8 < *(int *)(param_1 + 0x8c));
                }
              }
              else {
                iVar8 = 0;
                if (0 < *(int *)(param_1 + 0x8c)) {
                  do {
                    uVar10 = (__int64)*(int *)(param_1 + 0x88) * (__int64)iVar8 + lVar15;
                    iVar8 = iVar8 + 1;
                    iVar17 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                    *(unsigned int *)(iVar17 + iVar2) = *(unsigned int *)(iVar17 + iVar2) & 0x7fffffff;
                  } while (iVar8 < *(int *)(param_1 + 0x8c));
                }
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < *(int *)(param_1 + 0x88));
          }
        }
        else {
          if (bVar1) {
            uStack_50 = 7;
            uVar7 = fn_82C7E4E8(param_1);
            iVar8 = (int)uVar7;
            goto joined_r0x82c7f4b4;
          }
          uStack_50 = 0;
        }
      }
    }
  }
  if (((__int64)uVar9 < 0) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x90))) {
    puVar13 = (unsigned int *)(iVar2 + -0x18);
    do {
      puVar6 = puVar13 + 6;
      iVar8 = iVar8 + 1;
      puVar13 = puVar13 + 6;
      *puVar13 = *puVar6 & 0x7fffffff | ~*puVar6 & 0x80000000;
    } while (iVar8 < *(int *)(param_1 + 0x90));
  }
LAB_82c7f7e4:
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x15c) = uStack_50;
  }
  else if (param_2 == 5) {
    *(unsigned int *)(param_1 + 0x548c) = uStack_50;
  }
  else if (param_2 == 4) {
    *(unsigned int *)(param_1 + 0x50e4) = uStack_50;
  }
  else if (param_2 == 3) {
    *(unsigned int *)(param_1 + 0x3a14) = uStack_50;
  }
  else if (param_2 == 2) {
    *(unsigned int *)(param_1 + 0x50d4) = uStack_50;
  }
  else {
    *(unsigned int *)(param_1 + 0x160) = uStack_50;
  }
  return 0;
}

