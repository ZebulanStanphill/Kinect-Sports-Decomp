extern unsigned int iStack0000002c;
extern int (*lbl_8329F140)();
extern int (*lbl_8329F150)();
extern int (*lbl_8329F154)();
extern int (*lbl_8329F158)();
extern int (*lbl_8329F15C)();


void fn_82C74D98(int param_1,unsigned __int64 param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iStack0000002c;
  
  lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec4) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec8) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
  if ((*(int *)(param_1 + 0x3e5c) == 0) || (*(int *)(param_1 + 0x4fc0) != 0)) {
    *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x268) =
         *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x268);
    uVar2 = *(unsigned int *)(param_1 + 0xe8);
    lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xef8);
    uVar3 = *(unsigned int *)(param_1 + 0xe4);
    lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xf00) + (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
    lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xefc);
    uVar4 = *(unsigned int *)(param_1 + 0xcc);
    uVar5 = *(unsigned int *)(param_1 + 0x88);
    uVar6 = *(unsigned int *)(param_1 + 0xd0);
    uVar15 = param_2;
    iStack0000002c = param_4;
    if ((param_2 & 0xffffffff) < (unsigned __int64)param_3) {
      do {
        lVar18 = lVar12;
        if (iStack0000002c == 0) {
          lVar18 = lVar13;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar14 = lVar12 - lVar18;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F150)(lVar18,lVar14 + lVar18,*(unsigned int *)(param_1 + 0xcc),uVar4);
            }
            (*lbl_8329F15C)(param_1,lVar18,uVar17,uVar15,*(unsigned int *)(param_1 + 0xf8),uVar4);
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 0x10;
          } while ((uVar17 & 0xffffffff) < (unsigned __int64)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe4) + lVar12;
        lVar13 = (unsigned __int64)uVar3 + lVar13;
      } while ((uVar15 & 0xffffffff) < (unsigned __int64)param_3);
    }
    uVar15 = param_2;
    if ((param_2 & 0xffffffff) < (unsigned __int64)param_3) {
      do {
        lVar12 = lVar10;
        if (iStack0000002c == 0) {
          lVar12 = lVar11;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar13 = lVar10 - lVar12;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F154)(lVar12,lVar13 + lVar12,*(unsigned int *)(param_1 + 0xd0),uVar6);
            }
            (*lbl_8329F158)(param_1,lVar12,uVar17,uVar15,*(unsigned int *)(param_1 + 0xf8),uVar6);
            uVar17 = uVar17 + 1;
            lVar12 = lVar12 + 8;
          } while ((uVar17 & 0xffffffff) < (unsigned __int64)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe8) + lVar10;
        lVar11 = (unsigned __int64)uVar2 + lVar11;
      } while ((uVar15 & 0xffffffff) < (unsigned __int64)param_3);
    }
    uVar15 = param_2;
    if ((param_2 & 0xffffffff) < (unsigned __int64)param_3) {
      do {
        lVar10 = lVar8;
        if (iStack0000002c == 0) {
          lVar10 = lVar9;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar12 = lVar8 - lVar10;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F154)(lVar10,lVar12 + lVar10,*(unsigned int *)(param_1 + 0xd0),uVar6);
            }
            (*lbl_8329F158)(param_1,lVar10,uVar17,uVar15,*(unsigned int *)(param_1 + 0xf8),uVar6);
            uVar17 = uVar17 + 1;
            lVar10 = lVar10 + 8;
          } while ((uVar17 & 0xffffffff) < (unsigned __int64)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe8) + lVar8;
        lVar9 = (unsigned __int64)uVar2 + lVar9;
      } while ((uVar15 & 0xffffffff) < (unsigned __int64)param_3);
    }
    if (*(int *)(param_1 + 0x3cd8) != 0) {
      lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xdc) + (unsigned __int64)*(unsigned int *)(param_1 + 0xef8);
      lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xefc);
      lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xf00);
      if ((param_2 & 0xffffffff) < (unsigned __int64)param_3) {
        do {
          uVar16 = 0;
          if (uVar5 != 0) {
            lVar9 = lVar10;
            lVar11 = lVar12;
            do {
              if ((((uVar16 != 0) && (uVar16 != *(int *)(param_1 + 0x88) - 1U)) &&
                  ((param_2 & 0xffffffff) != 0)) &&
                 ((param_2 & 0xffffffff) != (unsigned __int64)(*(int *)(param_1 + 0x8c) - 1))) {
                (*lbl_8329F140)(lVar9,lVar11,(lVar8 - lVar12) + lVar11,
                                *(unsigned int *)(param_1 + 0xf8),uVar4,uVar6,uVar6);
              }
              uVar16 = uVar16 + 1;
              lVar9 = lVar9 + 0x10;
              lVar11 = lVar11 + 8;
            } while (uVar16 < uVar5);
          }
          param_2 = param_2 + 1;
          lVar12 = (unsigned __int64)uVar2 + lVar12;
          lVar10 = (unsigned __int64)uVar3 + lVar10;
          lVar8 = (unsigned __int64)uVar2 + lVar8;
        } while ((param_2 & 0xffffffff) < (unsigned __int64)param_3);
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xeb0);
    iVar7 = *(int *)(iVar1 + 0x250) * 0x44 + iVar1;
    *(int *)(iVar1 + 0x250) = *(int *)(iVar1 + 0x250) + 1;
    *(unsigned int *)(iVar7 + 0x30) = 1;
    *(unsigned int *)(iVar7 + 0x34) = *(unsigned int *)(param_1 + 0xea0);
    *(unsigned int *)(iVar7 + 0x50) = *(unsigned int *)(param_1 + 200);
    *(unsigned int *)(iVar7 + 0x38) = *(unsigned int *)(param_1 + 0xcc);
    *(unsigned int *)(iVar7 + 0x3c) = *(unsigned int *)(param_1 + 0xd0);
    *(unsigned int *)(iVar7 + 0x40) = *(unsigned int *)(param_1 + 0xdc);
    *(unsigned int *)(iVar7 + 0x44) = *(unsigned int *)(param_1 + 0xe0);
    *(unsigned int *)(iVar7 + 0x48) = *(unsigned int *)(param_1 + 0x88);
    *(unsigned int *)(iVar7 + 0x4c) = *(unsigned int *)(param_1 + 0x8c);
    *(unsigned int *)(iVar7 + 0x54) = *(unsigned int *)(param_1 + 0xf8);
    *(unsigned int *)(iVar7 + 0x58) = *(unsigned int *)(param_1 + 0xe4);
    *(unsigned int *)(iVar7 + 0x5c) = *(unsigned int *)(param_1 + 0xe8);
    *(unsigned int *)(iVar7 + 0x60) = *(unsigned int *)(param_1 + 0x3cd8);
    *(int *)(iVar7 + 100) = (int)param_2;
    *(unsigned int *)(iVar7 + 0x68) = param_3;
  }
  return;
}

