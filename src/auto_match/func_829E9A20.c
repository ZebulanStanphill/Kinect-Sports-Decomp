unsigned __int64 fn_829E9A20(int param_1,unsigned char *param_2,int param_3,int param_4)

{
  int iVar1;
  __int64 lVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  
  pbVar4 = *(unsigned char **)(param_4 + 4);
  if ((pbVar4 != (unsigned char *)0x0) && (param_3 == *(int *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + 0x20) * 4;
    lVar2 = 0;
    if (iVar1 != 0) {
      pbVar3 = pbVar4 + iVar1;
      do {
        lVar2 = (unsigned __int64)*pbVar4 - (unsigned __int64)*param_2;
        if (lVar2 != 0) break;
        pbVar4 = pbVar4 + 1;
        param_2 = param_2 + 1;
      } while (pbVar4 != pbVar3);
    }
    if ((int)lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

