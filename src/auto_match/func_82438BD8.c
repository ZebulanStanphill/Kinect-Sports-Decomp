extern int fn_82260950();
extern int fn_82260E68();
extern int fn_822ABA88();
extern int fn_82340AF0();
extern int fn_82437DA8();
extern int fn_8243BBA0();
extern int fn_8243C188();
extern int fn_8243E578();
extern int fn_82522ED8();
extern unsigned int lbl_821B9554;
extern unsigned int lbl_83276580;


void fn_82438BD8(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int *piVar10;
  unsigned __int64 uVar9;
  int *piVar11;
  unsigned int uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  __int64 lVar22;
  unsigned int uVar23;
  int iVar24;
  unsigned int uVar25;
  __int64 lVar26;
  unsigned int uVar27;
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_821B9554;
  puVar1 = *(unsigned int **)(param_1[0x10] + 0x2ac);
  puStack00000014 = param_1;
  if ((puVar1 != (unsigned int *)0x0) &&
     (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x10] + 0x1d8) + 0x174) + 0x9c) + 0x93c),
     iVar3 != 0)) {
    piVar10 = *(int **)(iVar3 + 0xc);
    piVar11 = (int *)0x0;
    while (piVar2 = piVar10, piVar2 != (int *)0x0) {
      if ((unsigned int *)*piVar2 == puVar1) {
        if (piVar11 == (int *)0x0) {
          *(int *)(iVar3 + 0xc) = piVar2[1];
        }
        else {
          piVar11[1] = piVar2[1];
        }
        fn_82522ED8();
        (**(int (***)())*puVar1)(puVar1,1);
        break;
      }
      piVar11 = piVar2;
      piVar10 = (int *)piVar2[1];
    }
    *(unsigned int *)(param_1[0x10] + 0x2ac) = 0;
  }
  piVar10 = param_1 + 0x10;
  iVar3 = *(int *)(*piVar10 + 0x1d4);
  if ((iVar3 != -1) &&
     (piVar11 = *(int **)(iVar3 * 4 + *(int *)(*piVar10 + 0x1c4)), piVar11 != (int *)0x0)) {
    if (*(char *)(piVar11[0x10] + 8) != '\0') {
      (**(int (***)())(*piVar11 + 0x14))();
    }
    *(unsigned int *)(*piVar10 + 0x1d4) = 0xffffffff;
  }
  iVar3 = *piVar10;
  piVar10 = *(int **)(iVar3 + 0x1c4);
  if ((unsigned int)(*(int *)(iVar3 + 0x1c8) - (int)piVar10 >> 2) < 2) {
    piVar10 = *(int **)(iVar3 + 0x1c4);
    if ((*(int *)(iVar3 + 0x1c8) - (int)piVar10 & 0xfffffffcU) == 4) {
      uVar6 = 0;
      iVar3 = *(int *)(*(int *)(*piVar10 + 0x40) + 0x114);
      if (iVar3 == 1) {
        uVar6 = 0;
      }
      else if (iVar3 == 2) {
        uVar6 = 1;
      }
      else if (iVar3 == 3) {
        uVar6 = 4;
      }
      else if (iVar3 == 4) {
        uVar6 = 3;
      }
      else if (iVar3 == 5) {
        uVar6 = 2;
      }
      fn_82260E68(uVar6,lbl_83276580);
    }
  }
  else {
    lVar22 = (unsigned __int64)*(unsigned int *)(piVar10[4] + 0x40) + 0x120;
    fn_8243E578(lVar22,3);
    lVar26 = (unsigned __int64)*(unsigned int *)(piVar10[3] + 0x40) + 0x120;
    fn_8243E578(lVar26,3);
    lVar7 = (unsigned __int64)*(unsigned int *)(piVar10[2] + 0x40) + 0x120;
    fn_8243E578(lVar7,3);
    lVar13 = (unsigned __int64)*(unsigned int *)(piVar10[1] + 0x40) + 0x120;
    fn_8243E578(lVar13,3);
    lVar14 = (unsigned __int64)*(unsigned int *)(*piVar10 + 0x40) + 0x120;
    fn_8243E578(lVar14,3);
    fn_8243E578(lVar22,2);
    fn_8243E578(lVar26,2);
    iVar3 = fn_8243E578(lVar7,2);
    if (iVar3 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,2);
    if (iVar3 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,2);
    if (iVar3 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar22,1);
    if (iVar3 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar26,1);
    if (iVar3 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar7,1);
    if (iVar3 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,1);
    if (iVar3 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,1);
    if (iVar3 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar22,0);
    if (iVar3 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar26,0);
    if (iVar3 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar7,0);
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar13,0);
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x44);
    }
    iVar3 = fn_8243E578(lVar14,0);
    if (iVar3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(unsigned int *)(iVar3 + 0x44);
    }
    fn_82260950((double)uVar12,(double)(uVar9 & 0xffffffff),(double)(uVar8 & 0xffffffff),
                      (double)uVar27,(double)uVar23,(double)uVar21,(double)uVar20,(double)uVar19,
                      (double)uVar18,(double)uVar17,(double)uVar16,(double)uVar15,(double)uVar25,
                      lbl_83276580);
    param_1 = puStack00000014;
  }
  iVar3 = param_1[0x10];
  piVar10 = param_1 + 0x10;
  iVar4 = *(int *)(*(int *)(iVar3 + 0x1d8) + 0xa0);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != 1)) {
    iVar24 = 0;
    iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x1d8) + 0x174) + 0xbc);
    if ((unsigned int)(*(int *)(iVar3 + 0x1c8) - *(int *)(iVar3 + 0x1c4) >> 2) < 2) {
      if (0 < iVar4) {
        iVar3 = 0;
        do {
          iVar4 = *piVar10;
          piVar11 = *(int **)(**(int **)(*(int *)(iVar4 + 0x1d8) + 8) + iVar3);
          iVar5 = fn_822ABA88(*(unsigned int *)(piVar11[4] * 4 + *piVar11),0);
          iVar4 = *(int *)(*(int *)(**(int **)(iVar4 + 0x1c4) + 0x40) + 0x114);
          if (iVar4 == 1) {
            uVar6 = 0x24;
LAB_824393c4:
            fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar5 + 0x1a0) + 0x194,uVar6,1);
          }
          else {
            if (iVar4 == 2) {
              uVar6 = 0x26;
              goto LAB_824393c4;
            }
            if (iVar4 == 3) {
              uVar6 = 0x28;
              goto LAB_824393c4;
            }
            if (iVar4 == 4) {
              uVar6 = 0x25;
              goto LAB_824393c4;
            }
            if (iVar4 == 5) {
              uVar6 = 0x27;
              goto LAB_824393c4;
            }
          }
          iVar24 = iVar24 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar24 < *(int *)(*(int *)(*(int *)(*piVar10 + 0x1d8) + 0x174) + 0xbc));
      }
    }
    else if (0 < iVar4) {
      iVar3 = 0;
      do {
        piVar11 = *(int **)(**(int **)(*(int *)(*piVar10 + 0x1d8) + 8) + iVar3);
        iVar4 = fn_822ABA88(*(unsigned int *)(piVar11[4] * 4 + *piVar11),0);
        fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0x27,1);
        fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0x25,1);
        fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0x24,1);
        fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0x28,1);
        fn_82340AF0((unsigned __int64)*(unsigned int *)(iVar4 + 0x1a0) + 0x194,0x26,1);
        iVar24 = iVar24 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar24 < *(int *)(*(int *)(*(int *)(*piVar10 + 0x1d8) + 0x174) + 0xbc));
    }
    fn_8243BBA0(param_1);
  }
  uVar25 = 0;
  if (*(int *)(*piVar10 + 0x1c8) - *(int *)(*piVar10 + 0x1c4) >> 2 != 0) {
    iVar3 = 0;
    do {
      puVar1 = *(unsigned int **)(*(int *)(*piVar10 + 0x1c4) + iVar3);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      uVar25 = uVar25 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar25 < (unsigned int)(*(int *)(*piVar10 + 0x1c8) - *(int *)(*piVar10 + 0x1c4) >> 2));
  }
  fn_8243C188(piVar10);
  fn_82437DA8(param_1);
  return;
}

