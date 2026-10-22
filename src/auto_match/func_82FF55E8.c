extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *lbl_831BC768;
typedef struct Pool { int pad0; unsigned int cap; void **base; void **cur; unsigned int count; int sub[4]; } Pool;
extern int fn_82FF5C48(void *sub, unsigned int n);

static int Pool_init(Pool *p, unsigned int sz) { p->cap = sz;
    if (sz != 0) {
        void **m = (void **)fn_82FA5060(lbl_831BC768, sz * 4);
        p->base = m;
        p->cur = m;
        if (m == 0) return 0x34;
        p->count = sz;
    }
    return fn_82FF5C48(p->sub, p->cap); }
int fn_82FF55E8(Pool *p, unsigned int n)
{
    return Pool_init(p, n ? n : 0xff);

}
