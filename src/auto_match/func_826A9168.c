typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

void fn_826A9168(char *p, int a, ...)
{
  va_list ap;
  int *q;
  int *r;
  __va_start(&ap, a);
  q = *(int **)(p + 0x74);
  r = ((int *(*)(int *))(*(int *)(*q + 0x94)))(q);
  if (r != 0) ((void (*)(int *, int, int, va_list))(*(int *)(*r + 4)))(r, 0x10, a, ap);
}
