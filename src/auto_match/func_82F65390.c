__int64 strncmp(unsigned char *param_1,unsigned char *param_2,__int64 param_3)

{
  __int64 lVar1;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar1 = (unsigned __int64)*param_1 - (unsigned __int64)*param_2;
  param_3 = param_3 + -1;
  if (param_3 == 0 || *param_1 == 0) {
    return lVar1;
  }
  do {
    if (lVar1 != 0) {
      return lVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    lVar1 = (unsigned __int64)*param_1 - (unsigned __int64)*param_2;
    param_3 = param_3 + -1;
  } while (param_3 != 0 && *param_1 != 0);
  return lVar1;
}

