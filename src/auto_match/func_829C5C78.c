extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82005710;


void fn_829C5C78(int *param_1)

{
  if (SQRT((double)(__int64)*param_1 * (double)(__int64)*param_1 +
           (double)(__int64)param_1[2] * (double)(__int64)param_1[2] +
           (double)(__int64)param_1[1] * (double)(__int64)param_1[1]) != lbl_82005710) {
    return;
  }
  return;
}

