typedef unsigned char bool;
#define true 1
#define false 0


bool fn_8297F6B8(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  
LAB_8297f6d0:
  while( true ) {
    if (param_2 == 0) {
      return param_3 == 0;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 != 1) break;
    if (param_3 == 0) {
      return false;
    }
    if (*(int *)(param_3 + 4) != 1) break;
    iVar1 = fn_8297F6B8(param_1,*(unsigned int *)(param_2 + 8),*(unsigned int *)(param_3 + 8));
    if (iVar1 == 0) {
      return false;
    }
    param_2 = *(int *)(param_2 + 0xc);
    param_3 = *(int *)(param_3 + 0xc);
  }
  if ((param_3 != 0) && (iVar1 == *(int *)(param_3 + 4))) {
    if (iVar1 == 6) {
      param_3 = *(int *)(param_3 + 0x18);
      param_2 = *(int *)(param_2 + 0x18);
      goto LAB_8297f6d0;
    }
    if (iVar1 == 8) {
      if (*(int *)(param_2 + 0x14) == *(int *)(param_3 + 0x14)) {
        param_3 = *(int *)(param_3 + 0x10);
        param_2 = *(int *)(param_2 + 0x10);
        goto LAB_8297f6d0;
      }
    }
    else {
      if (iVar1 == 9) {
        if (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10)) {
          return false;
        }
        if (*(int *)(param_2 + 0x14) != *(int *)(param_3 + 0x14)) {
          return false;
        }
        iVar1 = fn_8297F6B8(param_1,*(unsigned int *)(param_2 + 0x18),
                              *(unsigned int *)(param_3 + 0x18));
        if (iVar1 == 0) {
          return false;
        }
        if (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0x1c)) {
          return false;
        }
        if (*(int *)(param_2 + 0x20) != *(int *)(param_3 + 0x20)) {
          return false;
        }
        return true;
      }
      if (iVar1 == 0xb) {
        param_3 = *(int *)(param_3 + 0x30);
        param_2 = *(int *)(param_2 + 0x30);
        goto LAB_8297f6d0;
      }
    }
  }
  return false;
}

