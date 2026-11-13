extern int fn_82F691F0();


unsigned __int64 fn_82C47D90(int param_1,int param_2,unsigned int *param_3,unsigned int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  
  *(int *)(param_1 + 0x55b4) = param_2;
  uVar4 = 0;
  if (param_2 == 0) {
    **(unsigned int **)(param_1 + 0x55b8) = 0;
    *(unsigned int *)(param_1 + 0x55bc) = 1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x55b8),0,*(int *)(param_1 + 0x55dc) << 2);
  }
  if (*(unsigned int *)(param_1 + 0x55bc) < (unsigned int)(*(int *)(param_1 + 0xbc) >> 4)) {
    if (*param_3 <= *(unsigned int *)(*(unsigned int *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8) + -4)) {
      *param_3 = *(unsigned int *)(param_1 + 0x55dc);
    }
    if (*(unsigned int *)(param_1 + 0x55dc) <= *param_3) {
      uVar9 = *(unsigned int *)(param_1 + 0x55bc);
      uVar10 = (unsigned __int64)uVar9;
      uVar4 = 1;
      if (uVar10 < 3) {
        if (uVar10 == 2) {
          *param_3 = *(int *)(*(int *)(param_1 + 0x55b8) + 4) << 1;
        }
        else {
          uVar8 = *(unsigned int *)(param_1 + 0x55e0);
          uVar1 = *(unsigned int *)(param_1 + 0x55e8);
          if (((unsigned __int64)uVar1 < (unsigned __int64)uVar8) && (2 < (int)uVar1)) {
            uVar10 = (unsigned __int64)uVar8 - 1;
            trapWord(6,uVar10,0);
            uVar8 = (unsigned int)(((__int64)(*(int *)(param_1 + 0x5c) >> 4) * (__int64)(int)(uVar1 - 1) +
                            (unsigned __int64)(uVar8 >> 1) & 0xffffffff) / (uVar10 & 0xffffffff));
            iVar6 = *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
          }
          else {
            uVar8 = *(unsigned int *)(param_1 + 0x55e4);
            if ((unsigned __int64)uVar8 < 2) goto LAB_82c47f88;
            trapWord(6,(unsigned __int64)uVar8,0);
            uVar8 = (unsigned int)(*(int *)(param_1 + 0x5c) >> 4) / uVar8;
            iVar6 = *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
          }
          *param_3 = uVar8 + iVar6;
        }
      }
      else {
        uVar5 = 0;
        iVar6 = 2;
        if (2 < (int)uVar9) {
          iVar7 = 8;
          do {
            iVar3 = iVar7 + *(int *)(param_1 + 0x55b8);
            puVar2 = (unsigned int *)(iVar7 + *(int *)(param_1 + 0x55b8));
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 4;
            uVar5 = ((unsigned __int64)*puVar2 - (unsigned __int64)*(unsigned int *)(iVar3 + -4)) + uVar5;
          } while (iVar6 < (int)uVar9);
        }
        trapWord(6,uVar10 - 2,0);
        *param_3 = (int)((uVar5 & 0xffffffff) / (uVar10 - 2 & 0xffffffff)) +
                   *(int *)(uVar9 * 4 + *(int *)(param_1 + 0x55b8) + -4);
      }
LAB_82c47f88:
      uVar9 = *(int *)(param_1 + 0x55dc) - 1;
      if (uVar9 < *param_3) {
        if (uVar9 <= *(unsigned int *)(*(int *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8)))
        goto LAB_82c47e34;
        *param_3 = uVar9;
      }
    }
    *(unsigned int *)(*(int *)(param_1 + 0x55d4) + *param_3 * 4) = 1;
    if (param_5 == 0) {
      *(unsigned int *)(*(int *)(param_1 + 0x55bc) * 4 + *(int *)(param_1 + 0x55b8)) = *param_3;
      *(unsigned int *)(*(int *)(param_1 + 0x55c4) + *(int *)(param_1 + 0x55bc) * 4) = param_4;
    }
    else {
      *(unsigned int *)((*(int *)(param_1 + 0x55bc) + 1) * 4 + *(int *)(param_1 + 0x55b8)) = *param_3;
      *(unsigned int *)((*(int *)(param_1 + 0x55bc) + 1) * 4 + *(int *)(param_1 + 0x55c4)) = param_4;
    }
    *(int *)(param_1 + 0x55bc) = *(int *)(param_1 + 0x55bc) + 1;
    *(int *)(param_1 + 0x55e0) = *(int *)(param_1 + 0x55e0) + 1;
  }
  else {
LAB_82c47e34:
    uVar4 = 1;
  }
  return uVar4;
}

