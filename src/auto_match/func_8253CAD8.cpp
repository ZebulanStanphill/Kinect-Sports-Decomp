extern "C" void fn_8251E400(void *);
extern "C" void fn_8251FA58(void *);
extern "C" int *fn_82599308(void);
extern "C" void fn_82CE4118(void *);
extern "C" void fn_82D81648(int, void *);
struct A_8253CAD8 { virtual void s0(); virtual void rel(int); };
struct B_8253CAD8 { virtual ~B_8253CAD8(); };
struct Cfg_8253CAD8 { char pad[0x1f8]; int f1f8; };
struct Self_8253CAD8 {
  char pad0[4]; A_8253CAD8 *f4; int f8; char padc[8]; void *f14; B_8253CAD8 *f18; void *f1c; void *f20;
  void *f24; void *f28; void *f2c; void *f30; void *f34; void *f38; char *f3c; char pad3[0x10];
  char f50[0x14]; char f64[0x14]; char f78[0x14]; char f8c[0x14]; char fa0[0x14]; char fb4[0x14]; char fc8[0x14]; char fdc[0x14];
  int ff0;
};
extern "C" void fn_8253CAD8(Self_8253CAD8 *s, Cfg_8253CAD8 *c)
{
  if (s->f4 != 0) s->f4->rel(1);
  fn_8251E400(s->fb4);
  fn_8251E400(s->fa0);
  fn_8251E400(s->f8c);
  fn_8251E400(s->f78);
  fn_8251E400(s->f64);
  fn_8251E400(s->f50);
  fn_8251E400(s->fc8);
  fn_8251E400(s->fdc);
  if (c->f1f8 != 0) {
    char *p;
    *fn_82599308() = 0;
    p = s->f3c;
    fn_82D81648(c->f1f8, p != 0 ? p + 8 : 0);
    fn_82CE4118(s->f3c);
    s->f3c = 0;
    fn_82CE4118(s->f14);
    fn_82CE4118(s->f14);
    s->f14 = 0;
    delete s->f18;
    s->f18 = 0;
    fn_82CE4118((void *)c->f1f8);
    s->f8 = 0;
    fn_82CE4118(s->f20);
    s->f20 = 0;
    fn_82CE4118(s->f1c);
    s->f1c = 0;
    s->ff0 = 0;
  }
  if (s->f34 != 0) { fn_8251FA58(s->f34); s->f34 = 0; }
  if (s->f38 != 0) { fn_8251FA58(s->f38); s->f38 = 0; }
  if (s->f30 != 0) { fn_8251FA58(s->f30); s->f30 = 0; }
  if (s->f2c != 0) { fn_8251FA58(s->f2c); s->f2c = 0; }
  if (s->f28 != 0) { fn_8251FA58(s->f28); s->f28 = 0; }
  if (s->f24 != 0) { fn_8251FA58(s->f24); s->f24 = 0; }
}
