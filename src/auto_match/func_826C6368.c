typedef struct Ref_826C6368 { int pad; long refs; } Ref_826C6368;
typedef struct S_826C6368 {
    int p0;
    void *owner;           /* 0x04 */
    int p8;
    unsigned int tagged;   /* 0x0c */
    int p10;
    void *f14;
    void *f18;
} S_826C6368;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_82687270(void *p);
extern void fn_82753AE0(void *owner, S_826C6368 *s);

static __forceinline void release(void **p)
{
    if (*p != 0) {
        fn_82687270(*p);
    }
    *p = 0;
}

void fn_826C6368(S_826C6368 *s)
{
    Ref_826C6368 *r;

    if (s->owner != 0) {
        fn_82753AE0(s->owner, s);
    }
    release(&s->f14);
    if (s->f18 != 0) {
        fn_82687270(s->f18);
    }
    if (s->f14 != 0) {
        fn_82687270(s->f14);
    }
    r = (Ref_826C6368 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
