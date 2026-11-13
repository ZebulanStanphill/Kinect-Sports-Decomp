void fn_82CD3A80(int param_1,__int64 param_2,int param_3,unsigned __int64 param_4,int param_5,
                  __int64 param_6,__int64 param_7,unsigned int param_8)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  __int64 lVar22;
  int iVar23;
  int iVar24;
  unsigned int uVar25;
  __int64 lVar26;
  
  iVar11 = (int)param_7;
  iVar4 = (int)param_2;
  iVar5 = (int)param_4;
  if (0 < iVar11) {
    iVar19 = 0;
    lVar22 = param_2 - param_6;
    lVar26 = param_7;
    iVar15 = param_3 * 2;
    iVar16 = param_3 * 6;
    do {
      uVar25 = (unsigned int)*(unsigned char *)(iVar15 + param_1) * 0x58 + (unsigned int)*(unsigned char *)(iVar16 + param_1) * -0x1d
               + (unsigned int)*(unsigned char *)(iVar19 + param_1) * 0xc5;
      iVar19 = iVar19 + param_5;
      iVar16 = iVar19 + param_3 * 6;
      iVar15 = iVar19 + param_3 * 2;
      lVar22 = lVar22 + param_6;
      *(char *)lVar22 = (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    if (0 < iVar11) {
      iVar23 = 0;
      lVar22 = (param_2 - param_6) + param_4;
      lVar26 = param_7;
      iVar15 = param_3 * 5;
      iVar16 = param_3 * 3;
      iVar19 = param_3 * 2;
      do {
        pbVar1 = (unsigned char *)(iVar19 + param_1);
        iVar23 = iVar23 + param_5;
        pbVar2 = (unsigned char *)(iVar16 + param_1);
        pbVar3 = (unsigned char *)(iVar15 + param_1);
        iVar19 = iVar23 + param_3 * 2;
        iVar16 = iVar23 + param_3 * 3;
        iVar15 = iVar23 + param_3 * 5;
        lVar22 = lVar22 + param_6;
        *(unsigned char *)lVar22 =
             (char)((int)(((unsigned int)*pbVar2 + (unsigned int)*pbVar1) * 7 + (unsigned int)*pbVar3 + (unsigned int)*pbVar1) >> 4)
        ;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      if (0 < iVar11) {
        iVar19 = 0;
        lVar22 = (param_2 - param_6) + param_4;
        lVar26 = param_7;
        iVar15 = param_3 * 8;
        iVar16 = param_3 * 4;
        do {
          iVar23 = iVar19 + param_3 * 2;
          pbVar1 = (unsigned char *)(iVar19 + param_1);
          iVar19 = iVar19 + param_5;
          uVar25 = ((unsigned int)*(unsigned char *)(iVar16 + param_1) + (unsigned int)*pbVar1) * 0x58 +
                   (unsigned int)*(unsigned char *)(iVar15 + param_1) * -0x1d + (unsigned int)*pbVar1 * -0x1d +
                   (unsigned int)*(unsigned char *)(iVar23 + param_1) * 0x8a;
          iVar16 = iVar19 + param_3 * 4;
          iVar15 = iVar19 + param_3 * 8;
          lVar22 = lVar22 + param_6;
          *(char *)lVar22 = (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        if (0 < iVar11) {
          iVar23 = 0;
          lVar26 = 0;
          lVar22 = param_7;
          iVar15 = param_3 * 7;
          iVar16 = param_3 * 5;
          iVar19 = param_3 * 3;
          do {
            pbVar1 = (unsigned char *)(iVar19 + param_1);
            iVar24 = (int)lVar26;
            pbVar2 = (unsigned char *)(iVar16 + param_1);
            iVar23 = iVar23 + param_5;
            pbVar3 = (unsigned char *)(iVar15 + param_1);
            lVar26 = lVar26 + param_6;
            iVar19 = iVar23 + param_3 * 3;
            iVar16 = iVar23 + param_3 * 5;
            iVar15 = iVar23 + param_3 * 7;
            *(char *)(iVar24 + (int)((param_4 & 0xffffffff) << 1) + iVar4) =
                 (char)((int)(((unsigned int)*pbVar2 + (unsigned int)*pbVar1) * 7 + (unsigned int)*pbVar3 + (unsigned int)*pbVar1)
                       >> 4);
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          if (0 < iVar11) {
            iVar23 = 0;
            lVar26 = 0;
            lVar22 = param_7;
            iVar15 = param_3 * 6;
            iVar16 = param_3 * 10;
            iVar19 = param_3 * 2;
            do {
              iVar24 = param_3 * 4 + iVar23;
              iVar17 = (int)lVar26;
              iVar23 = iVar23 + param_5;
              uVar25 = ((unsigned int)*(unsigned char *)(iVar15 + param_1) + (unsigned int)*(unsigned char *)(iVar19 + param_1)) *
                       0x58 + (unsigned int)*(unsigned char *)(iVar16 + param_1) * -0x1d +
                              (unsigned int)*(unsigned char *)(iVar19 + param_1) * -0x1d +
                       (unsigned int)*(unsigned char *)(iVar24 + param_1) * 0x8a;
              lVar26 = lVar26 + param_6;
              iVar19 = param_3 * 2 + iVar23;
              iVar16 = param_3 * 10 + iVar23;
              iVar15 = param_3 * 6 + iVar23;
              *(char *)((int)((param_4 & 0xffffffff) << 1) + iVar17 + iVar4) =
                   (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            if (0 < iVar11) {
              iVar23 = 0;
              lVar26 = 0;
              lVar22 = param_7;
              iVar15 = param_3 * 9;
              iVar16 = param_3 * 5;
              iVar19 = param_3 * 7;
              do {
                pbVar1 = (unsigned char *)(iVar19 + param_1);
                iVar24 = param_3 * 3 + iVar23;
                pbVar2 = (unsigned char *)(iVar16 + param_1);
                iVar17 = (int)lVar26;
                pbVar3 = (unsigned char *)(iVar15 + param_1);
                iVar23 = iVar23 + param_5;
                lVar26 = lVar26 + param_6;
                iVar19 = param_3 * 7 + iVar23;
                iVar16 = param_3 * 5 + iVar23;
                iVar15 = param_3 * 9 + iVar23;
                *(char *)(iVar5 + (int)((param_4 & 0xffffffff) << 1) + iVar17 + iVar4) =
                     (char)((int)(((unsigned int)*pbVar1 + (unsigned int)*pbVar2) * 7 + (unsigned int)*pbVar3 +
                                 (unsigned int)*(unsigned char *)(iVar24 + param_1)) >> 4);
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
          }
        }
      }
    }
  }
  iVar19 = 3;
  iVar15 = ((int)param_8 >> 1) + (unsigned int)((int)param_8 < 0 && (param_8 & 1) != 0);
  iVar16 = iVar15 + -2;
  if (3 < iVar16) {
    lVar22 = (param_4 & 0x7fffffff) << 1;
    iVar20 = param_3 * 0xc;
    iVar17 = 6;
    iVar21 = param_3 * 6;
    iVar23 = param_3 * 9;
    iVar18 = 0;
    iVar24 = param_3 << 3;
    do {
      if (0 < iVar11) {
        iVar13 = 0;
        lVar12 = 0;
        lVar26 = param_7;
        iVar14 = iVar24;
        do {
          iVar6 = iVar18 + iVar13;
          pbVar1 = (unsigned char *)(iVar14 + param_1);
          iVar9 = iVar21 + iVar13;
          iVar7 = (iVar17 + -2) * param_3 + iVar13;
          iVar8 = iVar20 + iVar13;
          iVar10 = (int)lVar12;
          iVar13 = iVar13 + param_5;
          lVar12 = lVar12 + param_6;
          iVar14 = iVar24 + iVar13;
          uVar25 = ((unsigned int)*(unsigned char *)(iVar7 + param_1) + (unsigned int)*pbVar1) * 0x58 +
                   ((unsigned int)*(unsigned char *)(iVar6 + param_1) + (unsigned int)*(unsigned char *)(iVar8 + param_1)) * -0x1d +
                   (unsigned int)*(unsigned char *)(iVar9 + param_1) * 0x8a;
          *(char *)((int)(param_4 + lVar22) + iVar10 + iVar4) =
               (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      iVar21 = iVar21 + param_3 * 4;
      iVar18 = iVar18 + param_3 * 4;
      iVar20 = iVar20 + param_3 * 4;
      iVar24 = iVar24 + param_3 * 4;
      iVar23 = iVar23 + param_3 * 2;
      lVar22 = param_4 + lVar22 + param_4;
      if (0 < iVar11) {
        lVar12 = 0;
        iVar14 = 0;
        lVar26 = param_7;
        do {
          iVar13 = (iVar17 + 3) * param_3 + iVar14;
          iVar6 = (iVar17 + 1) * param_3 + iVar14;
          iVar7 = iVar23 + iVar14;
          iVar8 = (iVar17 + -1) * param_3 + iVar14;
          iVar9 = (int)lVar12;
          iVar14 = iVar14 + param_5;
          lVar12 = lVar12 + param_6;
          *(char *)((int)lVar22 + iVar9 + iVar4) =
               (char)((int)(((unsigned int)*(unsigned char *)(iVar6 + param_1) + (unsigned int)*(unsigned char *)(iVar13 + param_1)) *
                            7 + (unsigned int)*(unsigned char *)(iVar8 + param_1) + (unsigned int)*(unsigned char *)(iVar7 + param_1))
                     >> 4);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      iVar19 = iVar19 + 2;
      iVar17 = iVar17 + 4;
      iVar23 = iVar23 + param_3 * 2;
    } while (iVar19 < iVar16);
  }
  iVar19 = iVar15 + -3;
  if (0 < iVar11) {
    iVar17 = (iVar19 * 2 + 2) * param_3;
    iVar24 = 0;
    lVar26 = 0;
    lVar22 = param_7;
    iVar23 = iVar17;
    do {
      iVar20 = (int)lVar26;
      uVar25 = ((unsigned int)*(unsigned char *)((iVar19 * 2 + -2) * param_3 + iVar24 + param_1) +
               (unsigned int)*(unsigned char *)(iVar23 + param_1)) * 0x58 +
               (unsigned int)*(unsigned char *)(iVar24 + (iVar15 + -6) * param_3 * 2 + param_1) * -0x1d +
               (unsigned int)*(unsigned char *)(iVar23 + param_1) * -0x1d +
               (unsigned int)*(unsigned char *)(iVar24 + iVar19 * param_3 * 2 + param_1) * 0x8a;
      iVar24 = iVar24 + param_5;
      lVar26 = lVar26 + param_6;
      iVar23 = iVar24 + iVar17;
      *(char *)(iVar20 + iVar19 * iVar5 + iVar4) =
           (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if (0 < iVar11) {
    iVar19 = (iVar15 + -2) * 2;
    lVar26 = 0;
    iVar23 = 0;
    lVar22 = param_7;
    do {
      iVar24 = (iVar19 + 1) * param_3 + iVar23;
      iVar17 = (iVar19 + -1) * param_3 + iVar23;
      iVar20 = iVar23 + (iVar19 + 3) * param_3;
      iVar18 = (iVar19 + -3) * param_3 + iVar23;
      iVar21 = (int)lVar26;
      iVar23 = iVar23 + param_5;
      lVar26 = lVar26 + param_6;
      *(char *)(iVar21 + (iVar15 + -2) * iVar5 + iVar4) =
           (char)((int)(((unsigned int)*(unsigned char *)(iVar17 + param_1) + (unsigned int)*(unsigned char *)(iVar24 + param_1)) * 7
                        + (unsigned int)*(unsigned char *)(iVar18 + param_1) + (unsigned int)*(unsigned char *)(iVar20 + param_1)) >>
                 4);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    if (0 < iVar11) {
      iVar24 = (iVar16 * 2 + 2) * param_3;
      iVar23 = 0;
      lVar26 = 0;
      lVar22 = param_7;
      iVar19 = iVar24;
      do {
        iVar17 = (int)lVar26;
        uVar25 = ((unsigned int)*(unsigned char *)((iVar16 * 2 + -2) * param_3 + iVar23 + param_1) +
                 (unsigned int)*(unsigned char *)(iVar19 + param_1)) * 0x58 +
                 (unsigned int)*(unsigned char *)(iVar23 + (iVar15 + -5) * param_3 * 2 + param_1) * -0x1d +
                 (unsigned int)*(unsigned char *)(iVar19 + param_1) * -0x1d +
                 (unsigned int)*(unsigned char *)(iVar23 + iVar16 * param_3 * 2 + param_1) * 0x8a;
        iVar23 = iVar23 + param_5;
        lVar26 = lVar26 + param_6;
        iVar19 = iVar23 + iVar24;
        *(char *)(iVar17 + iVar16 * iVar5 + iVar4) =
             (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  if (0 < iVar11) {
    iVar16 = (iVar15 + -1) * 2;
    lVar26 = 0;
    iVar19 = 0;
    lVar22 = param_7;
    do {
      iVar23 = (iVar16 + 1) * param_3 + iVar19;
      iVar24 = (iVar16 + -1) * param_3 + iVar19;
      iVar17 = iVar19 + (iVar16 + 3) * param_3;
      iVar20 = (iVar16 + -3) * param_3 + iVar19;
      iVar18 = (int)lVar26;
      iVar19 = iVar19 + param_5;
      lVar26 = lVar26 + param_6;
      *(char *)(iVar18 + (iVar15 + -1) * iVar5 + iVar4) =
           (char)((int)(((unsigned int)*(unsigned char *)(iVar24 + param_1) + (unsigned int)*(unsigned char *)(iVar23 + param_1)) * 7
                        + (unsigned int)*(unsigned char *)(iVar20 + param_1) + (unsigned int)*(unsigned char *)(iVar17 + param_1)) >>
                 4);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  iVar16 = iVar15 + -1;
  if (0 < iVar11) {
    iVar17 = 0;
    iVar21 = (iVar16 * 2 + -2) * param_3;
    iVar18 = (iVar15 + -4) * param_3 * 2;
    iVar20 = iVar16 * param_3 * 2;
    lVar26 = 0;
    lVar22 = param_7;
    iVar19 = iVar18;
    iVar23 = iVar20;
    iVar24 = iVar21;
    do {
      iVar14 = (int)lVar26;
      iVar17 = iVar17 + param_5;
      uVar25 = (unsigned int)*(unsigned char *)(iVar24 + param_1) * 0x58 + (unsigned int)*(unsigned char *)(iVar19 + param_1) * -0x1d
               + (unsigned int)*(unsigned char *)(iVar23 + param_1) * 0xc5;
      lVar26 = lVar26 + param_6;
      iVar19 = iVar17 + iVar18;
      iVar24 = iVar17 + iVar21;
      iVar23 = iVar17 + iVar20;
      *(char *)(iVar14 + iVar16 * iVar5 + iVar4) =
           (char)(uVar25 >> 8) + ((int)uVar25 < 0 && (uVar25 & 0xff) != 0);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if (0 < iVar11) {
    iVar11 = iVar15 * 2;
    iVar19 = 0;
    iVar23 = (iVar11 + 1) * param_3;
    lVar22 = 0;
    iVar16 = iVar23;
    do {
      pbVar1 = (unsigned char *)(iVar16 + param_1);
      iVar24 = (iVar11 + -1) * param_3 + iVar19;
      iVar17 = (iVar11 + -3) * param_3 + iVar19;
      iVar20 = (int)lVar22;
      iVar19 = iVar19 + param_5;
      lVar22 = lVar22 + param_6;
      iVar16 = iVar23 + iVar19;
      *(char *)(iVar15 * iVar5 + iVar20 + iVar4) =
           (char)((int)(((unsigned int)*(unsigned char *)(iVar24 + param_1) + (unsigned int)*pbVar1) * 7 +
                        (unsigned int)*(unsigned char *)(iVar17 + param_1) + (unsigned int)*pbVar1) >> 4);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

