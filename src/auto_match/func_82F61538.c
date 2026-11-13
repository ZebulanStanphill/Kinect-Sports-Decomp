extern int fn_82F691F0();


unsigned __int64 fn_82F61538(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1[0x10] == 0) {
    if (param_2 != 0) {
      *param_1 = param_2;
      param_1[9] = 0;
      param_1[0xb] = 0;
      *(unsigned char *)(param_1 + 0xe) = 0;
      *(unsigned char *)((int)param_1 + 0x39) = 0;
      param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 3,0,0x18);
    }
    uVar1 = 0xffffffff82240403;
  }
  else {
    uVar1 = 0xffffffff82240404;
  }
  return uVar1;
}

