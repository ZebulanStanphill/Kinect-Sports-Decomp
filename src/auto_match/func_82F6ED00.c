typedef struct Stream_82F6ED00 {
    void *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F6ED00;

extern void *memset(void *, int, unsigned int);

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

extern int fn_82F709B8(Stream_82F6ED00 *, const char *, void *, void *);
extern int fn_82F70748(int, Stream_82F6ED00 *);

int fn_82F6ED00(char *text, unsigned int capacity, const char *pattern, void *locale, void *args)
{
    Stream_82F6ED00 stream = {0};
    int result;
    if (pattern == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (capacity != 0 && text == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    stream.count = capacity > 0x7fffffff ? 0x7fffffff : capacity;
    stream.base = text;
    stream.cursor = text;
    stream.flags = 0x42;
    result = fn_82F709B8(&stream, pattern, locale, args);
    if (text != 0) {
        if (--stream.count >= 0) {
            *(char *)stream.cursor = 0;
        } else {
            fn_82F70748(0, &stream);
        }
    }
    return result;
}
