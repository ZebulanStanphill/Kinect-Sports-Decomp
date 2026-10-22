typedef unsigned short wchar;
typedef __int64 streamsize;

typedef struct Streambuf Streambuf;
typedef struct {
  char pad0[0x24];
  streamsize (*xsputn)(Streambuf *, const wchar *, streamsize);
} StreambufVtbl;
struct Streambuf {
  StreambufVtbl *vtbl;
};

typedef struct {
  char pad0[0xc];
  int state;          /* 0x0c */
  int pad10;
  int fmtfl;          /* 0x14 */
  int pad18[2];
  streamsize wide;    /* 0x20 */
  char pad28[0x10];
  Streambuf *strbuf;  /* 0x38 */
  int pad3c;
  wchar fill;         /* 0x40 */
} Ios;

typedef struct {
  int *vbtbl;
} Ostream;

typedef struct {
  Ostream *ostr;
  unsigned char ok;
} Sentry;

#define IOS(o) ((Ios *)((char *)(o) + (o)->vbtbl[1]))


extern void fn_8223FE60(Sentry *s);
extern void fn_82240070(Ios *ios, int state, int reraise);
extern wchar fn_82296E38(Streambuf *sb, wchar c);
extern void fn_82297CF0(Sentry *s, Ostream *o);
extern unsigned int fn_82F64CE0(const wchar *s);

static void ios_clear(Ios *ios, int st, int reraise)
{
  fn_82240070(ios, ios->strbuf == 0 ? st | 4 : st, reraise);
}

static void ios_setstate(Ios *ios, int st)
{
  if (st != 0)
    ios_clear(ios, ios->state | st, 0);
}


Ostream * fn_82296618(Ostream *_Ostr,const wchar *_Val)

{
  int _State;
  streamsize _Count;
  streamsize _Pad;
  Sentry _Ok;
  
  _State = 0;
  _Count = fn_82F64CE0(_Val);
  _Pad = IOS(_Ostr)->wide <= 0 || IOS(_Ostr)->wide <= _Count ? 0 : IOS(_Ostr)->wide - _Count;
  fn_82297CF0(&_Ok,_Ostr);
  if (!_Ok.ok) {
    _State |= 4;
  }
  else {
    if ((IOS(_Ostr)->fmtfl & 0x1c0) != 0x40) {
      for (; 0 < _Pad; --_Pad) {
        if (fn_82296E38(IOS(_Ostr)->strbuf, IOS(_Ostr)->fill) == 0xffff) {
          _State |= 4;
          break;
        }
      }
    }
    if (_State == 0 && IOS(_Ostr)->strbuf->vtbl->xsputn(IOS(_Ostr)->strbuf, _Val, _Count) != _Count)
      _State |= 4;
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
  return _Ostr;
}
