typedef struct { union { char buf[16]; char *ptr; } u; unsigned int size; unsigned int cap; } Str_822D89D0;
extern int fn_822B83D0(int, unsigned int);
extern unsigned int fn_82560010(int, const char *);

void fn_822D89D0(int param_1)
{
  Str_822D89D0 *s = (Str_822D89D0 *)(param_1 + 0x60);
  unsigned int r;
  int *q;

  q = *(int **)(param_1 + 0x5c);
  r = fn_82560010(*q, s->cap >= 0x10 ? s->u.ptr : s->u.buf);
  fn_822B83D0(*(int *)(param_1 + 0x58), r);
}
