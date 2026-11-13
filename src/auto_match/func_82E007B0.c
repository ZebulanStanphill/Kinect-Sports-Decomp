void fn_82E007B0(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0xc) = param_2;
  if ((int)*(unsigned int *)(param_1 + 0x14) < 1) {
    return;
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0x2c) = param_2;
    }
    iVar2 = iVar2 + 0x60;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}

