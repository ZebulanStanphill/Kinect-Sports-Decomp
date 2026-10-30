// std::basic_ostream<char>::operator<<(value): sentry, locale copy, num_put::put through the facet vtable.
struct Buf_828E5960;
struct Iter_828E5960 {
  unsigned char failed;
  Buf_828E5960 *buf;
};
struct Res_828E5960 {
  unsigned char failed;
  Buf_828E5960 *buf;
};
struct Ios_828E5960 {
  char pad0[0xc];
  int iostate;
  char pad1[0x38 - 0x10];
  Buf_828E5960 *rdbuf;
  char pad2[4];
  char fill;
};
struct Facet_828E5960;
struct FacetVt_828E5960 {
  void (*dtor)(void *, int);
  void (*put)(Res_828E5960 *, Facet_828E5960 *, Iter_828E5960, Ios_828E5960 *, char, int);
};
struct Facet_828E5960 { FacetVt_828E5960 *vt; };
struct Del_828E5960 { void (**vt)(Del_828E5960 *, int); };
struct Loc_828E5960 { Del_828E5960 *ptr; };
struct Sentry_828E5960 { int os; unsigned char ok; };
struct Ostr_828E5960 { int *vbtab; };

extern "C" {
void fn_8223FD30(Sentry_828E5960 *, Ostr_828E5960 *);
void fn_8223FE60(Sentry_828E5960 *);
Loc_828E5960 *fn_8223F560(Loc_828E5960 *, Ios_828E5960 *);
Facet_828E5960 *fn_8223EE28(Loc_828E5960 *);
Del_828E5960 *fn_8223F5A0(Del_828E5960 *);
void fn_82240070(Ios_828E5960 *, int, int);
}

#define IOS(o) ((Ios_828E5960 *)((char *)(o) + (o)->vbtab[1]))

extern "C" Ostr_828E5960 *fn_828E5960(Ostr_828E5960 *os, int val)
{
  int state = 0;
  Sentry_828E5960 se;
  Ios_828E5960 *ios;
  fn_8223FD30(&se, os);
  if (se.ok != 0) {
    Loc_828E5960 loc;
    Facet_828E5960 *f;
    Iter_828E5960 it;
    f = fn_8223EE28(fn_8223F560(&loc, IOS(os)));
    if (loc.ptr != 0) {
      Del_828E5960 *d = fn_8223F5A0(loc.ptr);
      if (d != 0) (*d->vt[0])(d, 1);
    }
    int off = os->vbtab[1];
    ios = IOS(os);
    it.failed = 0;
    it.buf = ios->rdbuf;
    Res_828E5960 res;
    f->vt->put(&res, f, it, (Ios_828E5960 *)((int)os + off), ios->fill, val);
    if (res.failed != 0) state = 4;
  }
  ios = IOS(os);
  if (state != 0) {
    state = ios->iostate | state;
    fn_82240070(ios, ios->rdbuf == 0 ? (state | 4) : state, 0);
  }
  fn_8223FE60(&se);
  return os;
}
