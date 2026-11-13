typedef struct Ref_8268BEA8 { int pad; long refs; } Ref_8268BEA8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern long _InterlockedIncrement(long volatile *);
extern void fn_8267BE38(void *p);
extern Ref_8268BEA8 lbl_83155184;
void fn_8268BEA8(unsigned int *tagged)
{
    Ref_8268BEA8 *r;
    _InterlockedExchangeAdd(&lbl_83155184.refs, 1);
    r = (Ref_8268BEA8 *)(*tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    *tagged = (*tagged & 3) | (unsigned int)&lbl_83155184;
}
