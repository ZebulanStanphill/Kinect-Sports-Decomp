struct Src_82251E58 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void Get(unsigned id, void *out);
};
struct Sink_82251E58 {
  virtual void v0();
  virtual void Set(unsigned a, unsigned b, unsigned char c, unsigned d, unsigned e, unsigned char f, float g);
};
struct Owner_82251E58 {
  char pad[0x68];
  Src_82251E58 *s68; int p6c; Src_82251E58 *s70; int p74; Src_82251E58 *s78; int p7c; Src_82251E58 *s80; int p84; Src_82251E58 *s88; int p8c; Src_82251E58 *s90; int p94; Src_82251E58 *s98;
};
struct Arg_82251E58 { char pad[0x10]; Sink_82251E58 *sink; };
extern "C" void fn_82251E58(Owner_82251E58 *self, unsigned id, Arg_82251E58 *arg)
{
  unsigned a, b, d, e;
  unsigned char c, f;
  float g;
  self->s68->Get(id, &a);
  self->s70->Get(id, &b);
  self->s78->Get(id, &c);
  self->s80->Get(id, &d);
  self->s88->Get(id, &e);
  self->s90->Get(id, &f);
  self->s98->Get(id, &g);
  if (arg->sink != 0)
    arg->sink->Set(a, b, c, d, e, f, g);
}
