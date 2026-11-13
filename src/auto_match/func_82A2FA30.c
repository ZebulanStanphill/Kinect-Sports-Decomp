extern int fn_82A2EBA0();


void fn_82A2FA30(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      param_2 = fn_82A2EBA0(param_1,param_2,1,0);
      if ((int)param_2 == -1) {
        return;
      }
      if ((param_2 & 0xffffffff) == 0xffffff) {
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

