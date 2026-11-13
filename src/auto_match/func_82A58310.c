unsigned __int64 fn_82A58310(int param_1, int param_2, int param_3, unsigned int param_4, int param_5, unsigned int param_6, int param_7, __int64 param_8, int in_stack_00000054, int in_stack_0000005c)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;


  
  if (param_6 < 3) {
    uVar1 = 1;
    if (param_1 != 1) {
      uVar1 = 0x20;
    }
    if (param_2 != 0) {
      uVar1 = uVar1 | 2;
    }
    if (param_3 != 0) {
      uVar3 = 0;
      uVar4 = param_4;
      if (param_5 == 0) {
        while (1 < uVar4) {
          uVar3 = uVar3 + 1;
          uVar4 = param_4 >> (uVar3 & 0x3f);
        }
        return ((unsigned __int64)(uVar3 + 0xfffd) & 0x1fff) << 3 | uVar1 | 4;
      }
      while (1 < uVar4) {
        uVar3 = uVar3 + 1;
        uVar4 = param_4 >> (uVar3 & 0x3f);
      }
      return ((unsigned __int64)(uVar3 + 0xffff) & 0x1fff) << 3 | uVar1 | 4;
    }
  }
  else if (param_6 == 3) {
    uVar2 = 0;
    if ((param_7 == 0) || (in_stack_0000005c != 100)) {
      if (param_8 == 0) {
        uVar2 = 0x40;
      }
      if (in_stack_00000054 != 0) {
        uVar2 = uVar2 | 0x80;
      }
    }
    else {
      uVar2 = 1;
    }
    uVar4 = 0;
    uVar3 = param_4;
    while (1 < uVar3) {
      uVar4 = uVar4 + 1;
      uVar3 = param_4 >> (uVar4 & 0x3f);
    }
    uVar1 = ((unsigned __int64)uVar4 & 0x1fff) << 3 | uVar2;
    if ((uVar2 & 1) != 0) {
      return uVar1 | 0x100;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

