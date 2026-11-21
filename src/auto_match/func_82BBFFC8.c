void fn_82BBFFC8(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 4) <= (param_2 & 0xffffffff)) {
    return;
  }
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4) - 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  lVar1 = (param_2 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 8);
  memcpy(lVar1,lVar1 + 4,(lVar2 - param_2 & 0x3fffffff) << 2);
  return;
}
