extern int fn_82C2B590();


void fn_82A6C148(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(unsigned short *)(param_1 + 0x22);
  if (*(int *)(param_1 + 0x224) != 0) {
    lVar3 = 1;
    if (uVar1 != 0) {
      iVar5 = 4;
      do {
        if ((6 < (int)lVar3) && (0 < (int)lVar3)) {
          iVar6 = 0;
          lVar4 = lVar3;
          do {
            iVar2 = *(int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x224)) + iVar6);
            if (iVar2 != 0) {
              fn_82C2B590(iVar2);
              *(unsigned int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x224)) + iVar6) = 0;
            }
            lVar4 = lVar4 + -1;
            iVar6 = iVar6 + 4;
          } while (lVar4 != 0);
        }
        iVar6 = *(int *)(iVar5 + *(int *)(param_1 + 0x224));
        if (iVar6 != 0) {
          fn_82C2B590(iVar6);
          *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x224)) = 0;
        }
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)lVar3 <= (int)(unsigned int)uVar1);
    }
    if (*(int *)(param_1 + 0x224) != 0) {
      fn_82C2B590();
      *(unsigned int *)(param_1 + 0x224) = 0;
    }
  }
  return;
}

