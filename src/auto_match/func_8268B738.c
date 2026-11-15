typedef struct String_8268B738 {
    unsigned int tagged; /* 0x0 */
    unsigned int length; /* 0x4 */
} String_8268B738;
typedef struct Reader_8268B738 Reader_8268B738;

typedef struct Vtable_8268B738 {
    void *reserved;                                        /* 0x0 */
    void (*read)(Reader_8268B738 *, void *, unsigned int); /* 0x4 */
} Vtable_8268B738;

struct Reader_8268B738 {
    Vtable_8268B738 *vtable; /* 0x0 */
};

extern unsigned int lbl_831E7E64;
extern unsigned int fn_8267BF50(String_8268B738 *);
extern void *fn_8268B368(String_8268B738 *, unsigned int, unsigned int, int);
extern void fn_8267BE38(void *);
extern long _InterlockedExchangeAdd(long *, long);

void fn_8268B738(String_8268B738 *self, Reader_8268B738 *reader, unsigned int count)
{
    unsigned int tag = self->tagged;
    unsigned int old = tag & ~3u;
    unsigned int length = 0;
    void *block;
    switch (tag & 3) {
    case 0:
        length = lbl_831E7E64;
        break;
    case 1:
        length = fn_8267BF50(self);
        break;
    case 2:
        length = self->length;
        break;
    }
    block = fn_8268B368(self, length, count, 0);
    reader->vtable->read(reader, (char *)block + 8, count);
    self->tagged = (self->tagged & 3) | (unsigned int)block;
    if (_InterlockedExchangeAdd((long *)(old + 4), -1) - 1 == 0) {
        fn_8267BE38((void *)old);
    }
}
