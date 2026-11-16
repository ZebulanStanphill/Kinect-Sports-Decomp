typedef char *va_list;
void __cdecl __va_start(va_list *args, ...);

typedef struct Stream_82F63F40 {
    void *cursor;              /* 0x00 */
    int count;                 /* 0x04 */
    void *base;                /* 0x08 */
    int flags;                 /* 0x0c */
    unsigned char padding[16]; /* 0x10 */
} Stream_82F63F40;

extern void *memset(void *, int, unsigned int);

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

extern int fn_82F709B8(Stream_82F63F40 *, const char *, void *, void *);
extern int fn_82F70748(int, Stream_82F63F40 *);

int sprintf(char *text, const char *pattern, ...)
{
    Stream_82F63F40 stream = {0};
    int result;
    va_list args;
    if (pattern == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (text == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    stream.base = text;
    stream.cursor = text;
    stream.flags = 0x42;
    stream.count = 0x7fffffff;
    __va_start(&args, pattern);
    result = fn_82F709B8(&stream, pattern, 0, args);
    if (--stream.count >= 0) {
        *(char *)stream.cursor = 0;
    } else {
        fn_82F70748(0, &stream);
    }
    return result;
}
