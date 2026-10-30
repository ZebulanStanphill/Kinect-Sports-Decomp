struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); };
struct O { char pad[8]; V *v; };
extern "C" void fn_82CEDF28(O *p) { p->v->f5(); }
