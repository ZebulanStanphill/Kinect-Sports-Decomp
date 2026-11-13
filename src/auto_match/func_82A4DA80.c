typedef unsigned char bool;
extern int fn_82F68CC0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A4DA80(__int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 200) == 1) {
    lVar5 = param_1 + 0x98;
    do {
      uVar2 = *(unsigned int *)(iVar4 + 0xa0);
      do {
        puVar6 = (unsigned int *)lVar5;
        uVar1 = *puVar6;
        if (uVar1 != uVar2 * 0x18 + iVar4 + 0x50) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar5);
            *puVar6 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed
                            (((unsigned __int64)uVar2 ^ 1) * 0x18 + param_1 + 0x50,0,lVar5);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0xffffffff);
    *(unsigned int *)(iVar4 + 0xa0) = *(unsigned int *)(iVar4 + 0xa0) ^ 1;
    param_5 = in_MSR;
  }
  fn_82F68CC0(param_2 + 3,*(unsigned int *)(((*(unsigned int *)(iVar4 + 0xa0) ^ 1) + 4) * 0x18 + iVar4),
               ((__int64)*(int *)(iVar4 + 0x20) * (__int64)*(int *)(iVar4 + 0x1c) & 0x3fffffffU)
               << 2,param_4,param_5);
  param_2[1] = *(unsigned int *)((*(unsigned int *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x54);
  *param_2 = *(unsigned int *)((*(unsigned int *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x50);
  param_2[2] = *(unsigned int *)((*(unsigned int *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x58);
  *(unsigned int *)(iVar4 + 200) = 0;
  return;
}

