typedef struct Ref_82684270 { int pad; long refs; } Ref_82684270;
typedef struct Str_82684270 { unsigned int tagged; } Str_82684270;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern int fn_8268ACE8(Str_82684270 *s);
extern unsigned int fn_8268AD58(Str_82684270 *s, int index);
extern Str_82684270 *fn_8268C928(Str_82684270 *out, Str_82684270 *s, int start, int end);
extern void fn_8268BA10(Str_82684270 *dst, Str_82684270 *src);
extern void fn_8267BE38(void *p);

static __forceinline void Release_82684270(Str_82684270 *s)
{
    Ref_82684270 *r = (Ref_82684270 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}

int fn_82684270(Str_82684270 *path)
{
    int i;

    for (i = fn_8268ACE8(path) - 1; i >= 0; i--) {
        unsigned int c = fn_8268AD58(path, i);
        if (c == '/' || c == '\\') {
            Str_82684270 dir;
            fn_8268BA10(path, fn_8268C928(&dir, path, 0, i + 1));
            Release_82684270(&dir);
            break;
        }
    }
    return i >= 0;
}
