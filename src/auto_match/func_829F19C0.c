void fn_829F19C0(double param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[1];
  *param_2 = (float)((double)(unsigned int)fVar1 * (double)*param_2 + param_1) / (float)((int)fVar1 + 1);
  if (0x1d < (unsigned int)fVar1) {
    return;
  }
  param_2[1] = (float)((int)fVar1 + 1);
  return;
}

