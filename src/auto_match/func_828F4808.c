extern int fn_82930298(int p);
extern int fn_82934180(int p);

void fn_828F4808(int param_1)
{
  int hr;

  hr = fn_82934180(param_1);
  if (hr >= 0) {
    *(int *)(param_1 + 0x2a8) = 1;
    *(int *)(param_1 + 0x2ac) = fn_82930298(param_1);
  }
  *(int *)(param_1 + 0x2a4) = hr;
}
