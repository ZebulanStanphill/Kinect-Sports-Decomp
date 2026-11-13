typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern int fn_82F66E68(unsigned short *buf, unsigned int size, unsigned int count, const unsigned short *fmt, va_list ap);

int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...)
{
    int r;
    va_list ap;
    __va_start(&ap, fmt);
    r = fn_82F66E68(buf, size, (unsigned int)-1, fmt, ap);
    if (r == -1) {
        buf[size - 1] = 0;
        return size - 1;
    }
    return r;
}
