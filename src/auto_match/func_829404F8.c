typedef int (*code)(void *, int, int, int);
extern int fn_82962C58(void *p, int a, int b);

void fn_829404F8(int *p, int a, int b)
{
  int hr = fn_82962C58(p, a, b);
  if (hr >= 0) {
    (*(code *)(*p + 0x68))(p, a, b, 1);
  }
}
