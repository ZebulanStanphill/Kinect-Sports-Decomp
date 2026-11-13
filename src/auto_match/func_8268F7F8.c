__int64 fn_8268F7F8(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  lVar1 = 0;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x19c);
  while (uVar3 = uVar2, iVar4 = (int)uVar3, 0 < iVar4) {
    uVar2 = (unsigned __int64)(iVar4 >> 1);
    if (*(unsigned int *)((int)(uVar2 + lVar1) * 0xc + param_1 + 0x1c) < param_2) {
      lVar1 = uVar2 + lVar1 + 1;
      uVar2 = (uVar3 - uVar2) - 1;
    }
  }
  return lVar1;
}

