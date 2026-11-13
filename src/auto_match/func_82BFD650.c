typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82BFCC28();
extern int fn_82BFEAD8();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFD650(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  __int64 *plVar4;
  __int64 *plVar5;
  __int64 *plVar6;
  unsigned __int64 uVar7;
  __int64 *plVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  __int64 *plStack_30;
  
  plVar4 = (__int64 *)param_1;
  if (*(int *)((int)plVar4 + 0x1c) == 0) {
    while( true ) {
      lVar10 = *plVar4;
      plStack_30 = (__int64 *)((unsigned __int64)lVar10 >> 0x20);
      if (plStack_30 == (__int64 *)0x0) break;
      sync(1);
      if (*plVar4 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           (((unsigned __int64)*(unsigned int *)((int)plStack_30 + 8) << 0x20) +
                            (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar4 = lVar10;
        plVar6 = plStack_30;
        goto LAB_82bfd6d8;
      }
      lVar10 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
      *plVar4 = lVar10;
    }
    if ((*(int *)((int)plVar4 + 0x34) == 0) ||
       (plVar6 = (__int64 *)fn_82BFCC28(param_1), plVar6 == (__int64 *)0x0)) {
      return 0;
    }
  }
  else {
    lVar10 = param_1 + 0x18;
    do {
      puVar12 = (unsigned int *)lVar10;
      uVar1 = *puVar12;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1 - 1,0,lVar10);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)((unsigned __int64)uVar1 - 1) < 0) {
LAB_82bfd818:
      if ((*(int *)((int)plVar4 + 0x34) == 0) ||
         (plVar6 = (__int64 *)fn_82BFCC28(param_1), plVar6 == (__int64 *)0x0)) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar12 + 1,0,lVar10);
            *puVar12 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        return 0;
      }
    }
    else {
      do {
        lVar11 = *plVar4;
        plStack_30 = (__int64 *)((unsigned __int64)lVar11 >> 0x20);
        if (plStack_30 == (__int64 *)0x0) goto LAB_82bfd818;
        sync(1);
        in_RESERVE = '\x01';
        lVar9 = *plVar4;
        if (lVar9 == lVar11) {
          lVar2 = storeDoubleWordConditionalIndexed
                            (((unsigned __int64)*(unsigned int *)((int)plStack_30 + 8) << 0x20) +
                             (lVar11 + 1U & 0x7fffffff),0,param_1);
          *plVar4 = lVar2;
        }
        else {
          lVar2 = storeDoubleWordConditionalIndexed(lVar9,0,param_1);
          *plVar4 = lVar2;
        }
        in_cr0 = 2;
        plVar6 = plStack_30;
      } while (lVar9 != lVar11);
    }
  }
LAB_82bfd6d8:
  *(unsigned __int64 *)((int)plVar6 + 8) = param_2;
  param_1 = param_1 + 8;
  *(unsigned int *)plVar6 = 0;
  *(unsigned int *)((int)plVar6 + 4) = (*(unsigned int *)((int)plVar6 + 4) & 0x7fffffff) + 1;
  while( true ) {
    while( true ) {
      do {
        plVar8 = (__int64 *)param_1;
        lVar10 = *plVar8;
        plStack_30 = (__int64 *)((unsigned __int64)lVar10 >> 0x20);
        plVar5 = plStack_30;
        uVar7 = ZEXT48(plStack_30);
        lVar11 = *plStack_30;
      } while (lVar10 != *plVar8);
      plStack_30 = (__int64 *)((unsigned __int64)lVar11 >> 0x20);
      sync(1);
      if (plStack_30 == (__int64 *)0x0) break;
      if (*plVar8 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           ((ZEXT48(plStack_30) << 0x20) + (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar8 = lVar10;
      }
      else {
        lVar10 = storeDoubleWordConditionalIndexed(*plVar8,0,param_1);
        *plVar8 = lVar10;
      }
    }
    if (*plVar5 == lVar11) break;
    lVar10 = storeDoubleWordConditionalIndexed(*plVar5,0,uVar7);
    *plVar5 = lVar10;
  }
  lVar11 = storeDoubleWordConditionalIndexed
                     ((lVar11 + 1U & 0x7fffffff) + (ZEXT48(plVar6) << 0x20),0,uVar7);
  *plVar5 = lVar11;
  sync(1);
  lVar11 = (lVar10 + 1U & 0x7fffffff) + (ZEXT48(plVar6) << 0x20);
  if (*plVar8 == lVar10) {
    lVar10 = storeDoubleWordConditionalIndexed(lVar11,0,param_1);
    *plVar8 = lVar10;
  }
  else {
    lVar10 = storeDoubleWordConditionalIndexed(*plVar8,0,param_1);
    *plVar8 = lVar10;
  }
  if ((*(int *)((int)plVar4 + 0x24) != 0) && (0 < *(int *)(plVar4 + 4))) {
    fn_82BFEAD8(*(int *)((int)plVar4 + 0x24),1,lVar11,in_MSR);
  }
  return 1;
}

