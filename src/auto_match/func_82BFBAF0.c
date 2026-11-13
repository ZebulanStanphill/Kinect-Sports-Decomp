typedef unsigned char bool;
#define true 1
extern int fn_82A277E0();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BFBAF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 *plVar5;
  __int64 lVar6;
  __int64 lVar7;
  char cVar8;
  unsigned char bVar9;
  unsigned int *puStack_30;
  
  while( true ) {
    plVar5 = (__int64 *)param_2;
    lVar7 = *plVar5;
    puStack_30 = (unsigned int *)((unsigned __int64)lVar7 >> 0x20);
    if (puStack_30 == (unsigned int *)0x0) break;
    sync(1);
    cVar8 = '\x01';
    lVar6 = *plVar5;
    if (lVar6 == lVar7) {
      lVar2 = storeDoubleWordConditionalIndexed
                        (((unsigned __int64)*puStack_30 << 0x20) + (lVar7 + 1U & 0x7fffffff),0,param_2);
      *plVar5 = lVar2;
    }
    else {
      lVar2 = storeDoubleWordConditionalIndexed(lVar6,0,param_2);
      *plVar5 = lVar2;
    }
    bVar9 = 2;
    if (lVar6 == lVar7) {
      uVar1 = puStack_30[1];
      if (param_1 == 0) {
        uVar4 = fn_82A2A360();
        if (((param_3 & 0xffffffff) != 0) &&
           (lVar7 = fn_82A277E0(uVar4,0,uVar1), 0 < (int)lVar7)) {
          do {
            if (cVar8 != '\0') {
              uVar3 = storeWordConditionalIndexed((unsigned __int64)*(unsigned int *)param_3 - lVar7,0,param_3);
              *(unsigned int *)param_3 = uVar3;
              bVar9 = 2;
            }
          } while (!(bool)(bVar9 >> 1 & 1));
        }
        uVar4 = fn_82A2A360();
        fn_82A28E60(uVar4,0,uVar1);
      }
      else {
        (**(int (***)())(param_1 + 0xc))(*(unsigned int *)(param_1 + 4),uVar1);
      }
    }
  }
  return;
}

