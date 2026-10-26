typedef int (*code)(void *);
extern void fn_82A5A360(void *p);

void fn_82A5A720(char *p)
{
  int hr = (*(code *)(*(int *)(p + 0x40) + 4))(p + 0x40);
  if (hr >= 0) {
    fn_82A5A360(p);
  }
}
