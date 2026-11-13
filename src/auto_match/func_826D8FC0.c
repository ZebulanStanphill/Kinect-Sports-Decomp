typedef struct Ref_826D8FC0 { int pad; long refs; } Ref_826D8FC0;
typedef struct S_826D8FC0 {
    int p0;
    int p4;
    unsigned int tagged;   /* 0x08 */
    void *fc;
    int p10;
    int p14;
    void *f18;
    void *f1c;
} S_826D8FC0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8267C488(S_826D8FC0 *s);

void fn_826D8FC0(S_826D8FC0 *s)
{
    Ref_826D8FC0 *r;

    if (s->f1c != 0) {
        fn_8267C4F0(s->f1c);
    }
    if (s->f18 != 0) {
        fn_8267C4F0(s->f18);
    }
    if (s->fc != 0) {
        fn_8267C4F0(s->fc);
    }
    r = (Ref_826D8FC0 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_8267C488(s);
}
