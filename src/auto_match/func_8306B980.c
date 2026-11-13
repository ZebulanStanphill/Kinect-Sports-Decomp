extern int fn_82810380();
extern int fn_8281D3B0();


unsigned __int64 fn_8306B980(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar2 = 1;
  if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
    lVar3 = 6;
    uVar4 = param_2;
    do {
      uVar1 = fn_82810380(param_1,uVar4,(param_3 - param_2) + uVar4);
      lVar3 = lVar3 + -1;
      uVar2 = uVar1 & uVar2;
      uVar4 = uVar4 + 0xc;
    } while (lVar3 != 0);
    lVar5 = param_2 + 0x48;
    lVar3 = 6;
    do {
      uVar4 = fn_8281D3B0(param_1,lVar5,lVar5 + (param_3 - param_2));
      lVar3 = lVar3 + -1;
      uVar2 = uVar4 & uVar2;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 != 0);
  }
  return uVar2;
}

