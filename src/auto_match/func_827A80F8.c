typedef struct Ref_827A80F8 { int pad; long refs; } Ref_827A80F8;
typedef struct S_827A80F8 {
    int p0;
    int p4;
    unsigned int tagged;   /* 0x08 */
} S_827A80F8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_827A7AC8(S_827A80F8 *s);
extern void fn_827A71A0(S_827A80F8 *s);

void fn_827A80F8(S_827A80F8 *s)
{
    Ref_827A80F8 *r;

    fn_827A7AC8(s);
    r = (Ref_827A80F8 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_827A71A0(s);
}
