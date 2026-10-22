extern int fn_8225F160();
extern int fn_82486958();

void fn_82485850(int param_1, const char *src)
{
  char *dst;
  char *end;
  int v;
  int p;

  dst = (char *)(param_1 + 0x234);
  end = dst + 0x100;
  while (dst < end && (*dst++ = *src++) != 0)
    ;
  if (dst == end) {
    dst[-1] = 0;
  }
  v = fn_82486958();
  p = fn_8225F160();
  *(int *)(p + 0xc) = v;
  *(int *)(p + 0x18) = v;
  *(int *)(p + 0x1c) = 0;
  *(int *)(p + 0x20) = 0;
  *(int *)(p + 0x24) = 0;
  *(int *)(p + 0x28) = 4;
}
