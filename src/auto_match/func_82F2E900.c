void fn_82F2E900(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  short *psVar10;
  int iVar11;
  unsigned int uVar13;
  __int64 lVar12;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iVar19;
  unsigned int uVar20;
  __int64 lVar21;
  
  iVar6 = *(int *)(param_1 + 0x74);
  uVar2 = *(unsigned int *)(iVar6 + 8);
  if (((uVar2 != 0) && (*(int *)(param_1 + 100) != 0)) &&
     (iVar11 = *(int *)(param_1 + 0x60), iVar11 != 0)) {
    uVar13 = *(unsigned int *)(param_1 + 100);
    uVar20 = (uVar2 - 1) * uVar13;
    trapWord(6,(unsigned __int64)uVar2,0);
    iVar3 = (int)(iVar11 * 0x18 + 0x1fU & 0xffffffe0) >> 3;
    iVar7 = (int)(((unsigned __int64)uVar2 & 0xffffff) << 8) / (int)uVar13;
    uVar17 = (unsigned __int64)iVar7;
    trapWord(6,(unsigned __int64)uVar13,0);
    trapWord(5,(unsigned __int64)uVar13 &
               ~((((unsigned __int64)uVar2 & 0x7fffff) << 9 | ((unsigned __int64)uVar2 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(unsigned __int64)uVar2 &
               ~((((unsigned __int64)uVar20 & 0x7fffffff) << 1 | (unsigned __int64)(uVar20 >> 0x1f)) - 1),0xffff);
    lVar18 = (__int64)((int)uVar20 / (int)uVar2);
    if ((int)param_3 < (int)uVar20 / (int)uVar2) {
      lVar18 = param_3;
    }
    if (0 < iVar7) {
      if (*(int *)(iVar6 + 0x10) == 0) {
        iVar19 = 10;
      }
      else if (((*(int *)(iVar6 + 0x28) != 0x7c00) || (*(int *)(iVar6 + 0x2c) != 0x3e0)) ||
              (iVar19 = 10, *(int *)(iVar6 + 0x30) != 0x1f)) {
        iVar19 = 0xb;
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar8 = 0;
      }
      else {
        uVar13 = iVar7 - 0x100;
        lVar8 = (__int64)((int)uVar13 >> 1) + (unsigned __int64)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      }
      iVar5 = (int)param_2;
      lVar8 = (__int64)iVar7 * (__int64)iVar5 + lVar8;
      psVar10 = (short *)(((int)((unsigned int)*(unsigned short *)(iVar6 + 0xe) * iVar11 + 0x1f & 0xffffffe0) >> 3)
                          * iVar5 + *(int *)(param_1 + 0x7c));
      lVar21 = 0;
      if (lVar8 < 0) {
        uVar9 = uVar17 - lVar8;
        trapWord(6,uVar17,0);
        iVar6 = (int)uVar9 / iVar7;
        lVar21 = (__int64)iVar6;
        trapWord(5,uVar17 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar5 < (int)(lVar21 + param_2)) {
          lVar12 = (lVar21 + param_2) - param_2;
          do {
            pbVar14 = *(unsigned char **)(param_1 + 0x84);
            iVar5 = 0;
            if (0 < iVar11) {
              do {
                bVar1 = *pbVar14;
                iVar5 = iVar5 + 1;
                pbVar4 = pbVar14 + 1;
                pbVar15 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                *psVar10 = ((unsigned short)*pbVar15 << iVar19) + (unsigned short)*pbVar4 * 0x20 + (unsigned short)bVar1;
                psVar10 = psVar10 + 1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar5 < iVar11);
            }
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        lVar8 = (__int64)iVar6 * (__int64)iVar7 + lVar8;
      }
      if ((int)(lVar21 + param_2) < (int)lVar18) {
        lVar21 = lVar18 - (lVar21 + param_2);
        do {
          uVar13 = (unsigned int)lVar8 & 0xff;
          iVar7 = 0;
          iVar6 = 0x100 - uVar13;
          pbVar14 = (unsigned char *)(((int)(unsigned int)lVar8 >> 8) * iVar3 + *(int *)(param_1 + 0x84));
          if (0 < iVar11) {
            do {
              pbVar4 = pbVar14 + iVar3;
              iVar7 = iVar7 + 1;
              bVar1 = *pbVar14;
              pbVar15 = pbVar14 + 1;
              pbVar16 = pbVar14 + 2;
              pbVar14 = pbVar14 + 3;
              *psVar10 = (short)((pbVar16[iVar3] * uVar13 + (unsigned int)*pbVar16 * iVar6 >> 8) << iVar19)
                         + ((unsigned short)(((__int64)(int)(unsigned int)pbVar15[iVar3] * (__int64)(int)uVar13 +
                                      (__int64)(int)(unsigned int)*pbVar15 * (__int64)iVar6 & 0xffffffffU)
                                    >> 3) & 0xffe0) +
                         (short)((unsigned __int64)
                                 ((__int64)(int)(unsigned int)*pbVar4 * (__int64)(int)uVar13 +
                                 (__int64)(int)(unsigned int)bVar1 * (__int64)iVar6) >> 8);
              psVar10 = psVar10 + 1;
              iVar11 = *(int *)(param_1 + 0x60);
            } while (iVar7 < iVar11);
          }
          lVar8 = lVar8 + uVar17;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if ((int)lVar18 < (int)param_3) {
        param_3 = param_3 - lVar18;
        psVar10 = psVar10 + -1;
        do {
          iVar6 = (int)(unsigned int)lVar8 >> 8;
          pbVar14 = (unsigned char *)(iVar6 * iVar3 + *(int *)(param_1 + 0x84));
          if (iVar6 < (int)(uVar2 - 1)) {
            uVar13 = (unsigned int)lVar8 & 0xff;
            iVar7 = 0;
            iVar6 = 0x100 - uVar13;
            if (0 < iVar11) {
              do {
                pbVar4 = pbVar14 + iVar3;
                iVar7 = iVar7 + 1;
                bVar1 = *pbVar14;
                pbVar15 = pbVar14 + 1;
                pbVar16 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                psVar10[1] = (short)((pbVar16[iVar3] * uVar13 + (unsigned int)*pbVar16 * iVar6 >> 8) <<
                                    iVar19) +
                             ((unsigned short)(((__int64)(int)(unsigned int)pbVar15[iVar3] * (__int64)(int)uVar13
                                        + (__int64)(int)(unsigned int)*pbVar15 * (__int64)iVar6 &
                                       0xffffffffU) >> 3) & 0xffe0) +
                             (short)((unsigned __int64)
                                     ((__int64)(int)(unsigned int)*pbVar4 * (__int64)(int)uVar13 +
                                     (__int64)(int)(unsigned int)bVar1 * (__int64)iVar6) >> 8);
                psVar10 = psVar10 + 1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar7 < iVar11);
            }
          }
          else {
            iVar6 = 0;
            if (0 < iVar11) {
              do {
                bVar1 = *pbVar14;
                iVar6 = iVar6 + 1;
                pbVar4 = pbVar14 + 1;
                pbVar15 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                psVar10 = psVar10 + 1;
                *psVar10 = ((unsigned short)*pbVar15 << iVar19) + (unsigned short)*pbVar4 * 0x20 + (unsigned short)bVar1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar6 < iVar11);
            }
          }
          lVar8 = lVar8 + uVar17;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

