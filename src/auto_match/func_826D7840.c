typedef struct Ref_826D7840 { int pad; long refs; } Ref_826D7840;
typedef struct S_826D7840 {
    unsigned int tagged;   /* 0x00 */
    int f4;                /* 0x04 */
    void *f8;              /* 0x08 */
} S_826D7840;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_82687270(void *p);
extern void fn_8267BE38(void *p);

void fn_826D7840(S_826D7840 *s)
{
    Ref_826D7840 *r;

    if (s->f4 == 0 && s->f8 != 0) {
        fn_82687270(s->f8);
    }
    r = (Ref_826D7840 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
