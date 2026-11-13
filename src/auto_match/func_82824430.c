__int64 fn_82824430(int param_1,int param_2)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    return 1;
  }
  iVar3 = **(int **)(*(int *)(param_2 + 0x10) + 0x388) + *(int *)(param_2 + 0x14) * 0x20;
  iVar4 = **(int **)(*(int *)(param_1 + 0x10) + 0x388) + *(int *)(param_1 + 0x14) * 0x20;
  pbVar5 = *(unsigned char **)(**(int **)(*(int *)(param_2 + 0x10) + 0x3bc) + *(int *)(iVar3 + 0xc) * 4);
  pbVar6 = *(unsigned char **)(**(int **)(*(int *)(param_1 + 0x10) + 0x3bc) + *(int *)(iVar4 + 0xc) * 4);
  do {
    lVar1 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5;
    iVar2 = (int)lVar1;
    if (*pbVar6 == 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (iVar2 == 0);
  if (iVar2 != 0) {
    return lVar1;
  }
  return (unsigned __int64)*(unsigned int *)(iVar3 + 0x10) - (unsigned __int64)*(unsigned int *)(iVar4 + 0x10);
}

