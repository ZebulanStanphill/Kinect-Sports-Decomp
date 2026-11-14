typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BB1BB8();
extern int fn_82BB1BE8();
extern int fn_82BB1D38();
extern int fn_82BB53C0();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern int fn_82BD11A0();
extern int longjmp();
extern unsigned int lbl_83223EC0;
extern unsigned int lbl_83223EC4;
extern unsigned int uStack_a0;


void fn_82BD1358(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int *puVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  char cVar9;
  unsigned int uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned int *puVar14;
  int iVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned int *puVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned int *puVar21;
  int iVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned int uStack_a0;
  
  uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if ((int)*(unsigned int *)(param_1 + 0xc) < 1) {
    uVar16 = 1;
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar21 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar21 == (unsigned int *)0x0) {
    puVar21 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar21,*(unsigned int *)(*(int *)(param_1 + 8) + 0x5b0));
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar18 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar18 == (unsigned int *)0x0) {
    puVar18 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar18,*(unsigned int *)(*(int *)(param_1 + 8) + 0x5b0));
  }
  iVar22 = 0;
  lbl_83223EC0 = fn_82B7BD28(*(unsigned int *)(*(int *)(param_1 + 8) + 0x5ac),
                                   *(int *)(param_1 + 0x10) << 2);
  iVar13 = 0;
  iVar17 = *(int *)(param_1 + 0x10);
  if (0 < iVar17) {
    iVar12 = 0;
    do {
      iVar17 = iVar13;
      if (*(int *)(param_1 + 0xc) <= iVar13) {
        iVar17 = -1;
      }
      iVar13 = iVar13 + 1;
      *(int *)(iVar12 + lbl_83223EC0) = iVar17;
      iVar17 = *(int *)(param_1 + 0x10);
      iVar12 = iVar12 + 4;
    } while (iVar13 < iVar17);
  }
  uVar8 = *(unsigned int *)(param_1 + 0xc);
  uVar23 = (unsigned __int64)uVar8;
  if ((int)uVar8 < iVar17) {
    iVar17 = uVar8 << 2;
    iVar22 = 0;
    do {
      if ((int)uVar23 == *(int *)(iVar17 + lbl_83223EC4)) {
        iVar13 = *(int *)(param_1 + 4);
        iVar22 = iVar22 + 1;
        if ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 4)) {
          piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        iVar13 = *(int *)(param_1 + 4);
        if ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 4)) {
          piVar5 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar5 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        *(unsigned int *)(*piVar5 + 0xc) = *(unsigned int *)(*piVar6 + 4);
        iVar13 = *(int *)(param_1 + 4);
        if ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 4)) {
          piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        if (*(int *)(*piVar6 + 0xc) == 0) {
          uVar1 = puVar18[1];
          puVar4 = puVar18;
        }
        else {
          iVar13 = *(int *)(param_1 + 4);
          if ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 4)) {
            piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
          }
          if ((int)uVar16 <= *(int *)(*piVar6 + 0xc)) goto LAB_82bd156c;
          uVar1 = puVar21[1];
          puVar4 = puVar21;
        }
        piVar6 = (int *)fn_82BC0088(puVar4,uVar1);
        *piVar6 = (int)uVar23;
      }
