void fn_8287C078(float *param_1)
{
  if ((*(unsigned int *)param_1 & 0x7f800000) != 0x7f800000) {
    return;
  }
  if ((*(unsigned int *)param_1 & 0x7fffff) == 0) {
    return;
  }
  *param_1 = 0.0f;
}
