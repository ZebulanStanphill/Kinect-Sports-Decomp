void fn_8296CC68(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  
  do {
    iVar1 = *(int *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x38);
    if (iVar1 != -1) {
      param_3 = iVar1;
    }
    iVar1 = *(int *)(param_3 * 4 + *(int *)(param_1 + 0x14));
    if (*(int *)(iVar1 + 4) == *param_2) {
      iVar2 = *(int *)(iVar1 + 0x74);
      if (param_2[0x16] != 0) {
        iVar6 = iVar2 * 4;
        iVar4 = param_4 * 4;
        iVar6 = *(int *)(param_2[0x14] + iVar6) + *(int *)(param_2[0x13] + iVar6);
        iVar7 = iVar6 * 0xc;
        *(int *)(param_2[0x15] + iVar6 * 4) = iVar6;
        *(int *)(iVar7 + param_2[0x16]) = param_4;
        uVar3 = **(unsigned int **)(*(int *)(param_1 + 0x18) + iVar4) & 0xfff00000;
        if (((uVar3 == 0x20700000) || (uVar3 == 0x20800000)) || (uVar3 == 0x11500000)) {
          *(unsigned int *)(iVar7 + param_2[0x16] + 4) = *(unsigned int *)(iVar1 + 0x14);
          uVar5 = *(unsigned int *)(iVar1 + 0x18);
        }
        else {
          *(unsigned int *)(iVar7 + param_2[0x16] + 4) =
               *(unsigned int *)
                (*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + iVar4) + 0x10) * 4 +
                         *(int *)(param_1 + 0x14)) + 0x14);
          uVar5 = *(unsigned int *)
                   (*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + iVar4) + 0x10) * 4 +
                            *(int *)(param_1 + 0x14)) + 0x18);
        }
        *(unsigned int *)(iVar7 + param_2[0x16] + 8) = uVar5;
        uVar5 = *(unsigned int *)(iVar7 + param_2[0x16] + 8);
        for (iVar6 = *(int *)(iVar7 + param_2[0x16] + 4); iVar6 != *(int *)(iVar1 + 0x14);
            iVar6 = *(int *)(iVar6 + 0x14)) {
          iVar4 = iVar6 * 4;
          if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x14)) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x8000) != 0) {
            *(int *)(iVar7 + param_2[0x16] + 4) = iVar6;
            *(unsigned int *)(iVar7 + param_2[0x16] + 8) = uVar5;
            *(unsigned int *)(iVar7 + param_2[0x16]) =
                 *(unsigned int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x14)) + 0x58);
            if (*(unsigned int *)(iVar1 + 0x58) <
                *(unsigned int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x14)) + 0x58)) {
              *(unsigned int *)(iVar1 + 0x58) =
                   *(unsigned int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x14)) + 0x58);
            }
          }
          iVar6 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
          uVar5 = *(unsigned int *)(iVar6 + 0x18);
        }
      }
      iVar2 = iVar2 * 4;
      *(int *)(param_2[0x13] + iVar2) = *(int *)(param_2[0x13] + iVar2) + 1;
    }
    param_3 = *(int *)(iVar1 + 8);
  } while (param_3 != -1);
  return;
}

