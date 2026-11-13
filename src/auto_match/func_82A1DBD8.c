extern int fn_82A32330();
extern int fn_82A32654();
extern int fn_82F68CC0();


__int64 fn_82A1DBD8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = -param_1 & 0x7f;
  if ((param_3 & 0xffffffff) < 0x100) {
    param_1 = fn_82F68CC0();
  }
  else {
    lVar2 = param_1;
    if (uVar1 != 0) {
      fn_82F68CC0(param_1,param_2,uVar1);
      lVar2 = uVar1 + param_1;
      param_2 = uVar1 + param_2;
      param_3 = param_3 - uVar1;
    }
    uVar1 = param_3 & 0xffffff80;
    if ((param_2 & 0xf) == 0) {
      fn_82A32330(lVar2,param_2,uVar1);
    }
    else {
      fn_82A32654();
    }
    if ((param_3 & 0x7f) != 0) {
      fn_82F68CC0(uVar1 + lVar2,uVar1 + param_2,param_3 & 0x7f);
    }
  }
  return param_1;
}

