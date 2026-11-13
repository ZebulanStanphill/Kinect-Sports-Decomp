typedef struct Ref_8273CC40 { int pad; long refs; } Ref_8273CC40;
typedef struct Obj_8273CC40 {
    char pad[0x30];
    unsigned int tagged30;
    unsigned int tagged34;
} Obj_8273CC40;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826C1AD8(void *p);

void fn_8273CC40(Obj_8273CC40 *self)
{
    Ref_8273CC40 *r = (Ref_8273CC40 *)(self->tagged34 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_8273CC40 *)(self->tagged30 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_826C1AD8(self);
}
