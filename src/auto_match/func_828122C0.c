typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


bool fn_828122C0(unsigned __int64 param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 *plVar3;
  __int64 lVar4;
  
  uVar2 = fn_82A1BB18();
  plVar3 = (__int64 *)param_1;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(uVar2 & 0xffffffff | 0xffffffff00000000,0,param_1);
    *plVar3 = lVar1;
  }
  else {
    lVar1 = storeDoubleWordConditionalIndexed(lVar4,0,param_1);
    *plVar3 = lVar1;
  }
  return lVar4 == 0;
}

