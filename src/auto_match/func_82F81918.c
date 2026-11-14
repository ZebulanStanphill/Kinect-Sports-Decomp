typedef struct Bits64_82F81918 {
    unsigned int hi;
    unsigned int lo;
} Bits64_82F81918;

typedef struct Ld12_82F81918 {
    unsigned char bytes[12];
} Ld12_82F81918;

typedef struct FloatResult_82F81918 {
    int flags;
    int length;
    int unused[2];
    Bits64_82F81918 value;
} FloatResult_82F81918;

extern unsigned int fn_82F819D0(Ld12_82F81918 *out, const char **end, const char *text,
                                int a, int b, int c, int d, void *locale);
extern int fn_82F86B68(Ld12_82F81918 *value, Bits64_82F81918 *out);

FloatResult_82F81918 *fn_82F81918(FloatResult_82F81918 *result, const char *text, void *locale)
{
    Ld12_82F81918 parsed;
    Bits64_82F81918 value;
    const char *end;
    unsigned int scan;
    int status;
    int flags = 0;

    scan = fn_82F819D0(&parsed, &end, text, 0, 0, 0, 0, locale);
    if (scan & 4) {
        flags = 0x200;
        value.hi = 0;
        value.lo = 0;
    } else {
        status = fn_82F86B68(&parsed, &value);
        if ((scan & 2) || status == 1)
            flags = 0x80;
        if ((scan & 1) || status == 2)
            flags |= 0x100;
    }
    result->flags = flags;
    result->length = end - text;
    result->value = value;
    return result;
}
