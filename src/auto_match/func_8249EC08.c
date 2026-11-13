extern int fn_8249EDB0();
extern int fn_8249F160();
extern int fn_8249F338();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8249EC08(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0xc;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_8249EDB0(&uStack_50,param_1,uVar6);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (unsigned __int64)uStack_4c;
      param_2 = (unsigned __int64)uStack_50;
      if ((int)(uStack_50 - (int)param_1) / 0xc < (int)((int)uVar6 - uStack_4c) / 0xc) {
        fn_8249EC08(param_1,param_2,param_3);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_8249EC08(uVar7,uVar6,param_3);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0xc;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0xc + param_1;
        do {
          lVar3 = lVar3 + -0xc;
          puVar8 = (unsigned int *)lVar3;
          uStack_50 = *puVar8;
          lVar4 = lVar4 + -1;
          uStack_4c = puVar8[1];
          uStack_48 = puVar8[2];
          fn_8249F338(param_1,lVar4,uVar1,&uStack_50);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0xc;
      do {
        puVar9 = (unsigned int *)param_1;
        puVar8 = (unsigned int *)lVar4;
        uStack_50 = *puVar8;
        uStack_4c = puVar8[1];
        uStack_48 = puVar8[2];
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        fn_8249F338(param_1,0,((int)lVar2 + -0xc) / 0xc,&uStack_50);
        lVar4 = lVar4 + -0xc;
        lVar2 = (lVar4 - param_1) + 0xc;
      } while (1 < (int)lVar2 / 0xc);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_8249F160(param_1,param_2);
  }
  return;
}

