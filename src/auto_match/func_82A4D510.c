extern int fn_82A3FF60();
extern int fn_82A4D3F0();
extern int fn_82F691F0();


unsigned __int64 fn_82A4D510(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    if (((param_2 & 0xffffffff) == 0) || (0x40 < (param_2 & 0xffffffff))) {
      uVar1 = 0xffffffff88970001;
    }
    else {
      lVar3 = (param_2 & 0x3fffffff) << 2;
      if (0x3fffffff < (param_2 & 0xffffffff)) {
        lVar3 = -1;
      }
      uVar2 = fn_82A3FF60(0xffffffff83219d50,lVar3,0x2097000a,0);
      *(int *)(param_1 + 0x2c) = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,(param_2 & 0x3fffffff) << 2);
      }
      uVar1 = 0xffffffff8007000e;
      fn_82A4D3F0(param_1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

