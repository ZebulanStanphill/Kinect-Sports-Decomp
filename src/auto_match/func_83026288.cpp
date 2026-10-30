struct Obj { virtual void f0(); virtual void f4(); virtual void f8(); };
struct S { char pad0[4]; Obj *obj; char pad8[0xe]; unsigned char flag; char pad17[9]; int h; };
extern "C" void fn_83037590(int h);
extern "C" void fn_83026288(S *s)
{
  if (s->flag) { fn_83037590(s->h); s->flag = 0; }
  s->h = 0;
  s->obj->f8();
}
