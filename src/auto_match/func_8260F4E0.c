void fn_8260F4E0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_5 == 0) {
    uVar1 = *(unsigned int *)(param_3 + 0x10);
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (piVar3 = *(int **)(**(int **)(param_1 + 0x60) + 0x310);
        piVar3 < *(int **)(**(int **)(param_1 + 0x60) + 0x314); piVar3 = piVar3 + 2) {
      iVar4 = *piVar3;
      if ((unsigned int)*(unsigned short *)(iVar4 + 0x8b8) == (uVar1 & 0xffff)) goto code_r0x8260f5b4;
    }
    iVar4 = 0;
code_r0x8260f5b4:
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(iVar4 + 0x1d0) != 0) {
      return;
    }
    iVar2 = 1;
  }
  else {
    if ((param_5 != 1) && (param_5 != 3)) {
      return;
    }
    uVar1 = *(unsigned int *)(param_3 + 0x10);
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (piVar3 = *(int **)(**(int **)(param_1 + 0x60) + 0x310);
        piVar3 < *(int **)(**(int **)(param_1 + 0x60) + 0x314); piVar3 = piVar3 + 2) {
      iVar4 = *piVar3;
      if ((unsigned int)*(unsigned short *)(iVar4 + 0x8b8) == (uVar1 & 0xffff)) goto code_r0x8260f540;
    }
    iVar4 = 0;
code_r0x8260f540:
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(iVar4 + 0x1d0) == 0) {
      return;
    }
    iVar2 = *(int *)(iVar4 + 0x1d0) + -1;
  }
  *(int *)(iVar4 + 0x1d0) = iVar2;
  return;
}

