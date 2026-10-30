struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); };
struct O { char pad[4]; V *v; };
extern "C" void fn_82CF6C60(O *p) { p->v->f10(); }
