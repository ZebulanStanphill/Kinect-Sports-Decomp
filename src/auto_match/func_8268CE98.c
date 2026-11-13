extern double sqrt(double);
#define SQRT(x) sqrt(x)


double fn_8268CE98(int param_1)

{
  return SQRT((double)*(float *)(param_1 + 4) * (double)*(float *)(param_1 + 4) +
              (double)*(float *)(param_1 + 0x10) * (double)*(float *)(param_1 + 0x10));
}

