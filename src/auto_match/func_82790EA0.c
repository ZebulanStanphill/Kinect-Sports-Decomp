typedef struct Ref_82790EA0 { int pad; long refs; } Ref_82790EA0;
typedef struct Obj_82790EA0 {
    char pad[0x38];
    unsigned int tagged38;
    unsigned int tagged3c;
} Obj_82790EA0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_82724AE8(void *p);

void fn_82790EA0(Obj_82790EA0 *self)
{
    Ref_82790EA0 *r = (Ref_82790EA0 *)(self->tagged3c & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_82790EA0 *)(self->tagged38 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_82724AE8(self);
}
