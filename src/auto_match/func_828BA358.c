typedef unsigned char bool;
#define true 1
#define false 0
extern int __ascii_stricmp();


bool fn_828BA358(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  
  pbVar7 = (unsigned char *)(param_1 + 8);
  if (*(unsigned char *)(param_1 + 8) != *param_2) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
       ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 8) && (iVar3 = __ascii_stricmp(), iVar3 == 0)))
       ) {
      return true;
    }
    return false;
  }
  if (*(int *)(param_1 + 0x18) != 6) {
    do {
      bVar1 = *pbVar7;
      bVar2 = *param_2;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      param_2 = param_2 + 1;
    } while (pbVar7 != (unsigned char *)(param_1 + 0x18));
    return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
  }
  pbVar7 = *(unsigned char **)(param_1 + 0x14);
  if (((pbVar7 != (unsigned char *)0x0) && (pbVar6 = *(unsigned char **)(param_2 + 0xc), pbVar6 != (unsigned char *)0x0)) &&
     (iVar3 = *(int *)(param_2 + 8), *(int *)(param_1 + 0x10) == iVar3)) {
    lVar4 = 0;
    if (iVar3 != 0) {
      pbVar5 = pbVar7 + iVar3;
      do {
        lVar4 = (unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar6;
        if (lVar4 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != pbVar5);
    }
    if ((int)lVar4 == 0) {
      return true;
    }
  }
  return false;
}

