typedef struct StringData_8268C9F8 {
    int padding;
    long references; // 0x04
} StringData_8268C9F8;

extern StringData_8268C9F8 lbl_83155184;
extern long _InterlockedExchangeAdd(long *, long);
extern unsigned int fn_826BD078(const char **);
extern unsigned int fn_826BCEF8(unsigned int);
extern void fn_826BD398(char *, int *, unsigned int);
extern void fn_8268B610(StringData_8268C9F8 **, const char *, int);

StringData_8268C9F8 **fn_8268C9F8(StringData_8268C9F8 **out, const unsigned int *source)
{
    const char *cursor = (const char *)((*source & ~3U) + 8);
    char buffer[512];
    int count;
    unsigned int codepoint;
    *out = &lbl_83155184;
    _InterlockedExchangeAdd(&lbl_83155184.references, 1);
    count = 0;
read:
    do {
        codepoint = fn_826BD078(&cursor);
        if (codepoint) {
            fn_826BD398(buffer, &count, fn_826BCEF8(codepoint & 0xffff));
            if (count < 0x1f8) {
                goto read;
            }
        }
        fn_8268B610(out, buffer, count);
        count = 0;
    } while (codepoint);
    return out;
}
