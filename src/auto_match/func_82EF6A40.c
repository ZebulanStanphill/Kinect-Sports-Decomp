__int64 fn_82EF6A40(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  
  param_2 = param_2 >> 1;
  lVar1 = 0;
  if (param_2 == 0) {
    return lVar1;
  }
  do {
    param_2 = param_2 >> 1;
    lVar1 = lVar1 + 1;
  } while (param_2 != 0);
  return lVar1;
}

