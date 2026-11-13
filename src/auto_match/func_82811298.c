void fn_82811298(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  param_1[4] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  if (uVar1 == 0) goto LAB_828112fc;
  if (uVar1 == 1) {
    uVar2 = 0x404;
LAB_828112ec:
    param_1[5] = uVar2;
    param_1[1] = 0xffffffff;
  }
  else {
    if (uVar1 < 3) {
      uVar2 = 4;
      goto LAB_828112ec;
    }
    if (uVar1 == 3) goto LAB_828112fc;
    if (4 < uVar1) {
      if (uVar1 != 5) {
        return;
      }
      goto LAB_828112fc;
    }
  }
  uVar2 = 1;
LAB_828112fc:
  *param_1 = uVar2;
  return;
}

