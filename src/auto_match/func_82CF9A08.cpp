struct V { virtual void f0(); virtual void f1(); };
struct O { char pad[16]; V *v; };
extern "C" void fn_82CF9A08(O *p) { p->v->f1(); }
