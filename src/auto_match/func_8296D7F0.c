unsigned __int64 fn_8296D7F0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar7 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      if (*(int *)(iVar7 + 8) == -1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(unsigned int *)(*(int *)(*(int *)(iVar7 + 8) * 4 + *(int *)(param_1 + 0x14)) + 0x30)
        ;
      }
      *(unsigned int *)(iVar7 + 8) = uVar6;
      if (*(int *)(iVar7 + 0x14) == -1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(unsigned int *)
                 (*(int *)(*(int *)(iVar7 + 0x14) * 4 + *(int *)(param_1 + 0x14)) + 0x30);
      }
      *(unsigned int *)(iVar7 + 0x14) = uVar6;
      if (*(int *)(iVar7 + 0x38) == -1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(unsigned int *)
                 (*(int *)(*(int *)(iVar7 + 0x38) * 4 + *(int *)(param_1 + 0x14)) + 0x30);
      }
      uVar3 = uVar3 + 1;
      *(unsigned int *)(iVar7 + 0x38) = uVar6;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 8));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x18) + iVar5);
      if (*piVar1 != 0) {
        uVar4 = 0;
        if (piVar1[1] != 0) {
          iVar7 = 0;
          do {
            iVar2 = *(int *)(iVar7 + piVar1[2]);
            if (iVar2 == -1) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = *(unsigned int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
            }
            uVar4 = uVar4 + 1;
            *(unsigned int *)(iVar7 + piVar1[2]) = uVar6;
            iVar7 = iVar7 + 4;
          } while (uVar4 < (unsigned int)piVar1[1]);
        }
        uVar4 = 0;
        if (piVar1[3] != 0) {
          iVar7 = 0;
          do {
            iVar2 = *(int *)(piVar1[4] + iVar7);
            if (iVar2 == -1) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = *(unsigned int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
            }
            *(unsigned int *)(piVar1[4] + iVar7) = uVar6;
            uVar4 = uVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar4 < (unsigned int)piVar1[3]);
        }
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
  }
  return 0;
}

