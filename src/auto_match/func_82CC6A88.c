void fn_82CC6A88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  int iVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned char *puVar8;
  __int64 lVar7;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned char *pbVar11;
  unsigned int uVar15;
  __int64 lVar12;
  __int64 lVar13;
  int iVar16;
  unsigned char *pbVar17;
  __int64 lVar14;
  unsigned int uVar18;
  int iVar19;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned __int64 uVar22;
  unsigned int uVar25;
  unsigned __int64 uVar23;
  __int64 lVar24;
  __int64 lVar26;
  __int64 lVar27;
  unsigned int uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  
  lVar26 = 0;
  uVar9 = *(unsigned int *)(param_1 + 0x24);
  uVar15 = *(unsigned int *)(param_1 + 0x20);
  trapWord(6,(unsigned __int64)uVar9,0);
  uVar18 = *(unsigned int *)(*(int *)(param_1 + 0x30) + 8);
  uVar22 = (unsigned __int64)uVar18;
  uVar28 = (uVar18 - 1) * uVar9;
  uVar25 = (((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0) + -1) * uVar9;
  iVar4 = (int)param_2;
  trapWord(5,(unsigned __int64)uVar9 &
             ~((((unsigned __int64)uVar18 & 0x7fffff) << 9 | ((unsigned __int64)uVar18 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(6,uVar22,0);
  uVar1 = (int)(((unsigned __int64)uVar18 & 0xffffff) << 8) / (int)uVar9;
  uVar20 = (unsigned __int64)(int)uVar1;
  trapWord(5,uVar22 & ~((((unsigned __int64)uVar28 & 0x7fffffff) << 1 | (unsigned __int64)(uVar28 >> 0x1f)) - 1),
           0xffff);
  trapWord(6,uVar22,0);
  trapWord(5,uVar22 & ~((((unsigned __int64)uVar25 & 0x7fffffff) << 1 | (unsigned __int64)(uVar25 >> 0x1f)) - 1),
           0xffff);
  iVar21 = ((int)uVar15 >> 1) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 1) != 0);
  puVar6 = (unsigned char *)(uVar15 * iVar4 + *(int *)(param_1 + 0x38));
  iVar5 = (int)param_3;
  uVar22 = (__int64)((int)uVar28 / (int)uVar18);
  if (iVar5 < (int)uVar28 / (int)uVar18) {
    uVar22 = param_3;
  }
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar12 = 0;
    }
    else {
      uVar15 = uVar1 - 0x100;
      lVar12 = (__int64)((int)uVar15 >> 1) + (unsigned __int64)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    }
    uVar23 = (__int64)(int)uVar1 * (__int64)iVar4;
    lVar12 = uVar23 + lVar12;
    if (lVar12 < 0) {
      uVar10 = uVar20 - lVar12;
      trapWord(6,uVar20,0);
      iVar29 = (int)uVar10 / (int)uVar1;
      lVar26 = (__int64)iVar29;
      trapWord(5,uVar20 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)(lVar26 + param_2)) {
        lVar13 = (lVar26 + param_2) - param_2;
        iVar19 = *(int *)(param_1 + 0x20);
        do {
          iVar16 = 0;
          if (0 < iVar19) {
            puVar8 = (unsigned char *)(*(int *)(param_1 + 0x40) + -1);
            do {
              puVar8 = puVar8 + 1;
              iVar16 = iVar16 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar19 = *(int *)(param_1 + 0x20);
            } while (iVar16 < iVar19);
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar12 = (__int64)iVar29 * (__int64)(int)uVar1 + lVar12;
    }
    if ((int)(lVar26 + param_2) < (int)uVar22) {
      lVar13 = uVar22 - (lVar26 + param_2);
      iVar29 = *(int *)(param_1 + 0x20);
      do {
        uVar15 = (unsigned int)lVar12 & 0xff;
        iVar19 = 0;
        pbVar17 = (unsigned char *)(((int)(unsigned int)lVar12 >> 8) * iVar29 + *(int *)(param_1 + 0x40));
        if (0 < iVar29) {
          do {
            pbVar11 = pbVar17 + iVar29;
            iVar19 = iVar19 + 1;
            bVar2 = *pbVar17;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)(*pbVar11 * uVar15 + (unsigned int)bVar2 * (0x100 - uVar15) >> 8);
            puVar6 = puVar6 + 1;
            iVar29 = *(int *)(param_1 + 0x20);
          } while (iVar19 < iVar29);
        }
        lVar12 = lVar12 + uVar20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if ((int)uVar22 < iVar5) {
      lVar13 = param_3 - uVar22;
      iVar29 = *(int *)(param_1 + 0x20);
      pbVar17 = puVar6 + -1;
      do {
        uVar15 = (unsigned int)lVar12 & 0xff;
        iVar19 = (int)(unsigned int)lVar12 >> 8;
        pbVar11 = (unsigned char *)(iVar19 * iVar29 + *(int *)(param_1 + 0x40));
        iVar16 = 0;
        if (iVar19 < (int)(uVar18 - 1)) {
          if (0 < iVar29) {
            do {
              pbVar3 = pbVar11 + iVar29;
              iVar16 = iVar16 + 1;
              bVar2 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              pbVar17[1] = (unsigned char)(*pbVar3 * uVar15 + (unsigned int)bVar2 * (0x100 - uVar15) >> 8);
              pbVar17 = pbVar17 + 1;
              iVar29 = *(int *)(param_1 + 0x20);
            } while (iVar16 < iVar29);
          }
        }
        else if (0 < iVar29) {
          pbVar11 = pbVar11 + -1;
          do {
            pbVar11 = pbVar11 + 1;
            iVar16 = iVar16 + 1;
            pbVar17 = pbVar17 + 1;
            *pbVar17 = *pbVar11;
            iVar29 = *(int *)(param_1 + 0x20);
          } while (iVar16 < iVar29);
        }
        lVar12 = lVar12 + uVar20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
    iVar5 = (int)lVar13;
    lVar12 = (__int64)((int)uVar25 / (int)uVar18);
    if (iVar5 < (int)uVar25 / (int)uVar18) {
      lVar12 = lVar13;
    }
    lVar27 = (__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_2 & 1) != 0);
    iVar4 = (int)lVar27;
    iVar29 = *(int *)(param_1 + 0x20) * uVar18 + *(int *)(param_1 + 0x40);
    puVar6 = (unsigned char *)
             (iVar4 * iVar21 + *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) +
             *(int *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar14 = 0;
    }
    else {
      uVar15 = (((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 0x100;
      lVar14 = (__int64)((int)uVar15 >> 1) + (unsigned __int64)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    }
    lVar24 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    lVar14 = lVar24 + lVar14;
    if (lVar14 < 0) {
      uVar22 = uVar20 - lVar14;
      trapWord(6,uVar20,0);
      iVar19 = (int)uVar22 / (int)uVar1;
      lVar26 = (__int64)iVar19;
      trapWord(5,uVar20 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)(lVar27 + lVar26)) {
        lVar7 = (lVar27 + lVar26) - lVar27;
        do {
          iVar31 = 0;
          iVar16 = iVar21;
          if (0 < iVar21) {
            do {
              puVar8 = (unsigned char *)(iVar31 + iVar29);
              iVar31 = iVar31 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar14 = (__int64)iVar19 * (__int64)(int)uVar1 + lVar14;
    }
    lVar26 = lVar27 + lVar26;
    iVar19 = (int)lVar12;
    if ((int)lVar26 < iVar19) {
      lVar7 = lVar12 - lVar26;
      do {
        uVar15 = (unsigned int)lVar14 & 0x7f;
        iVar31 = 0;
        iVar16 = ((int)(unsigned int)lVar14 >> 7) * iVar21 + iVar29;
        if (0 < iVar21) {
          pbVar17 = (unsigned char *)(iVar16 + iVar21 + -1);
          iVar30 = iVar21;
          do {
            pbVar11 = (unsigned char *)(iVar16 + iVar31);
            iVar31 = iVar31 + 1;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)((int)((unsigned int)*pbVar11 * (0x80 - uVar15) + *pbVar17 * uVar15) >> 7);
            puVar6 = puVar6 + 1;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        lVar7 = lVar7 + -1;
        lVar14 = lVar14 + uVar20;
      } while (lVar7 != 0);
    }
    if (iVar19 < iVar5) {
      lVar7 = lVar13 - lVar12;
      puVar6 = puVar6 + -1;
      do {
        iVar31 = 0;
        iVar16 = iVar21;
        if (0 < iVar21) {
          do {
            puVar8 = (unsigned char *)(((int)lVar14 >> 7) * iVar21 + iVar29 + iVar31);
            iVar31 = iVar31 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar8;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        lVar7 = lVar7 + -1;
        lVar14 = lVar14 + uVar20;
      } while (lVar7 != 0);
    }
    uVar18 = *(int *)(param_1 + 0x20) * uVar18;
    puVar6 = (unsigned char *)
             ((iVar4 + ((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * iVar21 +
              *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar29 = ((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
             *(int *)(param_1 + 0x40) + uVar18;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar14 = 0;
    }
    else {
      uVar9 = (((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 0x100;
      lVar14 = (__int64)((int)uVar9 >> 1) + (unsigned __int64)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    }
    lVar24 = lVar24 + lVar14;
    if (lVar24 < 0) {
      uVar22 = uVar20 - lVar24;
      trapWord(6,uVar20,0);
      iVar16 = (int)uVar22 / (int)uVar1;
      lVar26 = lVar27 + iVar16;
      trapWord(5,uVar20 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar4 < (int)lVar26) {
        lVar27 = lVar26 - lVar27;
        do {
          iVar31 = 0;
          iVar4 = iVar21;
          if (0 < iVar21) {
            do {
              puVar8 = (unsigned char *)(iVar31 + iVar29);
              iVar31 = iVar31 + 1;
              *puVar6 = *puVar8;
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      lVar24 = (__int64)iVar16 * (__int64)(int)uVar1 + lVar24;
    }
    if ((int)lVar26 < iVar19) {
      lVar26 = lVar12 - lVar26;
      do {
        uVar1 = (unsigned int)lVar24 & 0x7f;
        iVar16 = 0;
        iVar4 = ((int)(unsigned int)lVar24 >> 7) * iVar21 + iVar29;
        if (0 < iVar21) {
          pbVar17 = (unsigned char *)(iVar4 + iVar21 + -1);
          iVar31 = iVar21;
          do {
            pbVar11 = (unsigned char *)(iVar4 + iVar16);
            iVar16 = iVar16 + 1;
            pbVar17 = pbVar17 + 1;
            *puVar6 = (char)((int)((unsigned int)*pbVar11 * (0x80 - uVar1) + *pbVar17 * uVar1) >> 7);
            puVar6 = puVar6 + 1;
            iVar31 = iVar31 + -1;
          } while (iVar31 != 0);
        }
        lVar26 = lVar26 + -1;
        lVar24 = lVar24 + uVar20;
      } while (lVar26 != 0);
    }
    if (iVar19 < iVar5) {
      lVar13 = lVar13 - lVar12;
      puVar6 = puVar6 + -1;
      do {
        iVar5 = 0;
        iVar4 = iVar21;
        if (0 < iVar21) {
          do {
            puVar8 = (unsigned char *)(((int)lVar24 >> 7) * iVar21 + iVar29 + iVar5);
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        lVar13 = lVar13 + -1;
        lVar24 = lVar24 + uVar20;
      } while (lVar13 != 0);
    }
  }
  return;
}

