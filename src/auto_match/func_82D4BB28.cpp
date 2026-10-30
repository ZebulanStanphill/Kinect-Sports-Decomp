struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); };
struct O { char pad[52]; V *v; };
extern "C" void fn_82D4BB28(O *p) { p->v->f7(); }
