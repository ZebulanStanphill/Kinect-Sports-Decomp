typedef struct Ref_82713380 { int pad; long refs; } Ref_82713380;
typedef struct S_82713380 {
    int pad[14];
    unsigned int tagged;   /* 0x38 */
} S_82713380;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826C1AD8(S_82713380 *s);

void fn_82713380(S_82713380 *s)
{
    Ref_82713380 *r;

    r = (Ref_82713380 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_826C1AD8(s);
}
