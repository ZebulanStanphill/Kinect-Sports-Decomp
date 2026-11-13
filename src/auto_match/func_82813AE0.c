typedef unsigned char bool;
#define true 1
extern int fn_82813428();
extern int fn_82813680();
extern int fn_82A1E7D8();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82813AE0(__int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  char cVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  __int64 *plVar10;
  __int64 *plVar11;
  char in_RESERVE;
  unsigned char bVar12;
  __int64 lStack_60;
  unsigned int *puStack_58;
  __int64 *plStack_54;
  __int64 lStack_50;
  unsigned int *puStack_48;
  __int64 *plStack_44;
  
  iVar4 = (int)param_1;
  plVar11 = (__int64 *)(iVar4 + 0x20);
  plVar10 = (__int64 *)(iVar4 + 0x28);
  while( true ) {
    do {
      do {
        lVar8 = *plVar11;
        lVar6 = *plVar10;
        lStack_60 = ((((unsigned __int64)(lStack_60)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)lVar6 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        lStack_50 = ((((unsigned __int64)(lStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)lVar8 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        uVar7 = (unsigned __int64)(((unsigned __int64)(lStack_50) >> 0) & 0xFFFFFFFF);
        puVar1 = *(unsigned int **)((((unsigned __int64)(lStack_50) >> 0) & 0xFFFFFFFF) + 8);
        puStack_48 = (unsigned int *)(((unsigned __int64)(lStack_50) >> 0) & 0xFFFFFFFF);
        puStack_58 = (unsigned int *)(((unsigned __int64)(lStack_60) >> 0) & 0xFFFFFFFF);
      } while (lVar8 != *plVar11);
    } while (lVar6 != *plVar10);
    if (puVar1 == (unsigned int *)0x0) break;
    lStack_60 = lVar6;
    plStack_54 = plVar10;
    lStack_50 = lVar8;
    plStack_44 = plVar11;
    if ((((unsigned __int64)(lStack_60) >> 0) & 0xFFFFFFFF) == (((unsigned __int64)(lStack_50) >> 0) & 0xFFFFFFFF)) {
      puStack_58 = puVar1;
      fn_82813428(&lStack_60);
    }
    else {
      if (*(__int64 *)(iVar4 + 0x10) == 0) {
        sync(1);
      }
      uVar2 = *puVar1;
      puStack_48 = puVar1;
      cVar5 = fn_82813428(&lStack_50);
      bVar12 = (cVar5 == '\0') << 1;
      if (cVar5 != '\0') {
        *param_2 = uVar2;
        lVar6 = uVar7 + 0xc;
        do {
          puVar9 = (unsigned int *)lVar6;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar6);
            *puVar9 = uVar3;
            bVar12 = 2;
          }
        } while (!(bool)(bVar12 >> 1));
        fn_82813680(param_1,uVar7);
        do {
          puVar9 = (unsigned int *)(param_1 + 0x34);
          lVar6 = (unsigned __int64)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar6,0,param_1 + 0x34);
            *puVar9 = uVar3;
            bVar12 = 2;
          }
        } while (!(bool)(bVar12 >> 1 & 1));
        if (((int)lVar6 == 0) && (*(int *)(iVar4 + 0x38) != 0)) {
          fn_82A1E7D8();
        }
        return 1;
      }
    }
  }
  return 0;
}

