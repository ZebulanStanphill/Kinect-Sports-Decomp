void fn_8277C098(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  iVar2 = *(int *)(param_2 + 0x14) * 4;
  iVar3 = *(int *)(param_2 + 0x18) * 4;
  iVar1 = param_1[0x33];
  if (*param_1 == 0) {
    *(int *)(iVar2 + iVar1) = *(int *)(param_2 + 0x10) + *(int *)(iVar2 + iVar1);
    iVar1 = param_1[0x33];
    uVar4 = *(int *)(iVar3 + iVar1) - *(int *)(param_2 + 0x10);
  }
  else {
    *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) ^ 1;
    iVar1 = param_1[0x33];
    uVar4 = *(unsigned int *)(iVar3 + iVar1) ^ 1;
  }
  *(unsigned int *)(iVar3 + iVar1) = uVar4;
  return;
}

