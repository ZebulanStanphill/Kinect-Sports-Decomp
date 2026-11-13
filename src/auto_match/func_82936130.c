unsigned __int64 fn_82936130(int param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x38) + -0x7cea5368);
  uVar2 = *(unsigned int *)(*(int *)((param_2 + 0x18) * 4 + param_1) + 0x24);
  if (cVar1 == '\x01') {
    return ((unsigned __int64)uVar2 & 3) * 0x55;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x04') {
      return (unsigned __int64)uVar2;
    }
    uVar4 = 0;
    uVar5 = 0;
    iVar3 = *(int *)((param_2 + 0x19) * 4 + param_1);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) == 0) {
        uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x18);
      }
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x24) & 3;
    }
    return (((unsigned __int64)uVar2 & 3) << 2 | (uVar5 >> 4) - 2 & 3) << 4 |
           (uVar5 & 0xfffffffc) + 4 & 0xf | uVar4;
  }
  return ((unsigned __int64)(uVar2 >> 2) & 3) * 0x15 | ((unsigned __int64)uVar2 & 3) << 6;
}

