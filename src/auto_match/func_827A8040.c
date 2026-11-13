typedef struct Ref_827A8040 { int pad; long refs; } Ref_827A8040;
typedef struct Str_827A8040 {
    unsigned int tagged;
} Str_827A8040;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern unsigned int strlen(const char *s);
extern void fn_8267BE38(void *p);
extern void fn_8268C6A8(Str_827A8040 *s, const char *text, int len);
extern void fn_827A7FD0(void *self, void *key, Str_827A8040 *s);

void fn_827A8040(void *self, void *key, const char *text, int len)
{
    Str_827A8040 s;
    Ref_827A8040 *r;

    if (len == -1)
        len = strlen(text);
    fn_8268C6A8(&s, text, len);
    fn_827A7FD0(self, key, &s);
    r = (Ref_827A8040 *)(s.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
