struct RC_826BDB08 { int pad0, pad4; int refs; };
struct Result_826BDB08 { unsigned char a; unsigned char flags; void *rc; int pad[2]; };
class Tgt_826BDB08 {
public:
  virtual void v0();
  virtual void v4();
  virtual void v8();
  virtual void vc();
  virtual void v10();
  virtual void f14(unsigned int, RC_826BDB08 **, Result_826BDB08 *);
  virtual void v18();
  virtual void v1c();
  virtual void v20();
  virtual unsigned char f24(unsigned int, RC_826BDB08 **, int);
};
struct Obj_826BDB08 {
  int pad0;
  unsigned char *state;
  Tgt_826BDB08 *tgt;
  char padc[0xc];
  unsigned int f18;
  int count;
};
extern "C" void fn_826944C8(RC_826BDB08 *);
extern "C" unsigned int fn_826957D0(Obj_826BDB08 *, int);
extern "C" void fn_826959C8(unsigned char *);
extern "C" void fn_82696D38(RC_826BDB08 **, unsigned int, unsigned int, int, int);
extern "C" void fn_82696330(Result_826BDB08 *);

extern "C" void fn_826BDB08(Obj_826BDB08 *o)
{
  unsigned int a, u;
  unsigned char r;
  unsigned char *st;
  RC_826BDB08 *rc;
  RC_826BDB08 *L;
  if (o->count >= 1) {
  a = o->f18;
  u = fn_826957D0(o, 0);
  fn_82696D38(&L, u, a, -1, 0);
  r = o->tgt->f24(o->f18 + 0x78, &L, 0);
  if (r) {
    Result_826BDB08 res;
    res.a = 0;
    res.flags = 0;
    o->tgt->f14(o->f18 + 0x78, &L, &res);
    if (res.flags & 1)
      r = 0;
    fn_82696330(&res);
  }
  st = o->state;
  fn_826959C8(st);
  st[4] = r;
  st[0] = 2;
  rc = L;
  if (--rc->refs == 0) {
    fn_826944C8(rc);
  }
  } else {

    st = o->state;
    fn_826959C8(st);
    st[0] = 2;
    st[4] = 0;
  }
}
