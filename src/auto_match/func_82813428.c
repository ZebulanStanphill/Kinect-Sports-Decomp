#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned __int64 storeDoubleWordConditionalIndexed();


unsigned __int64 fn_82813428(__int64 *param_1)

{
  __int64 *plVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  plVar1 = *(__int64 **)((int)param_1 + 0xc);
  lVar3 = CONCAT44(*(unsigned int *)(param_1 + 1),(int)*param_1 + 1);
  lVar4 = *plVar1;
  if (lVar4 == *param_1) {
    lVar2 = storeDoubleWordConditionalIndexed(lVar3,0,ZEXT48(plVar1));
    *plVar1 = lVar2;
  }
  else {
    lVar2 = storeDoubleWordConditionalIndexed(lVar4,0,ZEXT48(plVar1));
    *plVar1 = lVar2;
  }
  if (lVar4 == *param_1) {
    *param_1 = lVar3;
    return 1;
  }
  return 0;
}

