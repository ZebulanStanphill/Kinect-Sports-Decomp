int fn_8300E510(unsigned __int64 param_1,int param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = 0;
  param_3 = param_3 + -1;
  do {
    uVar2 = param_3 - iVar1;
    iVar3 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar1;
    uVar2 = *(unsigned int *)(iVar3 * 0xc + param_2);
    if (param_4 < uVar2) {
      param_3 = iVar3 + -1;
    }
    else {
      if (param_4 <= uVar2) {
        return iVar3 * 0xc + param_2;
      }
      iVar1 = iVar3 + 1;
    }
  } while (iVar1 <= param_3);
  return 0;
}

