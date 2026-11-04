typedef struct Rc_82751F10 { int pad[2]; unsigned refs; } Rc_82751F10;
typedef struct Ctx_82751F10 {
  char pad0[0x9c];
  Rc_82751F10 *f9c;
  char pada0[0xa8 - 0xa0];
  char fa4[0x278 - 0xa8];
  char f278[0x288 - 0x278];
  void *f288;
  char pad28c[0x29c - 0x28c];
  char *f29c;
} Ctx_82751F10;
typedef struct Out_82751F10 { void *p0; int p4; unsigned char f8; } Out_82751F10;
typedef struct Obj68_82751F10 { void *a; void *b; unsigned char flags; } Obj68_82751F10;
typedef struct Ref_82751F10 { int pad[2]; unsigned refs; } Ref_82751F10;
typedef struct Tmp_82751F10 { Rc_82751F10 *rc; unsigned key; } Tmp_82751F10;
typedef struct S60_82751F10 { Ctx_82751F10 *p; unsigned char type; } S60_82751F10;
typedef struct Dst_82751F10 { char b[0x10]; } Dst_82751F10;

extern unsigned fn_826B0E90(Ctx_82751F10 *, void *);
extern void fn_8274E9D8(Obj68_82751F10 *, Ctx_82751F10 *);
extern void *fn_8267B890(void *, int, int);
extern void *fn_82751EC0(void *, S60_82751F10 *);
extern int fn_826B14D8(Ctx_82751F10 *, int);
extern Ref_82751F10 *fn_82751E38(void *, S60_82751F10 *, int, Out_82751F10 *);
extern void fn_826A5E30(void *, unsigned *, void *);
extern int fn_82695750(Dst_82751F10 *, Out_82751F10 *);
extern void fn_82696330(Dst_82751F10 *);
extern void fn_826824B0(void *);

Out_82751F10 *fn_82751F10(Out_82751F10 *out, Ctx_82751F10 *c)
{
  Rc_82751F10 *rc;
  unsigned key;
  S60_82751F10 s60;
  Obj68_82751F10 o68;
  unsigned char zero50;
  Dst_82751F10 d80;
  void *m;
  void *v;
  void *n;
  Ref_82751F10 *r;

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
    v = fn_82751EC0(m, &s60);
  } else {
    v = 0;
  }
  out->p0 = v;
  out->f8 = 0;
  out->p4 = 0;
  n = fn_8267B890(c->f288, 0x5c, 0);
  if (n != 0) {
    r = fn_82751E38(n, &s60, fn_826B14D8(c, 0x25), out);
  } else {
    r = 0;
  }
  if (r != 0) {
    r->refs = (r->refs + 1) & 0x8fffffff;
  }
  key = 0x28;
  rc = (Rc_82751F10 *)r;
  fn_826A5E30(c->f278, &key, &rc);
  if (rc != 0) fn_826824B0(rc);
  zero50 = 0;
  (*(void (**)(void *, S60_82751F10 *, void *, int, unsigned char *))(*(int *)(c->f29c + 0x10) + 0x28))
      (c->f29c + 0x10, &s60, c->fa4, fn_82695750(&d80, out), &zero50);
  fn_82696330(&d80);
  if (r != 0) fn_826824B0(r);
  return out;
}
