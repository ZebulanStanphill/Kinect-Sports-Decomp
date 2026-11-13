extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF4E8();
extern int fn_826DFA28();
extern int fn_8275B958();
extern int fn_82760248();
extern int fn_82761138();


__int64 fn_82763810(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int iVar9;
  unsigned __int64 uVar8;
  
  uVar4 = fn_826DF4E8(param_2);
  uVar4 = uVar4 & 0xff;
  iVar9 = param_2 + 0x14;
  fn_826A9280(iVar9,0xffffffff820149bc,uVar4);
  if (uVar4 == 0xff) {
    uVar4 = fn_826A6A38(param_2);
    uVar4 = uVar4 & 0xffff;
    fn_826A9280(iVar9,0xffffffff82014998,uVar4);
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
      fn_826DFA28(iVar9,0xffffffff82014948,uVar4);
    }
  }
  else {
    uVar8 = (unsigned __int64)param_1[1];
    uVar6 = uVar8 + uVar4;
    fn_82761138(param_1,param_1,uVar6);
    if (uVar8 < (uVar6 & 0xffffffff)) {
      fn_82760248(uVar8 * 0x18 + (unsigned __int64)*param_1,uVar6 - uVar8);
    }
    if (uVar4 != 0) {
      lVar7 = uVar8 * 0x18;
      do {
        iVar9 = *(int *)(param_2 + 0x314);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        *(unsigned char *)(iVar9 + 0x15) = 0;
        fn_8275B958((unsigned __int64)*param_1 + lVar7,param_2,param_3);
        uVar4 = uVar4 - 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar4 != 0);
    }
  }
  return ((unsigned __int64)uVar1 - (unsigned __int64)uVar2) + (unsigned __int64)uVar3;
}

