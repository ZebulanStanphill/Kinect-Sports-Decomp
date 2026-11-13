extern int fn_82739680();


void fn_827397D8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x38) = iVar3;
  *(__int64 *)(param_1 + 0x30) = *(__int64 *)(param_1 + 0x48) - (__int64)*(int *)(param_1 + 0x5c)
  ;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x3c) = iVar2;
  if ((86399999 < iVar3) || (iVar3 < 0)) {
    iVar4 = (iVar3 + 864000000) / 86400000 + -10;
    iVar5 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x40) = iVar5;
    *(int *)(param_1 + 0x38) = iVar3 + iVar4 * -86400000;
    uVar1 = fn_82739680(iVar2);
    if (iVar5 < (int)(((uVar1 & 0xff) == 0 ^ 1) + 0x16d)) {
      if (-1 < iVar5) {
        return;
      }
      *(int *)(param_1 + 0x3c) = iVar2 + -1;
      uVar1 = fn_82739680();
      iVar5 = (uVar1 & 0xff) + iVar5;
    }
    else {
      *(int *)(param_1 + 0x3c) = iVar2 + 1;
      iVar5 = iVar5 - (((unsigned int)LZCOUNT(uVar1 & 0xff) >> 5 ^ 1) + 0x16d);
    }
    *(int *)(param_1 + 0x40) = iVar5;
  }
  return;
}

