class V { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); };
struct O { char pad[136]; V *p; };
extern "C" void fn_8302C740(O *o) { o->p->f12(); }
