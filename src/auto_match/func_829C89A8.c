extern int fn_829C8440();
extern unsigned int lbl_83215690;


unsigned __int64 fn_829C89A8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((param_1 == 1) || (1 < (param_2 & 0xffffffff))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = KfAcquireSpinLock(0xffffffff8321506c);
    if ((unsigned __int64)lbl_83215690 == (param_2 & 0xffffffff)) {
      KfReleaseSpinLock(0xffffffff8321506c,uVar1);
    }
    else {
      lbl_83215690 = (unsigned int)param_2;
      KfReleaseSpinLock(0xffffffff8321506c,uVar1);
      fn_829C8440(param_2,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

