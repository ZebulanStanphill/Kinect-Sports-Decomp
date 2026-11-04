typedef struct Rc_82750018 { int pad[2]; unsigned refs; } Rc_82750018;
typedef struct Ctx_82750018 {
  char pad0[0x9c];
  Rc_82750018 *f9c;
  
  char fa4[0x278 - 0xa4];
  char pad_274[0x4]; char f278[0x288 - 0x278];
  void *f288;
  char pad28c[0x29c - 0x28c];
  char *f29c;
} Ctx_82750018;
typedef struct Out_82750018 { void *p0; int p4; unsigned char f8; } Out_82750018;
typedef struct Obj68_82750018 { void *a; void *b; unsigned char flags; } Obj68_82750018;
typedef struct Ref_82750018 { int pad[2]; unsigned refs; } Ref_82750018;
typedef struct Tmp_82750018 { Rc_82750018 *rc; unsigned key; } Tmp_82750018;
typedef struct S60_82750018 { Ctx_82750018 *p; unsigned char type; } S60_82750018;
typedef struct Dst_82750018 { char b[0x10]; } Dst_82750018;

extern unsigned fn_826B0E90(Ctx_82750018 *, void *);
extern void fn_8274E9D8(Obj68_82750018 *, Ctx_82750018 *);
extern void *fn_8267B890(void *, int, int);
extern void *fn_8274FFC8(void *, S60_82750018 *);
extern int fn_826B14D8(Ctx_82750018 *, int);
extern Ref_82750018 *fn_8274FEE8(void *, S60_82750018 *, int, Out_82750018 *);
extern void fn_826A5E30(void *, unsigned *, void *);
extern int fn_82695750(Dst_82750018 *, Out_82750018 *);
extern void fn_82696330(Dst_82750018 *);
extern void fn_826824B0(void *);

Out_82750018 *fn_82750018(Out_82750018 *out, Ctx_82750018 *c)
{
  Rc_82750018 *rc;
  unsigned key;
  S60_82750018 s60;
  Obj68_82750018 o68;
  unsigned char zero50;
  Dst_82750018 d80;
  void *m;
  void *v;
  void *n;
  Ref_82750018 *r;

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
    v = fn_8274FFC8(m, &s60);
  } else {
    v = 0;
  }
  out->p0 = v;
  out->f8 = 0;
  out->p4 = 0;
  n = fn_8267B890(c->f288, 0x5c, 0);
  if (n != 0) {
    r = fn_8274FEE8(n, &s60, fn_826B14D8(c, 0x25), out);
  } else {
    r = 0;
  }
  if (r != 0) {
    r->refs = (r->refs + 1) & 0x8fffffff;
  }
  key = 0x26;
  rc = (Rc_82750018 *)r;
  fn_826A5E30(c->f278, &key, &rc);
  if (rc != 0) fn_826824B0(rc);
  zero50 = 0;
  (*(void (**)(void *, S60_82750018 *, void *, int, unsigned char *))(*(int *)(c->f29c + 0x10) + 0x28))
      (c->f29c + 0x10, &s60, c->fa4, fn_82695750(&d80, out), &zero50);
  fn_82696330(&d80);
  if (r != 0) fn_826824B0(r);
  return out;
}
