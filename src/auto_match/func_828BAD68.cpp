// std::basic_ostream<char>::operator<<(value): sentry, locale copy, num_put::put through the facet vtable.
struct Buf_828BAD68;
struct Iter_828BAD68 {
  unsigned char failed;
  Buf_828BAD68 *buf;
};
struct Res_828BAD68 {
  unsigned char failed;
  Buf_828BAD68 *buf;
};
struct Ios_828BAD68 {
  char pad0[0xc];
  int iostate;
  char pad1[0x38 - 0x10];
  Buf_828BAD68 *rdbuf;
  char pad2[4];
  char fill;
};
struct Facet_828BAD68;
struct FacetVt_828BAD68 {
  void (*dtor)(void *, int);
  void *pad[5];
  void (*put)(Res_828BAD68 *, Facet_828BAD68 *, Iter_828BAD68, Ios_828BAD68 *, char, unsigned short);
};
struct Facet_828BAD68 { FacetVt_828BAD68 *vt; };
struct Del_828BAD68 { void (**vt)(Del_828BAD68 *, int); };
struct Loc_828BAD68 { Del_828BAD68 *ptr; };
struct Sentry_828BAD68 { int os; unsigned char ok; };
struct Ostr_828BAD68 { int *vbtab; };

extern "C" {
void fn_8223FD30(Sentry_828BAD68 *, Ostr_828BAD68 *);
void fn_8223FE60(Sentry_828BAD68 *);
Loc_828BAD68 *fn_8223F560(Loc_828BAD68 *, Ios_828BAD68 *);
Facet_828BAD68 *fn_8223EE28(Loc_828BAD68 *);
Del_828BAD68 *fn_8223F5A0(Del_828BAD68 *);
void fn_82240070(Ios_828BAD68 *, int, int);
}

#define IOS(o) ((Ios_828BAD68 *)((char *)(o) + (o)->vbtab[1]))

extern "C" Ostr_828BAD68 *fn_828BAD68(Ostr_828BAD68 *os, int val)
{
  int state = 0;
  Sentry_828BAD68 se;
  Ios_828BAD68 *ios;
  fn_8223FD30(&se, os);
  if (se.ok != 0) {
    Loc_828BAD68 loc;
    Facet_828BAD68 *f;
    Iter_828BAD68 it;
    f = fn_8223EE28(fn_8223F560(&loc, IOS(os)));
    if (loc.ptr != 0) {
      Del_828BAD68 *d = fn_8223F5A0(loc.ptr);
      if (d != 0) (*d->vt[0])(d, 1);
    }
    int off = os->vbtab[1];
    ios = IOS(os);
    it.failed = 0;
    it.buf = ios->rdbuf;
    Res_828BAD68 res;
    f->vt->put(&res, f, it, (Ios_828BAD68 *)((int)os + off), ios->fill, val);
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
