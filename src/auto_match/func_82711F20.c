typedef struct Ref_82711F20 { int pad; long refs; } Ref_82711F20;
typedef struct Obj_82711F20 {
    unsigned int tagged;
} Obj_82711F20;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8265CA20(void *p);

Obj_82711F20 *fn_82711F20(Obj_82711F20 *self, unsigned int flags)
{
    Ref_82711F20 *r = (Ref_82711F20 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
