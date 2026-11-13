extern unsigned int lbl_8208DE14;
extern unsigned int lbl_8208DE24;
extern unsigned int lbl_8208DE28;


unsigned __int64 fn_82E6DA00(int *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    param_3 = 100;
  }
  param_1[0x426b] = param_2;
  param_1[0x426c] = param_3;
  if (param_3 < 0x55) {
    param_1[0x41e7] = 0;
    param_1[0x41eb] = 0;
  }
  else {
    if ((*(int *)(iVar1 + 0x50) < 0xac44) || (iVar2 = 0, *(float *)(iVar1 + 0x30) <= lbl_8208DE28))
    {
      iVar2 = 1;
    }
    param_1[0x41e7] = iVar2;
    if ((*(int *)(iVar1 + 0x3c) != 2) || (iVar2 = 1, 0x28 < param_1[0x1d74])) {
      iVar2 = 0;
    }
    param_1[0x41eb] = iVar2;
  }
  if (param_3 < 100) {
    param_1[0x41ec] = 0;
    param_1[0x41f0] = 1;
  }
  else {
    param_1[0x41ec] = 1;
    if (*(float *)(iVar1 + 0x30) <= lbl_8208DE24) {
      iVar2 = 0x10;
      if (*(float *)(iVar1 + 0x30) <= lbl_8208DE14) {
        iVar2 = 0x20;
      }
    }
    else {
      iVar2 = 8;
    }
    param_1[0x41ed] = iVar2;
    param_1[0x41f0] = 0;
  }
  if (((99 < param_3) || (0x54 < param_3)) || (0x45 < param_3)) {
    param_1[0x4255] = 1;
    if (((*(int *)(iVar1 + 0x3c) < 3) || (param_1[0x41ea] != 0)) || (*(short *)(iVar1 + 0x22) == 2))
    {
      param_1[0x4242] = 1;
    }
    else {
      param_1[0x4242] = 0;
    }
    param_1[0x41d0] = 0;
    param_1[0x41ef] = 0;
    return 0;
  }
  if (((0x40 < param_3) && (param_1[5] == 0)) && (param_1[0x4270] == 0)) {
    param_1[0x4255] = 1;
    if (((*(int *)(iVar1 + 0x3c) < 3) || (param_1[0x41ea] != 0)) || (*(short *)(iVar1 + 0x22) == 2))
    {
      param_1[0x4242] = 1;
    }
    else {
      param_1[0x4242] = 0;
    }
    param_1[0x41d0] = 1;
    param_1[0x41ef] = 0;
    return 0;
  }
  if (0x36 < param_3) {
    iVar2 = param_1[5];
    param_1[0x4255] = (unsigned int)(iVar2 != 0);
    if (((*(int *)(iVar1 + 0x3c) < 3) || (param_1[0x41ea] != 0)) || (*(short *)(iVar1 + 0x22) == 2))
    {
      param_1[0x4242] = 1;
    }
    else {
      param_1[0x4242] = 0;
    }
    if ((iVar2 == 0) && (param_1[0x4270] == 0)) {
      param_1[0x41d0] = 1;
    }
    else {
      param_1[0x41d0] = 0;
    }
    param_1[0x41ef] = 0x10000 - ((iVar2 != 0) + 0x10000) & 2;
    return 0;
  }
  if (param_3 < 0x32) {
    if (param_3 < 0x23) {
      param_1[0x4255] = 0;
      param_1[0x4242] = 5;
      param_1[0x41ef] = 1;
      param_1[0x41d0] = 0;
      return 0;
    }
    param_1[0x4255] = (unsigned int)(param_1[5] != 0);
    param_1[0x4242] = 3;
    param_1[0x41ef] = 1;
    param_1[0x41d0] = 0;
    return 0;
  }
  param_1[0x4255] = (unsigned int)(param_1[5] != 0);
  if (((*(int *)(iVar1 + 0x3c) < 3) || (param_1[0x41ea] != 0)) || (*(short *)(iVar1 + 0x22) == 2)) {
    param_1[0x4242] = 1;
  }
  else {
    param_1[0x4242] = 0;
  }
  if ((param_1[5] == 0) && (param_1[0x4270] == 0)) {
    param_1[0x41d0] = 1;
    param_1[0x41ef] = 1;
    return 0;
  }
  param_1[0x41d0] = 0;
  param_1[0x41ef] = 1;
  return 0;
}

