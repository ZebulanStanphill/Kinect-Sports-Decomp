extern "C" void fn_82250C58(void *);
struct Src_82251DB0 {
  virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
  virtual void get(int ctx, void *out);
};
struct Sink_82251DB0 {
  virtual void s0();
  virtual void put(int a, int b, void *c);
};
struct Sink2_82251DB0 { char pad[0x10]; Sink_82251DB0 *f10; };
struct Self_82251DB0 { char pad[0x68]; Src_82251DB0 *f68; char pad2[4]; Src_82251DB0 *f70; char pad3[4]; Src_82251DB0 *f78; };
extern "C" void fn_82251DB0(Self_82251DB0 *s, int ctx, Sink2_82251DB0 *t)
{
  int a, b;
  char buf[0x80];
  fn_82250C58(buf);
  s->f68->get(ctx, &a);
  s->f70->get(ctx, &b);
  s->f78->get(ctx, buf);
  if (t->f10 != 0) t->f10->put(a, b, buf);
}
