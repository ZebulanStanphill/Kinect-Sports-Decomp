typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern long fn_828F5960(char *buf, unsigned int count, const char *fmt, va_list ap);

long fn_828F6FA8(char *buf, unsigned int count, const char *fmt, ...)
{
  long hr;
  if (count > 0x7fffffff) {
    hr = 0x80070057;
  } else {
    va_list ap;
    __va_start(&ap, fmt);
    hr = fn_828F5960(buf, count, fmt, ap);
  }
  return hr;
}
