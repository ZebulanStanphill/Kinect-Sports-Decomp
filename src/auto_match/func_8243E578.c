int fn_8243E578(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x5c;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)(param_1 + 4)) == param_2) {
        return iVar3 + *(int *)(param_1 + 4);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (uVar2 < uVar1);
  }
  return 0;
}

