typedef struct Format_822955C8 {
    char pad0[0x14];
    int flags;
    __int64 precision;
} Format_822955C8;

extern int fn_82F64020(char *buffer, unsigned int size, const char *format, ...);
extern void fn_82295AD0(void *result, const void *facet, const void *dest, Format_822955C8 *ios,
                        unsigned short fill, const char *buffer, unsigned int leading, unsigned int trailing,
                        unsigned int extra, unsigned int length);

void *fn_822955C8(void *result, const void *facet, const void *dest, Format_822955C8 *ios,
                  unsigned short fill, double value)
{
    __int64 precision = ios->precision;
    __int64 extra;
    int flags;
    int count;
    unsigned int leading;
    unsigned int trailing;
    char format[16];
    char buffer[108];
    char *out = format;
    int length;

    if (precision <= 0 && !(ios->flags & 0x2000))
        precision = 6;
    count = precision > 36 ? 36 : (int)precision;
    flags = ios->flags;
    leading = 0;
    extra = precision - count;
    trailing = 0;

    if ((flags & 0x3000) == 0x2000 && value * 0.5 != value) {
        unsigned char negative = value < 0.0;
        if (negative)
            value = -value;
        for (; value >= 1.0e35 && leading < 5000; leading += 10)
            value *= 1.0e-10;
        if (value > 0.0) {
            for (; extra >= 10 && value <= 1.0e-35 && trailing < 5000; trailing += 10) {
                extra -= 10;
                value *= 1.0e10;
            }
        }
        if (negative)
            value = -value;
    }

    *out++ = '%';
    if (flags & 0x20)
        *out++ = '+';
    if (flags & 0x10)
        *out++ = '#';
    *out++ = '.';
    *out++ = '*';
    {
        int mode = ios->flags & 0x3000;
        *out++ = mode == 0x2000 ? 'f' : (mode == 0x3000 ? 'a' : (mode == 0x1000 ? 'e' : 'g'));
        *out = 0;
    }
    length = fn_82F64020(buffer, sizeof(buffer), format, count, value);
    fn_82295AD0(result, facet, dest, ios, fill, buffer, leading, trailing, extra, length);
    return result;
}
