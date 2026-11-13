#define true 1
extern int fn_82551B18();
extern int fn_825520B8();
extern unsigned int uStack_50;


void fn_82551260(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  unsigned __int64 *puVar10;
  unsigned __int64 uStack_50;
  
  lVar5 = param_2 - param_1;
  uVar4 = (int)lVar5 >> 3;
  uVar7 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar7;
      if (iVar8 < 1) break;
      fn_82551B18(&uStack_50,param_1,uVar7,param_4);
      param_3 = (__int64)(iVar8 >> 1) + (unsigned __int64)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = uStack_50 & 0xffffffff;
      param_2 = (unsigned __int64)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
      if ((int)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) - (int)param_1 & 0xfffffff8) <
          (int)((int)uVar7 - (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) & 0xfffffff8U)) {
        fn_82551260(param_1,param_2,param_3,param_4);
        param_2 = uVar7;
        param_1 = uVar9;
      }
      else {
        fn_82551260(uVar9,uVar7,param_3,param_4);
      }
      lVar5 = param_2 - param_1;
      uVar4 = (int)lVar5 >> 3;
      uVar7 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      uVar7 = (__int64)((int)uVar4 >> 1) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < (__int64)uVar7) {
        lVar6 = (uVar7 & 0x1fffffff) * 8 + param_1;
        do {
          lVar6 = lVar6 + -8;
          uStack_50 = *(unsigned __int64 *)lVar6;
          uVar7 = uVar7 - 1;
          fn_825520B8(param_1,uVar7,uVar4,&uStack_50,param_4);
        } while (0 < (int)uVar7);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      lVar6 = param_2 - 8;
      do {
        puVar10 = (unsigned __int64 *)lVar6;
        uStack_50 = *puVar10;
        *(unsigned int *)puVar10 = *(unsigned int *)param_1;
        *(unsigned int *)((int)puVar10 + 4) = ((unsigned int *)param_1)[1];
        fn_825520B8(param_1,0,(int)lVar5 + -8 >> 3,&uStack_50,param_4);
        lVar6 = lVar6 + -8;
        lVar5 = (lVar6 - param_1) + 8;
      } while (8 < (int)((unsigned int)lVar5 & 0xfffffff8));
      return;
    }
  }
  if ((1 < (int)uVar4) && (uVar7 = param_1, (param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    while( true ) {
      uVar7 = uVar7 + 8;
      if ((uVar7 & 0xffffffff) == (param_2 & 0xffffffff)) break;
      uVar1 = *(unsigned __int64 *)uVar7;
      uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)uVar1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      if ((((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) < *(int *)((int)(unsigned __int64 *)param_1 + 4)) {
        uVar9 = uVar7;
        if ((param_1 & 0xffffffff) != (uVar7 & 0xffffffff)) {
          do {
            uVar2 = uVar9 - 8;
            puVar3 = (unsigned int *)uVar9;
            *puVar3 = *(unsigned int *)uVar2;
            puVar3[1] = puVar3[-1];
            uVar9 = uVar2;
          } while ((uVar2 & 0xffffffff) != (param_1 & 0xffffffff));
        }
        *(unsigned __int64 *)param_1 = uVar1;
      }
      else {
        iVar8 = *(int *)((int)(unsigned __int64 *)uVar7 + -4);
        uVar9 = uVar7;
        while( true ) {
          puVar10 = (unsigned __int64 *)uVar9;
          if (iVar8 <= (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF)) break;
          puVar3 = (unsigned int *)(uVar9 - 8);
          *(unsigned int *)puVar10 = *puVar3;
          *(unsigned int *)((int)puVar10 + 4) = puVar3[1];
          iVar8 = puVar3[-1];
          uVar9 = uVar9 - 8;
        }
        *puVar10 = uVar1;
      }
    }
  }
  return;
}

