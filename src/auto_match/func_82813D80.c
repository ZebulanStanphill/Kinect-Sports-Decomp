typedef unsigned char bool;
#define true 1
extern int fn_82813428();
extern int fn_82813CB8();
extern int fn_82A1E810();
extern unsigned int iStack_24;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82813D80(__int64 param_1,unsigned int *param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 *plVar9;
  char in_RESERVE;
  unsigned char bVar10;
  __int64 lStack_40;
  unsigned int *puStack_38;
  __int64 *plStack_34;
  unsigned __int64 uStack_30;
  unsigned int *puStack_28;
  int iStack_24;
  
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x30) == '\0') {
    lVar4 = fn_82813CB8(param_1,0x10);
    bVar1 = lVar4 == 0;
    if (!bVar1) {
      puVar5 = (unsigned int *)lVar4;
      *puVar5 = *param_2;
      puVar5[2] = 0;
      do {
        puVar8 = (unsigned int *)(lVar4 + 0xc);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,lVar4 + 0xc);
          *puVar8 = uVar2;
          bVar1 = true;
        }
      } while (!bVar1);
      if (*(__int64 *)(iVar3 + 0x10) == 0) {
        sync(1);
      }
      plVar9 = (__int64 *)(iVar3 + 0x28);
      do {
        while( true ) {
          do {
            lVar4 = *plVar9;
            lStack_40 = ((((unsigned __int64)(lStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)lVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
            iStack_24 = (((unsigned __int64)(lStack_40) >> 0) & 0xFFFFFFFF) + 8;
            uVar7 = *(unsigned __int64 *)((((unsigned __int64)(lStack_40) >> 0) & 0xFFFFFFFF) + 8);
          } while (lVar4 != *plVar9);
          uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uVar7 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
          lStack_40 = lVar4;
          plStack_34 = plVar9;
          uStack_30 = uVar7;
          if ((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) == 0) break;
          puStack_38 = (unsigned int *)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
          fn_82813428(&lStack_40);
        }
        puStack_28 = puVar5;
        cVar6 = fn_82813428(&uStack_30);
        bVar10 = (cVar6 == '\0') << 1;
      } while (cVar6 == '\0');
      puStack_38 = puVar5;
      fn_82813428(&lStack_40);
      do {
        puVar8 = (unsigned int *)(param_1 + 0x34);
        lVar4 = (unsigned __int64)*puVar8 + 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x34);
          *puVar8 = uVar2;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (((int)lVar4 == 1) && (*(int *)(iVar3 + 0x38) != 0)) {
        fn_82A1E810();
      }
      return 1;
    }
  }
  return 0;
}

