struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); };
struct O { char pad[8]; V *v; };
extern "C" void fn_82CEDF40(O *p) { p->v->f4(); }
