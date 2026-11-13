typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D2DA50(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar16;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned int *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  unsigned __int64 uVar23;
  unsigned int uVar24;
  bool bVar25;
  bool bVar26;
  
  piVar22 = (int *)(param_1 + 0x40);
  do {
    iVar8 = *(int *)(param_1 + 0x44) * 8 + *piVar22;
    uVar13 = *(unsigned int *)(iVar8 + -4);
    uVar23 = (unsigned __int64)uVar13;
    uVar1 = *(unsigned int *)(iVar8 + -8);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    iVar8 = (int)((uVar23 + 5 & 0x3fffffff) << 2);
    uVar24 = *(unsigned int *)(iVar8 + uVar1);
    if ((uVar24 & 0xfffffffc) != 0) {
      uVar10 = uVar23 + 1;
      iVar5 = (int)((uVar23 + 2 & 0xffffffff) << 2);
      iVar2 = *(int *)(iVar5 + uVar1);
      iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) + uVar1);
      iVar21 = *(int *)(iVar7 + 8);
      if ((*(int *)(iVar2 + 8) < iVar21) ||
         ((*(int *)(iVar2 + 8) <= iVar21 &&
          ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
           (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
        bVar25 = true;
      }
      else {
        bVar25 = false;
      }
      uVar16 = uVar13;
      uVar12 = uVar1;
      if (!bVar25) {
        uVar16 = uVar24 & 3;
        uVar12 = uVar24 & 0xfffffffc;
      }
      if (((unsigned int)(*(unsigned short *)(uVar12 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) == 0) {
        iVar21 = 2;
        if ((uVar24 & 3) != 0) {
          iVar21 = (uVar24 & 3) - 1;
        }
        lVar14 = 2;
        if (uVar23 != 0) {
          lVar14 = uVar23 - 1;
        }
        iVar7 = *(int *)((iVar21 + 2) * 4 + (uVar24 & 0xfffffffc));
        iVar18 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
        iVar3 = *(int *)((int)(((-(unsigned __int64)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) + uVar1
                        );
        iVar21 = *(int *)(iVar7 + 0xc);
        iVar7 = *(int *)(iVar7 + 8);
        iVar19 = *(int *)(iVar2 + 0xc) - iVar21;
        iVar9 = *(int *)(iVar2 + 8) - iVar7;
        iVar20 = *(int *)(iVar18 + 8) - iVar7;
        iVar18 = *(int *)(iVar18 + 0xc) - iVar21;
        iVar21 = *(int *)(iVar3 + 0xc) - iVar21;
        iVar7 = *(int *)(iVar3 + 8) - iVar7;
        if (-((__int64)(iVar20 * iVar20 + iVar18 * iVar18) *
              (__int64)(iVar9 * iVar21 - iVar19 * iVar7) +
              (__int64)(iVar9 * iVar9 + iVar19 * iVar19) *
              (__int64)(iVar18 * iVar7 - iVar20 * iVar21) +
             (__int64)(iVar20 * iVar19 - iVar18 * iVar9) *
             (__int64)(iVar7 * iVar7 + iVar21 * iVar21)) < 0) {
          iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar23 != 2) & uVar10) + 2 & 0xffffffff) << 2) +
                          uVar1);
          iVar21 = *(int *)(iVar7 + 8);
          if ((*(int *)(iVar2 + 8) < iVar21) ||
             ((*(int *)(iVar2 + 8) <= iVar21 &&
              ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
               (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
            bVar25 = true;
          }
          else {
            bVar25 = false;
          }
          uVar16 = uVar13;
          uVar12 = uVar1;
          if (!bVar25) {
            uVar16 = uVar24 & 3;
            uVar12 = uVar24 & 0xfffffffc;
          }
          if (((unsigned int)(*(unsigned short *)(uVar12 + 0x20) >> 0xd) & 1 << (uVar16 & 0x3f)) == 0) {
            lVar14 = 2;
            if (uVar23 != 0) {
              lVar14 = uVar23 - 1;
            }
            iVar21 = 2;
            if ((uVar24 & 3) != 0) {
              iVar21 = (uVar24 & 3) - 1;
            }
            iVar7 = *(int *)((iVar21 + 2) * 4 + (uVar24 & 0xfffffffc));
            iVar18 = *(int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
            iVar21 = *(int *)(iVar7 + 0xc);
            if ((0 < (__int64)(*(int *)(iVar2 + 8) - *(int *)(iVar18 + 8)) *
                     (__int64)(iVar21 - *(int *)(iVar18 + 0xc)) -
                     (__int64)(*(int *)(iVar2 + 0xc) - *(int *)(iVar18 + 0xc)) *
                     (__int64)(*(int *)(iVar7 + 8) - *(int *)(iVar18 + 8))) &&
               (iVar2 = *(int *)(((uVar24 & 3) + 2) * 4 + (uVar24 & 0xfffffffc)),
               0 < (__int64)(*(int *)(iVar2 + 8) - *(int *)(iVar7 + 8)) *
                   (__int64)(*(int *)(iVar18 + 0xc) - iVar21) -
                   (__int64)(*(int *)(iVar2 + 0xc) - iVar21) *
                   (__int64)(*(int *)(iVar18 + 8) - *(int *)(iVar7 + 8)))) {
              uVar10 = 2;
              if (uVar23 != 0) {
                uVar10 = uVar23 - 1;
              }
              iVar2 = *(int *)((int)((uVar10 + 2 & 0xffffffff) << 2) + uVar1);
              iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar1);
              iVar21 = *(int *)(iVar7 + 8);
              if ((*(int *)(iVar2 + 8) < iVar21) ||
                 ((*(int *)(iVar2 + 8) <= iVar21 &&
                  ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                   (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                bVar25 = true;
              }
              else {
                bVar25 = false;
              }
              if ((bVar25) ||
                 (bVar25 = false,
                 (*(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                bVar25 = true;
              }
              uVar6 = uVar10;
              uVar24 = uVar1;
              if (!bVar25) {
                uVar24 = *(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1);
                uVar6 = (unsigned __int64)uVar24 & 3;
                uVar24 = uVar24 & 0xfffffffc;
              }
              bVar25 = ((unsigned int)(*(unsigned short *)(uVar24 + 0x20) >> 0xd) & 1 << ((unsigned int)uVar6 & 0x3f)) != 0;
              uVar6 = (unsigned __int64)bVar25;
              if (uVar6 != 0) {
                iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff)
                                      << 2) + uVar1);
                iVar21 = *(int *)(iVar7 + 8);
                if ((*(int *)(iVar2 + 8) < iVar21) ||
                   ((*(int *)(iVar2 + 8) <= iVar21 &&
                    ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                     (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                  bVar26 = true;
                }
                else {
                  bVar26 = false;
                }
                if ((bVar26) ||
                   (bVar26 = false,
                   (*(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                  bVar26 = true;
                }
                uVar24 = uVar1;
                if (!bVar26) {
                  uVar24 = *(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar1);
                  uVar10 = (unsigned __int64)uVar24 & 3;
                  uVar24 = uVar24 & 0xfffffffc;
                }
                *(unsigned short *)(uVar24 + 0x20) =
                     ((unsigned short)((~(unsigned __int64)(unsigned int)(1 << ((unsigned int)uVar10 & 0x3f)) & 0xffffffff) << 0xd)
                     | 0x1fff) & *(unsigned short *)(uVar24 + 0x20);
              }
              uVar24 = *(unsigned int *)(iVar8 + uVar1);
              uVar10 = 2;
              uVar16 = uVar24 & 0xfffffffc;
              if ((uVar24 & 3) != 0) {
                uVar10 = ((unsigned __int64)uVar24 & 3) - 1;
              }
              iVar2 = *(int *)((int)((uVar10 + 2 & 0xffffffff) << 2) + uVar16);
              iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar16);
              iVar21 = *(int *)(iVar7 + 8);
              if ((*(int *)(iVar2 + 8) < iVar21) ||
                 ((*(int *)(iVar2 + 8) <= iVar21 &&
                  ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                   (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                bVar26 = true;
              }
              else {
                bVar26 = false;
              }
              if ((bVar26) ||
                 (bVar26 = false,
                 (*(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16) & 0xfffffffc) == 0)) {
                bVar26 = true;
              }
              uVar15 = uVar10;
              uVar24 = uVar16;
              if (!bVar26) {
                uVar24 = *(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16);
                uVar15 = (unsigned __int64)uVar24 & 3;
                uVar24 = uVar24 & 0xfffffffc;
              }
              bVar26 = ((unsigned int)(*(unsigned short *)(uVar24 + 0x20) >> 0xd) & 1 << ((unsigned int)uVar15 & 0x3f)) != 0
              ;
              if (bVar26) {
                iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar10 != 2) & uVar10 + 1) + 2 & 0xffffffff)
                                      << 2) + uVar16);
                iVar21 = *(int *)(iVar7 + 8);
                if ((*(int *)(iVar2 + 8) < iVar21) ||
                   ((*(int *)(iVar2 + 8) <= iVar21 &&
                    ((iVar21 = *(int *)(iVar7 + 0xc), *(int *)(iVar2 + 0xc) < iVar21 ||
                     (*(int *)(iVar2 + 0xc) <= iVar21)))))) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar4) ||
                   (bVar4 = false,
                   (*(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16) & 0xfffffffc) == 0)) {
                  bVar4 = true;
                }
                if (!bVar4) {
                  uVar16 = *(unsigned int *)((int)((uVar10 + 5 & 0xffffffff) << 2) + uVar16);
                  uVar10 = (unsigned __int64)uVar16 & 3;
                  uVar16 = uVar16 & 0xfffffffc;
                }
                *(unsigned short *)(uVar16 + 0x20) =
                     ((unsigned short)((~(unsigned __int64)(unsigned int)(1 << ((unsigned int)uVar10 & 0x3f)) & 0xffffffff) << 0xd)
                     | 0x1fff) & *(unsigned short *)(uVar16 + 0x20);
              }
              uVar24 = *(unsigned int *)(iVar8 + uVar1);
              lVar14 = 2;
              uVar16 = uVar24 & 0xfffffffc;
              if (uVar23 != 0) {
                lVar14 = uVar23 - 1;
              }
              lVar11 = 2;
              if ((uVar24 & 3) != 0) {
                lVar11 = ((unsigned __int64)uVar24 & 3) - 1;
              }
              iVar2 = (int)((unsigned __int64)uVar24 & 3);
              iVar21 = (int)((lVar14 + 5U & 0xffffffff) << 2);
              *(unsigned int *)(iVar5 + uVar1) =
                   *(unsigned int *)((int)((lVar11 + 2U & 0xffffffff) << 2) + uVar16);
              *(unsigned int *)((iVar2 + 2) * 4 + uVar16) =
                   *(unsigned int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar1);
              uVar24 = *(unsigned int *)(iVar21 + uVar1);
              uVar12 = uVar24 & 0xfffffffc;
              uVar24 = uVar24 & 3;
              *(unsigned int *)((iVar2 + 5) * 4 + uVar16) = uVar24 + uVar12;
              if (uVar12 != 0) {
                *(unsigned int *)((uVar24 + 5) * 4 + uVar12) = iVar2 + uVar16;
              }
              iVar2 = (int)((lVar11 + 5U & 0xffffffff) << 2);
              uVar24 = *(unsigned int *)(iVar2 + uVar16);
              uVar12 = uVar24 & 0xfffffffc;
              uVar24 = uVar24 & 3;
              *(unsigned int *)(iVar8 + uVar1) = uVar24 + uVar12;
              if (uVar12 != 0) {
                *(unsigned int *)((uVar24 + 5) * 4 + uVar12) = uVar13 + uVar1;
              }
              *(unsigned int *)(iVar21 + uVar1) = (int)lVar11 + uVar16;
              if (uVar16 != 0) {
                *(unsigned int *)(iVar2 + uVar16) = (int)lVar14 + uVar1;
              }
              lVar11 = 2;
              if (uVar23 != 0) {
                lVar11 = uVar23 - 1;
              }
              if (bVar25) {
                uVar13 = *(unsigned int *)((int)((lVar11 + 5U & 0xffffffff) << 2) + uVar1);
                uVar23 = (unsigned __int64)uVar13 & 3;
                uVar13 = uVar13 & 0xfffffffc;
                uVar23 = -(unsigned __int64)(uVar23 != 2) & uVar23 + 1;
                lVar14 = (uVar23 + 2) * 4;
                uVar6 = (-(unsigned __int64)(uVar23 != 2) & uVar23 + 1) + 2;
                iVar2 = *(int *)((int)lVar14 + uVar13);
                iVar7 = *(int *)((int)uVar6 * 4 + uVar13);
                iVar8 = *(int *)(iVar2 + 8);
                iVar21 = *(int *)(iVar7 + 8);
                if ((iVar8 < iVar21) ||
                   ((iVar8 <= iVar21 &&
                    ((iVar8 = *(int *)(iVar2 + 0xc), iVar21 = *(int *)(iVar7 + 0xc), iVar8 < iVar21
                     || (iVar8 <= iVar21)))))) {
                  bVar25 = true;
                }
                else {
                  bVar25 = false;
                }
                if ((bVar25) ||
                   (bVar25 = false, (*(unsigned int *)(((int)uVar23 + 5) * 4 + uVar13) & 0xfffffffc) == 0))
                {
                  bVar25 = true;
                }
                if (!bVar25) {
                  uVar13 = *(unsigned int *)(((int)uVar23 + 5) * 4 + uVar13);
                  uVar23 = (unsigned __int64)uVar13 & 3;
                  uVar13 = uVar13 & 0xfffffffc;
                }
                *(unsigned short *)(uVar13 + 0x20) =
                     *(unsigned short *)(uVar13 + 0x20) & 0x1fff |
                     (unsigned short)((1 << (int)uVar23) << 0xd) | *(unsigned short *)(uVar13 + 0x20) & 0xe000;
              }
              if (bVar26) {
                uVar23 = -(unsigned __int64)(lVar11 != 2) & lVar11 + 1U;
                lVar14 = -(uVar23 - 2);
                uVar6 = uVar23 + 2;
                iVar2 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + uVar1);
                iVar7 = *(int *)((int)(((-(unsigned __int64)(uVar23 - 2 != 0) & uVar23 + 1) + 2 &
                                       0xffffffff) << 2) + uVar1);
                iVar8 = *(int *)(iVar2 + 8);
                iVar21 = *(int *)(iVar7 + 8);
                if ((iVar8 < iVar21) ||
                   ((iVar8 <= iVar21 &&
                    ((iVar8 = *(int *)(iVar2 + 0xc), iVar21 = *(int *)(iVar7 + 0xc), iVar8 < iVar21
                     || (iVar8 <= iVar21)))))) {
                  bVar25 = true;
                }
                else {
                  bVar25 = false;
                }
                if ((bVar25) ||
                   (bVar25 = false,
                   (*(unsigned int *)((int)((uVar23 + 5 & 0xffffffff) << 2) + uVar1) & 0xfffffffc) == 0)) {
                  bVar25 = true;
                }
                uVar13 = uVar1;
                if (!bVar25) {
                  uVar13 = *(unsigned int *)((int)((uVar23 + 5 & 0xffffffff) << 2) + uVar1);
                  uVar23 = (unsigned __int64)uVar13 & 3;
                  uVar13 = uVar13 & 0xfffffffc;
                }
                *(unsigned short *)(uVar13 + 0x20) =
                     *(unsigned short *)(uVar13 + 0x20) & 0x1fff |
                     (unsigned short)((1 << ((unsigned int)uVar23 & 0x3f)) << 0xd) |
                     *(unsigned short *)(uVar13 + 0x20) & 0xe000;
              }
              iVar8 = fn_82CE5410(uVar6,bVar26,lVar14);
              if (*(unsigned int *)(param_1 + 0x44) == (*(unsigned int *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),piVar22,8);
              }
              puVar17 = (unsigned int *)(*(int *)(param_1 + 0x44) * 8 + *piVar22);
              if (puVar17 != (unsigned int *)0x0) {
                *puVar17 = uVar1;
                puVar17[1] = -(unsigned int)(lVar11 != 2) & (int)lVar11 + 1U;
              }
              uVar24 = 2;
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
              uVar13 = *(unsigned int *)((int)((lVar11 + 5U & 0xffffffff) << 2) + uVar1);
              if ((uVar13 & 3) != 0) {
                uVar24 = (uVar13 & 3) - 1;
              }
              iVar8 = fn_82CE5410();
              if (*(unsigned int *)(param_1 + 0x44) == (*(unsigned int *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),piVar22,8);
              }
              puVar17 = (unsigned int *)(*(int *)(param_1 + 0x44) * 8 + *piVar22);
              if (puVar17 != (unsigned int *)0x0) {
                *puVar17 = uVar13 & 0xfffffffc;
                puVar17[1] = uVar24;
              }
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x44) < 1) {
      return;
    }
  } while( true );
}

