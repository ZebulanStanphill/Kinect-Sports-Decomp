typedef struct Stream_82F665B0 {
    void *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F665B0;

extern void *memset(void *, int, unsigned int);

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

extern int fn_82F70748(int, Stream_82F665B0 *);

int fn_82F665B0(int (*format)(Stream_82F665B0 *, const char *, void *, void *), char *text,
                unsigned int capacity, const char *pattern, void *locale, void *args)
{
    Stream_82F665B0 stream = {0};
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
    result = format(&stream, pattern, locale, args);
    if (text == 0) {
        return result;
    }
    if (result >= 0) {
        if (--stream.count >= 0) {
            *(char *)stream.cursor = 0;
        } else if (fn_82F70748(0, &stream) == -1) {
            goto failure;
        }
        return result;
    }
failure:
    text[capacity - 1] = 0;
    return stream.count < 0 ? -2 : -1;
}
