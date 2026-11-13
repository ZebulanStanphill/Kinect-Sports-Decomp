typedef unsigned char bool;
#define true 1
#define false 0


bool fn_8278B2C8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == param_2) {
    return true;
  }
  if (((piVar1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*piVar1 != *param_2)) {
    return false;
  }
  iVar2 = *piVar1 * 4;
  pbVar4 = (unsigned char *)(param_2 + 1);
  pbVar6 = (unsigned char *)(piVar1 + 1);
  lVar3 = 0;
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

