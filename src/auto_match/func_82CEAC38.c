__int64 fn_82CEAC38(unsigned int param_1)

{
  __int64 lVar1;
  
  lVar1 = 0;
  if (param_1 == 0) {
    return lVar1;
  }
  do {
    param_1 = *(int *)(param_1 + 4);
    lVar1 = lVar1 + 1;
  } while (param_1 != 0);
  return lVar1;
}

