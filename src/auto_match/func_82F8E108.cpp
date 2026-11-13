class Obj_82F8E108 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8();
  virtual void Call(int, int, unsigned, unsigned);
};
extern "C" void fn_82F8E108(Obj_82F8E108 *self, unsigned a, unsigned b)
{
  self->Call(0, 1, a, b);
}
