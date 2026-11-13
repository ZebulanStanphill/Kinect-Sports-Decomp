unsigned int fn_82D51D18(int param_1,unsigned int param_2)

{
  int lVar1;
  unsigned int uVar2;
  
  if ((param_2 & 1) == 0) {
    return param_2 | 1;
  }
  uVar2 = param_2 >> 0x10;
  lVar1 = (param_2 >> 1 & 0x7fff) + 1;
  if (lVar1 == *(int *)(*(int *)(param_1 + 8) + 0x10) + -1) {
    uVar2 = uVar2 + 1;
    lVar1 = 0;
    if ((int)uVar2 == *(int *)(*(int *)(param_1 + 8) + 0x14) + -1) {
      return 0xffffffff;
    }
  }
  return (uVar2 * 0x8000 + lVar1 & 0x7fffffff) << 1;
}

