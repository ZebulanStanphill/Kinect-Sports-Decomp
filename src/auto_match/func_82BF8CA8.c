typedef unsigned char bool;
#define false 0
extern int fn_82BF1C20();


bool fn_82BF8CA8(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x24)) {
    pbVar3 = (unsigned char *)fn_82BF1C20(*(unsigned int *)(param_1 + 0x1c));
    if (pbVar3 != (unsigned char *)0x0) {
      pbVar5 = *(unsigned char **)(param_1 + 0x30);
      pbVar4 = pbVar5 + 0x14;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar3;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar5 != pbVar4);
      return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
    }
  }
  return false;
}

