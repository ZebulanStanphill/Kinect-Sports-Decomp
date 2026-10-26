typedef int (*code)();

void fn_82C04BE8(int *p, int a, int b)
{
  int hr = (*(code *)(*p + 0x30))(p);
  if (hr >= 0) {
    p[0xb] = a;
    p[0xc] = b;
  }
}
