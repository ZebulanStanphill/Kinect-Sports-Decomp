void fn_82404AA0(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  
  if (*(int *)(*param_2 + 0x24) != 0) {
    if (param_2[4] == 8) {
      uVar1 = *param_1 | 0x80;
    }
    else {
      uVar1 = *param_1 | 0x40;
    }
    *param_1 = uVar1;
  }
  if (*(int *)(param_2[1] + 0x24) == 0) {
    return;
  }
  *param_1 = *param_1 | 0x20;
  return;
}

