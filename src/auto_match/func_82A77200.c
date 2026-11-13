typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A77200(__int64 param_1,unsigned __int64 *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xf8) == 1) {
    lVar6 = param_1 + 0xf0;
    do {
      uVar2 = *(unsigned int *)(iVar5 + 0xf4);
      do {
        puVar7 = (unsigned int *)lVar6;
        uVar1 = *puVar7;
        if (uVar1 != (uVar2 + 0xd) * 0x10 + iVar5) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
            *puVar7 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed
                            (((unsigned __int64)((uVar2 ^ 1) + 0xd) & 0xfffffff) * 0x10 + param_1,0,lVar6);
          *puVar7 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0);
    *(unsigned int *)(iVar5 + 0xf4) = *(unsigned int *)(iVar5 + 0xf4) ^ 1;
  }
  iVar3 = ((*(unsigned int *)(iVar5 + 0xf4) ^ 1) + 0xd) * 0x10;
  *param_2 = *(unsigned __int64 *)(iVar3 + iVar5);
  param_2[1] = *(unsigned __int64 *)(iVar3 + iVar5 + 8);
  *(unsigned int *)(iVar5 + 0xf8) = 0;
  return;
}

