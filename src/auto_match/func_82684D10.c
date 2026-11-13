typedef struct Ref_82684D10 { int pad; long refs; } Ref_82684D10;
typedef struct Handle_82684D10 { unsigned int tagged; } Handle_82684D10;
typedef struct Info_82684D10 { __int64 a; __int64 b; __int64 c; } Info_82684D10;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8268C510(Handle_82684D10 *out, const char *path);
extern unsigned char fn_826E9E48(Info_82684D10 *out, Handle_82684D10 *h);
extern void fn_8267BE38(void *p);

__int64 fn_82684D10(void *self, const char *path)
{
    Handle_82684D10 h;
    Info_82684D10 info;
    unsigned char ok;
    Ref_82684D10 *r;

    fn_8268C510(&h, path);
    ok = fn_826E9E48(&info, &h);
    r = (Ref_82684D10 *)(h.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    return ok ? info.a : -1;
}
