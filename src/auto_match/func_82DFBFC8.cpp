class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); };
struct O { char pad[60]; V *p; };
extern "C" void fn_82DFBFC8(O *o) { o->p->f5(); }
