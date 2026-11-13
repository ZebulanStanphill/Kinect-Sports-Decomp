extern unsigned int *auStack_b0;
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82439ED0();
extern int fn_8243E578();
extern int fn_824B7300();
extern int fn_824B7500();
extern int fn_824B8548();
extern int fn_824B9228();
extern int fn_828EA5F8();
extern int fn_828EA608();
extern int fn_828EA610();
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int lbl_83265988;


void fn_8243BBA0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar5;
  char cVar11;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar4;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned int uVar18;
  __int64 lVar19;
  unsigned int uVar20;
  __int64 lVar21;
  unsigned int uVar22;
  __int64 lVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  int iStack_c0;
  int iStack_b4;
  unsigned int auStack_b0 [44];
  
  iStack_b4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
  if (0 < *(int *)(*(int *)(iVar5 + 0x174) + 0xbc)) {
    iStack_c0 = 0;
    do {
      piVar3 = *(int **)(**(int **)(iVar5 + 8) + iStack_c0);
      iVar5 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
      if ((((*(int *)(iVar5 + 0x74) != 0) && (*(int *)(iVar5 + 0x24) != 0)) &&
          (iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0x34), iVar5 != 0)) &&
         (((cVar11 = fn_828EA610(iVar5), cVar11 == '\0' &&
           (cVar11 = fn_828EA5F8(iVar5), cVar11 != '\0')) &&
          (cVar11 = fn_828EA608(iVar5), iVar7 = lbl_83265988, cVar11 != '\0')))) {
        if (iVar5 == lbl_83265988) {
          iVar8 = *(int *)(param_1 + 0x40);
          uVar14 = 1;
          auStack_b0[0] = 0;
          auStack_b0[2] = 2;
          uVar25 = 0;
          auStack_b0[1] = 1;
          uVar16 = 1;
          auStack_b0[3] = 3;
          uVar15 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x1d8);
          uVar1 = *(unsigned int *)(*(int *)(*(unsigned int *)(iVar8 + 0x1d8) + 0x174) + 0xbc);
          uVar12 = (unsigned __int64)uVar1;
          if (1 < (int)uVar1) {
            iVar9 = 4;
            do {
              piVar3 = *(int **)(**(int **)((int)uVar15 + 8) + iVar9);
              iVar6 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
              if (*(int *)(*(int *)(iVar6 + 0x24) + 0x34) == iVar7) {
                iVar7 = (int)((uVar16 & 0xffffffff) << 2);
                auStack_b0[0] = *(unsigned int *)((int)auStack_b0 + iVar7);
                *(unsigned int *)((int)auStack_b0 + iVar7) = 0;
                uVar14 = (unsigned __int64)auStack_b0[1];
                uVar25 = auStack_b0[0];
                break;
              }
              uVar16 = uVar16 + 1;
              iVar9 = iVar9 + 4;
            } while ((int)uVar16 < (int)uVar12);
          }
          if ((unsigned int)(*(int *)(iVar8 + 0x1c8) - *(int *)(iVar8 + 0x1c4) >> 2) < 2) {
            iVar7 = *(int *)(**(int **)(iVar8 + 0x1c4) + 0x40);
            iVar8 = iVar7 + 0x120;
            fn_8243E578(iVar8,uVar25);
            fn_8243E578(iVar8,uVar14);
            fn_8243E578(iVar8,auStack_b0[2]);
            fn_8243E578(iVar8,auStack_b0[3]);
            fn_824B7300(iVar5,*(unsigned int *)(iVar7 + 0x114));
          }
          else {
            iVar7 = fn_82439ED0(param_1,5);
            lVar13 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,1,lVar13);
            lVar23 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,2);
            lVar21 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,4);
            lVar19 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_82439ED0(param_1,3);
            lVar17 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x40) + 0x120;
            iVar7 = fn_8243E578(iVar8 + 0x1f0,uVar25);
            iVar8 = fn_8243E578(iVar8 + 0x1f0,uVar14);
            iVar9 = fn_8243E578(lVar13,uVar25);
            iVar6 = fn_8243E578(lVar13,uVar14);
            iVar10 = fn_8243E578(lVar19,uVar25);
            fn_8243E578(lVar19,uVar14);
            fn_8243E578(lVar21,uVar25);
            fn_8243E578(lVar21,uVar14);
            fn_8243E578(lVar23,uVar25);
            fn_8243E578(lVar23,uVar14);
            fn_8243E578(lVar17,uVar25);
            fn_8243E578(lVar17,uVar14);
            if (iVar10 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(unsigned int *)(iVar10 + 0x48);
            }
            if (iVar6 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(unsigned int *)(iVar6 + 0x48);
            }
            if (iVar9 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = *(unsigned int *)(iVar9 + 0x48);
            }
            if (iVar8 == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = *(unsigned int *)(iVar8 + 0x44);
            }
            if (iVar7 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = *(unsigned int *)(iVar7 + 0x44);
            }
            uVar2 = *(unsigned int *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0x174) + 0xbc);
            iVar7 = fn_8225F160();
            fn_824B7500(iVar5,*(unsigned int *)(iVar7 + 0x14),uVar2,uVar26,uVar24,uVar22,uVar20,
                              uVar18);
          }
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c8);
        iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c4);
        iVar9 = fn_8225F160();
        uVar18 = *(unsigned int *)(iVar9 + 0x14);
        uVar4 = fn_824B8548();
        fn_824B9228(uVar4,iVar5,uVar18,(iVar7 - iVar8 & 0xfffffffcU) == 4);
      }
      iStack_c0 = iStack_c0 + 4;
      iStack_b4 = iStack_b4 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1d8);
    } while (iStack_b4 < *(int *)(*(int *)(iVar5 + 0x174) + 0xbc));
  }
  return;
}

