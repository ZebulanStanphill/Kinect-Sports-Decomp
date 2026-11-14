typedef __int64 streamsize;

typedef struct Streambuf Streambuf;
typedef struct {
  char pad0[0x24];
  streamsize (*xsputn)(Streambuf *, const char *, streamsize);
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
  char fill;          /* 0x40 */
} Ios;

typedef struct {
  int *vbtbl;
} Ostream;

typedef struct {
  Ostream *ostr;
  unsigned char ok;
} Sentry;

typedef struct {
  union {
    char buf[16];
    char *ptr;
  } bx;
  unsigned int size;  /* 0x10 */
  unsigned int res;   /* 0x14 */
} String;

#define IOS(o) ((Ios *)((char *)(o) + (o)->vbtbl[1]))

extern void fn_8223FD30(Sentry *s, Ostream *o);
extern void fn_8223FE60(Sentry *s);
extern int fn_8223FFB8(Streambuf *sb, char c);
extern void fn_82240070(Ios *ios, int state, int reraise);

static void ios_clear(Ios *ios, int st, int reraise)
{
  fn_82240070(ios, ios->strbuf == 0 ? st | 4 : st, reraise);
}

static void ios_setstate(Ios *ios, int st)
{
  if (st != 0)
    ios_clear(ios, ios->state | st, 0);
}

static __forceinline const char *str_data(const String *s)
{
  return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

Ostream *fn_8223B728(Ostream *out, const String *str)
{
  int state = 0;
  unsigned int size = str->size;
  unsigned int pad;
  Sentry ok;

  pad = IOS(out)->wide <= 0 || (unsigned int)IOS(out)->wide <= size ? 0 : (unsigned int)IOS(out)->wide - size;
  fn_8223FD30(&ok, out);
  if (!ok.ok) {
    state |= 4;
  } else {
    if ((IOS(out)->fmtfl & 0x1c0) != 0x40) {
      for (; 0 < pad; --pad) {
        if (fn_8223FFB8(IOS(out)->strbuf, IOS(out)->fill) == -1) {
          state |= 4;
          break;
        }
      }
    }
    if (state == 0 && IOS(out)->strbuf->vtbl->xsputn(IOS(out)->strbuf, str_data(str), (streamsize)size) != (streamsize)size) {
      state |= 4;
    } else {
      for (; 0 < pad; --pad) {
        if (fn_8223FFB8(IOS(out)->strbuf, IOS(out)->fill) == -1) {
          state |= 4;
          break;
        }
      }
    }
    IOS(out)->wide = 0;
  }
  ios_setstate(IOS(out), state);
  fn_8223FE60(&ok);
  return out;
}
