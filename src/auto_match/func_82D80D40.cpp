struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); };
struct O { char pad[92]; V *v; };
extern "C" void fn_82D80D40(O *p) { p->v->f3(); }
