void fn_8268E5C8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  piVar4 = (int *)(param_2 + 0x1c);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0x18);
    piVar4 = (int *)(param_2 + 0x18);
    if (iVar3 == 0) goto LAB_8268e61c;
  }
  while ((piVar2 = (int *)(iVar3 + 0x1c), *(int *)(iVar3 + 0x1c) != 0 ||
         (piVar2 = (int *)(iVar3 + 0x18), *(int *)(iVar3 + 0x18) != 0))) {
    piVar4 = piVar2;
    iVar3 = *piVar4;
  }
  *piVar4 = 0;
LAB_8268e61c:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    if (param_2 == *param_1) {
      *param_1 = iVar3;
    }
    else {
      *(int *)((7 - (unsigned int)(param_2 == *(int *)(iVar1 + 0x18))) * 4 + iVar1) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x14) = iVar1;
      iVar1 = *(int *)(param_2 + 0x18);
      if (iVar1 != 0) {
        *(int *)(iVar3 + 0x18) = iVar1;
        *(int *)(iVar1 + 0x14) = iVar3;
      }
      iVar1 = *(int *)(param_2 + 0x1c);
      if (iVar1 != 0) {
        *(int *)(iVar3 + 0x1c) = iVar1;
        *(int *)(iVar1 + 0x14) = iVar3;
      }
    }
  }
  *(unsigned int *)(param_2 + 0x1c) = 0;
  *(unsigned int *)(param_2 + 0x18) = 0;
  *(unsigned int *)(param_2 + 0x14) = 0;
  return;
}

