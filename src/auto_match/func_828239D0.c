typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82823728();
extern int fn_82823848();
extern int fn_82825030();
extern int fn_82825230();


unsigned __int64 fn_828239D0(int *param_1,unsigned __int64 param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  int iVar17;
  int iVar18;
  __int64 lVar19;
  int iVar20;
  __int64 lVar21;
  unsigned int uVar22;
  __int64 lVar23;
  __int64 lVar24;
  char *pcVar25;
  __int64 lVar26;
  
  iVar3 = *param_4;
  lVar19 = 0;
  *(unsigned int *)*param_1 = 0;
  lVar14 = 0;
  lVar16 = 0;
  pcVar25 = (char *)(*param_4 + param_3);
  uVar10 = *(unsigned int *)(*param_1 + 8);
  lVar15 = 0;
  lVar23 = 0;
  if (0 < (int)uVar10) {
    do {
      lVar19 = lVar14 + lVar19;
      iVar7 = 0;
      if ((int)lVar19 < (int)uVar10) {
        lVar21 = lVar23 + lVar19;
        lVar24 = lVar19;
        do {
          lVar14 = fn_82825030(param_2,param_1[2],param_1[3],
                                     (unsigned __int64)(unsigned int)param_1[4] + lVar19,(unsigned __int64)uVar10 - lVar19
                                     ,0,param_1[3],param_1[8]);
          iVar20 = (int)lVar14;
          iVar17 = (int)lVar19;
          iVar18 = (int)lVar23;
          if ((int)lVar24 < iVar20 + iVar17) {
            do {
              iVar11 = (int)lVar24;
              if ((iVar11 + iVar18 < param_1[3]) &&
                 (*(char *)(param_1[2] + iVar11 + iVar18) == *(char *)(param_1[4] + iVar11))) {
                iVar7 = iVar7 + 1;
              }
              lVar24 = lVar24 + 1;
            } while ((int)lVar24 < iVar20 + iVar17);
          }
          if (((iVar20 == iVar7) && (iVar20 != 0)) || (iVar7 + 8 < iVar20)) break;
          if (((int)lVar21 < param_1[3]) &&
             (*(char *)(param_1[2] + iVar18 + iVar17) == *(char *)(param_1[4] + iVar17))) {
            iVar7 = iVar7 + -1;
          }
          lVar19 = lVar19 + 1;
          lVar21 = lVar21 + 1;
          uVar10 = *(unsigned int *)(*param_1 + 8);
        } while ((int)lVar19 < (int)uVar10);
      }
      iVar20 = (int)lVar19;
      if (((int)lVar14 != iVar7) || (lVar24 = lVar16, iVar20 == *(int *)(*param_1 + 8))) {
        lVar23 = 0;
        lVar24 = 0;
        iVar17 = (int)lVar16;
        iVar7 = (int)lVar15;
        if (iVar17 < iVar20) {
          iVar18 = 0;
          iVar11 = 0;
          do {
            iVar6 = (int)lVar24;
            if (param_1[3] <= iVar7 + iVar6) break;
            if (*(char *)(param_1[2] + iVar6 + iVar7) == *(char *)(param_1[4] + iVar6 + iVar17)) {
              iVar11 = iVar11 + 2;
            }
            lVar24 = lVar24 + 1;
            if (iVar18 - (int)lVar23 < iVar11 - (int)lVar24) {
              lVar23 = lVar24;
              iVar18 = iVar11;
            }
          } while ((int)lVar24 + iVar17 < iVar20);
        }
        lVar21 = 0;
        if ((iVar20 < *(int *)(*param_1 + 8)) && (lVar24 = 1, iVar17 + 1 <= iVar20)) {
          iVar11 = 0;
          iVar18 = 0;
          do {
            iVar6 = (int)lVar24;
            if (0 < iVar6) break;
            if (*(char *)(param_1[2] - iVar6) == *(char *)((param_1[4] - iVar6) + iVar20)) {
              iVar11 = iVar11 + 2;
            }
            if (iVar18 - (int)lVar21 < iVar11 - iVar6) {
              lVar21 = lVar24;
              iVar18 = iVar11;
            }
            lVar24 = lVar24 + 1;
          } while ((int)lVar24 + iVar17 <= iVar20);
        }
        iVar11 = (int)lVar21;
        iVar18 = (int)lVar23;
        if (iVar20 - iVar11 < iVar18 + iVar17) {
          iVar8 = 0;
          iVar6 = 0;
          lVar13 = (lVar21 - lVar19) + lVar23 + lVar16;
          lVar24 = 0;
          lVar12 = 0;
          if (0 < lVar13) {
            lVar26 = lVar13;
            do {
              iVar4 = (int)lVar12;
              if (*(char *)((param_1[4] - (int)lVar13) + iVar4 + iVar18 + iVar17) ==
                  *(char *)((param_1[2] - (int)lVar13) + iVar4 + iVar18 + iVar7)) {
                iVar8 = iVar8 + 1;
              }
              if (*(char *)((param_1[4] - iVar11) + iVar4 + iVar20) ==
                  *(char *)((param_1[2] - iVar11) + iVar4)) {
                iVar8 = iVar8 + -1;
              }
              if (iVar6 < iVar8) {
                lVar24 = lVar12 + 1;
                iVar6 = iVar8;
              }
              lVar12 = lVar12 + 1;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
          lVar21 = lVar21 - lVar24;
          lVar23 = (lVar24 - lVar13) + lVar23;
        }
        uVar22 = 0;
        uVar10 = 0;
        iVar11 = 0;
        iVar18 = (int)lVar23;
        if (0 < iVar18) {
          do {
            cVar1 = *(char *)(param_1[2] + iVar11 + iVar7);
            cVar2 = *(char *)(param_1[4] + iVar11 + iVar17);
            if (cVar2 == cVar1) {
              if ((uVar22 == 0) && (0 < (int)uVar10)) {
                iVar6 = fn_82823848(pcVar25,param_1,1,uVar10,param_4);
                if (iVar6 != 0) goto LAB_82823f3c;
                uVar10 = 0;
              }
              uVar22 = uVar22 + 1;
              *(char *)(*(int *)(*param_1 + 4) + param_1[5] + uVar10) = cVar1;
            }
            else {
              if (0 < (int)uVar22) {
                if (5 < uVar22) {
                  iVar6 = fn_82823848(pcVar25,param_1,0,uVar22,param_4);
                  if (iVar6 != 0) goto LAB_82823f3c;
                  uVar10 = 0;
                }
                uVar22 = 0;
              }
              *(char *)(*(int *)(*param_1 + 4) + param_1[5] + uVar10) = cVar2;
            }
            iVar11 = iVar11 + 1;
            uVar10 = uVar10 + 1;
          } while (iVar11 < iVar18);
          if (uVar22 < 6) {
            if ((int)uVar10 < 1) goto LAB_82823e00;
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
            uVar10 = uVar22;
          }
          iVar7 = fn_82823848(pcVar25,param_1,uVar9,uVar10,param_4);
          if (iVar7 != 0) goto LAB_82823f3c;
        }
LAB_82823e00:
        lVar24 = lVar19 - lVar21;
        iVar7 = 0;
        lVar16 = (lVar24 - lVar23) - lVar16;
        lVar12 = lVar16;
        if (0 < lVar16) {
          do {
            *(unsigned char *)(*(int *)(*param_1 + 4) + param_1[5] + iVar7) =
                 *(unsigned char *)(param_1[4] + iVar7 + iVar18 + iVar17);
            iVar7 = iVar7 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          if ((0 < (int)lVar16) &&
             (iVar7 = fn_82823848(pcVar25,param_1,2,lVar16,param_4), iVar7 != 0))
          goto LAB_82823f3c;
        }
        lVar15 = (-lVar23 - lVar21) - lVar15;
        if ((lVar15 != 0) && (iVar7 = fn_82823848(pcVar25,param_1,3,lVar15,param_4), iVar7 != 0))
        goto LAB_82823f3c;
        lVar15 = -lVar21;
        lVar23 = -lVar19;
      }
      uVar10 = *(unsigned int *)(*param_1 + 8);
      lVar16 = lVar24;
    } while (iVar20 < (int)uVar10);
  }
  iVar7 = fn_82823728(pcVar25,param_1,0,param_4);
  if (iVar7 == 0) {
    bVar5 = true;
    iVar7 = 0;
    if (0 < *(int *)*param_1) {
      do {
        if ((*pcVar25 == '\x02') || (*pcVar25 == '\x01')) {
          bVar5 = false;
        }
        fn_82825230(*(unsigned int *)(pcVar25 + 1),pcVar25 + 1);
        iVar7 = iVar7 + 1;
        pcVar25 = pcVar25 + 5;
      } while (iVar7 < *(int *)*param_1);
    }
    if (bVar5) {
      *param_4 = iVar3;
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
  }
  else {
LAB_82823f3c:
    uVar9 = 2;
  }
  return uVar9;
}

