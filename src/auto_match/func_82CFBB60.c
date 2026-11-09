typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern int fn_82F6EDE8(char *buf, unsigned int count, const char *fmt, va_list ap);

int fn_82CFBB60(char *buf, unsigned int count, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  return fn_82F6EDE8(buf, count, fmt, ap);
}
