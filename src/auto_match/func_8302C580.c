void fn_8302C580(unsigned int *param_1,unsigned short param_2,char param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 0x20) {
    uVar1 = 1 << (uVar1 & 0x3f);
    uVar2 = uVar1 | param_1[0x11];
    if (param_3 == '\0') {
      uVar2 = param_1[0x11] & ~uVar1;
    }
    param_1[0x11] = uVar2;
    *(unsigned short *)((*param_1 + 2) * 2 + (int)param_1) = param_2;
    *param_1 = *param_1 + 1;
    return;
  }
  *param_1 = uVar1 + 1;
  return;
}

