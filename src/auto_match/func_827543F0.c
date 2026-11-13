typedef struct Ref_827543F0 { int pad; long refs; } Ref_827543F0;
typedef struct S_827543F0 {
    int p0;
    int p4;                /* 0x04 */
    unsigned int tagged;   /* 0x08 */
} S_827543F0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826D95F0(int *p);

void fn_827543F0(S_827543F0 *s)
{
    Ref_827543F0 *r;

    r = (Ref_827543F0 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_826D95F0(&s->p4);
}
