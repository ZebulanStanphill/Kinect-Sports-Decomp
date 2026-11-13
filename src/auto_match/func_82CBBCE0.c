extern int malloc();
extern int fn_82F691F0();


unsigned __int64 fn_82CBBCE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (param_1 != (unsigned int *)0x0) {
    if ((param_2 & 0xffffffff) < 0x10) {
      param_2 = 0x10;
    }
    if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
      param_3 = param_2;
    }
    uVar1 = malloc((param_2 & 0x3fffffff) << 2);
    *param_1 = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      param_1[1] = (int)param_2;
      if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
        param_2 = param_3;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,(param_2 & 0x3fffffff) << 2);
    }
  }
  return 0;
}

