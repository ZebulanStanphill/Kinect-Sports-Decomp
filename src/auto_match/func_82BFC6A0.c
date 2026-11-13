#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2A618();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int fn_82BFC6A0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 *plVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned int *puStack_20;
  
  lVar4 = param_1 + 8;
  while( true ) {
    plVar5 = (__int64 *)lVar4;
    lVar6 = *plVar5;
    puStack_20 = (unsigned int *)((unsigned __int64)lVar6 >> 0x20);
    puVar7 = puStack_20;
    if (puStack_20 == (unsigned int *)0x0) {
      return 0;
    }
    sync(1);
    if (*plVar5 == lVar6) break;
    lVar6 = storeDoubleWordConditionalIndexed(*plVar5,0,lVar4);
    *plVar5 = lVar6;
  }
  lVar4 = storeDoubleWordConditionalIndexed
                    (((unsigned __int64)*puStack_20 << 0x20) + (lVar6 + 1U & 0x7fffffff),0,lVar4);
  *plVar5 = lVar4;
  uVar1 = puStack_20[1];
  uVar3 = ZEXT48(puStack_20);
  while( true ) {
    plVar5 = (__int64 *)param_1;
    lVar4 = *plVar5;
    puStack_20 = (unsigned int *)((unsigned __int64)lVar4 >> 0x20);
    *puVar7 = (unsigned int)puStack_20;
    sync(1);
    if (*plVar5 == lVar4) break;
    lVar4 = storeDoubleWordConditionalIndexed(*plVar5,0,param_1);
    *plVar5 = lVar4;
  }
  lVar4 = storeDoubleWordConditionalIndexed((lVar4 + 1U & 0x7fffffff) + (uVar3 << 0x20),0,param_1);
  *plVar5 = lVar4;
  if (*(int *)((int)plVar5 + 0x14) != 0) {
    puVar7 = (unsigned int *)(param_1 + 0x10);
    lVar4 = (unsigned __int64)*puVar7 + 1;
    uVar2 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x10);
    *puVar7 = uVar2;
    if ((int)lVar4 < 1) {
      fn_82A2A618(*(unsigned int *)((int)plVar5 + 0x14),1,0);
    }
  }
  return uVar1;
}

