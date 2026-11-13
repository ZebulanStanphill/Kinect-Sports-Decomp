typedef unsigned char bool;


bool fn_82817EF8(int param_1,unsigned char *param_2)

{
  __int64 lVar1;
  unsigned char *pbVar2;
  
  pbVar2 = (unsigned char *)(param_1 + 0xc);
  do {
    lVar1 = (unsigned __int64)*pbVar2 - (unsigned __int64)*param_2;
    if (*pbVar2 == 0) break;
    pbVar2 = pbVar2 + 1;
    param_2 = param_2 + 1;
  } while ((int)lVar1 == 0);
  return lVar1 != 0;
}

