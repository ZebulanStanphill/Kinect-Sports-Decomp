typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828F5390();


bool fn_828F5690(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned char *pbVar6;
  __int64 lVar7;
  
  iVar4 = fn_828F5390();
  puVar1 = *(unsigned int **)((iVar4 + 0x1e) * 4 + param_1);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      return false;
    }
    pbVar6 = (unsigned char *)*puVar1;
    lVar7 = param_2;
    do {
      uVar3 = (unsigned int)*pbVar6;
      uVar2 = (unsigned int)*(unsigned char *)lVar7;
      if (*(unsigned char *)lVar7 == 0) break;
      lVar7 = lVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar2 == uVar3);
    if ((int)(uVar2 - uVar3) < 0) {
      return false;
    }
    if (uVar2 == uVar3) {
      if (puVar1[4] == 0) {
        iVar4 = puVar1[2];
        puVar1[4] = 1;
        while ((iVar4 != 0 &&
               ((*(int *)(iVar4 + 0x10) != 9 ||
                (iVar5 = fn_828F5690(param_1,*(unsigned int *)(iVar4 + 0x18)), iVar5 == 0))))) {
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        puVar1[4] = 0;
        return iVar4 != 0;
      }
      return true;
    }
    puVar1 = (unsigned int *)puVar1[3];
  } while( true );
}

