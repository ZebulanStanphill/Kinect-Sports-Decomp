typedef unsigned char bool;
#define true 1


__int64 fn_8297FC70(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  __int64 lVar3;
  
  while( true ) {
    while( true ) {
      if (param_2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 1) break;
      iVar2 = fn_8297FC70(param_1,*(unsigned int *)(param_2 + 8));
      if (iVar2 != 0) {
        return 1;
      }
      param_2 = *(int *)(param_2 + 0xc);
    }
    if (iVar2 == 0xf) {
      lVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 0x10) - 6;
      return lVar3 - (((unsigned __int64)*(unsigned int *)(param_2 + 0x10) - 7) + (unsigned __int64)(lVar3 == 0));
    }
    if (iVar2 != 0xe) {
      return 0;
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    if (0x1d < iVar2) break;
    if (iVar2 < 0x1c) {
      if (iVar2 < 0) {
        return 1;
      }
      if (1 < iVar2) {
        if (iVar2 < 0x1a) {
          return 1;
        }
        bVar1 = 0x1b < iVar2;
        goto LAB_8297fd28;
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  if (iVar2 < 0x1f) {
    return 1;
  }
  bVar1 = 0x20 < iVar2;
LAB_8297fd28:
  if (!bVar1) {
    return 0;
  }
  return 1;
}

