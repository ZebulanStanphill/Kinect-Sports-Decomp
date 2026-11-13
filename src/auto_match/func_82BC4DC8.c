extern int fn_82BA4058();
extern int fn_82BC5B38();


void fn_82BC4DC8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (int *)fn_82BA4058(*(unsigned int *)(param_1 + 0x20));
  uVar6 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      piVar5 = piVar5 + 1;
      iVar1 = *piVar5;
      iVar9 = 0;
      iVar2 = *(int *)(iVar1 + 0x48);
      for (uVar7 = 1; uVar7 <= *(unsigned int *)(*(int *)(iVar1 + 0x38) + 4); uVar7 = uVar7 + 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x38) + 8) + iVar9);
        if (*(int *)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 8)) != iVar2) {
          fn_82BC5B38(iVar1,iVar4);
        }
        iVar9 = iVar9 + 4;
      }
      iVar9 = 0;
      for (uVar7 = 1; uVar7 <= *(unsigned int *)(*(int *)(iVar1 + 0x58) + 4); uVar7 = uVar7 + 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x58) + 8) + iVar9);
        iVar10 = 0;
        for (uVar8 = 1; iVar3 = *(int *)(iVar4 + 0x5c), uVar8 <= *(unsigned int *)(iVar3 + 4);
            uVar8 = uVar8 + 1) {
          iVar3 = *(int *)(*(int *)(iVar3 + 8) + iVar10);
          if (*(int *)(*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 8)) != iVar2) {
            fn_82BC5B38(iVar1,iVar3);
          }
          iVar10 = iVar10 + 4;
        }
        iVar9 = iVar9 + 4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *(unsigned int *)(param_1 + 0x1c));
  }
  return;
}

