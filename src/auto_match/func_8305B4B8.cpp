class V { public: virtual void f0(); virtual void f1(); virtual void f2(); };
struct O { char pad[4]; V *p; };
extern "C" void fn_8305B4B8(O *o) { o->p->f2(); }
