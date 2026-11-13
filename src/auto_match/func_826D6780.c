typedef struct Ref_826D6780 { int pad; long refs; } Ref_826D6780;
typedef struct Obj_826D6780 {
    int pad[5];
    unsigned int tagged14;
    unsigned int tagged18;
} Obj_826D6780;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);

void fn_826D6780(Obj_826D6780 *self)
{
    Ref_826D6780 *r = (Ref_826D6780 *)(self->tagged18 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826D6780 *)(self->tagged14 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
