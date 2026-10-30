struct Obj { virtual void f0(); virtual void f1(); };
struct Holder { char pad[32]; Obj *p; };
extern "C" void fn_82FB7758(Holder *h, Obj *p) { h->p->f1(); h->p = p; }
