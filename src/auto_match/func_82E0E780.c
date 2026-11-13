__int64 fn_82E0E780(unsigned int *param_1)

{
  __int64 lVar1;
  
  lVar1 = 0;
  if (*param_1 == 0) {
    return lVar1;
  }
  do {
    param_1 = param_1 + 1;
    lVar1 = lVar1 + 1;
  } while (*param_1 != 0);
  return lVar1;
}

