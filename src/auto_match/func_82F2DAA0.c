void fn_82F2DAA0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  unsigned char *puVar8;
  int iVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar10;
  unsigned char *puVar11;
  unsigned int uVar14;
  __int64 lVar12;
  __int64 lVar13;
  int iVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  int iVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  int iVar25;
  __int64 lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  iVar29 = (int)param_3;
  uVar19 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar19 != 0) && (uVar2 = *(unsigned int *)(param_1 + 100), uVar2 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) &&
     (uVar18 = *(unsigned int *)(param_1 + 0x60), uVar18 != 0)) {
    uVar3 = *(unsigned int *)(param_1 + 0x5c);
    uVar14 = (uVar19 - 1) * uVar2;
    iVar25 = ((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0);
    trapWord(6,(unsigned __int64)uVar19,0);
    iVar6 = (int)(((unsigned __int64)uVar19 & 0xffffff) << 8) / (int)uVar2;
    uVar23 = (unsigned __int64)iVar6;
    trapWord(6,(unsigned __int64)uVar2,0);
    trapWord(5,(unsigned __int64)uVar2 &
               ~((((unsigned __int64)uVar19 & 0x7fffff) << 9 | ((unsigned __int64)uVar19 & 0xffffff) >> 0x17) - 1)
             ,0xffff);
    trapWord(5,(unsigned __int64)uVar19 &
               ~((((unsigned __int64)uVar14 & 0x7fffffff) << 1 | (unsigned __int64)(uVar14 >> 0x1f)) - 1),0xffff);
    uVar7 = (__int64)((int)uVar14 / (int)uVar19);
    if (iVar29 < (int)uVar14 / (int)uVar19) {
      uVar7 = param_3;
    }
    if (0 < iVar6) {
      iVar5 = (int)param_2;
      puVar8 = (unsigned char *)(uVar18 * iVar5 + *(int *)(param_1 + 0x7c));
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar14 = iVar6 - 0x100;
        lVar12 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      }
      uVar22 = (__int64)iVar6 * (__int64)iVar5;
      lVar12 = uVar22 + lVar12;
      lVar24 = 0;
      if (lVar12 < 0) {
        uVar10 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        iVar27 = (int)uVar10 / iVar6;
        lVar24 = (__int64)iVar27;
        trapWord(5,uVar23 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (iVar5 < (int)(lVar24 + param_2)) {
          lVar13 = (lVar24 + param_2) - param_2;
          do {
            iVar15 = 0;
            if (0 < (int)uVar18) {
              puVar11 = (unsigned char *)(*(int *)(param_1 + 0x84) + -1);
              do {
                puVar11 = puVar11 + 1;
                iVar15 = iVar15 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                uVar18 = *(unsigned int *)(param_1 + 0x60);
              } while (iVar15 < (int)uVar18);
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        lVar12 = (__int64)iVar27 * (__int64)iVar6 + lVar12;
      }
      iVar27 = (int)uVar7;
      if ((int)(lVar24 + param_2) < iVar27) {
        lVar13 = uVar7 - (lVar24 + param_2);
        do {
          uVar14 = (unsigned int)lVar12 & 0xff;
          iVar15 = 0;
          pbVar16 = (unsigned char *)(((int)(unsigned int)lVar12 >> 8) * uVar18 + *(int *)(param_1 + 0x84));
          if (0 < (int)uVar18) {
            do {
              pbVar17 = pbVar16 + uVar18;
              iVar15 = iVar15 + 1;
              bVar1 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)(*pbVar17 * uVar14 + (unsigned int)bVar1 * (0x100 - uVar14) >> 8);
              puVar8 = puVar8 + 1;
              uVar18 = *(unsigned int *)(param_1 + 0x60);
            } while (iVar15 < (int)uVar18);
          }
          lVar12 = lVar12 + uVar23;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (iVar27 < iVar29) {
        lVar13 = param_3 - uVar7;
        pbVar16 = puVar8 + -1;
        do {
          uVar14 = (unsigned int)lVar12 & 0xff;
          iVar15 = (int)(unsigned int)lVar12 >> 8;
          pbVar17 = (unsigned char *)(iVar15 * uVar18 + *(int *)(param_1 + 0x84));
          iVar9 = 0;
          if (iVar15 < (int)(uVar19 - 1)) {
            if (0 < (int)uVar18) {
              do {
                pbVar4 = pbVar17 + uVar18;
                iVar9 = iVar9 + 1;
                bVar1 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                pbVar16[1] = (unsigned char)(*pbVar4 * uVar14 + (unsigned int)bVar1 * (0x100 - uVar14) >> 8);
                pbVar16 = pbVar16 + 1;
                uVar18 = *(unsigned int *)(param_1 + 0x60);
              } while (iVar9 < (int)uVar18);
            }
          }
          else if (0 < (int)uVar18) {
            pbVar17 = pbVar17 + -1;
            do {
              pbVar17 = pbVar17 + 1;
              iVar9 = iVar9 + 1;
              pbVar16 = pbVar16 + 1;
              *pbVar16 = *pbVar17;
              uVar18 = *(unsigned int *)(param_1 + 0x60);
            } while (iVar9 < (int)uVar18);
          }
          lVar12 = lVar12 + uVar23;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar15 = *(int *)(param_1 + 0x6c);
      uVar18 = iVar15 * iVar5;
      iVar9 = ((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      iVar21 = *(int *)(param_1 + 0x60) * uVar19 + *(int *)(param_1 + 0x84);
      puVar8 = (unsigned char *)
               (iVar9 * iVar25 + *(int *)(param_1 + 100) * *(int *)(param_1 + 0x60) +
               *(int *)(param_1 + 0x7c));
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar18 = iVar15 * iVar6 - 0x100;
        lVar12 = (__int64)((int)uVar18 >> 1) + (unsigned __int64)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      }
      uVar18 = iVar15 * iVar6 * iVar5;
      lVar12 = (__int64)((int)uVar18 >> 1) + (unsigned __int64)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
               lVar12;
      if (lVar12 < 0) {
        uVar7 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        iVar15 = (int)uVar7 / iVar6;
        lVar24 = (__int64)iVar15;
        trapWord(5,uVar23 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar9 < iVar9 + iVar15) {
          do {
            iVar20 = 0;
            iVar28 = iVar25;
            if (0 < iVar25) {
              do {
                puVar11 = (unsigned char *)(iVar20 + iVar21);
                iVar20 = iVar20 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            iVar9 = iVar9 + 1;
            uVar18 = *(int *)(param_1 + 0x6c) * iVar5;
          } while (iVar9 < (int)(((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
                                iVar15));
        }
        lVar12 = (__int64)iVar15 * (__int64)iVar6 + lVar12;
      }
      uVar14 = *(int *)(param_1 + 0x6c) * iVar27 - 1;
      uVar18 = *(int *)(param_1 + 0x6c) * iVar5;
      lVar26 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      lVar13 = (__int64)((int)uVar18 >> 1) + (unsigned __int64)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
               lVar24;
      iVar27 = (int)lVar26;
      if ((int)lVar13 < iVar27) {
        lVar13 = lVar26 - lVar13;
        do {
          uVar18 = (unsigned int)lVar12 & 0xff;
          iVar15 = 0;
          iVar9 = ((int)(unsigned int)lVar12 >> 8) * iVar25 + iVar21;
          if (0 < iVar25) {
            pbVar16 = (unsigned char *)(iVar9 + iVar25 + -1);
            iVar28 = iVar25;
            do {
              pbVar17 = (unsigned char *)(iVar9 + iVar15);
              iVar15 = iVar15 + 1;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)((unsigned int)*pbVar17 * (0x100 - uVar18) + *pbVar16 * uVar18 >> 8);
              puVar8 = puVar8 + 1;
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar13 != 0);
      }
      uVar18 = *(int *)(param_1 + 0x6c) * iVar29;
      if ((iVar27 < (int)(((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0))) &&
         (lVar13 = (__int64)(iVar29 >> 1) + (unsigned __int64)(iVar29 < 0 && (param_3 & 1) != 0),
         iVar27 < (int)lVar13)) {
        lVar13 = lVar13 - lVar26;
        puVar8 = puVar8 + -1;
        do {
          iVar9 = 0;
          iVar15 = iVar25;
          if (0 < iVar25) {
            do {
              puVar11 = (unsigned char *)(((int)lVar12 >> 8) * iVar25 + iVar21 + iVar9);
              iVar9 = iVar9 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar11;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar13 != 0);
      }
      iVar15 = *(int *)(param_1 + 0x6c);
      uVar18 = iVar15 * iVar5;
      puVar8 = (unsigned char *)
               ((((int)uVar18 >> 1) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
                iVar15 * (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0))) * iVar25
                + *(int *)(param_1 + 0x60) * *(int *)(param_1 + 100) + *(int *)(param_1 + 0x7c));
      iVar15 = iVar15 * (((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * iVar25 +
               *(int *)(param_1 + 0x60) * uVar19 + *(int *)(param_1 + 0x84);
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar12 = 0;
      }
      else {
        uVar19 = *(int *)(param_1 + 0x6c) * iVar6 - 0x100;
        lVar12 = (__int64)((int)uVar19 >> 1) + (unsigned __int64)((int)uVar19 < 0 && (uVar19 & 1) != 0);
      }
      lVar12 = (__int64)((int)uVar22 >> 1) + (unsigned __int64)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
               lVar12;
      if (lVar12 < 0) {
        uVar7 = uVar23 - lVar12;
        trapWord(6,uVar23,0);
        uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
        iVar21 = ((int)uVar19 >> 1) + (unsigned int)((int)uVar19 < 0 && (uVar19 & 1) != 0);
        iVar9 = (int)uVar7 / iVar6;
        lVar24 = (__int64)iVar9;
        trapWord(5,uVar23 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar21 < iVar21 + iVar9) {
          do {
            iVar20 = 0;
            iVar28 = iVar25;
            if (0 < iVar25) {
              do {
                puVar11 = (unsigned char *)(iVar20 + iVar15);
                iVar20 = iVar20 + 1;
                *puVar8 = *puVar11;
                puVar8 = puVar8 + 1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            iVar21 = iVar21 + 1;
            uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
          } while (iVar21 < (int)(((int)uVar19 >> 1) + (unsigned int)((int)uVar19 < 0 && (uVar19 & 1) != 0)
                                 + iVar9));
        }
        lVar12 = (__int64)iVar9 * (__int64)iVar6 + lVar12;
      }
      uVar19 = *(int *)(param_1 + 0x6c) * iVar5;
      lVar24 = (__int64)((int)uVar19 >> 1) + (unsigned __int64)((int)uVar19 < 0 && (uVar19 & 1) != 0) +
               lVar24;
      if ((int)lVar24 < iVar27) {
        lVar24 = lVar26 - lVar24;
        do {
          uVar19 = (unsigned int)lVar12 & 0xff;
          iVar5 = 0;
          iVar6 = ((int)(unsigned int)lVar12 >> 8) * iVar25 + iVar15;
          if (0 < iVar25) {
            pbVar16 = (unsigned char *)(iVar6 + iVar25 + -1);
            iVar9 = iVar25;
            do {
              pbVar17 = (unsigned char *)(iVar6 + iVar5);
              iVar5 = iVar5 + 1;
              pbVar16 = pbVar16 + 1;
              *puVar8 = (char)((unsigned int)*pbVar17 * (0x100 - uVar19) + *pbVar16 * uVar19 >> 8);
              puVar8 = puVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          lVar24 = lVar24 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar24 != 0);
      }
      uVar19 = *(int *)(param_1 + 0x6c) * iVar29;
      if ((iVar27 < (int)(((int)uVar19 >> 1) + (unsigned int)((int)uVar19 < 0 && (uVar19 & 1) != 0))) &&
         (lVar24 = (__int64)(iVar29 >> 1) + (unsigned __int64)(iVar29 < 0 && (param_3 & 1) != 0),
         iVar27 < (int)lVar24)) {
        lVar24 = lVar24 - lVar26;
        puVar8 = puVar8 + -1;
        do {
          iVar6 = 0;
          iVar29 = iVar25;
          if (0 < iVar25) {
            do {
              puVar11 = (unsigned char *)(((int)lVar12 >> 8) * iVar25 + iVar15 + iVar6);
              iVar6 = iVar6 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar11;
              iVar29 = iVar29 + -1;
            } while (iVar29 != 0);
          }
          lVar24 = lVar24 + -1;
          lVar12 = lVar12 + uVar23;
        } while (lVar24 != 0);
      }
    }
  }
  return;
}

