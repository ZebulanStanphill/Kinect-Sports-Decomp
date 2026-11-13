int fn_82CA6740(int param_1,int param_2)

{
  if ((param_1 >= 0) && (param_2 == 0)) {
    return 0;
  }
  do {
    param_1 = param_1 - param_2;
  } while (param_1 >= 0);
  return param_1 + param_2;
}

