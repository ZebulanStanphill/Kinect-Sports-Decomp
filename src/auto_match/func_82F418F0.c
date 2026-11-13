unsigned __int64 fn_82F418F0(int param_1,unsigned short *param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  
  *param_2 = 1;
  if (*(int *)(param_1 + 0x3c) == 6) {
    *param_2 = 6;
    return 0;
  }
  *param_2 = 1;
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  if (uVar1 == 0) {
    uVar2 = 3;
  }
  else {
    if (uVar1 == 1) {
      *param_2 = 0;
      return 0;
    }
    if (uVar1 < 3) {
      *param_2 = 1;
      return 0;
    }
    if (uVar1 == 3) {
      uVar2 = 2;
    }
    else if (uVar1 < 5) {
      uVar2 = 4;
    }
    else {
      if (uVar1 != 5) {
        return 0xffffffff80004005;
      }
      uVar2 = 5;
    }
  }
  *param_2 = uVar2;
  return 0;
}

