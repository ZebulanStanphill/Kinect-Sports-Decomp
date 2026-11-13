typedef struct Ref_82724640 { int pad; long refs; } Ref_82724640;
typedef struct Obj_82724640 {
    void *p0;
    unsigned int tagged4;
    int pad8;
    unsigned int taggedC;
} Obj_82724640;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C498(void *p);

void fn_82724640(Obj_82724640 *self)
{
    Ref_82724640 *r = (Ref_82724640 *)(self->taggedC & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_82724640 *)(self->tagged4 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (self->p0 != 0) {
        fn_8267C498(self->p0);
    }
}
