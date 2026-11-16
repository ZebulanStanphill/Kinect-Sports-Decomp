typedef struct Stream_82F67EC0 {
    void *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F67EC0;

extern void *memset(void *, int, unsigned int);
extern unsigned int strlen(const char *text);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F67EC0(int (*format)(Stream_82F67EC0 *, const char *, void *, void *), const char *text,
                const char *pattern, void *locale, void *args)
{
    Stream_82F67EC0 stream = {0};
    unsigned int length;
    length = strlen(text);
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
    stream.count = length > 0x7fffffff ? 0x7fffffff : length;
    return format(&stream, pattern, locale, args);
}
