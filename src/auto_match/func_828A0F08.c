extern int fn_8265C9E0();
extern int fn_828AAAA0();


unsigned int  fn_828A0F08(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_8265C9E0(0x70);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_828AAAA0(uVar1,param_1);
    return uVar2;
  }
  return 0;
}

