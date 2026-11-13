void fn_82F2E488(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  int iVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned char *puVar11;
  unsigned int uVar12;
  unsigned char *puVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned int uVar18;
  int iVar19;
  
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 8);
  if (((uVar2 != 0) && (*(int *)(param_1 + 100) != 0)) && (*(int *)(param_1 + 0x60) != 0)) {
    uVar3 = *(unsigned int *)(param_1 + 100);
    uVar18 = (uVar2 - 1) * uVar3;
    iVar4 = (int)((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x74) + 0xe) * *(int *)(param_1 + 0x60) +
                  0x1f & 0xffffffe0) >> 3;
    trapWord(6,(unsigned __int64)uVar2,0);
    uVar12 = (int)(((unsigned __int64)uVar2 & 0xffffff) << 8) / (int)uVar3;
    trapWord(6,(unsigned __int64)uVar3,0);
    trapWord(5,(unsigned __int64)uVar3 &
               ~((((unsigned __int64)uVar2 & 0x7fffff) << 9 | ((unsigned __int64)uVar2 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(unsigned __int64)uVar2 &
               ~((((unsigned __int64)uVar18 & 0x7fffffff) << 1 | (unsigned __int64)(uVar18 >> 0x1f)) - 1),0xffff);
    lVar17 = (__int64)((int)uVar18 / (int)uVar2);
    if ((int)param_3 < (int)uVar18 / (int)uVar2) {
      lVar17 = param_3;
    }
    uVar16 = (unsigned __int64)(uVar12 >> 0x1f) - 1 & (__int64)(int)uVar12;
    iVar19 = (int)uVar16;
    if (*(int *)(param_1 + 0x68) == 0) {
      lVar9 = 0;
    }
    else {
      uVar12 = iVar19 - 0x100;
      lVar9 = (__int64)((int)uVar12 >> 1) + (unsigned __int64)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    }
    iVar6 = (int)param_2;
    lVar9 = (__int64)iVar19 * (__int64)iVar6 + lVar9;
    puVar11 = (unsigned char *)(iVar4 * iVar6 + *(int *)(param_1 + 0x7c));
    lVar8 = 0;
    if (lVar9 < 0) {
      if (iVar19 == 0) {
        uVar16 = 1;
      }
      uVar10 = uVar16 - lVar9;
      trapWord(6,uVar16,0);
      iVar19 = (int)uVar10 / (int)uVar16;
      lVar8 = (__int64)iVar19;
      trapWord(5,uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar6 < (int)(lVar8 + param_2)) {
        lVar7 = (lVar8 + param_2) - param_2;
        do {
          if (0 < iVar4) {
            puVar13 = (unsigned char *)(*(int *)(param_1 + 0x84) + -1);
            iVar6 = iVar4;
            do {
              puVar13 = puVar13 + 1;
              *puVar11 = *puVar13;
              puVar11 = puVar11 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar9 = (__int64)iVar19 * (__int64)(int)uVar16 + lVar9;
    }
    if ((int)(lVar8 + param_2) < (int)lVar17) {
      lVar8 = lVar17 - (lVar8 + param_2);
      do {
        uVar12 = (unsigned int)lVar9 & 0xff;
        pbVar14 = (unsigned char *)(((int)(unsigned int)lVar9 >> 8) * iVar4 + *(int *)(param_1 + 0x84));
        iVar19 = iVar4;
        if (0 < iVar4) {
          do {
            pbVar15 = pbVar14 + iVar4;
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            *puVar11 = (char)(*pbVar15 * uVar12 + (unsigned int)bVar1 * (0x100 - uVar12) >> 8);
            puVar11 = puVar11 + 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        lVar8 = lVar8 + -1;
        lVar9 = lVar9 + uVar16;
      } while (lVar8 != 0);
    }
    if ((int)lVar17 < (int)param_3) {
      param_3 = param_3 - lVar17;
      pbVar14 = puVar11 + -1;
      do {
        uVar12 = (unsigned int)lVar9 & 0xff;
        iVar19 = (int)(unsigned int)lVar9 >> 8;
        pbVar15 = (unsigned char *)(iVar19 * iVar4 + *(int *)(param_1 + 0x84));
        if (iVar19 < (int)(uVar2 - 1)) {
          iVar19 = iVar4;
          if (0 < iVar4) {
            do {
              pbVar5 = pbVar15 + iVar4;
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + 1;
              pbVar14[1] = (unsigned char)(*pbVar5 * uVar12 + (unsigned int)bVar1 * (0x100 - uVar12) >> 8);
              pbVar14 = pbVar14 + 1;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
        }
        else if (0 < iVar4) {
          pbVar15 = pbVar15 + -1;
          iVar19 = iVar4;
          do {
            pbVar15 = pbVar15 + 1;
            pbVar14 = pbVar14 + 1;
            *pbVar14 = *pbVar15;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        param_3 = param_3 + -1;
        lVar9 = lVar9 + uVar16;
      } while (param_3 != 0);
    }
  }
  return;
}

