typedef struct String_8260D428 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_8260D428;

extern __declspec(noreturn) void fn_82F622E0(const char *message);
int memcmp(const void *a, const void *b, unsigned int n);

static __forceinline const char *Ptr(const String_8260D428 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

int fn_8260D428(const String_8260D428 *self, unsigned int off, unsigned int n0,
                const char *ptr, unsigned int count)
{
    unsigned int ans;
    if (self->size < off) {
        fn_82F622E0("invalid string position");
    }
    if (self->size - off < n0)
        n0 = self->size - off;
    ans = memcmp(Ptr(self) + off, ptr, n0 < count ? n0 : count);
    return ans != 0 ? (int)ans : n0 < count ? -1 : n0 == count ? 0 : 1;
}
