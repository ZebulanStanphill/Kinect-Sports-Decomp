typedef struct Rep_82694738 { unsigned int len; long refs; char data[1]; } Rep_82694738;
typedef struct Str_82694738 {
    unsigned int tagged;
} Str_82694738;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268B330(Str_82694738 *s);
extern void fn_8268B920(Str_82694738 *s, void *src);
extern int fn_82694610(void *self, const char *text, unsigned int len);

int fn_82694738(void *self, void *src)
{
    Str_82694738 s;
    Rep_82694738 *r;
    int res;

    fn_8268B330(&s);
    fn_8268B920(&s, src);
    res = fn_82694610(self, ((Rep_82694738 *)(s.tagged & ~3u))->data,
                      ((Rep_82694738 *)(s.tagged & ~3u))->len & 0x7fffffff);
    r = (Rep_82694738 *)(s.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    return res;
}
