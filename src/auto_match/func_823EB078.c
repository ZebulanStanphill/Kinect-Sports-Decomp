/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg (as in
   func_82603640.cpp). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
typedef unsigned int U32;
struct If_823EB078;
typedef struct { void *s0; void (*f1)(struct If_823EB078 *, void *); void *s2, *s3; void (*f4)(struct If_823EB078 *, void *, void *); void (*f5)(struct If_823EB078 *, void *, void *); } Vt_823EB078;
typedef struct If_823EB078 { Vt_823EB078 *vt; } If_823EB078;
typedef struct { int pad[4]; If_823EB078 *g; } Sub2_823EB078;
typedef struct { char pad0[0x38]; Sub2_823EB078 s2; char pad1[0x68 - 0x4c]; If_823EB078 *h; } Sub_823EB078;
typedef struct { char pad[0xd40]; Sub_823EB078 sub; } Obj_823EB078;
typedef struct { Obj_823EB078 *o; } Param_823EB078;
typedef struct { void *first; void *second; } Pair_823EB078;
typedef struct { char head[0x50]; __vector4 a; __vector4 b; int c; } Msg_823EB078;
extern void fn_822315A0(void *);
extern void fn_82250D10(void *);
extern void fn_822D79D8(Pair_823EB078 *, void *);
extern void *fn_822D7FE0(void *);
extern void *fn_8265C9E0(U32);
extern void fn_828E2B28(void *, Pair_823EB078 *);
extern void fn_828E9D40(void *);
extern void fn_828E9D90(void *);
static __forceinline void Notify_823EB078(Sub2_823EB078 *t, void *buf)
{
  if (t->g != 0) t->g->vt->f1(t->g, buf);
}
void fn_823EB078(Param_823EB078 *p, void *arg)
{
  Obj_823EB078 *o = p->o;
  Sub_823EB078 *s = &o->sub;
  void *mem;
  void *v;
  Pair_823EB078 pr;
  Msg_823EB078 buf;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) v = fn_822D7FE0(mem); else v = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, v);
  s->h->vt->f4(s->h, pr.first, arg);
  if (s->s2.g != 0) {
    Sub2_823EB078 *t;
    void *f;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    t = &s->s2;
    f = pr.first;
    fn_82250D10(&buf);
    buf.a = __VMXGetReg(77);
    buf.b = __VMXGetReg(77);
    buf.c = -1;
    s->h->vt->f5(s->h, f, &buf);
    Notify_823EB078(t, &buf);
  }
  fn_828E2B28(s, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
