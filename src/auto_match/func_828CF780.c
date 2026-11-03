extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern int fn_828E9FF8(int, int);

void fn_828CF780(int param_1, int param_2)
{
  int a;
  int b;

  a = fn_828E9DA8(param_2);
  b = fn_828E9D90(param_2);
  if (a - b >= 0x20) {
    *(int *)(param_1 + 0x20) = fn_828E9FF8(param_2, 0x20);
  }
  else {
    *(int *)(param_1 + 0x20) = 0;
  }
}
