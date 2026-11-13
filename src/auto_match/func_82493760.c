unsigned __int64 fn_82493760(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x40) + 0x2b44)) {
    uVar1 = *(unsigned int *)(param_1 + 0x34);
    *(unsigned int *)(param_2 + 0x18) = 1;
    *(unsigned int *)(param_2 + 0x14) = uVar1;
    *(unsigned int *)(param_1 + 0x44) = 1;
    return 0;
  }
  return 1;
}

