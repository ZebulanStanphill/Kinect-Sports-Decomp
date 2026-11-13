__int64 fn_828245E8(int param_1,unsigned char *param_2)

{
  __int64 lVar1;
  unsigned char *pbVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  pbVar2 = *(unsigned char **)(**(int **)(*(int *)(param_1 + 0x10) + 0x3bc) + *(int *)(param_1 + 0x14) * 4);
  do {
    lVar1 = (unsigned __int64)*pbVar2 - (unsigned __int64)*param_2;
    if (*pbVar2 == 0) {
      return lVar1;
    }
    pbVar2 = pbVar2 + 1;
    param_2 = param_2 + 1;
  } while ((int)lVar1 == 0);
  return lVar1;
}

