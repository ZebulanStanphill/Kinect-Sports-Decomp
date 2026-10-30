class Iface_827215B0 {
public:
  virtual void v0(); virtual void v1(); virtual int v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10();
  virtual unsigned char Query(void *key, unsigned off, unsigned char *out);
};
struct Obj_827215B0 { char pad0[8]; unsigned f8; char pad1[4]; Iface_827215B0 sub; };
struct Self_827215B0 { char pad0[0x10]; Iface_827215B0 sub; char pad1[0x24]; Obj_827215B0 *cur; };
extern "C" {
void fn_826824B0(Obj_827215B0 *);
void fn_82696330(unsigned char *);
Obj_827215B0 *fn_82696958(unsigned char *, void *);
void fn_827215B0(Self_827215B0 *self, unsigned *key, void *arg)
{
  unsigned char buf = 0;
  if (self->sub.Query(key, *key + 0x140, &buf)) {
    Obj_827215B0 *o = fn_82696958(&buf, arg);
    if (o != 0 && o->sub.v2() == 7) {
      o->f8 = (o->f8 + 1) & 0x8fffffff;
      if (self->cur != 0) fn_826824B0(self->cur);
      self->cur = o;
    } else {
      if (self->cur != 0) fn_826824B0(self->cur);
      self->cur = 0;
    }
  }
  fn_82696330(&buf);
}
}
