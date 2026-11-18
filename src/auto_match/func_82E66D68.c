typedef struct WideBuffer_82E66D68 {
    unsigned int flags;   /* 0x00 */
    int length;           /* 0x04 */
    int capacity;         /* 0x08 */
    unsigned short *data; /* 0x0c */
} WideBuffer_82E66D68;

extern int fn_82E44DA0(WideBuffer_82E66D68 *self, int length);
extern void fn_82E44D20(WideBuffer_82E66D68 *self, int length);
extern int fn_82A2A288(unsigned int codePage, unsigned int flags, const char *text, int count,
                       unsigned short *wide, int wideCount);
extern unsigned int fn_82A1F470(void);
extern unsigned int strlen(const char *s);

int fn_82E66D68(WideBuffer_82E66D68 *self, unsigned int codePage, const char *text, int count)
{
    WideBuffer_82E66D68 *buffer = self;
    int converted;
    unsigned short *dest;

    if (text == 0)
        return 0;
    if (count == -1)
        count = strlen(text);
    if (fn_82E44DA0(buffer, buffer->length + count) < 0) {
        if (buffer->flags & 0x08000000)
            return 0x8007000e;
        else
            return 0;
    }
    dest = buffer->data + buffer->length;
    converted = 0;
    if (count > 0) {
        converted = fn_82A2A288(codePage, 0, text, count, dest, count);
        if (converted == 0) {
            fn_82A1F470();
            buffer->flags |= 0x08000000;
            if (buffer->flags & 0x08000000)
                return 0x8007000e;
            else
                return 0;
        }
    }
    fn_82E44D20(buffer, buffer->length + converted);
    return 0;
}
