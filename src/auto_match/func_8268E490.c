void fn_8268E490(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  piVar4 = (int *)(param_2 + 0x10);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0xc);
    piVar4 = (int *)(param_2 + 0xc);
    if (iVar3 == 0) goto LAB_8268e4e4;
  }
  while ((piVar2 = (int *)(iVar3 + 0x10), *(int *)(iVar3 + 0x10) != 0 ||
         (piVar2 = (int *)(iVar3 + 0xc), *(int *)(iVar3 + 0xc) != 0))) {
    piVar4 = piVar2;
    iVar3 = *piVar4;
  }
  *piVar4 = 0;
LAB_8268e4e4:
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    if (param_2 == *param_1) {
      *param_1 = iVar3;
    }
    else {
      *(int *)((4 - (unsigned int)(param_2 == *(int *)(iVar1 + 0xc))) * 4 + iVar1) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = iVar1;
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 != 0) {
        *(int *)(iVar3 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = iVar3;
      }
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 != 0) {
        *(int *)(iVar3 + 0x10) = iVar1;
        *(int *)(iVar1 + 8) = iVar3;
      }
    }
  }
  *(unsigned int *)(param_2 + 0x10) = 0;
  *(unsigned int *)(param_2 + 0xc) = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  return;
}

