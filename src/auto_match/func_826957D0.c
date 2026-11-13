__int64 fn_826957D0(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20) - param_2;
  if (((__int64)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 4) +
       ((unsigned __int64)*(unsigned int *)(iVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20 & 0xffffffff) <
      (uVar2 & 0xffffffff)) {
    return 0;
  }
  return (unsigned __int64)*(unsigned int *)(((unsigned int)uVar2 >> 3 & 0x1ffffffc) + *(int *)(iVar1 + 0x18)) +
         (uVar2 & 0x1f) * 0x10;
}

