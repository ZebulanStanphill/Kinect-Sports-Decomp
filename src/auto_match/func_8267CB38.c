unsigned __int64 fn_8267CB38(unsigned int param_1)

{
  if (param_1 == 0) {
    return 0xf;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 < 3) {
    return 1;
  }
  if (param_1 != 3) {
    if (param_1 < 5) {
      return 0xffffffffffffffff;
    }
    if (param_1 == 5) {
      return 0xfffffffffffffffe;
    }
    if (param_1 < 7) {
      return 0xfffffffffffffff1;
    }
  }
  return 0;
}

