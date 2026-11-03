struct Sink_82E0A018 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int Op(int a, int b); };
struct Obj_82E0A018 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
  virtual int Get();
  virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void Prep();
  char pad[0x14]; Sink_82E0A018 *sink;
};
extern "C" int fn_82E0A018(Obj_82E0A018 *self, int arg)
{
  self->Prep();
  return self->sink->Op(self->Get(), arg) == 0;
}
