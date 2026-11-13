void fn_82CA0A28(unsigned __int64 param_1,int param_2,int param_3,int param_4,__int64 param_5,
                  __int64 param_6)

{
  int iVar1;
  __int64 lVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  iVar1 = 0;
  if (0 < (int)param_5) {
    do {
      *(char *)(iVar1 + param_2) = (char)((int)(*(unsigned char *)(iVar1 + param_2) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  iVar1 = 0;
  lVar2 = param_6;
  if (0 < (int)param_6) {
    do {
      *(char *)(iVar1 + param_3) = (char)((int)(*(unsigned char *)(iVar1 + param_3) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  iVar1 = 0;
  if (0 < (int)param_6) {
    do {
      *(char *)(iVar1 + param_4) = (char)((int)(*(unsigned char *)(iVar1 + param_4) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    return;
  }
  return;
}

