__int64 fn_82D4F5F8(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  if (param_1 == 1) {
    return param_2 + 2;
  }
  lVar1 = (param_2 & 0x7fffffff) * 2;
  if (param_1 != 2) {
    return param_2 + lVar1;
  }
  return lVar1 + 1;
}

