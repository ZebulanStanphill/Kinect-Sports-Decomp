#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


void fn_8258B170(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  __int64 lVar14;
  int iVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  __int64 lVar19;
  __int64 lVar20;
  __int64 lVar21;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *(unsigned int *)(param_1 + 0x38);
  lVar11 = (__int64)((int)uVar1 >> 0x15);
  uVar4 = *(unsigned int *)(param_1 + 0x20);
  uVar5 = *(unsigned int *)(param_1 + 0x24);
  iVar7 = (int)(uVar1 << 0xb | uVar1 >> 0x15) >> 0x16;
  iVar8 = (int)(uVar2 << 0xb | uVar2 >> 0x15) >> 0x16;
  iVar15 = (int)(uVar2 << 0x15 | uVar2 >> 0xb) >> 0x15;
  if (-1 < lVar11) {
    iVar9 = (int)(uVar1 << 0x15 | uVar1 >> 0xb) >> 0x15;
    if (iVar9 <= iVar15) {
      lVar19 = (__int64)iVar9 * (__int64)(int)uVar5;
      lVar18 = ((__int64)iVar15 - (__int64)iVar9) + 1;
      do {
        if (iVar7 <= iVar8) {
          lVar20 = ((__int64)iVar8 - (__int64)iVar7) + 1;
          lVar10 = ((__int64)(int)uVar4 * (__int64)iVar7 + lVar19 + lVar11 & 0x3fffffffU) * 4 +
                   (unsigned __int64)uVar3;
          do {
            if ((int)uVar1 >> 0x15 <= (int)uVar2 >> 0x15) {
              lVar16 = (((int)uVar2 >> 0x15) - lVar11) + 1;
              lVar21 = lVar10;
              do {
                lVar12 = lVar21;
                for (piVar6 = (int *)*(unsigned int *)lVar21; uVar17 = ZEXT48(piVar6), uVar17 != 0;
                    piVar6 = (int *)piVar6[0x1f]) {
                  iVar15 = 0;
                  lVar14 = uVar17 + 4;
                  do {
                    iVar15 = iVar15 + 1;
                    if (*(int *)lVar14 == param_2) {
                      piVar6[iVar15] = 0;
                      *piVar6 = *piVar6 + 1;
                      break;
                    }
                    lVar14 = lVar14 + 4;
                  } while (iVar15 < 0x1e);
                  if (*piVar6 == 0x1e) {
                    *(int *)lVar12 = piVar6[0x1f];
                    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
                    *piVar6 = 0;
                    puVar13 = (unsigned int *)(uVar17 + 4);
                    if (*(int *)(param_1 + 0x7c) == 0) {
                      *(unsigned int **)(param_1 + 0x7c) = puVar13;
                    }
                    *puVar13 = *(unsigned int *)(param_1 + 0x78);
                    *(unsigned int *)(param_1 + 0x78) = puVar13;
                    break;
                  }
                  lVar12 = uVar17 + 0x7c;
                }
                lVar21 = lVar21 + 4;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar20 = lVar20 + -1;
            lVar10 = ((unsigned __int64)uVar4 & 0x3fffffff) * 4 + lVar10;
          } while (lVar20 != 0);
        }
        lVar18 = lVar18 + -1;
        lVar19 = lVar19 + (unsigned __int64)uVar5;
      } while (lVar18 != 0);
    }
    *(unsigned int *)(param_2 + 0x20) = 0xffffffff;
    *(unsigned int *)(param_2 + 0x24) = 0xffffffff;
  }
  return;
}

