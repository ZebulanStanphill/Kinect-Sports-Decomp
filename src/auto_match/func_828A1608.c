extern int fn_8223BBA0();
extern int fn_8265C9E0();


unsigned int  fn_828A1608(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_8265C9E0(0x2e8);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_8223BBA0(uVar1,param_1);
    return uVar2;
  }
  return 0;
}

