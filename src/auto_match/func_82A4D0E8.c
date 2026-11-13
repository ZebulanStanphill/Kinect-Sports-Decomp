typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A4D0E8(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x50) == 1) {
    lVar6 = param_1 + 0x40;
    do {
      uVar2 = *(unsigned int *)(iVar4 + 0x48);
      do {
        puVar7 = (unsigned int *)lVar6;
        uVar1 = *puVar7;
        if (uVar1 != uVar2 * 0xc + iVar4 + 0x28) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
            *puVar7 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(((unsigned __int64)uVar2 ^ 1) * 0xc + param_1 + 0x28,0,lVar6)
          ;
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0xffffffff);
    *(unsigned int *)(iVar4 + 0x48) = *(unsigned int *)(iVar4 + 0x48) ^ 1;
  }
  iVar5 = (*(unsigned int *)(iVar4 + 0x48) ^ 1) * 0xc + iVar4;
  *param_2 = *(unsigned int *)(iVar5 + 0x28);
  param_2[1] = *(unsigned int *)(iVar5 + 0x2c);
  param_2[2] = *(unsigned int *)(iVar5 + 0x30);
  *(unsigned int *)(iVar4 + 0x50) = 0;
  return;
}

