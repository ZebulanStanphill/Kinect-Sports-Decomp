#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82BFEAD8();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFDD90(__int64 param_1,unsigned __int64 *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 *plVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 *plVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned int *puStack_20;
  
  lVar2 = param_1 + 8;
  lVar5 = param_1 + 0x10;
  while( true ) {
    do {
      while( true ) {
        do {
          plVar6 = (__int64 *)lVar5;
          lVar8 = *plVar6;
          plVar3 = (__int64 *)lVar2;
          lVar7 = *plVar3;
          puStack_20 = (unsigned int *)((unsigned __int64)lVar8 >> 0x20);
          puVar9 = puStack_20;
          uVar1 = *puStack_20;
        } while (lVar8 != *plVar6);
        puStack_20 = (unsigned int *)((unsigned __int64)lVar7 >> 0x20);
        if (puVar9 != puStack_20) break;
        if (uVar1 == 0) {
          return 0x102;
        }
        sync(1);
        if (*plVar3 == lVar7) {
          lVar7 = storeDoubleWordConditionalIndexed
                            (((unsigned __int64)uVar1 << 0x20) + (lVar7 + 1U & 0x7fffffff),0,lVar2);
          *plVar3 = lVar7;
        }
        else {
          lVar7 = storeDoubleWordConditionalIndexed(*plVar3,0,lVar2);
          *plVar3 = lVar7;
        }
      }
    } while (uVar1 == 0);
    uVar4 = *(unsigned __int64 *)(uVar1 + 8);
    sync(1);
    if (*plVar6 == lVar8) break;
    lVar7 = storeDoubleWordConditionalIndexed(*plVar6,0,lVar5);
    *plVar6 = lVar7;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (((unsigned __int64)uVar1 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
  *plVar6 = lVar2;
  *param_2 = uVar4;
  while( true ) {
    plVar3 = (__int64 *)param_1;
    lVar2 = *plVar3;
    puStack_20 = (unsigned int *)((unsigned __int64)lVar2 >> 0x20);
    puVar9[2] = (unsigned int)puStack_20;
    sync(1);
    if (*plVar3 == lVar2) break;
    lVar2 = storeDoubleWordConditionalIndexed(*plVar3,0,param_1);
    *plVar3 = lVar2;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    ((lVar2 + 1U & 0x7fffffff) + (ZEXT48(puVar9) << 0x20),0,param_1);
  *plVar3 = lVar2;
  if (*(int *)((int)plVar3 + 0x1c) != 0) {
    puVar9 = (unsigned int *)(param_1 + 0x18);
    lVar2 = (unsigned __int64)*puVar9 + 1;
    uVar1 = storeWordConditionalIndexed(lVar2,0,param_1 + 0x18);
    *puVar9 = uVar1;
    if ((int)lVar2 < 1) {
      fn_82BFEAD8(*(unsigned int *)((int)plVar3 + 0x1c),1);
    }
  }
  return 0;
}

