struct Str_826A79D8 { char pad[8]; int rc; };
struct Ctx_826A79D8 { unsigned base; };
struct Obj_826A79D8 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual unsigned f28(Ctx_826A79D8 *, Str_826A79D8 **, unsigned, unsigned char *);
};
extern "C" {
void fn_82681728(Str_826A79D8 **, unsigned, const char *);
void fn_826944C8(Str_826A79D8 *);

unsigned fn_826A79D8(Obj_826A79D8 *o, Ctx_826A79D8 *ctx, const char *name, unsigned a4)
{
  unsigned char flag = 0;
  Str_826A79D8 *s;
  unsigned r;
  Str_826A79D8 *p;
  fn_82681728(&s, ctx->base + 0x254, name);
  r = o->f28(ctx, &s, a4, &flag);
  p = s;
  if (--p->rc == 0)
    fn_826944C8(p);
  return r;
}
}
