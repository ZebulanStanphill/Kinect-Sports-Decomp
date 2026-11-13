extern int fn_8267FD48();


__int64 fn_82680500(int param_1,__int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 10) {
    uVar1 = (param_2 + 3U & 0xffffffff) >> 2;
    iVar3 = (int)uVar1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
    uVar1 = ((unsigned __int64)param_3 + 3 & 0xffffffff) >> 2;
    iVar4 = (int)uVar1;
    if (uVar1 == 0) {
      iVar4 = 1;
    }
    lVar2 = ((__int64)iVar3 * (__int64)iVar4 & 0x1fffffffU) << 3;
  }
  else if ((param_1 < 0xb) || (0xc < param_1)) {
    iVar3 = fn_8267FD48();
    lVar2 = (__int64)iVar3 * (__int64)(int)param_3;
  }
  else {
    uVar1 = (param_2 + 3U & 0xffffffff) >> 2;
    iVar3 = (int)uVar1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
    uVar1 = ((unsigned __int64)param_3 + 3 & 0xffffffff) >> 2;
    iVar4 = (int)uVar1;
    if (uVar1 == 0) {
      iVar4 = 1;
    }
    lVar2 = ((__int64)iVar4 * (__int64)iVar3 & 0xfffffffU) << 4;
  }
  return lVar2;
}

