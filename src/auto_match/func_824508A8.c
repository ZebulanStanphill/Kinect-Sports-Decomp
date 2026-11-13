#define true 1
extern int fn_82450AE0();
extern int fn_82450E80();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_824508A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  uVar5 = (int)param_2 - (int)param_1 >> 3;
  uVar7 = param_2;
  if (0x20 < (int)uVar5) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar7;
      if (iVar8 < 1) break;
      fn_82450AE0(&uStack_40,param_1,uVar7,param_4);
      param_3 = (__int64)(iVar8 >> 1) + (unsigned __int64)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = (unsigned __int64)uStack_3c;
      param_2 = (unsigned __int64)uStack_40;
      if ((int)(uStack_40 - (int)param_1 & 0xfffffff8) < (int)((int)uVar7 - uStack_3c & 0xfffffff8))
      {
        fn_824508A8(param_1,param_2,param_3,param_4);
        param_2 = uVar7;
        param_1 = uVar9;
      }
      else {
        fn_824508A8(uVar9,uVar7,param_3,param_4);
      }
      uVar5 = (int)param_2 - (int)param_1 >> 3;
      uVar7 = param_2;
    } while (0x20 < (int)uVar5);
    if (0x20 < (int)uVar5) {
      if ((int)uVar5 < 2) {
        return;
      }
      uVar7 = (__int64)((int)uVar5 >> 1) + (unsigned __int64)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      if (0 < (__int64)uVar7) {
        lVar6 = (uVar7 & 0x1fffffff) * 8 + param_1;
        do {
          lVar6 = lVar6 + -8;
          uStack_40 = *(unsigned int *)lVar6;
          uVar7 = uVar7 - 1;
          uStack_3c = ((unsigned int *)lVar6)[1];
          fn_82450E80(param_1,uVar7,uVar5,&uStack_40,param_4);
        } while (0 < (int)uVar7);
      }
      if ((int)uVar5 < 2) {
        return;
      }
      puVar3 = (unsigned int *)param_1;
      lVar6 = param_2 - 4;
      do {
        puVar4 = (unsigned int *)lVar6;
        uStack_40 = puVar4[-1];
        uStack_3c = *puVar4;
        puVar4[-1] = *puVar3;
        *puVar4 = puVar3[1];
        fn_82450E80(param_1,0,(-4 - (int)puVar3) + (int)puVar4 >> 3,&uStack_40,param_4);
        lVar6 = lVar6 + -8;
      } while (8 < (int)((4 - (int)puVar3) + (int)lVar6 & 0xfffffff8U));
      return;
    }
  }
  if ((1 < (int)uVar5) && (uVar7 = param_1, (param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    while (uVar9 = uVar7 + 8, (uVar9 & 0xffffffff) != (param_2 & 0xffffffff)) {
      puVar3 = (unsigned int *)param_1;
      puVar4 = (unsigned int *)uVar9;
      iVar8 = puVar4[1];
      uVar1 = *puVar4;
      if (iVar8 < (int)puVar3[1]) {
        lVar6 = uVar7 + 0xc;
        if ((param_1 & 0xffffffff) != (uVar9 & 0xffffffff)) {
          do {
            uVar7 = lVar6 - 0xc;
            puVar4 = (unsigned int *)lVar6;
            puVar4[-1] = puVar4[-3];
            *puVar4 = *(unsigned int *)(lVar6 + -8);
            lVar6 = lVar6 + -8;
          } while ((uVar7 & 0xffffffff) != (param_1 & 0xffffffff));
        }
        *puVar3 = uVar1;
        puVar3[1] = iVar8;
        uVar7 = uVar9;
      }
      else {
        iVar2 = puVar4[-1];
        uVar7 = uVar9;
        while( true ) {
          puVar3 = (unsigned int *)uVar7;
          if (iVar2 <= iVar8) break;
          puVar4 = (unsigned int *)(uVar7 - 8);
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          iVar2 = puVar4[-1];
          uVar7 = uVar7 - 8;
        }
        *puVar3 = uVar1;
        puVar3[1] = iVar8;
        uVar7 = uVar9;
      }
    }
  }
  return;
}

