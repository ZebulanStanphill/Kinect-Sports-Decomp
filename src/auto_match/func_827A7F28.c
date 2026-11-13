typedef struct Ref_827A7F28 { int pad; long refs; } Ref_827A7F28;
typedef struct Str_827A7F28 {
    unsigned int tagged;
} Str_827A7F28;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern unsigned int fn_826BCDE8(const char *s);
extern void fn_8267BE38(void *p);
extern void fn_8268B330(Str_827A7F28 *s);
extern void fn_8268B508(Str_827A7F28 *s, const char *text, unsigned int len);
extern int fn_827A7E00(void *self, void *key, Str_827A7F28 *s);

int fn_827A7F28(void *self, void *key, const char *text, int len)
{
    Str_827A7F28 s;
    Ref_827A7F28 *r;
    int result;

    if (len == -1)
        len = fn_826BCDE8(text);
    fn_8268B330(&s);
    fn_8268B508(&s, text, len);
    result = fn_827A7E00(self, key, &s);
    r = (Ref_827A7F28 *)(s.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    return result;
}
