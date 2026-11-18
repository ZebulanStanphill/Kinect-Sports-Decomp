typedef struct WideBuffer_82E44DA0 {
    unsigned int flags;   /* 0x00 */
    int length;           /* 0x04 */
    int capacity;         /* 0x08 */
    unsigned short *data; /* 0x0c */
} WideBuffer_82E44DA0;

extern void *fn_82A2A360(void);
extern unsigned short *fn_82A28568(void *heap, unsigned int flags, unsigned int size);
extern void fn_82E44260(WideBuffer_82E44DA0 *self);
extern void *memcpy(void *, const void *, unsigned int);

static __forceinline int SetOutOfMemory_82E44DA0(WideBuffer_82E44DA0 *self, unsigned int flags)
{
    self->flags = flags | 0x08000000;
    return (self->flags & 0x08000000) ? 0x8007000e : 0;
}

int fn_82E44DA0(WideBuffer_82E44DA0 *self, int length)
{
    unsigned int flags = self->flags;
    unsigned int capacity;
    unsigned int extra;
    unsigned short *data;

    if (flags & 0x08000000) {
        return 0x8007000e;
    }
    if (length + 1 <= self->capacity) {
        return 0;
    }
    if ((flags & 0x30000000) == 0x20000000) {
        return SetOutOfMemory_82E44DA0(self, flags);
    }
    if (flags & 0x80000000) {
        extra = (flags >> 19) & 0xc0;
    } else {
        extra = 0;
    }
    capacity = extra + length + 1;
    if (capacity > 0x04000000) {
        return SetOutOfMemory_82E44DA0(self, flags);
    }
    data = fn_82A28568(fn_82A2A360(), 0, capacity * 2);
    if (data == 0) {
        self->length = 0;
        return SetOutOfMemory_82E44DA0(self, self->flags);
    }
    if (self->data != 0) {
        memcpy(data, self->data, self->length * 2);
        fn_82E44260(self);
        self->flags &= ~0x40000000;
    }
    self->data = data;
    self->capacity = capacity;
    return 0;
}
