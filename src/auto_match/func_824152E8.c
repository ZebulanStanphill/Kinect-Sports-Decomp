extern int fn_8265CA20();
extern int fn_82F63CA0();


void fn_824152E8(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int *piVar4;
  
  piVar2 = (int *)(param_1 + 4);
  uVar3 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    iVar1 = 0;
    do {
      fn_8265CA20(*(unsigned int *)(iVar1 + *piVar2));
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < (unsigned int)(*(int *)(param_1 + 8) - *piVar2 >> 2));
  }
  piVar4 = (int *)(param_1 + 0x14);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2 != 0) {
    iVar1 = 0;
    do {
      fn_8265CA20(*(unsigned int *)(iVar1 + *piVar4));
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar3 < (unsigned int)(*(int *)(param_1 + 0x18) - *piVar4 >> 2));
  }
  iVar1 = *piVar2;
  if (iVar1 != *(int *)(param_1 + 8)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 8),0);
    *(int *)(param_1 + 8) = iVar1;
  }
  iVar1 = *piVar4;
  if (iVar1 != *(int *)(param_1 + 0x18)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x18),0);
    *(int *)(param_1 + 0x18) = iVar1;
  }
  if (*piVar4 != 0) {
    fn_8265CA20();
  }
  *piVar4 = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (*piVar2 != 0) {
    fn_8265CA20();
  }
  *piVar2 = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

