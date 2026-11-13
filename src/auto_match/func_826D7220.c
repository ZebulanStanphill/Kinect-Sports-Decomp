typedef struct Ref_826D7220 { int pad; long refs; } Ref_826D7220;
typedef struct Obj_826D7220 {
    int pad;
    unsigned int tagged4;
    unsigned int tagged8;
} Obj_826D7220;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);

void fn_826D7220(Obj_826D7220 *self)
{
    Ref_826D7220 *r = (Ref_826D7220 *)(self->tagged8 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826D7220 *)(self->tagged4 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
