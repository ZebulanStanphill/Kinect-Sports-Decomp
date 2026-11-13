extern int fn_82759498();


void fn_826EB708(__int64 param_1,__int64 param_2)

{
  param_1 = param_2 * 0x28 + param_1;
  if ((int)param_2 != 0) {
    do {
      param_1 = param_1 + -0x28;
      fn_82759498(param_1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

