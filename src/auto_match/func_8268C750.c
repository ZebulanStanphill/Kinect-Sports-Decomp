typedef struct String_8268C750 {
    unsigned int tagged; /* 0x0 */
    unsigned int length; /* 0x4 */
} String_8268C750;

extern unsigned int lbl_831E7E64;
extern unsigned int fn_8267BF50(String_8268C750 *);
extern void *fn_8268B368(String_8268C750 *, unsigned int, unsigned int, int);
extern void *memcpy(void *, const void *, unsigned int);
extern long _InterlockedExchangeAdd(long *, long);

String_8268C750 *fn_8268C750(String_8268C750 *self, String_8268C750 *source)
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
    if (oldLength == lbl_831E7E64) {
        self->tagged = block;
        _InterlockedExchangeAdd((long *)(block + 4), 1);
    } else {
        unsigned int flags = *(unsigned int *)block;
        unsigned int count = flags & 0x7fffffff;
        void *copy = fn_8268B368(self, lbl_831E7E64, count, flags & 0x80000000);
        memcpy((char *)copy + 8, (void *)(block + 8), count);
        self->tagged = (unsigned int)copy;
    }
    return self;
}
