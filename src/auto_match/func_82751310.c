typedef struct Rc_82751310 { int pad[2]; unsigned refs; } Rc_82751310;
typedef struct Ctx_82751310 {
  char pad0[0x9c];
  Rc_82751310 *f9c;
  char pada0[0xa4 - 0xa0];
  char fa4[0x278 - 0xa4];
  char f278[0x288 - 0x278];
  void *f288;
  char pad28c[0x29c - 0x28c];
  char *f29c;
} Ctx_82751310;
typedef struct Out_82751310 { void *p0; int p4; unsigned char f8; } Out_82751310;
typedef struct Obj68_82751310 { void *a; void *b; unsigned char flags; } Obj68_82751310;
typedef struct Ref_82751310 { int pad[2]; unsigned refs; } Ref_82751310;
typedef struct Tmp_82751310 { Rc_82751310 *rc; unsigned key; } Tmp_82751310;
typedef struct S60_82751310 { Ctx_82751310 *p; unsigned char type; } S60_82751310;
typedef struct Dst_82751310 { char b[0x10]; } Dst_82751310;

extern unsigned fn_826B0E90(Ctx_82751310 *, void *);
extern void fn_8274E9D8(Obj68_82751310 *, Ctx_82751310 *);
extern void *fn_8267B890(void *, int, int);
extern void *fn_827512C0(void *, S60_82751310 *);
extern int fn_826B14D8(Ctx_82751310 *, int);
extern Ref_82751310 *fn_82751238(void *, S60_82751310 *, int, Out_82751310 *);
extern void fn_826A5E30(void *, unsigned *, void *);
extern int fn_82695750(Dst_82751310 *, Out_82751310 *);
extern void fn_82696330(Dst_82751310 *);
extern void fn_826824B0(void *);

Out_82751310 *fn_82751310(Out_82751310 *out, Ctx_82751310 *c)
{
  Rc_82751310 *rc;
  unsigned key;
  S60_82751310 s60;
  Obj68_82751310 o68;
  unsigned char zero50;
  Dst_82751310 d80;
  void *m;
  void *v;
  void *n;
  Ref_82751310 *r;

  rc = c->f9c;
  rc->refs = rc->refs + 1;
  if (fn_826B0E90(c, &rc) == 0) {
    fn_8274E9D8(&o68, c);
    if ((o68.flags & 2) == 0 && o68.a != 0) fn_826824B0(o68.a);
    o68.a = 0;
    if ((o68.flags & 1) == 0 && o68.b != 0) fn_826824B0(o68.b);
    o68.b = 0;
  }
  s60.type = 8;
  s60.p = c;
  m = fn_8267B890(c->f288, 0x34, 0);
  if (m != 0) {
    v = fn_827512C0(m, &s60);
  } else {
    v = 0;
  }
  out->p0 = v;
  out->f8 = 0;
  out->p4 = 0;
  n = fn_8267B890(c->f288, 0x5c, 0);
  if (n != 0) {
    r = fn_82751238(n, &s60, fn_826B14D8(c, 0x25), out);
  } else {
    r = 0;
  }
  if (r != 0) {
    r->refs = (r->refs + 1) & 0x8fffffff;
  }
  key = 0x27;
  rc = (Rc_82751310 *)r;
  fn_826A5E30(c->f278, &key, &rc);
  if (rc != 0) fn_826824B0(rc);
  zero50 = 0;
  (*(void (**)(void *, S60_82751310 *, void *, int, unsigned char *))(*(int *)(c->f29c + 0x10) + 0x28))
      (c->f29c + 0x10, &s60, c->fa4, fn_82695750(&d80, out), &zero50);
  fn_82696330(&d80);
  if (r != 0) fn_826824B0(r);
  return out;
}
