unsigned int fn_82AD1228(unsigned int param_1,unsigned int param_2)

{
  if (((param_1 & 4) != 0) && ((param_2 & 2) != 0)) {
    param_1 = param_1 - 4;
  }
  if ((param_1 & param_2 & 4) != 0) {
    param_1 = param_1 - 4;
    param_2 = param_2 - 4;
  }
  if (((param_1 & 1) != 0) && ((param_2 & 2) != 0)) {
    param_2 = param_2 - 2;
  }
  return param_1 | param_2;
}

