class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); };
struct O { char pad[16]; V *p; };
extern "C" void fn_8304C8D8(O *o) { o->p->f6(); }
