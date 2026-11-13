typedef struct Ref_82686DC0 { int pad; long refs; } Ref_82686DC0;
typedef struct S_82686DC0 {
    int pad[4];
    unsigned int tagged;   /* 0x10 */
} S_82686DC0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C488(S_82686DC0 *s);

void fn_82686DC0(S_82686DC0 *s)
{
    Ref_82686DC0 *r;

    r = (Ref_82686DC0 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_8267C488(s);
}
