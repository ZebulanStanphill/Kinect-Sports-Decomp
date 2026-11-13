unsigned __int64 fn_82F40D58(unsigned __int64 param_1,unsigned int *param_2,int param_3,int param_4,unsigned int param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  uVar1 = 0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff8000ffff;
  }
  if (param_4 == 0) {
    return uVar1;
  }
  if (6 < *param_2) {
    if (param_3 == 0) {
      return 0xffffffff80070057;
    }
    *param_2 = 2;
  }
  uVar2 = *param_2;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      if ((param_5 & 1) != 0) {
        return 0xffffffff80070057;
      }
      return uVar1;
    }
    if (uVar2 != 3) {
      if (uVar2 == 4) {
        uVar2 = 8;
      }
      else if (uVar2 == 5) {
        uVar2 = 2;
      }
      else {
        if (uVar2 != 6) {
          return uVar1;
        }
        uVar2 = 0x10;
      }
      goto LAB_82f40df4;
    }
  }
  uVar2 = 4;
LAB_82f40df4:
  if (param_5 < uVar2) {
    return 0xffffffffc00d36b1;
  }
  return uVar1;
}

