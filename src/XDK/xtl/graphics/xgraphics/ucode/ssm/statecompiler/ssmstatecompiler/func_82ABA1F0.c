extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB6F58();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82AB9738();
extern int fn_82B6D410();
extern int fn_82B7D980();
extern int fn_82B7E460();
extern int fn_82B7F3D8();
extern int fn_82BA02A8();


unsigned __int64 fn_82ABA1F0(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  uVar2 = *(unsigned int *)(param_1 + 0x10);
  uVar3 = fn_82AB6EC0(param_2,1);
  lVar4 = fn_82AB9738(uVar2,uVar3);
  if (lVar4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d76fc,0xffffffff820d7628,0x232);
    uVar3 = 0x13;
  }
  else {
    uVar5 = fn_82B6D410(*(unsigned int *)(param_1 + 0xc),2);
    *param_3 = (int)uVar5;
    if ((uVar5 & 0xffffffff) == 0) {
      fn_82AB15D0(uVar5,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x23d);
      uVar3 = 0x10;
    }
    else {
      uVar6 = fn_82B7F3D8();
      fn_82AB6F58(uVar6,uVar3);
      fn_82AB81E8(*(unsigned int *)(param_1 + 0x2c));
      fn_82AB7010(uVar6,*(unsigned int *)(param_1 + 0x2c));
      fn_82BA02A8(uVar1,0xffffffff820d76b0,uVar3);
      uVar3 = fn_82B7D980(uVar1,uVar6,lVar4,param_2);
      if (((int)uVar3 == 0) && (uVar3 = fn_82AB7C30(uVar6), (int)uVar3 == 0)) {
        fn_82B7E460(*param_3,param_2);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

