extern int fn_82FA60D8();
extern int fn_82FA61A0();
extern int fn_82FA6260();


void fn_82FA6550(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar6 = 0;
  if ((((param_3 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) < 0x40000000)) &&
     (uVar6 = param_3 + 3 & 0xfffffffc, uVar6 < 0xd)) {
    uVar6 = 0xc;
  }
  uVar2 = 0;
  uVar4 = uVar6 + param_2 + 0x10;
  if ((uVar4 != 0) && ((uVar4 & 0xffffffff) < 0x40000000)) {
    uVar2 = (uVar4 + param_2) - 1 & ~(param_2 - 1);
    if ((uVar2 & 0xffffffff) < 0xd) {
      uVar2 = 0xc;
    }
  }
  if ((param_2 & 0xffffffff) < 5) {
    uVar2 = uVar6;
  }
  uVar2 = fn_82FA61A0(param_1,uVar2);
  if ((uVar2 & 0xffffffff) != 0) {
    lVar5 = uVar2 + 8;
    uVar4 = (lVar5 + param_2) - 1 & ~(param_2 - 1);
    lVar1 = uVar4 - lVar5;
    if (lVar1 != 0) {
      if ((int)lVar1 < 0x10) {
        uVar3 = 0x10U - lVar1;
        if ((int)(0x10U - lVar1) <= (int)param_2) {
          uVar3 = param_2;
        }
        lVar1 = ((uVar3 + uVar4 + param_2) - 1 & ~(param_2 - 1)) - lVar5;
      }
      if ((int)lVar1 != 0) {
        uVar2 = fn_82FA60D8(param_1,uVar2);
      }
    }
  }
  fn_82FA6260(param_1,uVar2,uVar6);
  return;
}

