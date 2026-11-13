typedef struct Buffers_82ED4510 {
    void *a;
    void *b;
    void *d;
    void *c;
    char data[0x401c];
} Buffers_82ED4510;

extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82ED4140(Buffers_82ED4510 *self);

static __forceinline void Destroy(Buffers_82ED4510 *e)
{
    if (e->a != 0) {
        fn_8265C990(e->a, 0x248c8000);
        e->a = 0;
    }
    if (e->b != 0) {
        fn_8265C990(e->b, 0x248c8000);
        e->b = 0;
    }
    if (e->c != 0) {
        fn_8265C990(e->c, 0x248c8000);
        e->c = 0;
    }
    if (e->d != 0) {
        fn_8265C990(e->d, 0x248c8000);
        e->d = 0;
    }
}

void *fn_82ED4510(Buffers_82ED4510 *self, unsigned int flags)
{
    if (flags & 2) {
        void *base = (char *)self - 4;
        int n = *(int *)base;
        Buffers_82ED4510 *p = self + n;
        while (--n >= 0) {
            p--;
            Destroy(p);
        }
        if (flags & 1)
            fn_8265C990(base, 0x248c8000);
        return base;
    }
    fn_82ED4140(self);
    if (flags & 1)
        fn_8265C990(self, 0x248c8000);
    return self;
}
