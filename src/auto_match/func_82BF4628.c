extern int fn_82F640F0();


void fn_82BF4628(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((iVar1 != 0) && (uVar2 = (unsigned int)*(unsigned short *)(param_1 + 0x20), uVar2 != 0)) &&
     (uVar5 = 0, uVar2 != 0)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + iVar1) == param_2) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        if (uVar5 + 1 < uVar2) {
          iVar1 = uVar5 * 4 + iVar1;
          fn_82F640F0(iVar1,uVar2 - uVar5 & 0x3fffffff,iVar1 + 4,
                            (uVar2 - uVar5) - 1 & 0x3fffffff);
        }
        if (uVar5 < *(unsigned int *)(param_1 + 0x24)) {
          *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x24) - 1;
        }
        if (*(short *)(param_1 + 0x22) == *(short *)(param_1 + 0x20)) {
          uVar3 = *(short *)(param_1 + 0x22) - 1;
          *(unsigned short *)(param_1 + 0x22) = uVar3;
          trapWord(6,(unsigned __int64)uVar3,0);
          *(unsigned int *)(param_1 + 0x24) =
               *(unsigned int *)(param_1 + 0x24) - (*(unsigned int *)(param_1 + 0x24) / (unsigned int)uVar3) * (unsigned int)uVar3;
        }
        *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + -1;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(unsigned short *)(param_1 + 0x20));
  }
  return;
}

