typedef struct Str_82864F80 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int capacity;
} Str_82864F80;

typedef struct Tag_82864F80 {
    unsigned char unused;
} Tag_82864F80;

extern void fn_82297DB0(Str_82864F80 *self, int a, int b);
extern void fn_82865290(Str_82864F80 *self, unsigned int size, int ch);
extern void fn_82865DF8(Str_82864F80 *self, char *first, char *last, Tag_82864F80 tag);

static __forceinline char *Ptr(Str_82864F80 *s) { return s->capacity >= 16 ? s->u.ptr : s->u.buf; }

Str_82864F80 *fn_82864F80(Str_82864F80 *self, Str_82864F80 *other)
{
    Tag_82864F80 tag;
    unsigned int size = other->size;
    char *last;

    fn_82297DB0(self, 0, 0);
    fn_82865290(self, size, 0x20);
    last = Ptr(other) + other->size;
    fn_82865DF8(self, Ptr(other), last, tag);
    return self;
}
