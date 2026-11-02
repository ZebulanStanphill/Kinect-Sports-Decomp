typedef unsigned int U32;
struct If_823EAB88;
typedef struct { void *s0; void (*f1)(struct If_823EAB88 *, void *); void *s2, *s3; void (*f4)(struct If_823EAB88 *, void *, void *); void (*f5)(struct If_823EAB88 *, void *, void *); } Vt_823EAB88;
typedef struct If_823EAB88 { Vt_823EAB88 *vt; } If_823EAB88;
typedef struct { int pad[4]; If_823EAB88 *g; } Sub2_823EAB88;
typedef struct { char pad0[0x38]; Sub2_823EAB88 s2; char pad1[0x68 - 0x4c]; If_823EAB88 *h; } Sub_823EAB88;
typedef struct { char pad[0x120]; Sub_823EAB88 sub; } Obj_823EAB88;
typedef struct { Obj_823EAB88 *o; } Param_823EAB88;
typedef struct { void *first; void *second; } Pair_823EAB88;
extern void fn_822315A0(void *);
extern void fn_82250D78(void *);
extern void fn_822D79D8(Pair_823EAB88 *, void *);
extern void *fn_822D7FE0(void *);
extern void *fn_8265C9E0(U32);
extern void fn_828E2B28(void *, Pair_823EAB88 *);
extern void fn_828E9D40(void *);
extern void fn_828E9D90(void *);
static __forceinline void Notify_823EAB88(Sub2_823EAB88 *t, void *buf)
{
  if (t->g != 0) t->g->vt->f1(t->g, buf);
}
void fn_823EAB88(Param_823EAB88 *p, void *arg)
{
  Obj_823EAB88 *o = p->o;
  Sub_823EAB88 *s = &o->sub;
  void *mem;
  void *v;
  Pair_823EAB88 pr;
  char buf[0x90];
  mem = fn_8265C9E0(0x28);
  if (mem != 0) v = fn_822D7FE0(mem); else v = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, v);
  s->h->vt->f4(s->h, pr.first, arg);
  if (s->s2.g != 0) {
    Sub2_823EAB88 *t;
    void *f;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    t = &s->s2;
    f = pr.first;
    fn_82250D78(buf);
    s->h->vt->f5(s->h, f, buf);
    Notify_823EAB88(t, buf);
  }
  fn_828E2B28(s, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
