class V { public: virtual void f0(); virtual void f1(); };
struct O { char pad[4]; V *p; };
extern "C" void fn_8305B440(O *o) { o->p->f1(); }
