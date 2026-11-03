struct Ctx_826A3CE8 {
  char pad[0x78];
  int f78;
};
struct T_826A3CE8 {
  unsigned char kind;
  char pad[7];
  int x;
  char pad2[4];
};
struct P_826A3CE8 {
  unsigned int first;
  unsigned int second;
  unsigned char flags;
};
struct Sub_826A3CE8 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void f0c(Ctx_826A3CE8 *ctx, int p, T_826A3CE8 *t, unsigned char *f);
};
struct Item_826A3CE8 {
  char pad[0x10];
  Sub_826A3CE8 sub;
};
struct Obj_826A3CE8 {
  char pad0[4];
  void *f4;
  char pad8[0x18 - 8];
  Ctx_826A3CE8 *ctx;
  int f1c;
};

extern "C" unsigned int fn_8267B890(int p, int a, int b);
extern "C" Item_826A3CE8 *fn_826A2AB8(unsigned int m, Ctx_826A3CE8 *ctx);
extern "C" void fn_82696330(T_826A3CE8 *t);
extern "C" void fn_826AE288(P_826A3CE8 *p, Ctx_826A3CE8 *ctx, int a);
extern "C" void fn_826A1D48(Sub_826A3CE8 *s, int *p, P_826A3CE8 *pp);
extern "C" void fn_826A1A78(Item_826A3CE8 *it, Obj_826A3CE8 *o);
extern "C" void fn_82696BC8(void *a, Item_826A3CE8 *it);
extern "C" void fn_826824B0(unsigned int p);

extern "C" void fn_826A3CE8(Obj_826A3CE8 *o)
{
  unsigned int m;
  Item_826A3CE8 *it;
  Sub_826A3CE8 *s;
  unsigned char f;
  T_826A3CE8 t;
  P_826A3CE8 p;

  m = fn_8267B890(*(int *)(o->ctx->f78 + 0x288), 0x48, 0);
  if (m != 0) {
    it = fn_826A2AB8(m, o->ctx);
  } else {
    it = 0;
  }
  t.x = 0;
  f = 1;
  t.kind = 4;
  s = &it->sub;
  s->f0c(o->ctx, o->ctx->f78 + 0x250, &t, &f);
  fn_82696330(&t);
  fn_826AE288(&p, o->ctx, 2);
  fn_826A1D48(s, &o->ctx->f78, &p);
  if (o->f1c != 0) {
    fn_826A1A78(it, o);
  }
  fn_82696BC8(o->f4, it);
  if ((p.flags & 2) == 0 && p.first != 0) {
    fn_826824B0(p.first);
  }
  p.first = 0;
  if ((p.flags & 1) == 0 && p.second != 0) {
    fn_826824B0(p.second);
  }
  p.second = 0;
  fn_826824B0((unsigned int)it);
}
