void fn_82DF4460(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  if ((int)*(unsigned int *)(param_1 + 0x30) < 1) {
    return;
  }
  iVar3 = 0;
  do {
    iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x2c));
    iVar3 = iVar3 + 4;
    *(unsigned char *)(iVar1 + 0xc) = *(unsigned char *)(iVar1 + 0xc) & 0xfd;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

