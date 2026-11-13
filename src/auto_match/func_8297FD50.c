typedef unsigned char bool;
#define true 1


unsigned __int64 fn_8297FD50(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  
  while( true ) {
    while( true ) {
      if (param_2 == 0) {
        return 1;
      }
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 != 1) break;
      iVar3 = fn_8297FD50(param_1,*(unsigned int *)(param_2 + 8),param_3);
      if (iVar3 == 0) {
        return 0;
      }
      param_2 = *(int *)(param_2 + 0xc);
    }
    if (iVar3 == 0xf) {
      iVar3 = *(int *)(param_2 + 0x10);
      if (iVar3 == 6) {
        return 0;
      }
      if (iVar3 == 7) {
        return 0;
      }
      if ((int)param_3 != 0) {
        return 1;
      }
      if (iVar3 != 4) {
        if (iVar3 != 5) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
    if (iVar3 != 0xe) {
      return 1;
    }
    iVar3 = *(int *)(param_2 + 0x1c);
    if (iVar3 < 0x1a) break;
    if (iVar3 < 0x1c) {
      return 0;
    }
    if (iVar3 == 0x1f) {
      return 0;
    }
    if (iVar3 == 0x20) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 8) + 0x18);
      if (iVar3 < 100) {
        if (iVar3 == 99) {
          return 0;
        }
        if (iVar3 < 0x4d) {
          if (iVar3 == 0x4c) {
            return 0;
          }
          if (iVar3 == 10) {
            return 0;
          }
          if (iVar3 == 0x1e) {
            return 0;
          }
          if (iVar3 == 0x2d) {
            return 0;
          }
          bVar1 = iVar3 == 0x45;
        }
        else {
          if (iVar3 == 0x51) {
            return 0;
          }
          if (iVar3 == 0x56) {
            return 0;
          }
          bVar1 = iVar3 == 0x5e;
        }
      }
      else {
        if (iVar3 == 0x68) {
          return 0;
        }
        if (iVar3 == 0x70) {
          return 0;
        }
        if (iVar3 == 0x73) {
          return 0;
        }
        if (iVar3 == 0x76) {
          return 0;
        }
        if (iVar3 == 0x7b) {
          return 0;
        }
        if (iVar3 == 0x7e) {
          return 0;
        }
        bVar1 = iVar3 == 0x81;
      }
      if (bVar1) {
        return 0;
      }
      iVar3 = fn_8297FD50(param_1,*(unsigned int *)(*(int *)(param_2 + 0x24) + 8),param_3);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = *(unsigned int *)(*(int *)(param_2 + 0x24) + 0xc);
      goto LAB_8297fee4;
    }
    if (iVar3 != 0x22) break;
    iVar3 = *(int *)(param_2 + 0x24);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(iVar3 + 4) != 0xe) {
      return 0;
    }
    param_2 = *(int *)(iVar3 + 0x24);
  }
  iVar3 = fn_8297FD50(param_1,*(unsigned int *)(param_2 + 0x20),param_3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(unsigned int *)(param_2 + 0x24);
LAB_8297fee4:
  iVar3 = fn_8297FD50(param_1,uVar2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

