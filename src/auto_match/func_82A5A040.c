typedef unsigned char bool;
#define TBLr 0
extern unsigned int *auStack_20;
extern int fn_82A59B60();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A5A040(__int64 param_1,unsigned __int64 *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned __int64 *puVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  __int64 lVar9;
  unsigned int auStack_20 [4];
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x80) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x298) == 1) {
      lVar6 = param_1 + 0x290;
      iVar5 = (*(unsigned int *)(iVar4 + 0x294) ^ 1) * 0x28 + iVar4;
      *(unsigned __int64 *)(iVar5 + 0x240) = 0;
      *(unsigned __int64 *)(iVar5 + 0x248) = 0;
      *(unsigned __int64 *)(iVar5 + 0x250) = 0;
      *(unsigned __int64 *)(iVar5 + 600) = 0;
      *(unsigned __int64 *)(iVar5 + 0x260) = 0;
      do {
        uVar2 = *(unsigned int *)(iVar4 + 0x294);
        do {
          puVar7 = (unsigned int *)lVar6;
          uVar1 = *puVar7;
          if (uVar1 != uVar2 * 0x28 + iVar4 + 0x240) {
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
              *puVar7 = uVar2;
              in_cr0 = 2;
            }
            break;
          }
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed
                              (((unsigned __int64)uVar2 ^ 1) * 0x28 + param_1 + 0x240,0,lVar6);
            *puVar7 = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        sync(1);
      } while (uVar1 == 0);
      *(unsigned int *)(iVar4 + 0x294) = *(unsigned int *)(iVar4 + 0x294) ^ 1;
    }
    puVar8 = param_2 + -1;
    lVar9 = 5;
    lVar6 = ((unsigned __int64)*(unsigned int *)(iVar4 + 0x294) ^ 1) * 0x28 + param_1 + 0x238;
    do {
      lVar6 = lVar6 + 8;
      puVar8 = puVar8 + 1;
      *puVar8 = *(unsigned __int64 *)lVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(unsigned int *)(iVar4 + 0x298) = 0;
  }
  lVar6 = TBLr;
  auStack_20[0] = 0;
  param_2[1] = lVar6 - *(__int64 *)(iVar4 + 0x2a0);
  *(__int64 *)(iVar4 + 0x2a0) = lVar6;
  fn_82A59B60(0xffffffff83219d50,0xffffffffffffffff,auStack_20,0);
  *(unsigned int *)(param_2 + 3) = auStack_20[0];
  return;
}

