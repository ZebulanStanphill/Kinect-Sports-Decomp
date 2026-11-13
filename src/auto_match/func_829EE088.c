extern int fn_829EC0F8();
extern int fn_82F691F0();


void fn_829EE088(unsigned int *param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  if (((param_2 < 1) || (param_3 < 0)) || (param_2 <= param_3)) {
    *param_1 = 0x80070057;
  }
  else {
    uVar1 = fn_829EC0F8(param_1 + 1,param_2 << 2,1,1);
    param_1[6] = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      param_1[8] = param_3;
      param_1[7] = param_2;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,param_2 << 2);
    }
    param_1[8] = 0;
    *param_1 = 0x8007000e;
    param_1[7] = 0;
  }
  return;
}

