typedef struct Ref_827A7E68 { int pad; long refs; } Ref_827A7E68;
typedef struct Str_827A7E68 {
    unsigned int tagged;
} Str_827A7E68;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern unsigned int strlen(const char *s);
extern void fn_8267BE38(void *p);
extern void fn_8268C6A8(Str_827A7E68 *s, const char *text, int len);
extern int fn_827A7E00(void *self, void *key, Str_827A7E68 *s);

int fn_827A7E68(void *self, void *key, const char *text, int len)
{
    Str_827A7E68 s;
    Ref_827A7E68 *r;
    int result;

    if (len == -1)
        len = strlen(text);
    fn_8268C6A8(&s, text, len);
    result = fn_827A7E00(self, key, &s);
    r = (Ref_827A7E68 *)(s.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    return result;
}
