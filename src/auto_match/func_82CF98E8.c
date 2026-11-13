unsigned __int64 fn_82CF98E8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0xc) == 0) {
    if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4)) {
      return (unsigned __int64)*(unsigned int *)(param_1 + 4);
    }
    return param_2 + 0x7fff & 0xffff8000;
  }
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if ((param_2 & 0xffffffff) <= (uVar1 & 0xffffffff)) {
    return uVar1;
  }
  return param_2;
}

