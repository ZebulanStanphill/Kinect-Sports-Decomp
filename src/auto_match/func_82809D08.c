double fn_82809D08(double param_1,double param_2)

{
  if (ABS(param_1) < ABS(param_2)) {
    return param_1;
  }
  return -(double)(float)((double)(__int64)(int)(param_1 / param_2) * param_2 - param_1);
}

