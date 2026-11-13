extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E65D40();


__int64 fn_82E65E20(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  uVar5 = param_2 - 1;
  uVar6 = (uVar5 & 0xffffffff) >> 1;
  uVar1 = (uVar6 | uVar5 & 0xffffffff) >> 2;
  uVar2 = (uVar1 | uVar6 | uVar5 & 0xffffffff) >> 4;
  uVar3 = (uVar2 | uVar1 | uVar6 | uVar5 & 0xffffffff) >> 8;
  uVar6 = (uVar3 | uVar2 | uVar1 | uVar6 | uVar5 & 0xffffffff) >> 0x10 |
          uVar3 | uVar2 | uVar1 | uVar6 | uVar5;
  if (uVar6 == 0xffffffffffffffff) {
    uVar6 = 0;
  }
  if ((uVar6 + param_1 & 0xffffffff) < (param_1 & 0xffffffff)) {
    lVar7 = -0x7fffbffb;
  }
  else {
    lVar4 = fn_82E50BE8(uVar6 + param_1,0,0,0,0);
    if (lVar4 == 0) {
      lVar7 = -0x7ff8fff2;
    }
    else {
      lVar7 = fn_82E65D40(param_1,lVar4,uVar6 + lVar4 & ~uVar6,param_3);
      if (lVar7 < 0) {
        fn_82E4FE40(lVar4);
      }
    }
  }
  return lVar7;
}

