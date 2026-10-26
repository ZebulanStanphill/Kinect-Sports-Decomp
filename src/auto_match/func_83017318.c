extern float *fn_82FFE158(int p);

void fn_83017318(int param_2, float param_1)
{
  float *pfVar1;

  pfVar1 = fn_82FFE158(param_2 + 0x61c);
  if (pfVar1 != 0) {
    *pfVar1 = param_1;
  }
}
