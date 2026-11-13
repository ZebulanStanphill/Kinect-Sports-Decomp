extern int fn_82696330();


void fn_8269A990(__int64 param_1,unsigned __int64 param_2)

{
  param_1 = (param_2 & 0xfffffff) * 0x10 + param_1;
  if ((int)param_2 != 0) {
    do {
      param_1 = param_1 + -0x10;
      fn_82696330(param_1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

