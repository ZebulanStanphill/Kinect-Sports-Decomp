typedef struct Stream_82F70110 {
    char *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F70110;

extern void *memset(void *, int, unsigned int);

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

extern int fn_82F7A0C0(Stream_82F70110 *, const unsigned short *, void *, void *);
extern int fn_82F70748(int, Stream_82F70110 *);

static __forceinline void WriteByte_82F70110(Stream_82F70110 *stream)
{
    if (--stream->count >= 0) {
        *stream->cursor++ = 0;
    } else {
        fn_82F70748(0, stream);
    }
}

int fn_82F70110(unsigned short *text, unsigned int capacity, const unsigned short *pattern, void *locale,
                void *args)
{
    Stream_82F70110 stream = {0};
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
    result = fn_82F7A0C0(&stream, pattern, locale, args);
    if (text != 0) {
        WriteByte_82F70110(&stream);
        WriteByte_82F70110(&stream);
    }
    return result;
}
