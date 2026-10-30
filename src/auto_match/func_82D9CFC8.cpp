class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); };
struct O { char pad[24]; V *p; };
extern "C" void fn_82D9CFC8(O *o) { o->p->f4(); }
