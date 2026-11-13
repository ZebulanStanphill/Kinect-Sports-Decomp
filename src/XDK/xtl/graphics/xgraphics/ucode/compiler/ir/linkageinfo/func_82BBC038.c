unsigned __int64 fn_82BBC038(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = *(int *)((param_2 + 0xf4) * 4 + param_1);
  iVar2 = *(int *)((param_3 + 0xf4) * 4 + param_1);
  if (iVar2 <= iVar1) {
    if (iVar2 < iVar1) {
      return 1;
    }
    uVar3 = *(unsigned int *)((param_2 + 0x104) * 4 + param_1);
    uVar4 = *(unsigned int *)((param_3 + 0x104) * 4 + param_1);
    if ((int)uVar3 <= (int)uVar4) {
      return ((~(unsigned __int64)(uVar4 ^ uVar3) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar4 <= uVar3) & 1;
    }
  }
  return 0xffffffffffffffff;
}

