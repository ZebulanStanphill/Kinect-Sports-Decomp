typedef struct Ref_827A5B60 { int pad; long refs; } Ref_827A5B60;
typedef struct Obj_827A5B60 {
    void *vt;
    unsigned int tagged;
} Obj_827A5B60;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8265CA20(void *p);

Obj_827A5B60 *fn_827A5B60(Obj_827A5B60 *self, unsigned int flags)
{
    Ref_827A5B60 *r = (Ref_827A5B60 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
