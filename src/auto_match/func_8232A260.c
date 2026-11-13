extern int fn_8232A928();
extern int fn_8232A988();


unsigned __int64 fn_8232A260(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_1 >> 0x3f;
  uVar2 = param_1 >> 0x34 & 0x7ff;
  if (uVar2 == 0) {
LAB_8232a2a0:
    fn_8232A928();
  }
  else {
    uVar2 = uVar2 - 0x380;
    if ((__int64)uVar2 < 1) {
      if (0x3f < -uVar2) goto LAB_8232a2a0;
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,0,1,8);
      uVar1 = ((param_1 & 0xfffffffffffff | 0x10000000000000) >> (-uVar2 + 1 & 0x7f)) >> 0x1c;
    }
    else if (uVar2 < 0x100) {
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,uVar2,1,8);
      uVar1 = (param_1 & 0xfffffffffffff) >> 0x1c;
    }
    else {
      fn_8232A988(param_2,uVar1,0,1);
      fn_8232A988(param_2,0xff,1,8);
      uVar1 = 0xffffff;
    }
    fn_8232A988(param_2,uVar1,9,0x18);
  }
  return param_2;
}

