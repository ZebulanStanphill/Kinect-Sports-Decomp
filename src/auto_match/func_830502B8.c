unsigned __int64 fn_830502B8(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 *param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if (param_4 != (unsigned __int64 *)0x0) {
    *param_4 = 0;
  }
  if ((*(unsigned int *)(param_1 + 0x24) & 0x1e000000) == 0x4000000) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar2 = *(__int64 *)(param_1 + 0x10);
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      lVar2 = *(__int64 *)(param_1 + -0x60);
    }
    param_2 = lVar2 + param_2;
  }
  if (-1 < (__int64)param_2) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + -0xc);
    lVar2 = param_2 - ((__int64)param_2 / (__int64)uVar1) * uVar1;
    trapDoubleWordImmediate(6,uVar1,0);
    trapDoubleWordImmediate(5,uVar1 & ~((param_2 << 1 | param_2 >> 0x3f) - 1),0xffff);
    if (lVar2 != 0) {
      param_2 = param_2 - lVar2;
    }
    if (param_4 != (unsigned __int64 *)0x0) {
      if (param_3 == 0) {
        *param_4 = param_2;
      }
      else if (param_3 == 1) {
        *param_4 = param_2 - *(__int64 *)(param_1 + 0x10);
      }
      else {
        if (2 < param_3) {
          return 2;
        }
        *param_4 = param_2 - *(__int64 *)(param_1 + -0x60);
      }
    }
    *(unsigned __int64 *)(param_1 + 0x10) = param_2;
    *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x24) | 0x1000000;
    return 1;
  }
  return 0x1f;
}

