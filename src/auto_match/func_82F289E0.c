extern int fn_82F68CC0();


void fn_82F289E0(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5)

{
  if (0 < (int)param_5) {
    do {
      fn_82F68CC0(param_3,param_1,0x10);
      param_5 = param_5 + -1;
      param_3 = param_3 + param_4;
      param_1 = param_1 + param_2;
    } while (param_5 != 0);
  }
  return;
}

