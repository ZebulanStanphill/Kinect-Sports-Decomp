typedef struct Ref_826E2FF0 { int pad; long refs; } Ref_826E2FF0;
typedef struct Str_826E2FF0 {
    unsigned int tagged;
} Str_826E2FF0;
typedef struct Entry_826E2FF0 {
    Str_826E2FF0 name;
    int a;
    int b;
} Entry_826E2FF0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268B330(Str_826E2FF0 *s);
extern void fn_8268B8E8(Str_826E2FF0 *s, const void *src);
extern void fn_826E1F08(void *self, Entry_826E2FF0 *e);

void fn_826E2FF0(void *self, const void *name, int a, int b)
{
    Entry_826E2FF0 e;
    Ref_826E2FF0 *r;

    fn_8268B330(&e.name);
    fn_8268B8E8(&e.name, name);
    e.a = a;
    e.b = b;
    fn_826E1F08(self, &e);
    r = (Ref_826E2FF0 *)(e.name.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
