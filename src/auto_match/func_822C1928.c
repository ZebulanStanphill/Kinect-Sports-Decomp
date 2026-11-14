/* std::string::find(const char *ptr, size_type off, size_type count) (VC10 <xstring>). */
typedef struct String_822C1928 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
} String_822C1928;

extern void *memchr(const void *buf, int c, unsigned int count);
extern int memcmp(const void *a, const void *b, unsigned int n);

static __forceinline const char *Myptr(const String_822C1928 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

unsigned int fn_822C1928(const String_822C1928 *self, const char *ptr, unsigned int off, unsigned int count)
{
    unsigned int nm;
    if (count == 0 && off <= self->size)
        return off;

    if (off < self->size && count <= (nm = self->size - off)) {
        const char *uptr;
        const char *vptr;
        for (nm -= count - 1, vptr = Myptr(self) + off;
             (uptr = (const char *)memchr(vptr, *ptr, nm)) != 0;
             nm -= uptr - vptr + 1, vptr = uptr + 1)
            if (memcmp(uptr, ptr, count) == 0)
                return uptr - Myptr(self);
    }
    return (unsigned int)-1;
}
