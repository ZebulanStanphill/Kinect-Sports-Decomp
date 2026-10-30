struct V { virtual void a(); virtual void b(); virtual void c(); virtual void d(); virtual void e(); };
struct O { V *v; };
extern "C" void fn_82D535C0(O *p) { p->v->e(); }
