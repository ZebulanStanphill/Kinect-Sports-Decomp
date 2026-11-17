typedef struct WideBuffer_82E44EC0 {
    unsigned int flags;   /* 0x00 */
    int length;           /* 0x04 */
    int capacity;         /* 0x08 */
    unsigned short *data; /* 0x0c */
} WideBuffer_82E44EC0;

extern int fn_82E44DA0(WideBuffer_82E44EC0 *, int);
extern void fn_82E44D20(WideBuffer_82E44EC0 *, int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E44EC0(WideBuffer_82E44EC0 *self, const unsigned short *text, unsigned int count)
{
    if (self->flags & 0x08000000) {
        return 0x8007000e;
    }
    if (count > 0x04000000) {
        {
            unsigned int *pFlags = &self->flags;
            *pFlags |= 0x08000000;
        }
        return (self->flags & 0x08000000) ? 0x8007000e : 0;
    }
    if (fn_82E44DA0(self, count + self->length) < 0) {
        return (self->flags & 0x08000000) ? 0x8007000e : 0;
    }
    memcpy(self->data + self->length, text, count * 2);
    fn_82E44D20(self, count + self->length);
    return 0;
}
