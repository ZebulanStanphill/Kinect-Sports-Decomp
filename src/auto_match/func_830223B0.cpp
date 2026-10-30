class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); };
struct O { char pad[4]; V *p; };
extern "C" void fn_830223B0(O *o) { o->p->f3(); }
