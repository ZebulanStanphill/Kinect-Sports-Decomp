extern int fn_82793280();


void fn_82794848(__int64 param_1,__int64 param_2)

{
  param_1 = param_2 * 0x54 + param_1;
  if ((int)param_2 != 0) {
    do {
      param_1 = param_1 + -0x54;
      fn_82793280(param_1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

