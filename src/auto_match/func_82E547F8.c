extern int fn_82E50BE8();
extern int fn_82F691F0();


unsigned int * fn_82E547F8(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar3 = 0x80070057;
  }
  else {
    lVar1 = (param_2 & 0x7fffffff) << 1;
    if (0x7fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    uVar2 = fn_82E50BE8(lVar1,0,0,0,0);
    *param_1 = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(param_2 & 0x7fffffff) << 1);
    }
    uVar3 = 0x8007000e;
  }
  *param_3 = uVar3;
  return param_1;
}

