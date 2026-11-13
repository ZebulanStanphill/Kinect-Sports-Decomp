extern int fn_82E3C860();
extern int fn_82E50BE8();
extern int fn_82F691F0();


unsigned __int64 fn_82E3E4D8(int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else if ((param_1[1] & 1U) == 0) {
    if (*param_1 == 0) {
      lVar2 = (param_2 & 0x3fffffff) << 2;
      if (0x3fffffff < (param_2 & 0xffffffff)) {
        lVar2 = -1;
      }
      uVar3 = fn_82E50BE8(lVar2,0,0,0,0);
      *param_1 = (int)uVar3;
      if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar3,0,(param_2 & 0x3fffffff) << 2);
      }
      uVar1 = 0xffffffff8007000e;
    }
    else {
      uVar1 = 0xffffffff8000ffff;
    }
  }
  else {
    fn_82E3C860(param_1 + 4,8);
    param_1[3] = param_3;
    uVar1 = 0;
    param_1[2] = 0;
  }
  return uVar1;
}

