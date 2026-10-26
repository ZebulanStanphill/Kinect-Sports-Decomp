extern __int64 KeQueryPerformanceFrequency(void);

int fn_82A1F160(__int64 *param_1)
{
  *param_1 = KeQueryPerformanceFrequency();
  return 1;
}
