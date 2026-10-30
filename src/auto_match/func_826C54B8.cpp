struct Iface {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void Call(int id, int a, int b, unsigned char *out);
};
struct Inner { char pad[0x68]; Iface iface; };
struct Obj { int pad; int id; Inner *inner; };

extern "C" void fn_826C54B8(Obj *o, int a, int b)
{
  unsigned char flag = 0;
  o->inner->iface.Call(o->id, a, b, &flag);
}
