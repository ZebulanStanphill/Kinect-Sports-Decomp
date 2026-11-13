typedef struct Ref_827246F8 { int pad; long refs; } Ref_827246F8;
typedef struct S_827246F8 {
    unsigned int tagged;   /* 0x00 */
    void *p4;              /* 0x04 */
} S_827246F8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C498(void *p);

void fn_827246F8(S_827246F8 *s)
{
    Ref_827246F8 *r;

    if (s->p4 != 0) {
        fn_8267C498(s->p4);
    }
    r = (Ref_827246F8 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
