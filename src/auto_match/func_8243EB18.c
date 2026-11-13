extern unsigned int *auStack_b0;
extern int fn_8243F850();
extern int fn_8243FCD8();
extern int fn_824406C0();
extern int fn_82F68CC0();
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8243EB18(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned char auStack_b0 [176];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0x5c;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_8243F850(&uStack_c0,param_1,uVar6,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (unsigned __int64)uStack_bc;
      param_2 = (unsigned __int64)uStack_c0;
      if ((int)(uStack_c0 - (int)param_1) / 0x5c < (int)((int)uVar6 - uStack_bc) / 0x5c) {
        fn_8243EB18(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_8243EB18(uVar7,uVar6,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0x5c;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0x5c + param_1;
        do {
          lVar3 = lVar3 + -0x5c;
          lVar4 = lVar4 + -1;
          fn_82F68CC0(auStack_b0,lVar3,0x5c);
          fn_824406C0(param_1,lVar4,uVar1,auStack_b0,param_4);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0x5c;
      do {
        fn_82F68CC0(auStack_b0,lVar4,0x5c);
        fn_82F68CC0(lVar4,param_1,0x5c);
        fn_824406C0(param_1,0,((int)lVar2 + -0x5c) / 0x5c,auStack_b0,param_4);
        lVar4 = lVar4 + -0x5c;
        lVar2 = (lVar4 - param_1) + 0x5c;
      } while (1 < (int)lVar2 / 0x5c);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_8243FCD8(param_1,param_2,param_4);
  }
  return;
}

