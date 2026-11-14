typedef struct String_82536D88 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_82536D88;

int memcmp(const void *a, const void *b, unsigned int n);

static __forceinline const char *Ptr(const String_82536D88 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

unsigned int fn_82536D88(const String_82536D88 *self, const char *ptr, unsigned int off,
                         unsigned int count)
{
    const char *p;

    if (count == 0)
        return off < self->size ? off : self->size;
    if (count <= self->size) {
        p = Ptr(self) + (off < self->size - count ? off : self->size - count);
        for (;; --p) {
            if (*p == *ptr && memcmp(p, ptr, count) == 0)
                return p - Ptr(self);
            else if (p == Ptr(self))
                break;
        }
    }
    return 0xffffffff;
}
