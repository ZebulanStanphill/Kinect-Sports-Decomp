typedef struct Ref_826DFC68 { int pad; long refs; } Ref_826DFC68;
typedef struct S_826DFC68 {
    int pad[7];
    unsigned int tagged;   /* 0x1c */
} S_826DFC68;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_82686DC0(S_826DFC68 *s);

void fn_826DFC68(S_826DFC68 *s)
{
    Ref_826DFC68 *r;

    r = (Ref_826DFC68 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_82686DC0(s);
}
