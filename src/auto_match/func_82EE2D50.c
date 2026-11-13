extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82EE2D50(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (param_3 != 0xffffffff) {
    param_1[3] = param_3;
  }
  if ((param_2 & 0xffffffff) == 0) {
    if (*param_1 != 0) {
      fn_82E4FE40();
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
LAB_82ee2ed8:
    uVar3 = 1;
  }
  else {
    if ((unsigned __int64)*param_1 == 0) {
      lVar4 = (param_2 & 0x3fffffff) << 2;
      uVar2 = fn_82E50BE8(lVar4,0,0,0,0);
      *param_1 = (unsigned int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,lVar4);
      }
    }
    else {
      if ((param_2 & 0xffffffff) <= (unsigned __int64)param_1[2]) {
        uVar1 = param_1[1];
        if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(((unsigned __int64)uVar1 & 0x3fffffff) * 4 + (unsigned __int64)*param_1,0,
                       (param_2 - uVar1 & 0x3fffffff) << 2);
        }
        param_1[1] = (unsigned int)param_2;
        goto LAB_82ee2ed8;
      }
      uVar2 = (unsigned __int64)param_1[3];
      if (uVar2 == 0) {
        uVar2 = (unsigned __int64)(param_1[1] >> 3);
        if (uVar2 < 4) {
LAB_82ee2e54:
          uVar2 = 4;
        }
        else if (uVar2 < 0x401) {
          if (uVar2 < 4) goto LAB_82ee2e54;
        }
        else {
          uVar2 = 0x400;
        }
      }
      uVar2 = param_1[2] + uVar2;
      if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) {
        uVar2 = param_2;
      }
      lVar4 = fn_82E50BE8((uVar2 & 0x3fffffff) << 2,0,0,0,0);
      if (lVar4 != 0) {
        fn_82F68CC0(lVar4,*param_1,param_1[1] << 2);
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(((unsigned __int64)param_1[1] & 0x3fffffff) * 4 + lVar4,0,
                     (param_2 - param_1[1] & 0x3fffffff) << 2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

