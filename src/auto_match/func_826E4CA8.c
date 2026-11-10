typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);

void fn_826E4CA8(unsigned p, int a, ...)
{
  va_list ap;
  int *q;
  __va_start(&ap, a);
  q = p != 0 ? (int *)(p - 0xc) : 0;
  ((void (*)(int *, int, int, va_list))(*(int *)(*q + 4)))(q, 0x21, a, ap);
}
