struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); };
struct O { char pad[12]; V *v; };
extern "C" void fn_82D5B990(O *p) { p->v->f6(); }
