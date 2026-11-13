__int64 fn_82F98E98(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = param_1[1];
  if ((uVar2 & 8) == 0) {
    return 0;
  }
  iVar1 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  return ((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 3) * (__int64)(iVar1 + -1) & 0x3fffffffU) * 4
         + (unsigned __int64)*param_1;
}

