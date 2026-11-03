extern int *fn_82E1D978(int);

unsigned int fn_82E1DE08(int param_1, int param_2, unsigned int param_3)
{
  int *r = fn_82E1D978(param_1);
  if (r == 0) {
    return param_3;
  }
  *(int *)(param_1 + 8) = r[3];
  return r[1];
}
