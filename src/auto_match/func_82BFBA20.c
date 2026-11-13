#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern int fn_82BFB960();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


int fn_82BFBA20(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  __int64 *plVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int auStack_20 [2];
  
  if ((((param_3 < 1) || (param_3 == -8)) || (param_3 + 8 < param_3)) ||
     (iVar1 = fn_82BFB960(param_1,auStack_20), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    puVar3 = (unsigned int *)(iVar1 + param_3);
    puVar3[1] = auStack_20[0];
    while( true ) {
      plVar2 = (__int64 *)param_2;
      lVar4 = *plVar2;
      auStack_20[0] = (unsigned int)((unsigned __int64)lVar4 >> 0x20);
      *puVar3 = auStack_20[0];
      sync(1);
      if (*plVar2 == lVar4) break;
      lVar4 = storeDoubleWordConditionalIndexed(*plVar2,0,param_2);
      *plVar2 = lVar4;
    }
    lVar4 = storeDoubleWordConditionalIndexed
                      ((lVar4 + 1U & 0x7fffffff) + (ZEXT48(puVar3) << 0x20),0,param_2);
    *plVar2 = lVar4;
  }
  return iVar1;
}

