extern int fn_82724640();


void fn_82726458(__int64 param_1,__int64 param_2)

{
  param_1 = param_2 * 0x2c + param_1;
  if ((int)param_2 != 0) {
    do {
      param_1 = param_1 + -0x2c;
      fn_82724640(param_1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

