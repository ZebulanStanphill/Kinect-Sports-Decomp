unsigned __int64 fn_82A05D20(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 * 0x1f0 + param_1 + 0x4f0) & 3) >> 5;
  uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_3 * 0x1f0 + param_1 + 0x4f0) & 3) >> 5;
  if ((uVar1 == 1) || (uVar2 == 1)) {
    return 2;
  }
  if ((uVar1 != 0) && (uVar2 != 0)) {
    return 0;
  }
  return 1;
}

