extern int fn_8291BB88();


unsigned int  fn_8291C070(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  uVar1 = fn_8291BB88(~param_2,param_3);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar1 = ~uVar1;
  }
  return uVar1;
}

