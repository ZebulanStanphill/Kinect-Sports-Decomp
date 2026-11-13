unsigned __int64 fn_82BB1C18(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = param_2 + param_1[1];
  if (uVar2 + 0x1f >> 5 == *param_1) {
    param_1[1] = uVar2;
    for (uVar3 = uVar2 - param_2; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      iVar1 = (uVar3 >> 5) + 2;
      param_1[iVar1] = param_1[iVar1] & ~(1 << (uVar3 & 0x1f));
      uVar2 = param_1[1];
    }
    return 1;
  }
  return 0;
}

