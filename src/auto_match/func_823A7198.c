typedef unsigned int U32;
struct If_823A7198;
typedef struct { void *s0; void (*f1)(struct If_823A7198 *, void *); void *s2, *s3; void (*f4)(struct If_823A7198 *, void *, void *); void (*f5)(struct If_823A7198 *, void *, void *); } Vt_823A7198;
typedef struct If_823A7198 { Vt_823A7198 *vt; } If_823A7198;
typedef struct { int pad[4]; If_823A7198 *g; } Sub2_823A7198;
typedef struct { char pad0[0x38]; Sub2_823A7198 s2; char pad1[0x68 - 0x4c]; If_823A7198 *h; } Sub_823A7198;
typedef struct { char pad[0x98]; Sub_823A7198 sub; } Obj_823A7198;
typedef struct { Obj_823A7198 *o; } Param_823A7198;
typedef struct { void *first; void *second; } Pair_823A7198;
typedef struct { int pad0[2]; int one; char pad1[0x44 - 0xc]; int a44; void *a48; } Buf_823A7198;
extern void fn_822315A0(void *);
extern void fn_822D79D8(Pair_823A7198 *, void *);
extern void *fn_822D7FE0(void *);
extern void *fn_8265C9E0(U32);
extern void fn_828E2B28(void *, Pair_823A7198 *);
extern void fn_828E9D40(void *);
extern void fn_828E9D90(void *);
static __forceinline void Notify_823A7198(Sub2_823A7198 *t, void *buf)
{
  if (t->g != 0) t->g->vt->f1(t->g, buf);
}
void fn_823A7198(Param_823A7198 *p, void *arg)
{
  Obj_823A7198 *o = p->o;
  Sub_823A7198 *s = &o->sub;
  void *mem;
  void *v;
  Pair_823A7198 pr;
  Buf_823A7198 buf;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) v = fn_822D7FE0(mem); else v = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, v);
  s->h->vt->f4(s->h, pr.first, arg);
  if (s->s2.g != 0) {
    Sub2_823A7198 *t;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    buf.a44 = 0;
    buf.a48 = 0;
    buf.one = 1;
    t = &s->s2;
    s->h->vt->f5(s->h, pr.first, &buf);
    Notify_823A7198(t, &buf);
    if (buf.a48 != 0) fn_822315A0(buf.a48);
  }
  fn_828E2B28(s, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
