extern int fn_828EB138();
extern int fn_828EB518();


unsigned int  fn_828EB5F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_828EB518();
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_828EB138(uVar1,param_2);
    return uVar2;
  }
  return 2;
}

