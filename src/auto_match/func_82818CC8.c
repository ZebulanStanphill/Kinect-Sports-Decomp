__int64 fn_82818CC8(__int64 param_1,unsigned __int64 param_2,int param_3,__int64 param_4,
                      unsigned __int64 param_5,int param_6)

{
  __int64 lVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  
  if ((param_2 & 0xffffffff) != (param_5 & 0xffffffff)) {
    return param_2 - param_5;
  }
  if ((param_3 == 0) || (param_6 == 0)) {
    return param_1 - param_4;
  }
  pbVar3 = *(unsigned char **)(param_6 + 8);
  pbVar4 = *(unsigned char **)(param_3 + 8);
  do {
    lVar1 = (unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3;
    iVar2 = (int)lVar1;
    if (*pbVar4 == 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 == 0);
  if (iVar2 != 0) {
    return lVar1;
  }
  return (unsigned __int64)*(unsigned int *)(param_3 + 0xc) - (unsigned __int64)*(unsigned int *)(param_6 + 0xc);
}

