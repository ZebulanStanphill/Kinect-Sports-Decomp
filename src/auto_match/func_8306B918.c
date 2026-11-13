extern int fn_82810360();
extern int fn_8281D340();


void fn_8306B918(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    lVar1 = 6;
    uVar2 = param_1;
    do {
      fn_82810360(uVar2,(param_2 - param_1) + uVar2);
      lVar1 = lVar1 + -1;
      uVar2 = uVar2 + 0xc;
    } while (lVar1 != 0);
    lVar3 = param_1 + 0x48;
    lVar1 = 6;
    do {
      fn_8281D340(lVar3,lVar3 + (param_2 - param_1));
      lVar1 = lVar1 + -1;
      lVar3 = lVar3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}

