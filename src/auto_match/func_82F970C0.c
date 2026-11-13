extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F970C0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = lbl_821AAD20;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x20)) = uVar1;
      *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x20) + 4) = uVar1;
      iVar3 = iVar3 + 8;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x18));
  }
  return 1;
}

