struct V { virtual void a(); virtual void b(); virtual void c(); virtual void d(); virtual void e(); };
struct O { int a,b; V *v; };
extern "C" void fn_82CED048(O *p) { p->v->e(); }
