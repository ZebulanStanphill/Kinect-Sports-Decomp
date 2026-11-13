extern unsigned int *auStack_60;
extern int fn_82551528();
extern int fn_825519F8();
extern int fn_82551ED8();
extern int fn_82F68CC0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_825510B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_60 [96];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0x18;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_82551528(&uStack_70,param_1,uVar6,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (unsigned __int64)uStack_6c;
      param_2 = (unsigned __int64)uStack_70;
      if ((int)(uStack_70 - (int)param_1) / 0x18 < (int)((int)uVar6 - uStack_6c) / 0x18) {
        fn_825510B0(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_825510B0(uVar7,uVar6,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0x18;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0x18 + param_1;
        do {
          lVar3 = lVar3 + -0x18;
          lVar4 = lVar4 + -1;
          fn_82F68CC0(auStack_60,lVar3,0x18);
          fn_82551ED8(param_1,lVar4,uVar1,auStack_60,param_4);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0x18;
      do {
        fn_82F68CC0(auStack_60,lVar4,0x18);
        fn_82F68CC0(lVar4,param_1,0x18);
        fn_82551ED8(param_1,0,((int)lVar2 + -0x18) / 0x18,auStack_60,param_4);
        lVar4 = lVar4 + -0x18;
        lVar2 = (lVar4 - param_1) + 0x18;
      } while (1 < (int)lVar2 / 0x18);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_825519F8(param_1,param_2,param_4);
  }
  return;
}

