struct If_823EAC80;
typedef struct { void *s0; void (*f1)(struct If_823EAC80 *, void *); void *s2, *s3; void (*f4)(struct If_823EAC80 *, void *, void *); void (*f5)(struct If_823EAC80 *, void *, void *); } Vt_823EAC80;
typedef struct If_823EAC80 { Vt_823EAC80 *vt; } If_823EAC80;
typedef struct { int pad[4]; If_823EAC80 *g; } Sub2_823EAC80;
typedef struct { char pad0[0x38]; Sub2_823EAC80 s2; char pad1[0x68 - 0x4c]; If_823EAC80 *h; } Sub_823EAC80;
typedef struct { char pad[0x190]; Sub_823EAC80 sub; } Obj_823EAC80;
typedef struct { Obj_823EAC80 *o; } Param_823EAC80;
typedef struct { void *first; void *second; } Pair_823EAC80;
extern void fn_822315A0(void *);
extern void fn_82250D78(void *);
extern void fn_822D79D8(Pair_823EAC80 *, void *);
extern void *fn_822D7FE0(void *);
extern void *fn_8265C9E0(unsigned int);
extern void fn_828E2B28(void *, Pair_823EAC80 *);
extern void fn_828E9D40(void *);
extern void fn_828E9D90(void *);
static __forceinline void Notify_823EAC80(Sub2_823EAC80 *t, void *buf)
{
  if (t->g != 0) t->g->vt->f1(t->g, buf);
}
void fn_823EAC80(Param_823EAC80 *p, void *arg)
{
  Obj_823EAC80 *o = p->o;
  Sub_823EAC80 *s = &o->sub;
  void *mem;
  void *v;
  Pair_823EAC80 pr;
  char buf[0x90];
  mem = fn_8265C9E0(0x28);
  if (mem != 0) v = fn_822D7FE0(mem); else v = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, v);
  s->h->vt->f4(s->h, pr.first, arg);
  if (s->s2.g != 0) {
    Sub2_823EAC80 *t;
    void *f;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    t = &s->s2;
    f = pr.first;
    fn_82250D78(buf);
    s->h->vt->f5(s->h, f, buf);
    Notify_823EAC80(t, buf);
  }
  fn_828E2B28(s, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
