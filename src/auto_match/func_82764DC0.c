extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF4E8();
extern int fn_826DFA28();
extern int fn_826EBB60();
extern int fn_8275B020();
extern int fn_827601F0();


__int64 fn_82764DC0(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  
  uVar4 = fn_826DF4E8(param_2);
  uVar4 = uVar4 & 0xff;
  if ((2 < (int)param_3) && (uVar4 == 0xff)) {
    uVar4 = fn_826A6A38(param_2);
    uVar4 = uVar4 & 0xffff;
  }
  iVar5 = *(int *)(param_2 + 0x314);
  if (iVar5 == 0) {
    iVar5 = param_2 + 0x28;
  }
  uVar1 = *(unsigned int *)(iVar5 + 0x34);
  uVar2 = *(unsigned int *)(iVar5 + 0x30);
  uVar3 = *(unsigned int *)(iVar5 + 0x2c);
  if (param_1 == (unsigned int *)0x0) {
    if (uVar4 != 0) {
      fn_826DFA28(param_2 + 0x14,0xffffffff82014a30,uVar4);
    }
  }
  else {
    fn_826A9280(param_2 + 0x14,0xffffffff82014a80,uVar4);
    uVar8 = (unsigned __int64)param_1[1];
    if (uVar4 != 0) {
      uVar6 = uVar8 + uVar4;
      fn_826EBB60(param_1,param_1,uVar6);
      if (uVar8 < (uVar6 & 0xffffffff)) {
        fn_827601F0(uVar8 * 0x28 + (unsigned __int64)*param_1,uVar6 - uVar8);
      }
      if (uVar4 != 0) {
        lVar7 = uVar8 * 0x28;
        do {
          iVar5 = *(int *)(param_2 + 0x314);
          if (iVar5 == 0) {
            iVar5 = param_2 + 0x28;
          }
          *(unsigned char *)(iVar5 + 0x15) = 0;
          fn_8275B020((unsigned __int64)*param_1 + lVar7,param_2,param_3);
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar4 != 0);
      }
    }
  }
  return ((unsigned __int64)uVar1 - (unsigned __int64)uVar2) + (unsigned __int64)uVar3;
}

