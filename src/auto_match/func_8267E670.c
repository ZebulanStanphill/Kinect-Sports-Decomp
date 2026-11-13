unsigned int fn_8267E670(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10) - (unsigned __int64)*(unsigned int *)(iVar1 + 0x14);
  return (((int)uVar2 >> 0x1f) - ((int)*(unsigned int *)(param_1 + 8) >> 0x1f)) +
         (unsigned int)(*(unsigned int *)(param_1 + 8) <= uVar2) & 0xff;
}

