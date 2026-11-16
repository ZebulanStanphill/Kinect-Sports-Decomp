typedef struct Stream_82F70248 {
    void *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F70248;

extern void *memset(void *, int, unsigned int);
extern unsigned int fn_82F64CE0(const unsigned short *text);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F70248(int (*format)(Stream_82F70248 *, const unsigned short *, void *, void *),
                const unsigned short *text, const unsigned short *pattern, void *locale, void *args)
{
    Stream_82F70248 stream = {0};
    unsigned int length;
    length = fn_82F64CE0(text);
    if (text == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (pattern == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    stream.base = (void *)text;
    stream.cursor = (void *)text;
    stream.flags = 0x49;
    stream.count = length > 0x3fffffff ? 0x7fffffff : length * 2;
    return format(&stream, pattern, locale, args);
}
