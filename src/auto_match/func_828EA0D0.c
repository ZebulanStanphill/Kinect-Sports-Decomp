extern int fn_828E9FF8();


unsigned __int64 fn_828EA0D0(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (0x20 < (int)param_2) {
    lVar1 = fn_828E9FF8(param_1,param_2 + -0x20);
    uVar3 = lVar1 << 0x20;
    param_2 = 0x20;
  }
  uVar2 = fn_828E9FF8(param_1,param_2);
  return uVar2 & 0xffffffff | uVar3;
}

