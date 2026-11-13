unsigned __int64 fn_83008EB0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    uVar3 = 0;
    iVar2 = iVar1;
    do {
      if (*(int *)(iVar2 + 0xc) != -1) {
        return 1;
      }
      uVar3 = uVar3 + 0xc;
      iVar2 = uVar3 + iVar1;
    } while (uVar3 < 0x30);
  }
  return 0;
}

