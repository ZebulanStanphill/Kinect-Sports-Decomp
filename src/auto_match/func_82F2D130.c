void fn_82F2D130(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned short *puVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned short *puVar11;
  unsigned short *puVar12;
  unsigned int uVar13;
  unsigned short *puVar14;
  unsigned short *puVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  int iVar18;
  unsigned int uVar19;
  __int64 lVar20;
  __int64 lVar21;
  
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar4 != 0) && (uVar13 = *(unsigned int *)(param_1 + 100), uVar13 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) && (*(unsigned int *)(param_1 + 0x60) != 0)) {
    uVar19 = (uVar4 - 1) * uVar13;
    trapWord(6,(unsigned __int64)uVar4,0);
    iVar1 = (int)(((unsigned __int64)uVar4 & 0xffffff) << 8) / (int)uVar13;
    uVar16 = (unsigned __int64)iVar1;
    trapWord(6,(unsigned __int64)uVar13,0);
    trapWord(5,(unsigned __int64)uVar13 &
               ~((((unsigned __int64)uVar4 & 0x7fffff) << 9 | ((unsigned __int64)uVar4 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(unsigned __int64)uVar4 &
               ~((((unsigned __int64)uVar19 & 0x7fffffff) << 1 | (unsigned __int64)(uVar19 >> 0x1f)) - 1),0xffff);
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60) & 0x7fffffff;
    lVar17 = uVar6 << 1;
    lVar21 = (__int64)((int)uVar19 / (int)uVar4);
    if ((int)param_3 < (int)uVar19 / (int)uVar4) {
      lVar21 = param_3;
    }
    if (0 < iVar1) {
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar9 = 0;
      }
      else {
        uVar13 = iVar1 - 0x100;
        lVar9 = (__int64)((int)uVar13 >> 1) + (unsigned __int64)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      }
      iVar7 = (int)param_2;
      iVar18 = (int)lVar17;
      lVar9 = (__int64)iVar1 * (__int64)iVar7 + lVar9;
      puVar11 = (unsigned short *)(iVar18 * iVar7 * 2 + *(int *)(param_1 + 0x7c));
      lVar8 = param_2;
      if (lVar9 < 0) {
        uVar10 = uVar16 - lVar9;
        trapWord(6,uVar16,0);
        iVar2 = (int)uVar10 / iVar1;
        lVar8 = iVar2 + param_2;
        trapWord(5,uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (iVar7 < (int)lVar8) {
          param_2 = lVar8 - param_2;
          do {
            if (0 < iVar18) {
              puVar14 = (unsigned short *)(*(int *)(param_1 + 0x84) + -2);
              lVar20 = lVar17;
              do {
                puVar14 = puVar14 + 1;
                *puVar11 = *puVar14;
                puVar11 = puVar11 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        lVar9 = (__int64)iVar2 * (__int64)iVar1 + lVar9;
      }
      if ((int)lVar8 < (int)lVar21) {
        lVar8 = lVar21 - lVar8;
        do {
          uVar13 = (unsigned int)lVar9 & 0xff;
          puVar12 = (unsigned short *)(((int)(unsigned int)lVar9 >> 8) * iVar18 * 2 + *(int *)(param_1 + 0x84));
          if (0 < iVar18) {
            lVar20 = lVar17;
            do {
              puVar15 = (unsigned short *)((int)(uVar6 << 2) + (int)puVar12);
              uVar3 = *puVar12;
              puVar12 = puVar12 + 1;
              *puVar11 = (short)(*puVar15 * uVar13 + (unsigned int)uVar3 * (0x100 - uVar13) >> 8);
              puVar11 = puVar11 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          lVar8 = lVar8 + -1;
          lVar9 = lVar9 + uVar16;
        } while (lVar8 != 0);
      }
      if ((int)lVar21 < (int)param_3) {
        param_3 = param_3 - lVar21;
        puVar12 = puVar11 + -1;
        do {
          uVar13 = (unsigned int)lVar9 & 0xff;
          iVar1 = (int)(unsigned int)lVar9 >> 8;
          puVar15 = (unsigned short *)(iVar1 * iVar18 * 2 + *(int *)(param_1 + 0x84));
          if (iVar1 < (int)(uVar4 - 1)) {
            if (0 < iVar18) {
              lVar21 = lVar17;
              do {
                puVar5 = (unsigned short *)((int)(uVar6 << 2) + (int)puVar15);
                uVar3 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar12[1] = (unsigned short)(*puVar5 * uVar13 + (unsigned int)uVar3 * (0x100 - uVar13) >> 8);
                puVar12 = puVar12 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          else if (0 < iVar18) {
            puVar15 = puVar15 + -1;
            lVar21 = lVar17;
            do {
              puVar15 = puVar15 + 1;
              puVar12 = puVar12 + 1;
              *puVar12 = *puVar15;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
          param_3 = param_3 + -1;
          lVar9 = lVar9 + uVar16;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

