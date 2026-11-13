typedef struct Ref_82727738 { int pad; long refs; } Ref_82727738;
typedef struct Str_82727738 {
    unsigned int tagged;
} Str_82727738;
typedef struct S_82727738 {
    char pad[0xec];
    void *target;          /* 0xec */
} S_82727738;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268C510(Str_82727738 *s, const char *text);
extern void fn_827264B0(void *target, Str_82727738 *s);

void fn_82727738(S_82727738 *self, const char *text)
{
    Str_82727738 s;
    Ref_82727738 *r;

    if (self->target != 0) {
        fn_8268C510(&s, text);
        fn_827264B0(self->target, &s);
        r = (Ref_82727738 *)(s.tagged & ~3u);
        if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
            fn_8267BE38(r);
        }
    }
}
