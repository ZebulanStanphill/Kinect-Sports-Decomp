extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8243ECC8();
extern int fn_8243FDE0();
extern int fn_82440118();
extern int fn_82F68CC0();
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_8243E7B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_c0 [8];
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [176];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0x5c;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_8243ECC8(&uStack_b8,param_1,uVar6,param_4);
      param_3 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (unsigned __int64)uStack_b4;
      param_2 = (unsigned __int64)uStack_b8;
      if ((int)(uStack_b8 - (int)param_1) / 0x5c < (int)((int)uVar6 - uStack_b4) / 0x5c) {
        fn_8243E7B0(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_8243E7B0(uVar7,uVar6,param_3,param_4);
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
          fn_82440118(param_1,lVar4,uVar1,auStack_b0,param_4);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0x5c;
      do {
        fn_82F68CC0(auStack_b0,lVar4,0x5c);
        fn_82F68CC0(lVar4,param_1,0x5c);
        fn_82440118(param_1,0,((int)lVar2 + -0x5c) / 0x5c,auStack_b0,param_4);
        lVar4 = lVar4 + -0x5c;
        lVar2 = (lVar4 - param_1) + 0x5c;
      } while (1 < (int)lVar2 / 0x5c);
      return;
    }
  }
  if ((1 < (int)uVar1) &&
     (auStack_c0[0] = (unsigned char)param_4, (param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    fn_8243FDE0(param_1,param_2,auStack_c0);
  }
  return;
}

