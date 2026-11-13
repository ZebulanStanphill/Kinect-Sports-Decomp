__int64 fn_82CFC068(unsigned char *param_1,unsigned char *param_2,int param_3)

{
  unsigned char *pbVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar1 = param_1 + param_3;
  do {
    if ((unsigned __int64)*param_1 - (unsigned __int64)*param_2 != 0) {
      return (unsigned __int64)*param_1 - (unsigned __int64)*param_2;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_1 != pbVar1);
  return 0;
}

