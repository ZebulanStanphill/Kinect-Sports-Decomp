unsigned __int64 fn_82A94AA8(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar2 = (unsigned __int64)(param_3 == 0) ^ 1;
  iVar1 = (int)(uVar2 << 1);
  lVar4 = (uVar2 - LZCOUNT((param_1 - iVar1) + -1)) + 0x20;
  lVar3 = (uVar2 - LZCOUNT((param_2 - iVar1) + -1)) + 0x20;
  if ((int)lVar3 <= (int)lVar4) {
    lVar4 = lVar3;
  }
  uVar2 = lVar4 - 4;
  return (((uVar2 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar2 == 0) & uVar2;
}

