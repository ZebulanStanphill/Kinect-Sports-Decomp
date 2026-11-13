extern int fn_826914C0();
extern int fn_82F691F0();


unsigned __int64 fn_82693008(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = fn_826914C0(param_2,0x400,0x400);
    *param_1 = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,0x400);
    }
  }
  else {
    uVar1 = 1;
    param_1[1] = param_1[1] + 1;
  }
  return uVar1;
}

