extern int fn_82AA8FD0();
extern int fn_82B68CA8();
extern int fn_82B68CF0();
extern int fn_82B68DA8();
extern int fn_82B68FC8();


void fn_82AAABA0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  lVar7 = (param_2 & 0x3fffffff) * 4;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 0x60) + lVar7;
  lVar6 = (unsigned __int64)*(unsigned int *)(param_3 + 0x50) + lVar7;
  lVar4 = (unsigned __int64)*(unsigned int *)(param_3 + 0x70) + lVar7;
  lVar3 = (unsigned __int64)*(unsigned int *)(param_3 + 0x40) + lVar7;
  fn_82B68FC8(lVar3,lVar6,lVar5,lVar4);
  lVar2 = (__int64)((int)param_1 >> 4) + (unsigned __int64)((int)param_1 < 0 && (param_1 & 0xf) != 0) + -1
  ;
  iVar1 = 0;
  if (0 < lVar2) {
    do {
      lVar5 = lVar5 + 0x40;
      lVar4 = lVar4 + 0x40;
      fn_82B68FC8(lVar3 + 0x40,lVar6 + 0x40,lVar5,lVar4);
      if (param_4 != 0) {
        fn_82B68CF0(lVar3 + 0x20,lVar6 + 0x20);
      }
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 0x40;
      lVar6 = lVar6 + 0x40;
    } while (iVar1 < (int)lVar2);
  }
  lVar3 = (unsigned __int64)*(unsigned int *)(param_3 + 0x40) + lVar7;
  lVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 0x48) + lVar7;
  lVar6 = (unsigned __int64)*(unsigned int *)(param_3 + 0x44) + lVar7;
  lVar7 = (unsigned __int64)*(unsigned int *)(param_3 + 0x4c) + lVar7;
  if (param_5 != 0) {
    fn_82AA8FD0(lVar3,lVar6,lVar2,lVar7);
  }
  fn_82B68DA8(lVar3,lVar6,lVar2,lVar7);
  iVar1 = 0;
  if (0 < (__int64)(param_1 - 4)) {
    do {
      lVar5 = lVar6 + 0x10;
      lVar7 = lVar7 + 0x10;
      lVar4 = lVar3 + 0x10;
      lVar2 = lVar2 + 0x10;
      if (param_5 != 0) {
        fn_82AA8FD0(lVar4,lVar5,lVar2,lVar7);
      }
      fn_82B68DA8(lVar4,lVar5,lVar2,lVar7);
      if (param_4 != 0) {
        fn_82B68CA8(lVar3 + 8,lVar6 + 8);
      }
      iVar1 = iVar1 + 4;
      lVar3 = lVar4;
      lVar6 = lVar5;
    } while (iVar1 < (int)(param_1 - 4));
  }
  return;
}

