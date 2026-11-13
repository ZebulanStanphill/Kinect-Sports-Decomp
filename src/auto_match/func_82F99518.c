extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F99518(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x20)) = uVar2;
      *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x20) + 4) = uVar1;
      iVar4 = iVar4 + 8;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x18));
  }
  return 1;
}

