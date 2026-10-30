class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); };
struct O { char pad[16]; V *p; };
extern "C" void fn_8304C8F0(O *o) { o->p->f7(); }
