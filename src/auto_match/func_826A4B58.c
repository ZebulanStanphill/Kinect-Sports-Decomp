extern int fn_826A2A40();


void fn_826A4B58(__int64 param_1,__int64 param_2)

{
  param_1 = param_2 * 0x1c + param_1;
  if ((int)param_2 != 0) {
    do {
      param_1 = param_1 + -0x1c;
      fn_826A2A40(param_1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

