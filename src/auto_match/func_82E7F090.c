typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern long fn_82E49B68(unsigned short *buf, unsigned int count, const unsigned short *fmt, va_list ap);

long fn_82E7F090(unsigned short *buf, unsigned int cb, const unsigned short *fmt, ...)
{
  long hr;
  unsigned int cch = cb / sizeof(unsigned short);
  if (cch > 0x7fffffff) {
    hr = 0x80070057;
  } else {
    va_list ap;
    __va_start(&ap, fmt);
    hr = fn_82E49B68(buf, cch, fmt, ap);
  }
  return hr;
}
