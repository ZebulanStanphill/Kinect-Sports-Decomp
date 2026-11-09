typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);
extern int *fn_82695448(char *p);

void fn_826A90C0(char *p, int a, ...)
{
  va_list ap;
  int *r;
  __va_start(&ap, a);
  r = fn_82695448(p);
  if (r != 0) ((void (*)(int *, int, int, va_list))(*(int *)(*r + 4)))(r, 0x22, a, ap);
}
