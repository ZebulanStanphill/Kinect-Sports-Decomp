void fn_826BE090(unsigned int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = *param_2;
  iVar2 = 0;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar3 = 0;
  do {
    if (*(int *)(iVar2 + iVar1 + 8) != -2) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x30;
  } while (uVar3 <= *(unsigned int *)(iVar1 + 4));
  *param_1 = param_2;
  param_1[1] = uVar3;
  return;
}

