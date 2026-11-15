typedef struct String_8268C3E8 {
    unsigned int tagged; /* 0x0 */
    unsigned int length; /* 0x4 */
} String_8268C3E8;

extern unsigned int lbl_831E7E64;
extern unsigned int fn_8267BF50(String_8268C3E8 *);
extern void *fn_8268B368(String_8268C3E8 *, unsigned int, unsigned int, int);
extern void *memcpy(void *, const void *, unsigned int);
extern long _InterlockedExchangeAdd(long *, long);

void fn_8268C3E8(String_8268C3E8 *self, String_8268C3E8 *source, unsigned int length)
{
    unsigned int tag = source->tagged;
    unsigned int block = tag & ~3u;
    unsigned int oldLength = 0;
    switch (tag & 3) {
    case 0:
        oldLength = lbl_831E7E64;
        break;
    case 1:
        oldLength = fn_8267BF50(source);
        break;
    case 2:
        oldLength = source->length;
        break;
    }
    if (length == 0) {
        length = oldLength;
    }
    self->length = length;
    if (oldLength == length) {
        _InterlockedExchangeAdd((long *)(block + 4), 1);
        self->tagged = block | 2;
    } else {
        unsigned int flags = *(unsigned int *)block;
        unsigned int count = flags & 0x7fffffff;
        void *copy = fn_8268B368(self, length, count, flags & 0x80000000);
        memcpy((char *)copy + 8, (void *)(block + 8), count);
        self->tagged = (unsigned int)copy | 2;
    }
}
