unsigned __int64 fn_826C6B78(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(unsigned int *)(iVar1 + 0xc) != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(iVar1 + 8) + iVar3) == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0xc));
    }
  }
  return 0xffffffffffffffff;
}

