void fn_82F2D370(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned char *puVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned char *puVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned int uVar17;
  int iVar18;
  
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar3 != 0) && (uVar11 = *(unsigned int *)(param_1 + 100), uVar11 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) && (*(int *)(param_1 + 0x60) != 0)) {
    uVar17 = (uVar3 - 1) * uVar11;
    trapWord(5,(unsigned __int64)uVar11 &
               ~((((unsigned __int64)uVar3 & 0x7fffff) << 9 | ((unsigned __int64)uVar3 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(6,(unsigned __int64)uVar3,0);
    iVar18 = (int)(((unsigned __int64)uVar3 & 0xffffff) << 8) / (int)uVar11;
    uVar15 = (unsigned __int64)iVar18;
    trapWord(6,(unsigned __int64)uVar11,0);
    trapWord(5,(unsigned __int64)uVar3 &
               ~((((unsigned __int64)uVar17 & 0x7fffffff) << 1 | (unsigned __int64)(uVar17 >> 0x1f)) - 1),0xffff);
    iVar10 = *(int *)(param_1 + 0x60) * 2;
    lVar16 = (__int64)((int)uVar17 / (int)uVar3);
    if ((int)param_3 < (int)uVar17 / (int)uVar3) {
      lVar16 = param_3;
    }
    if (0 < iVar18) {
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar7 = 0;
      }
      else {
        uVar11 = iVar18 - 0x100;
        lVar7 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 1) != 0);
      }
      iVar5 = (int)param_2;
      lVar7 = (__int64)iVar18 * (__int64)iVar5 + lVar7;
      puVar9 = (unsigned char *)(iVar10 * iVar5 + *(int *)(param_1 + 0x7c));
      lVar6 = param_2;
      if (lVar7 < 0) {
        uVar8 = uVar15 - lVar7;
        trapWord(6,uVar15,0);
        iVar1 = (int)uVar8 / iVar18;
        lVar6 = iVar1 + param_2;
        trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar5 < (int)lVar6) {
          param_2 = lVar6 - param_2;
          do {
            if (0 < iVar10) {
              puVar12 = (unsigned char *)(*(int *)(param_1 + 0x84) + -1);
              iVar5 = iVar10;
              do {
                puVar12 = puVar12 + 1;
                *puVar9 = *puVar12;
                puVar9 = puVar9 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        lVar7 = (__int64)iVar1 * (__int64)iVar18 + lVar7;
      }
      if ((int)lVar6 < (int)lVar16) {
        lVar6 = lVar16 - lVar6;
        do {
          uVar11 = (unsigned int)lVar7 & 0xff;
          pbVar13 = (unsigned char *)(((int)(unsigned int)lVar7 >> 8) * iVar10 + *(int *)(param_1 + 0x84));
          iVar18 = iVar10;
          if (0 < iVar10) {
            do {
              pbVar14 = pbVar13 + iVar10;
              bVar2 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              *puVar9 = (char)(*pbVar14 * uVar11 + (unsigned int)bVar2 * (0x100 - uVar11) >> 8);
              puVar9 = puVar9 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          lVar6 = lVar6 + -1;
          lVar7 = lVar7 + uVar15;
        } while (lVar6 != 0);
      }
      if ((int)lVar16 < (int)param_3) {
        param_3 = param_3 - lVar16;
        pbVar13 = puVar9 + -1;
        do {
          uVar11 = (unsigned int)lVar7 & 0xff;
          iVar18 = (int)(unsigned int)lVar7 >> 8;
          pbVar14 = (unsigned char *)(iVar18 * iVar10 + *(int *)(param_1 + 0x84));
          if (iVar18 < (int)(uVar3 - 1)) {
            iVar18 = iVar10;
            if (0 < iVar10) {
              do {
                pbVar4 = pbVar14 + iVar10;
                bVar2 = *pbVar14;
                pbVar14 = pbVar14 + 1;
                pbVar13[1] = (unsigned char)(*pbVar4 * uVar11 + (unsigned int)bVar2 * (0x100 - uVar11) >> 8);
                pbVar13 = pbVar13 + 1;
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
            }
          }
          else if (0 < iVar10) {
            pbVar14 = pbVar14 + -1;
            iVar18 = iVar10;
            do {
              pbVar14 = pbVar14 + 1;
              pbVar13 = pbVar13 + 1;
              *pbVar13 = *pbVar14;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          param_3 = param_3 + -1;
          lVar7 = lVar7 + uVar15;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

