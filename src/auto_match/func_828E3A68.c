extern int fn_8265C9E0();
extern int fn_828E3318();
extern int fn_828E7140();


unsigned __int64 fn_828E3A68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_8265C9E0(0x1c);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_828E7140(param_1,0);
  }
  else {
    uVar2 = fn_828E3318(uVar1,param_2,param_3);
    fn_828E7140(param_1,uVar2);
  }
  return param_1;
}

