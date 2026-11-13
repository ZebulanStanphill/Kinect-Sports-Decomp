extern double sqrt(double);
#define SQRT(x) sqrt(x)


double fn_82BEEAB0(float *param_1)

{
  return (double)SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
}

