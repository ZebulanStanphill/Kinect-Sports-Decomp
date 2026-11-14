#include <ostream>
#include <string.h>

typedef __int64 streamsize_822967A0;
typedef unsigned short wchar_822967A0;

typedef struct Streambuf_822967A0 Streambuf_822967A0;
typedef struct Ctype_822967A0 Ctype_822967A0;
typedef struct Facet_822967A0 Facet_822967A0;

typedef struct CtypeVtbl_822967A0 {
    void *pad0[10];
    wchar_822967A0 (*do_widen)(Ctype_822967A0 *self, char c);
} CtypeVtbl_822967A0;

struct Ctype_822967A0 {
    CtypeVtbl_822967A0 *vtbl;
};

typedef struct FacetVtbl_822967A0 {
    void (*destroy)(Facet_822967A0 *self, unsigned int flags);
} FacetVtbl_822967A0;

struct Facet_822967A0 {
    FacetVtbl_822967A0 *vtbl;
};

typedef struct LocImp_822967A0 LocImp_822967A0;

typedef struct Locale_822967A0 {
    LocImp_822967A0 *ptr;
} Locale_822967A0;

typedef struct Ios_822967A0 {
    char pad0[0xc];
    int state;          /* 0x0c */
    int pad10;
    int fmtfl;          /* 0x14 */
    int pad18[2];
    streamsize_822967A0 wide;    /* 0x20 */
    char pad28[0x8];
    Locale_822967A0 *ploc;       /* 0x30 */
    int pad34;
    Streambuf_822967A0 *strbuf;  /* 0x38 */
    int pad3c;
    wchar_822967A0 fill;         /* 0x40 */
} Ios_822967A0;

struct Ostream_822967A0 {
    int *vbtbl;
};

typedef struct {
    Ostream_822967A0 *ostr;
    unsigned char ok;
} Sentry_822967A0;

#define IOS(o) ((Ios_822967A0 *)((char *)(o) + (o)->vbtbl[1]))

extern "C" void fn_8223FE60(Sentry_822967A0 *s);
extern "C" void fn_82240070(Ios_822967A0 *ios, int state, int reraise);
extern "C" wchar_822967A0 fn_82296E38(Streambuf_822967A0 *sb, wchar_822967A0 c);
extern "C" void fn_82297CF0(Sentry_822967A0 *s, Ostream_822967A0 *o);
extern "C" void fn_8223F508(LocImp_822967A0 *imp);
extern "C" Facet_822967A0 *fn_8223F5A0(LocImp_822967A0 *imp);
extern "C" Ctype_822967A0 *fn_82297388(Locale_822967A0 *loc);

static __forceinline void ios_clear(Ios_822967A0 *ios, int st, int reraise)
{
    fn_82240070(ios, ios->strbuf == 0 ? st | 4 : st, reraise);
}

static __forceinline void ios_setstate(Ios_822967A0 *ios, int st)
{
    if (st != 0)
        ios_clear(ios, ios->state | st, 0);
}

template<> std::wostream &std::operator<< <wchar_t, std::char_traits<wchar_t> >(std::wostream &_Stream, const char *_Val)
{
    Ostream_822967A0 *_Ostr = (Ostream_822967A0 *)&_Stream;
    int _State;
    streamsize_822967A0 _Count;
    streamsize_822967A0 _Pad;
    Sentry_822967A0 _Ok;
    Ctype_822967A0 *_Ctype_fac;

    _State = 0;
    _Count = strlen(_Val);
    _Pad = IOS(_Ostr)->wide <= 0 || IOS(_Ostr)->wide <= _Count ? 0 : IOS(_Ostr)->wide - _Count;
    fn_82297CF0(&_Ok, _Ostr);
    if (!_Ok.ok) {
        _State |= 4;
    } else {
        {
            LocImp_822967A0 *imp = IOS(_Ostr)->ploc->ptr;
            Locale_822967A0 loc;
            loc.ptr = imp;
            fn_8223F508(imp);
            _Ctype_fac = fn_82297388(&loc);
            if (imp != 0) {
                Facet_822967A0 *dead = fn_8223F5A0(imp);
                if (dead != 0) {
                    dead->vtbl->destroy(dead, 1);
                }
            }
        }
        if ((IOS(_Ostr)->fmtfl & 0x1c0) != 0x40) {
            for (; 0 < _Pad; --_Pad) {
                if (fn_82296E38(IOS(_Ostr)->strbuf, IOS(_Ostr)->fill) == 0xffff) {
                    _State |= 4;
                    break;
                }
            }
        }
        for (; _State == 0 && 0 < _Count; --_Count, ++_Val) {
            if (fn_82296E38(IOS(_Ostr)->strbuf, _Ctype_fac->vtbl->do_widen(_Ctype_fac, *_Val)) == 0xffff) {
                _State |= 4;
            }
        }
        if (_State == 0) {
            for (; 0 < _Pad; --_Pad) {
                if (fn_82296E38(IOS(_Ostr)->strbuf, IOS(_Ostr)->fill) == 0xffff) {
                    _State |= 4;
                    break;
                }
            }
        }
        IOS(_Ostr)->wide = 0;
    }
    ios_setstate(IOS(_Ostr), _State);
    fn_8223FE60(&_Ok);
    return _Stream;
}
