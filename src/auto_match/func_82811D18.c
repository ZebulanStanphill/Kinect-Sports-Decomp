extern void fn_828105C8(int p, float a, float b, float c);

int fn_82811D18(int param_1, float a, float b, float c, float d)
{
  *(float *)(param_1 + 0xc) = d;
  fn_828105C8(param_1, a, b, c);
  return param_1;
}