LAB_82bd156c:
      uVar23 = uVar23 + 1;
      iVar17 = iVar17 + 4;
    } while ((int)uVar23 < *(int *)(param_1 + 0x10));
  }
  lVar19 = 0;
  while (uVar23 = uVar16, puVar18[1] != iVar22) {
    lVar19 = lVar19 + 1;
    while (puVar21[1] != 0) {
      uVar16 = fn_82BC7368(puVar21);
      piVar6 = (int *)fn_82BC0088(puVar18,puVar18[1]);
      *piVar6 = (int)uVar16;
      iVar17 = *(int *)(param_1 + 4);
      if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + (int)uVar16 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar16);
      }
      *(unsigned int *)(*piVar6 + 0xc) = 0;
      fn_82BD11A0(param_1,uVar16,puVar21,uVar23);
    }
    if (puVar18[1] == iVar22) break;
    uVar8 = *(unsigned int *)(param_1 + 0xc);
    uVar24 = (unsigned __int64)uVar8;
    uVar16 = uVar23 + 1;
    if ((int)uVar8 < *(int *)(param_1 + 0x10)) {
      iVar17 = uVar8 << 2;
      do {
        if ((int)uVar24 == *(int *)(iVar17 + lbl_83223EC4)) {
          iVar13 = *(int *)(param_1 + 4);
          if ((uVar24 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar13 + 4)) {
            piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar13,uVar24);
          }
          if (*(int *)(*piVar6 + 0xc) == (int)uVar23) {
            piVar6 = (int *)fn_82BC0088(puVar21,puVar21[1]);
            *piVar6 = (int)uVar24;
          }
        }
        uVar24 = uVar24 + 1;
        iVar17 = iVar17 + 4;
      } while ((int)uVar24 < *(int *)(param_1 + 0x10));
    }
  }
  iVar17 = *(int *)(param_1 + 8);
  lVar20 = 0;
  iVar22 = *(int *)(iVar17 + 0xab0);
  iVar13 = *(int *)(*(int *)(iVar17 + 0x550) + 4);
  puVar7 = (unsigned int *)fn_82BA0FD8(iVar13,*(unsigned int *)(iVar17 + 0x5b0));
  if (puVar18[1] != 0) {
    uVar16 = (unsigned __int64)uStack_a0;
    do {
      uVar8 = 0;
      if (*puVar7 != 0) {
        puVar14 = puVar7 + 1;
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = 0;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar7);
      }
      uVar23 = 0;
      if (0 < iVar13) {
        do {
          cVar9 = fn_82BB1BB8(iVar22,uVar23);
          if (cVar9 == '\0') {
            iVar17 = (int)((uVar23 & 0xffffffff) >> 5) + 2;
            puVar7[iVar17] = 1 << ((unsigned int)uVar23 & 0x1f) | puVar7[iVar17];
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < iVar13);
      }
      uVar8 = fn_82BC7368(puVar18);
      iVar17 = *(int *)(param_1 + 4);
      if (uVar8 < *(unsigned int *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + uVar8 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar8);
      }
      iVar17 = *piVar6;
      iVar15 = -1;
      iVar10 = 0;
      iVar12 = *(int *)(iVar17 + 8);
      if (0 < *(int *)(iVar17 + 4)) {
        do {
          iVar15 = iVar15 + 1;
          if (iVar15 == 7) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            iVar15 = 0;
          }
          uVar2 = *(unsigned int *)(*(int *)(iVar15 * 4 + iVar12) * 4 + lbl_83223EC0);
          if (-1 < (int)uVar2) {
            iVar11 = (uVar2 >> 5) + 2;
            puVar7[iVar11] = 1 << (uVar2 & 0x1f) | puVar7[iVar11];
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar17 + 4));
      }
      iVar17 = *(int *)(param_1 + 4);
      bVar3 = false;
      if (uVar8 < *(unsigned int *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + uVar8 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar8);
      }
      uVar23 = 0;
      iVar17 = *(int *)(*(int *)(*piVar6 + 0x10) + 4);
      if (0 < iVar17) {
        iVar12 = 0;
        do {
          iVar10 = *(int *)(param_1 + 4);
          if (uVar8 < *(unsigned int *)(iVar10 + 4)) {
            piVar6 = (int *)(*(int *)(iVar10 + 8) + uVar8 * 4);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar10,uVar8);
          }
          iVar10 = *(int *)(*piVar6 + 0x10);
          if ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar10 + 4)) {
            puVar4 = (unsigned int *)(*(int *)(iVar10 + 8) + iVar12);
          }
          else {
            puVar4 = (unsigned int *)fn_82BC0088(iVar10,uVar23);
          }
          uVar2 = *(unsigned int *)(*(int *)*puVar4 * 4 + lbl_83223EC0);
          if ((-1 < (int)uVar2) && ((puVar7[(uVar2 >> 5) + 2] >> (uVar2 & 0x1f) & 1) == 0)) {
            bVar3 = true;
            lVar20 = lVar20 + 1;
            uVar16 = (unsigned __int64)uVar2;
            break;
          }
          uVar23 = uVar23 + 1;
          iVar12 = iVar12 + 4;
        } while ((int)uVar23 < iVar17);
      }
      if ((!bVar3) && (uVar16 = fn_82BB53C0(puVar7), (int)uVar16 == -1)) {
        iVar17 = *(int *)(param_1 + 8);
        *(unsigned int *)(iVar17 + 0x554) = 0x16;
                    /* WARNING: Subroutine does not return */
        longjmp(iVar17 + 0x10,1);
      }
      *(int *)(uVar8 * 4 + lbl_83223EC0) = (int)uVar16;
      fn_82BB1BE8(iVar22,uVar16);
    } while (puVar18[1] != 0);
  }
  if (puVar7 != (unsigned int *)0x0) {
    fn_82B7BEB0(puVar7[-1],puVar7 + -1);
  }
  fn_82BB1D38(iVar22);
  fn_82BA02A8(*(unsigned int *)(param_1 + 8),0xffffffff820e82e8,
               ((unsigned __int64)*(unsigned int *)(iVar22 + 0x820) - (unsigned __int64)*(unsigned int *)(param_1 + 0xc)) + 1);
  if (0 < (int)lVar20) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 8),0xffffffff820e82a4,lVar20);
  }
  fn_82BA02A8(*(unsigned int *)(param_1 + 8),0xffffffff820e8260,lVar19);
  iVar17 = *(int *)(param_1 + 0xc);
  if (iVar17 < *(int *)(param_1 + 0x10)) {
    iVar22 = iVar17 << 2;
    do {
      iVar17 = iVar17 + 1;
      *(unsigned int *)(iVar22 + lbl_83223EC0) =
           *(unsigned int *)(*(int *)(iVar22 + lbl_83223EC4) * 4 + lbl_83223EC0);
      iVar22 = iVar22 + 4;
    } while (iVar17 < *(int *)(param_1 + 0x10));
  }
  return;
}

