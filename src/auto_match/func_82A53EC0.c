typedef void (*fp_t)(void);

void fn_82A53EC0(int *param_1)
{
  if (*(int *)(*param_1 + 0x3c) <= 2) {
    param_1[0xe] = 0;
    return;
  }
  param_1[0xe] = 4;
  if ((fp_t)param_1[0x80] == 0) {
    return;
  }
  ((fp_t)param_1[0x80])();
}
