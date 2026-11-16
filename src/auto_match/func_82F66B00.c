typedef struct Stream_82F66B00 {
    char *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F66B00;

extern void *memset(void *, int, unsigned int);

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

extern int fn_82F70748(int, Stream_82F66B00 *);

static __forceinline int WriteByte_82F66B00(Stream_82F66B00 *stream)
{
    if (--stream->count >= 0) {
        return *stream->cursor++ = 0;
    } else {
        return fn_82F70748(0, stream);
    }
}

int fn_82F66B00(int (*format)(Stream_82F66B00 *, const unsigned short *, void *, void *),
                unsigned short *text, unsigned int capacity, const unsigned short *pattern, void *locale,
                void *args)
{
    Stream_82F66B00 stream = {0};
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
    stream.base = text;
    stream.cursor = (char *)text;
    stream.flags = 0x42;
    stream.count = capacity > 0x3fffffff ? 0x7fffffff : capacity * 2;
    result = format(&stream, pattern, locale, args);
    if (text == 0) {
        return result;
    }
    if (result >= 0 && WriteByte_82F66B00(&stream) != -1 && WriteByte_82F66B00(&stream) != -1) {
        return result;
    }
    text[capacity - 1] = 0;
    return stream.count < 0 ? -2 : -1;
}
