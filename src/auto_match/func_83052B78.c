extern int fn_83052500();


unsigned __int64 fn_83052B78(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 *param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  if (param_4 != (unsigned __int64 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = (**(int (***)())(*param_1 + 0x24))(param_1,0);
      param_2 = lVar1 + param_2;
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = *(__int64 *)(param_1 + -0x18) + param_2;
    }
  }
  if ((__int64)param_2 < 0) {
    return 0x1f;
  }
  uVar2 = (unsigned __int64)(unsigned int)param_1[-3];
  lVar1 = param_2 - ((__int64)param_2 / (__int64)uVar2) * uVar2;
  trapDoubleWordImmediate(6,uVar2,0);
  trapDoubleWordImmediate(5,uVar2 & ~((param_2 << 1 | param_2 >> 0x3f) - 1),0xffff);
  if (lVar1 != 0) {
    param_2 = param_2 - lVar1;
  }
  if (param_4 != (unsigned __int64 *)0x0) {
    if (param_3 == 0) {
      *param_4 = param_2;
    }
    else if (param_3 == 1) {
      lVar1 = (**(int (***)())(*param_1 + 0x24))(param_1,0);
      *param_4 = param_2 - lVar1;
    }
    else if (param_3 < 3) {
      *param_4 = param_2 - *(__int64 *)(param_1 + -0x18);
    }
  }
  fn_83052500(param_1 + -0x1e,
                    ((__int64)param_1[-3] * (__int64)param_1[-0x16] & 0xffffffffU) + param_2);
  return 1;
}

