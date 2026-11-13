extern int memset();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FBA940(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  memset(*(unsigned int *)(param_1 + 0x28),0,
                ((__int64)*(int *)(param_1 + 0x20) * (__int64)*(int *)(param_1 + 0x10) &
                0x3fffffffU) << 2);
  uVar2 = lbl_821AAD20;
  if ((*(int *)(param_1 + 0x24) != 0) && (uVar3 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    iVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(unsigned int *)(*(int *)(param_1 + 0x24) + iVar4 + 4) = uVar2;
      *(unsigned int *)(*(int *)(param_1 + 0x24) + iVar4) = uVar2;
      iVar1 = *(int *)(param_1 + 0x24) + iVar4;
      iVar4 = iVar4 + 0xc;
      *(unsigned int *)(iVar1 + 8) = 0;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x1c));
  }
  *(unsigned char *)(param_1 + 0x40) = 1;
  return 1;
}

