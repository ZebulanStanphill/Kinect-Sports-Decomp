// std::basic_ostream<char>::operator<<(value): sentry, locale copy, num_put::put through the facet vtable.
struct Buf_828A8E18;
struct Iter_828A8E18 {
  unsigned char failed;
  Buf_828A8E18 *buf;
};
struct Res_828A8E18 {
  unsigned char failed;
  Buf_828A8E18 *buf;
};
struct Ios_828A8E18 {
  char pad0[0xc];
  int iostate;
  char pad1[0x38 - 0x10];
  Buf_828A8E18 *rdbuf;
  char pad2[4];
  char fill;
};
struct Facet_828A8E18;
struct FacetVt_828A8E18 {
  void (*dtor)(void *, int);
  void *pad[7];
  void (*put)(Res_828A8E18 *, Facet_828A8E18 *, Iter_828A8E18, Ios_828A8E18 *, char, int);
};
struct Facet_828A8E18 { FacetVt_828A8E18 *vt; };
struct Del_828A8E18 { void (**vt)(Del_828A8E18 *, int); };
struct Loc_828A8E18 { Del_828A8E18 *ptr; };
struct Sentry_828A8E18 { int os; unsigned char ok; };
struct Ostr_828A8E18 { int *vbtab; };

extern "C" {
void fn_8223FD30(Sentry_828A8E18 *, Ostr_828A8E18 *);
void fn_8223FE60(Sentry_828A8E18 *);
Loc_828A8E18 *fn_8223F560(Loc_828A8E18 *, Ios_828A8E18 *);
Facet_828A8E18 *fn_8223EE28(Loc_828A8E18 *);
Del_828A8E18 *fn_8223F5A0(Del_828A8E18 *);
void fn_82240070(Ios_828A8E18 *, int, int);
}

#define IOS(o) ((Ios_828A8E18 *)((char *)(o) + (o)->vbtab[1]))

extern "C" Ostr_828A8E18 *fn_828A8E18(Ostr_828A8E18 *os, int val)
{
  int state = 0;
  Sentry_828A8E18 se;
  Ios_828A8E18 *ios;
  fn_8223FD30(&se, os);
  if (se.ok != 0) {
    Loc_828A8E18 loc;
    Facet_828A8E18 *f;
    Iter_828A8E18 it;
    f = fn_8223EE28(fn_8223F560(&loc, IOS(os)));
    if (loc.ptr != 0) {
      Del_828A8E18 *d = fn_8223F5A0(loc.ptr);
      if (d != 0) (*d->vt[0])(d, 1);
    }
    int off = os->vbtab[1];
    ios = IOS(os);
    it.failed = 0;
    it.buf = ios->rdbuf;
    Res_828A8E18 res;
    f->vt->put(&res, f, it, (Ios_828A8E18 *)((int)os + off), ios->fill, val);
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
