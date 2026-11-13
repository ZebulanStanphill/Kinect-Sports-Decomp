typedef unsigned char bool;


bool fn_828511A0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  lVar3 = 0;
  iVar1 = (param_4 + 0x10) * 4;
  iVar2 = *(int *)(param_1 + 0x178) * 4;
  pbVar4 = *(unsigned char **)(iVar1 + param_3);
  pbVar6 = *(unsigned char **)(iVar1 + param_2);
  if (iVar2 != 0) {
    pbVar5 = pbVar6 + iVar2;
    do {
      lVar3 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar4;
      if (lVar3 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar6 != pbVar5);
  }
  return (int)lVar3 == 0;
}

