typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef void (*Fmt_8281C448)(const char *fmt, va_list ap);
extern Fmt_8281C448 lbl_8320A638;

void fn_8281C448(const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  if (lbl_8320A638 != 0)
    lbl_8320A638(fmt, ap);
}
