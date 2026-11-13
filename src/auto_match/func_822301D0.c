void fn_822301D0(__int64 param_1,__int64 param_2,__int64 param_3,int (**param_4)())

{
  param_1 = (__int64)(int)param_2 * (__int64)(int)param_3 + param_1;
  while (param_3 = param_3 + -1, -1 < param_3) {
    param_1 = param_1 - param_2;
    (*param_4)(param_1);
  }
  return;
}

