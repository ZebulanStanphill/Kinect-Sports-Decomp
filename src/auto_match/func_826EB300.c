typedef unsigned char bool;
#define false 0


bool fn_826EB300(int param_1,unsigned int param_2,unsigned char *param_3,unsigned int param_4)

{
  unsigned char *pbVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  
  if ((param_2 != *(unsigned char *)(param_1 + 0x5c)) || (param_4 != *(unsigned char *)(param_1 + 0x5d))) {
    return false;
  }
  if (param_4 < 7) {
    pbVar4 = (unsigned char *)(param_1 + 0x5e);
    lVar3 = 0;
    if (param_4 != 0) {
      pbVar1 = param_3 + param_4;
      do {
        lVar3 = (unsigned __int64)*param_3 - (unsigned __int64)*pbVar4;
        if (lVar3 != 0) break;
        param_3 = param_3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (param_3 != pbVar1);
    }
    iVar2 = (int)lVar3;
  }
  else {
    pbVar4 = *(unsigned char **)(param_1 + 0x60);
    lVar3 = 0;
    if (param_4 != 0) {
      pbVar1 = pbVar4 + param_4;
      do {
        lVar3 = (unsigned __int64)*pbVar4 - (unsigned __int64)*param_3;
        if (lVar3 != 0) break;
        pbVar4 = pbVar4 + 1;
        param_3 = param_3 + 1;
      } while (pbVar4 != pbVar1);
    }
    iVar2 = (int)lVar3;
  }
  return iVar2 == 0;
}

