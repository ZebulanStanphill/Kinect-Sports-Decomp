unsigned __int64 fn_8296C4F8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  uVar1 = *param_2;
  if ((uVar1 & 0xfff00000) != 0) {
    uVar4 = (unsigned __int64)uVar1 & 0xfffff;
    uVar8 = param_2[1] / uVar4;
    trapWord(6,uVar4,0);
    if ((int)uVar8 != 0) {
      lVar5 = 0;
      do {
        lVar7 = 0;
        if ((uVar1 & 0xfffff) != 0) {
          iVar6 = 0;
          uVar9 = uVar4;
          do {
            iVar2 = *(int *)(*(int *)((int)((lVar5 + lVar7 & 0xffffffffU) << 2) + param_2[2]) * 4 +
                            *(int *)(param_1 + 0x14));
            if ((*(int *)(iVar2 + 0x48) != -1) && (*(int *)(iVar2 + 8) == -1)) {
              iVar3 = *(int *)(*(int *)(iVar2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
              if ((*param_2 & 0xfff00000) == 0x11300000) {
                *(unsigned int *)(iVar2 + 0x40) =
                     *(unsigned int *)
                      (*(int *)(*(int *)(param_2[4] + iVar6) * 4 + *(int *)(param_1 + 0x14)) + 0x40)
                ;
              }
              else {
                *(unsigned int *)(iVar2 + 0x40) =
                     1 << (*(unsigned int *)(iVar3 + 0x24) & 0x3f) | *(unsigned int *)(iVar2 + 0x40);
                *(unsigned int *)(iVar3 + 0x28) = 1;
              }
            }
            lVar7 = lVar7 + 1;
            iVar6 = iVar6 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        lVar7 = 0;
        uVar9 = uVar4;
        if ((uVar1 & 0xfffff) != 0) {
          do {
            iVar2 = *(int *)(*(int *)((int)((lVar5 + lVar7 & 0xffffffffU) << 2) + param_2[2]) * 4 +
                            *(int *)(param_1 + 0x14));
            iVar6 = *(int *)(iVar2 + 0x48);
            if (((iVar6 != -1) && (*(int *)(iVar2 + 8) == -1)) &&
               (iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18)), *(int *)(iVar6 + 0x28) != 0)
               ) {
              *(unsigned int *)(iVar6 + 0x28) = 0;
              *(unsigned int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1U & 0x1f;
            }
            lVar7 = lVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + uVar4;
      } while (uVar8 != 0);
    }
  }
  return 0;
}

